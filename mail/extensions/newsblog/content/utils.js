# -*- Mode: Java; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*-
# ***** BEGIN LICENSE BLOCK *****
# Version: MPL 1.1/GPL 2.0/LGPL 2.1
#
# The contents of this file are subject to the Mozilla Public License Version
# 1.1 (the "License"); you may not use this file except in compliance with
# the License. You may obtain a copy of the License at
# http://www.mozilla.org/MPL/
#
# Software distributed under the License is distributed on an "AS IS" basis,
# WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
# for the specific language governing rights and limitations under the
# License.
#
# The Original Code is Thunderbird RSS Utils
#
# The Initial Developer of the Original Code is
# The Mozilla Foundation.
# Portions created by the Initial Developer are Copyright (C) 2005
# the Initial Developer. All Rights Reserved.
#
# Contributor(s):
#  Myk Melez <myk@mozilla.org>
#  Scott MacGregor <mscott@mozilla.org>
#
# Alternatively, the contents of this file may be used under the terms of
# either the GNU General Public License Version 2 or later (the "GPL"), or
# the GNU Lesser General Public License Version 2.1 or later (the "LGPL"),
# in which case the provisions of the GPL or the LGPL are applicable instead
# of those above. If you wish to allow use of your version of this file only
# under the terms of either the GPL or the LGPL, and not to allow others to
# use your version of this file under the terms of the MPL, indicate your
# decision by deleting the provisions above and replace them with the notice
# and other provisions required by the GPL or the LGPL. If you do not delete
# the provisions above, a recipient may use your version of this file under
# the terms of any one of the MPL, the GPL or the LGPL.
#
# ***** END LICENSE BLOCK ******

// Whether or not to dump debugging messages to the console.
const DEBUG = false;
var debug;
if (DEBUG)
  debug = function(msg) { dump(' -- FZ -- : ' + msg + '\n'); }
else
  debug = function() {}

Components.utils.import("resource://gre/modules/ISO8601DateUtils.jsm");
var rdf = Components.classes["@mozilla.org/rdf/rdf-service;1"].getService(Components.interfaces.nsIRDFService);

const RDF_NS = "http://www.w3.org/1999/02/22-rdf-syntax-ns#";
const RDF_TYPE = rdf.GetResource(RDF_NS + "type");

const RSS_NS = "http://purl.org/rss/1.0/";
const RSS_CHANNEL = rdf.GetResource(RSS_NS + "channel");
const RSS_TITLE = rdf.GetResource(RSS_NS + "title");
const RSS_DESCRIPTION = rdf.GetResource(RSS_NS + "description");
const RSS_ITEMS = rdf.GetResource(RSS_NS + "items");
const RSS_ITEM = rdf.GetResource(RSS_NS + "item");
const RSS_LINK = rdf.GetResource(RSS_NS + "link");

const RSS_CONTENT_NS = "http://purl.org/rss/1.0/modules/content/";
const RSS_CONTENT_ENCODED = rdf.GetResource(RSS_CONTENT_NS + "encoded");

const DC_NS = "http://purl.org/dc/elements/1.1/";
const DC_CREATOR = rdf.GetResource(DC_NS + "creator");
const DC_SUBJECT = rdf.GetResource(DC_NS + "subject");
const DC_DATE = rdf.GetResource(DC_NS + "date");
const DC_TITLE = rdf.GetResource(DC_NS + "title");
const DC_LASTMODIFIED = rdf.GetResource(DC_NS + "lastModified");
const DC_IDENTIFIER = rdf.GetResource(DC_NS + "identifier");

const FZ_NS = "urn:forumzilla:";
const FZ_ROOT = rdf.GetResource(FZ_NS + "root");
const FZ_FEEDS = rdf.GetResource(FZ_NS + "feeds");
const FZ_FEED = rdf.GetResource(FZ_NS + "feed");
const FZ_QUICKMODE = rdf.GetResource(FZ_NS + "quickMode");
const FZ_DESTFOLDER = rdf.GetResource(FZ_NS + "destFolder");
const FZ_STORED = rdf.GetResource(FZ_NS + "stored");
const FZ_VALID = rdf.GetResource(FZ_NS + "valid");

const RDF_LITERAL_TRUE = rdf.GetLiteral("true");
const RDF_LITERAL_FALSE = rdf.GetLiteral("false");

// Atom constants
const ATOM_03_NS = "http://purl.org/atom/ns#";
const ATOM_IETF_NS = "http://www.w3.org/2005/Atom";

// XXX There's a containerutils in forumzilla.js that this should be merged with.
var containerUtils = Components.classes["@mozilla.org/rdf/container-utils;1"]
                               .getService(Components.interfaces.nsIRDFContainerUtils);

var fileHandler = Components.classes["@mozilla.org/network/io-service;1"].getService(Components.interfaces.nsIIOService)
                            .getProtocolHandler("file").QueryInterface(Components.interfaces.nsIFileProtocolHandler);

// helper routine that checks our subscriptions list array and returns true if the url
// is already in our list. This is used to prevent the user from subscribing to the same
// feed multiple times for the same server...
function feedAlreadyExists(aUrl, aServer)
{
  var feeds = getSubscriptionsList(aServer);
  return feeds.IndexOf(rdf.GetResource(aUrl)) != -1;
}

function addFeed(url, title, destFolder)
{
  var ds = getSubscriptionsDS(destFolder.server);
  var feeds = getSubscriptionsList(destFolder.server);

  // Generate a unique ID for the feed.
  var id = url;
  var i = 1;
  while (feeds.IndexOf(rdf.GetResource(id)) != -1 && ++i < 1000)
    id = url + i;
  if (id == 1000)
    throw("couldn't generate a unique ID for feed " + url);

  // Add the feed to the list.
  id = rdf.GetResource(id);
  feeds.AppendElement(id);
  ds.Assert(id, RDF_TYPE, FZ_FEED, true);
  ds.Assert(id, DC_IDENTIFIER, rdf.GetLiteral(url), true);
  if (title)
    ds.Assert(id, DC_TITLE, rdf.GetLiteral(title), true);
  ds.Assert(id, FZ_DESTFOLDER, destFolder, true);
  ds = ds.QueryInterface(Components.interfaces.nsIRDFRemoteDataSource);
  ds.Flush();
}

// updates the "feedUrl" property in the message database for the folder in question.

var kFeedUrlDelimiter = '|'; // the delimiter used to delimit feed urls in the msg folder database "feedUrl" property

function updateFolderFeedUrl(aFolder, aFeedUrl, aRemoveUrl)
{
  var msgdb = aFolder.QueryInterface(Components.interfaces.nsIMsgFolder).getMsgDatabase(null);
  var folderInfo = msgdb.dBFolderInfo;
  var oldFeedUrl = folderInfo.getCharPtrProperty("feedUrl");

  if (aRemoveUrl)
  {
    // remove our feed url string from the list of feed urls
    var newFeedUrl = oldFeedUrl.replace(kFeedUrlDelimiter + aFeedUrl, "");
    folderInfo.setCharPtrProperty("feedUrl", newFeedUrl);
  }
  else
    folderInfo.setCharPtrProperty("feedUrl", oldFeedUrl + kFeedUrlDelimiter + aFeedUrl);

  // commit the db to preserve our changes
  msgdb.Close(true);
}

function getNodeValue(node)
{
  if (node && node.textContent)
    return node.textContent;
  else if (node && node.firstChild)
  {
    var ret = "";
    for (var child = node.firstChild; child; child = child.nextSibling)
    {
      var value = getNodeValue(child);
      if (value)
        ret += value;
    }

    if (ret)
      return ret;
  }

  return null;
}

function getRDFTargetValue(ds, source, property)
{
  var node = ds.GetTarget(source, property, true);
  if (node)
  {
    try{
      node = node.QueryInterface(Components.interfaces.nsIRDFLiteral);
      if (node)
        return node.Value;
    }catch(e){
      // if the RDF was bogus, do nothing. rethrow if it's some other problem
      if(!((e instanceof Components.interfaces.nsIXPCException)
      && (e.result==Components.results.NS_ERROR_NO_INTERFACE)))
        throw e;
    }

  }
  return null;
}

function getSubscriptionsDS(server)
{
  var file = getSubscriptionsFile(server);
  var url = fileHandler.getURLSpecFromFile(file);

  // GetDataSourceBlocking has a cache, so it's cheap to do this again
  // once we've already done it once.
  var ds = rdf.GetDataSourceBlocking(url);

  if (!ds)
    throw("can't get subscriptions data source");

  return ds;
}

function getSubscriptionsList(server)
{
  var ds = getSubscriptionsDS(server);
  var list = ds.GetTarget(FZ_ROOT, FZ_FEEDS, true);
  //list = feeds.QueryInterface(Components.interfaces.nsIRDFContainer);
  list = list.QueryInterface(Components.interfaces.nsIRDFResource);
  list = containerUtils.MakeSeq(ds, list);
  return list;
}

function getSubscriptionsFile(server)
{
  server.QueryInterface(Components.interfaces.nsIRssIncomingServer);
  var file = server.subscriptionsDataSourcePath;

  // If the file doesn't exist, create it.
  if (!file.exists())
    createSubscriptionsFile(file);

  return file;
}

function createSubscriptionsFile(file)
{
  file = new LocalFile(file, MODE_WRONLY | MODE_CREATE);
  file.write('\
<?xml version="1.0"?>\n\
<RDF:RDF xmlns:dc="http://purl.org/dc/elements/1.1/"\n\
         xmlns:fz="' + FZ_NS + '"\n\
         xmlns:RDF="http://www.w3.org/1999/02/22-rdf-syntax-ns#">\n\
  <RDF:Description about="' + FZ_ROOT.Value + '">\n\
    <fz:feeds>\n\
      <RDF:Seq>\n\
      </RDF:Seq>\n\
    </fz:feeds>\n\
  </RDF:Description>\n\
</RDF:RDF>\n\
');
  file.close();
}

function getItemsDS(server)
{
  var file = getItemsFile(server);
  var url = fileHandler.getURLSpecFromFile(file);

  // GetDataSourceBlocking has a cache, so it's cheap to do this again
  // once we've already done it once.
  var ds = rdf.GetDataSourceBlocking(url);
  if (!ds)
    throw("can't get subscriptions data source");

  // Note that it this point the datasource may not be loaded yet.
  // You have to QueryInterface it to nsIRDFRemoteDataSource and check
  // its "loaded" property to be sure.  You can also attach an observer
  // which will get notified when the load is complete.
  return ds;
}

function getItemsFile(server)
{
  server.QueryInterface(Components.interfaces.nsIRssIncomingServer);
  var file = server.feedItemsDataSourcePath;

  // If the file doesn't exist, create it.
  if (!file.exists())
  {
    var newfile = new LocalFile(file, MODE_WRONLY | MODE_CREATE);
    newfile.write('\
<?xml version="1.0"?>\n\
<RDF:RDF xmlns:dc="http://purl.org/dc/elements/1.1/"\n\
         xmlns:fz="' + FZ_NS + '"\n\
         xmlns:RDF="http://www.w3.org/1999/02/22-rdf-syntax-ns#">\n\
</RDF:RDF>\n\
');
    newfile.close();
  }
  return file;
}

function removeAssertions(ds, resource)
{
  var properties = ds.ArcLabelsOut(resource);
  var property;
  while (properties.hasMoreElements())
  {
    property = properties.getNext();
    var values = ds.GetTargets(resource, property, true);
    var value;
    while (values.hasMoreElements())
    {
      value = values.getNext();
      ds.Unassert(resource, property, value, true);
    }
  }
}

// Date validator for RSS feeds
const FZ_RFC822_RE = "^(((Mon)|(Tue)|(Wed)|(Thu)|(Fri)|(Sat)|(Sun)), *)?\\d\\d?"
+ " +((Jan)|(Feb)|(Mar)|(Apr)|(May)|(Jun)|(Jul)|(Aug)|(Sep)|(Oct)|(Nov)|(Dec))"
+ " +\\d\\d(\\d\\d)? +\\d\\d:\\d\\d(:\\d\\d)? +(([+-]?\\d\\d\\d\\d)|(UT)|(GMT)"
+ "|(EST)|(EDT)|(CST)|(CDT)|(MST)|(MDT)|(PST)|(PDT)|\\w)$";

function isValidRFC822Date(pubDate)
{
  var regex = new RegExp(FZ_RFC822_RE);
  return regex.test(pubDate);
}

function dateRescue(dateString)
{
  // Deal with various kinds of invalid dates
  if(!isNaN(parseInt(dateString)))
  { // It's an integer, so maybe it's a timestamp
    var d = new Date(parseInt(dateString)*1000);
    var now = new Date();
    var yeardiff = now.getFullYear()-d.getFullYear();
    debug("Rescue Timestamp date: " + d.toString() + "\nYear diff:" + yeardiff + "\n");
    if((yeardiff >= 0) && (yeardiff<3))
    {
      // it's quite likely the correct date
      return d.toString();
    }
  }
  if(dateString.search(/^\d\d\d\d/) != -1) //Could be a ISO8601/W3C date
    return W3CToIETFDate(dateString);

  // Can't help. Set to current time.
  return (new Date()).toString();
}

// Could be a prototype on String, but I don't know the policy on that
function trimString(s)
{
  return(s.replace(/^\s+/,'').replace(/\s+$/,''));
}

function W3CToIETFDate(dateString) {
  var date = ISO8601DateUtils.parse(dateString);
  return date.toUTCString();
}
