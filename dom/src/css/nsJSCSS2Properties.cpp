/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*-
 *
 * The contents of this file are subject to the Netscape Public License
 * Version 1.0 (the "NPL"); you may not use this file except in
 * compliance with the NPL.  You may obtain a copy of the NPL at
 * http://www.mozilla.org/NPL/
 *
 * Software distributed under the NPL is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the NPL
 * for the specific language governing rights and limitations under the
 * NPL.
 *
 * The Initial Developer of this code under the NPL is Netscape
 * Communications Corporation.  Portions created by Netscape are
 * Copyright (C) 1998 Netscape Communications Corporation.  All Rights
 * Reserved.
 */
/* AUTO-GENERATED. DO NOT EDIT!!! */

#include "jsapi.h"
#include "nsJSUtils.h"
#include "nsDOMError.h"
#include "nscore.h"
#include "nsIScriptContext.h"
#include "nsIScriptSecurityManager.h"
#include "nsIJSScriptObject.h"
#include "nsIScriptObjectOwner.h"
#include "nsIScriptGlobalObject.h"
#include "nsCOMPtr.h"
#include "nsIPtr.h"
#include "nsString.h"
#include "nsIDOMCSS2Properties.h"


static NS_DEFINE_IID(kIScriptObjectOwnerIID, NS_ISCRIPTOBJECTOWNER_IID);
static NS_DEFINE_IID(kIJSScriptObjectIID, NS_IJSSCRIPTOBJECT_IID);
static NS_DEFINE_IID(kIScriptGlobalObjectIID, NS_ISCRIPTGLOBALOBJECT_IID);
static NS_DEFINE_IID(kICSS2PropertiesIID, NS_IDOMCSS2PROPERTIES_IID);

NS_DEF_PTR(nsIDOMCSS2Properties);

//
// CSS2Properties property ids
//
enum CSS2Properties_slots {
  CSS2PROPERTIES_AZIMUTH = -1,
  CSS2PROPERTIES_BACKGROUND = -2,
  CSS2PROPERTIES_BACKGROUNDATTACHMENT = -3,
  CSS2PROPERTIES_BACKGROUNDCOLOR = -4,
  CSS2PROPERTIES_BACKGROUNDIMAGE = -5,
  CSS2PROPERTIES_BACKGROUNDPOSITION = -6,
  CSS2PROPERTIES_BACKGROUNDREPEAT = -7,
  CSS2PROPERTIES_BORDER = -8,
  CSS2PROPERTIES_BORDERCOLLAPSE = -9,
  CSS2PROPERTIES_BORDERCOLOR = -10,
  CSS2PROPERTIES_BORDERSPACING = -11,
  CSS2PROPERTIES_BORDERSTYLE = -12,
  CSS2PROPERTIES_BORDERTOP = -13,
  CSS2PROPERTIES_BORDERRIGHT = -14,
  CSS2PROPERTIES_BORDERBOTTOM = -15,
  CSS2PROPERTIES_BORDERLEFT = -16,
  CSS2PROPERTIES_BORDERTOPCOLOR = -17,
  CSS2PROPERTIES_BORDERRIGHTCOLOR = -18,
  CSS2PROPERTIES_BORDERBOTTOMCOLOR = -19,
  CSS2PROPERTIES_BORDERLEFTCOLOR = -20,
  CSS2PROPERTIES_BORDERTOPSTYLE = -21,
  CSS2PROPERTIES_BORDERRIGHTSTYLE = -22,
  CSS2PROPERTIES_BORDERBOTTOMSTYLE = -23,
  CSS2PROPERTIES_BORDERLEFTSTYLE = -24,
  CSS2PROPERTIES_BORDERTOPWIDTH = -25,
  CSS2PROPERTIES_BORDERRIGHTWIDTH = -26,
  CSS2PROPERTIES_BORDERBOTTOMWIDTH = -27,
  CSS2PROPERTIES_BORDERLEFTWIDTH = -28,
  CSS2PROPERTIES_BORDERWIDTH = -29,
  CSS2PROPERTIES_BOTTOM = -30,
  CSS2PROPERTIES_CAPTIONSIDE = -31,
  CSS2PROPERTIES_CLEAR = -32,
  CSS2PROPERTIES_CLIP = -33,
  CSS2PROPERTIES_COLOR = -34,
  CSS2PROPERTIES_CONTENT = -35,
  CSS2PROPERTIES_COUNTERINCREMENT = -36,
  CSS2PROPERTIES_COUNTERRESET = -37,
  CSS2PROPERTIES_CUE = -38,
  CSS2PROPERTIES_CUEAFTER = -39,
  CSS2PROPERTIES_CUEBEFORE = -40,
  CSS2PROPERTIES_CURSOR = -41,
  CSS2PROPERTIES_DIRECTION = -42,
  CSS2PROPERTIES_DISPLAY = -43,
  CSS2PROPERTIES_ELEVATION = -44,
  CSS2PROPERTIES_EMPTYCELLS = -45,
  CSS2PROPERTIES_CSSFLOAT = -46,
  CSS2PROPERTIES_FONT = -47,
  CSS2PROPERTIES_FONTFAMILY = -48,
  CSS2PROPERTIES_FONTSIZE = -49,
  CSS2PROPERTIES_FONTSIZEADJUST = -50,
  CSS2PROPERTIES_FONTSTRETCH = -51,
  CSS2PROPERTIES_FONTSTYLE = -52,
  CSS2PROPERTIES_FONTVARIANT = -53,
  CSS2PROPERTIES_FONTWEIGHT = -54,
  CSS2PROPERTIES_HEIGHT = -55,
  CSS2PROPERTIES_LEFT = -56,
  CSS2PROPERTIES_LETTERSPACING = -57,
  CSS2PROPERTIES_LINEHEIGHT = -58,
  CSS2PROPERTIES_LISTSTYLE = -59,
  CSS2PROPERTIES_LISTSTYLEIMAGE = -60,
  CSS2PROPERTIES_LISTSTYLEPOSITION = -61,
  CSS2PROPERTIES_LISTSTYLETYPE = -62,
  CSS2PROPERTIES_MARGIN = -63,
  CSS2PROPERTIES_MARGINTOP = -64,
  CSS2PROPERTIES_MARGINRIGHT = -65,
  CSS2PROPERTIES_MARGINBOTTOM = -66,
  CSS2PROPERTIES_MARGINLEFT = -67,
  CSS2PROPERTIES_MARKEROFFSET = -68,
  CSS2PROPERTIES_MARKS = -69,
  CSS2PROPERTIES_MAXHEIGHT = -70,
  CSS2PROPERTIES_MAXWIDTH = -71,
  CSS2PROPERTIES_MINHEIGHT = -72,
  CSS2PROPERTIES_MINWIDTH = -73,
  CSS2PROPERTIES_ORPHANS = -74,
  CSS2PROPERTIES_OUTLINE = -75,
  CSS2PROPERTIES_OUTLINECOLOR = -76,
  CSS2PROPERTIES_OUTLINESTYLE = -77,
  CSS2PROPERTIES_OUTLINEWIDTH = -78,
  CSS2PROPERTIES_OVERFLOW = -79,
  CSS2PROPERTIES_PADDING = -80,
  CSS2PROPERTIES_PADDINGTOP = -81,
  CSS2PROPERTIES_PADDINGRIGHT = -82,
  CSS2PROPERTIES_PADDINGBOTTOM = -83,
  CSS2PROPERTIES_PADDINGLEFT = -84,
  CSS2PROPERTIES_PAGE = -85,
  CSS2PROPERTIES_PAGEBREAKAFTER = -86,
  CSS2PROPERTIES_PAGEBREAKBEFORE = -87,
  CSS2PROPERTIES_PAGEBREAKINSIDE = -88,
  CSS2PROPERTIES_PAUSE = -89,
  CSS2PROPERTIES_PAUSEAFTER = -90,
  CSS2PROPERTIES_PAUSEBEFORE = -91,
  CSS2PROPERTIES_PITCH = -92,
  CSS2PROPERTIES_PITCHRANGE = -93,
  CSS2PROPERTIES_PLAYDURING = -94,
  CSS2PROPERTIES_POSITION = -95,
  CSS2PROPERTIES_QUOTES = -96,
  CSS2PROPERTIES_RICHNESS = -97,
  CSS2PROPERTIES_RIGHT = -98,
  CSS2PROPERTIES_SIZE = -99,
  CSS2PROPERTIES_SPEAK = -100,
  CSS2PROPERTIES_SPEAKHEADER = -101,
  CSS2PROPERTIES_SPEAKNUMERAL = -102,
  CSS2PROPERTIES_SPEAKPUNCTUATION = -103,
  CSS2PROPERTIES_SPEECHRATE = -104,
  CSS2PROPERTIES_STRESS = -105,
  CSS2PROPERTIES_TABLELAYOUT = -106,
  CSS2PROPERTIES_TEXTALIGN = -107,
  CSS2PROPERTIES_TEXTDECORATION = -108,
  CSS2PROPERTIES_TEXTINDENT = -109,
  CSS2PROPERTIES_TEXTSHADOW = -110,
  CSS2PROPERTIES_TEXTTRANSFORM = -111,
  CSS2PROPERTIES_TOP = -112,
  CSS2PROPERTIES_UNICODEBIDI = -113,
  CSS2PROPERTIES_VERTICALALIGN = -114,
  CSS2PROPERTIES_VISIBILITY = -115,
  CSS2PROPERTIES_VOICEFAMILY = -116,
  CSS2PROPERTIES_VOLUME = -117,
  CSS2PROPERTIES_WHITESPACE = -118,
  CSS2PROPERTIES_WIDOWS = -119,
  CSS2PROPERTIES_WIDTH = -120,
  CSS2PROPERTIES_WORDSPACING = -121,
  CSS2PROPERTIES_ZINDEX = -122,
  CSS2PROPERTIES_OPACITY = -123
};

/***********************************************************************/
//
// CSS2Properties Properties Getter
//
PR_STATIC_CALLBACK(JSBool)
GetCSS2PropertiesProperty(JSContext *cx, JSObject *obj, jsval id, jsval *vp)
{
  nsIDOMCSS2Properties *a = (nsIDOMCSS2Properties*)nsJSUtils::nsGetNativeThis(cx, obj);

  // If there's no private data, this must be the prototype, so ignore
  if (nsnull == a) {
    return JS_TRUE;
  }

  if (JSVAL_IS_INT(id)) {
    nsIScriptContext *scriptCX = (nsIScriptContext *)JS_GetContextPrivate(cx);
    nsCOMPtr<nsIScriptSecurityManager> secMan;
    if (NS_OK != scriptCX->GetSecurityManager(getter_AddRefs(secMan))) {
      return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECMAN_ERR);
    }
    switch(JSVAL_TO_INT(id)) {
      case CSS2PROPERTIES_AZIMUTH:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.azimuth", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetAzimuth(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_BACKGROUND:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.background", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetBackground(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_BACKGROUNDATTACHMENT:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.backgroundattachment", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetBackgroundAttachment(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_BACKGROUNDCOLOR:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.backgroundcolor", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetBackgroundColor(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_BACKGROUNDIMAGE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.backgroundimage", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetBackgroundImage(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_BACKGROUNDPOSITION:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.backgroundposition", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetBackgroundPosition(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_BACKGROUNDREPEAT:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.backgroundrepeat", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetBackgroundRepeat(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_BORDER:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.border", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetBorder(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_BORDERCOLLAPSE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.bordercollapse", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetBorderCollapse(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_BORDERCOLOR:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.bordercolor", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetBorderColor(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_BORDERSPACING:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.borderspacing", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetBorderSpacing(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_BORDERSTYLE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.borderstyle", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetBorderStyle(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_BORDERTOP:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.bordertop", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetBorderTop(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_BORDERRIGHT:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.borderright", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetBorderRight(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_BORDERBOTTOM:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.borderbottom", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetBorderBottom(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_BORDERLEFT:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.borderleft", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetBorderLeft(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_BORDERTOPCOLOR:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.bordertopcolor", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetBorderTopColor(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_BORDERRIGHTCOLOR:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.borderrightcolor", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetBorderRightColor(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_BORDERBOTTOMCOLOR:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.borderbottomcolor", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetBorderBottomColor(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_BORDERLEFTCOLOR:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.borderleftcolor", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetBorderLeftColor(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_BORDERTOPSTYLE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.bordertopstyle", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetBorderTopStyle(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_BORDERRIGHTSTYLE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.borderrightstyle", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetBorderRightStyle(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_BORDERBOTTOMSTYLE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.borderbottomstyle", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetBorderBottomStyle(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_BORDERLEFTSTYLE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.borderleftstyle", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetBorderLeftStyle(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_BORDERTOPWIDTH:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.bordertopwidth", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetBorderTopWidth(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_BORDERRIGHTWIDTH:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.borderrightwidth", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetBorderRightWidth(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_BORDERBOTTOMWIDTH:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.borderbottomwidth", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetBorderBottomWidth(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_BORDERLEFTWIDTH:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.borderleftwidth", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetBorderLeftWidth(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_BORDERWIDTH:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.borderwidth", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetBorderWidth(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_BOTTOM:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.bottom", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetBottom(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_CAPTIONSIDE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.captionside", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetCaptionSide(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_CLEAR:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.clear", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetClear(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_CLIP:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.clip", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetClip(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_COLOR:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.color", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetColor(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_CONTENT:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.content", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetContent(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_COUNTERINCREMENT:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.counterincrement", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetCounterIncrement(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_COUNTERRESET:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.counterreset", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetCounterReset(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_CUE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.cue", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetCue(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_CUEAFTER:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.cueafter", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetCueAfter(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_CUEBEFORE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.cuebefore", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetCueBefore(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_CURSOR:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.cursor", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetCursor(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_DIRECTION:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.direction", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetDirection(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_DISPLAY:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.display", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetDisplay(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_ELEVATION:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.elevation", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetElevation(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_EMPTYCELLS:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.emptycells", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetEmptyCells(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_CSSFLOAT:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.cssfloat", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetCssFloat(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_FONT:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.font", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetFont(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_FONTFAMILY:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.fontfamily", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetFontFamily(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_FONTSIZE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.fontsize", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetFontSize(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_FONTSIZEADJUST:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.fontsizeadjust", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetFontSizeAdjust(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_FONTSTRETCH:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.fontstretch", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetFontStretch(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_FONTSTYLE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.fontstyle", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetFontStyle(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_FONTVARIANT:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.fontvariant", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetFontVariant(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_FONTWEIGHT:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.fontweight", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetFontWeight(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_HEIGHT:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.height", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetHeight(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_LEFT:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.left", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetLeft(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_LETTERSPACING:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.letterspacing", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetLetterSpacing(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_LINEHEIGHT:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.lineheight", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetLineHeight(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_LISTSTYLE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.liststyle", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetListStyle(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_LISTSTYLEIMAGE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.liststyleimage", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetListStyleImage(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_LISTSTYLEPOSITION:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.liststyleposition", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetListStylePosition(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_LISTSTYLETYPE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.liststyletype", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetListStyleType(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_MARGIN:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.margin", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetMargin(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_MARGINTOP:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.margintop", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetMarginTop(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_MARGINRIGHT:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.marginright", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetMarginRight(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_MARGINBOTTOM:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.marginbottom", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetMarginBottom(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_MARGINLEFT:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.marginleft", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetMarginLeft(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_MARKEROFFSET:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.markeroffset", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetMarkerOffset(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_MARKS:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.marks", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetMarks(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_MAXHEIGHT:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.maxheight", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetMaxHeight(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_MAXWIDTH:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.maxwidth", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetMaxWidth(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_MINHEIGHT:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.minheight", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetMinHeight(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_MINWIDTH:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.minwidth", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetMinWidth(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_ORPHANS:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.orphans", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetOrphans(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_OUTLINE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.outline", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetOutline(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_OUTLINECOLOR:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.outlinecolor", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetOutlineColor(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_OUTLINESTYLE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.outlinestyle", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetOutlineStyle(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_OUTLINEWIDTH:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.outlinewidth", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetOutlineWidth(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_OVERFLOW:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.overflow", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetOverflow(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_PADDING:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.padding", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetPadding(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_PADDINGTOP:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.paddingtop", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetPaddingTop(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_PADDINGRIGHT:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.paddingright", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetPaddingRight(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_PADDINGBOTTOM:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.paddingbottom", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetPaddingBottom(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_PADDINGLEFT:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.paddingleft", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetPaddingLeft(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_PAGE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.page", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetPage(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_PAGEBREAKAFTER:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.pagebreakafter", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetPageBreakAfter(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_PAGEBREAKBEFORE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.pagebreakbefore", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetPageBreakBefore(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_PAGEBREAKINSIDE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.pagebreakinside", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetPageBreakInside(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_PAUSE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.pause", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetPause(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_PAUSEAFTER:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.pauseafter", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetPauseAfter(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_PAUSEBEFORE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.pausebefore", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetPauseBefore(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_PITCH:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.pitch", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetPitch(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_PITCHRANGE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.pitchrange", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetPitchRange(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_PLAYDURING:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.playduring", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetPlayDuring(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_POSITION:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.position", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetPosition(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_QUOTES:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.quotes", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetQuotes(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_RICHNESS:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.richness", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetRichness(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_RIGHT:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.right", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetRight(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_SIZE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.size", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetSize(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_SPEAK:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.speak", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetSpeak(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_SPEAKHEADER:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.speakheader", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetSpeakHeader(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_SPEAKNUMERAL:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.speaknumeral", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetSpeakNumeral(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_SPEAKPUNCTUATION:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.speakpunctuation", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetSpeakPunctuation(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_SPEECHRATE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.speechrate", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetSpeechRate(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_STRESS:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.stress", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetStress(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_TABLELAYOUT:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.tablelayout", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetTableLayout(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_TEXTALIGN:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.textalign", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetTextAlign(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_TEXTDECORATION:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.textdecoration", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetTextDecoration(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_TEXTINDENT:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.textindent", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetTextIndent(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_TEXTSHADOW:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.textshadow", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetTextShadow(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_TEXTTRANSFORM:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.texttransform", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetTextTransform(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_TOP:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.top", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetTop(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_UNICODEBIDI:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.unicodebidi", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetUnicodeBidi(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_VERTICALALIGN:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.verticalalign", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetVerticalAlign(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_VISIBILITY:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.visibility", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetVisibility(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_VOICEFAMILY:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.voicefamily", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetVoiceFamily(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_VOLUME:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.volume", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetVolume(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_WHITESPACE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.whitespace", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetWhiteSpace(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_WIDOWS:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.widows", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetWidows(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_WIDTH:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.width", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetWidth(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_WORDSPACING:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.wordspacing", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetWordSpacing(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_ZINDEX:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.zindex", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetZIndex(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      case CSS2PROPERTIES_OPACITY:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.opacity", PR_FALSE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsresult result = NS_OK;
        result = a->GetOpacity(prop);
        if (NS_SUCCEEDED(result)) {
          nsJSUtils::nsConvertStringToJSVal(prop, cx, vp);
        }
        else {
          return nsJSUtils::nsReportError(cx, result);
        }
        break;
      }
      default:
        return nsJSUtils::nsCallJSScriptObjectGetProperty(a, cx, id, vp);
    }
  }
  else {
    return nsJSUtils::nsCallJSScriptObjectGetProperty(a, cx, id, vp);
  }

  return PR_TRUE;
}

/***********************************************************************/
//
// CSS2Properties Properties Setter
//
PR_STATIC_CALLBACK(JSBool)
SetCSS2PropertiesProperty(JSContext *cx, JSObject *obj, jsval id, jsval *vp)
{
  nsIDOMCSS2Properties *a = (nsIDOMCSS2Properties*)nsJSUtils::nsGetNativeThis(cx, obj);

  // If there's no private data, this must be the prototype, so ignore
  if (nsnull == a) {
    return JS_TRUE;
  }

  if (JSVAL_IS_INT(id)) {
    nsIScriptContext *scriptCX = (nsIScriptContext *)JS_GetContextPrivate(cx);
    nsCOMPtr<nsIScriptSecurityManager> secMan;
    if (NS_OK != scriptCX->GetSecurityManager(getter_AddRefs(secMan))) {
      return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECMAN_ERR);
    }
    switch(JSVAL_TO_INT(id)) {
      case CSS2PROPERTIES_AZIMUTH:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.azimuth", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetAzimuth(prop);
        
        break;
      }
      case CSS2PROPERTIES_BACKGROUND:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.background", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetBackground(prop);
        
        break;
      }
      case CSS2PROPERTIES_BACKGROUNDATTACHMENT:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.backgroundattachment", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetBackgroundAttachment(prop);
        
        break;
      }
      case CSS2PROPERTIES_BACKGROUNDCOLOR:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.backgroundcolor", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetBackgroundColor(prop);
        
        break;
      }
      case CSS2PROPERTIES_BACKGROUNDIMAGE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.backgroundimage", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetBackgroundImage(prop);
        
        break;
      }
      case CSS2PROPERTIES_BACKGROUNDPOSITION:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.backgroundposition", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetBackgroundPosition(prop);
        
        break;
      }
      case CSS2PROPERTIES_BACKGROUNDREPEAT:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.backgroundrepeat", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetBackgroundRepeat(prop);
        
        break;
      }
      case CSS2PROPERTIES_BORDER:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.border", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetBorder(prop);
        
        break;
      }
      case CSS2PROPERTIES_BORDERCOLLAPSE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.bordercollapse", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetBorderCollapse(prop);
        
        break;
      }
      case CSS2PROPERTIES_BORDERCOLOR:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.bordercolor", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetBorderColor(prop);
        
        break;
      }
      case CSS2PROPERTIES_BORDERSPACING:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.borderspacing", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetBorderSpacing(prop);
        
        break;
      }
      case CSS2PROPERTIES_BORDERSTYLE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.borderstyle", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetBorderStyle(prop);
        
        break;
      }
      case CSS2PROPERTIES_BORDERTOP:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.bordertop", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetBorderTop(prop);
        
        break;
      }
      case CSS2PROPERTIES_BORDERRIGHT:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.borderright", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetBorderRight(prop);
        
        break;
      }
      case CSS2PROPERTIES_BORDERBOTTOM:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.borderbottom", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetBorderBottom(prop);
        
        break;
      }
      case CSS2PROPERTIES_BORDERLEFT:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.borderleft", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetBorderLeft(prop);
        
        break;
      }
      case CSS2PROPERTIES_BORDERTOPCOLOR:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.bordertopcolor", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetBorderTopColor(prop);
        
        break;
      }
      case CSS2PROPERTIES_BORDERRIGHTCOLOR:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.borderrightcolor", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetBorderRightColor(prop);
        
        break;
      }
      case CSS2PROPERTIES_BORDERBOTTOMCOLOR:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.borderbottomcolor", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetBorderBottomColor(prop);
        
        break;
      }
      case CSS2PROPERTIES_BORDERLEFTCOLOR:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.borderleftcolor", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetBorderLeftColor(prop);
        
        break;
      }
      case CSS2PROPERTIES_BORDERTOPSTYLE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.bordertopstyle", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetBorderTopStyle(prop);
        
        break;
      }
      case CSS2PROPERTIES_BORDERRIGHTSTYLE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.borderrightstyle", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetBorderRightStyle(prop);
        
        break;
      }
      case CSS2PROPERTIES_BORDERBOTTOMSTYLE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.borderbottomstyle", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetBorderBottomStyle(prop);
        
        break;
      }
      case CSS2PROPERTIES_BORDERLEFTSTYLE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.borderleftstyle", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetBorderLeftStyle(prop);
        
        break;
      }
      case CSS2PROPERTIES_BORDERTOPWIDTH:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.bordertopwidth", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetBorderTopWidth(prop);
        
        break;
      }
      case CSS2PROPERTIES_BORDERRIGHTWIDTH:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.borderrightwidth", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetBorderRightWidth(prop);
        
        break;
      }
      case CSS2PROPERTIES_BORDERBOTTOMWIDTH:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.borderbottomwidth", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetBorderBottomWidth(prop);
        
        break;
      }
      case CSS2PROPERTIES_BORDERLEFTWIDTH:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.borderleftwidth", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetBorderLeftWidth(prop);
        
        break;
      }
      case CSS2PROPERTIES_BORDERWIDTH:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.borderwidth", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetBorderWidth(prop);
        
        break;
      }
      case CSS2PROPERTIES_BOTTOM:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.bottom", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetBottom(prop);
        
        break;
      }
      case CSS2PROPERTIES_CAPTIONSIDE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.captionside", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetCaptionSide(prop);
        
        break;
      }
      case CSS2PROPERTIES_CLEAR:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.clear", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetClear(prop);
        
        break;
      }
      case CSS2PROPERTIES_CLIP:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.clip", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetClip(prop);
        
        break;
      }
      case CSS2PROPERTIES_COLOR:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.color", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetColor(prop);
        
        break;
      }
      case CSS2PROPERTIES_CONTENT:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.content", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetContent(prop);
        
        break;
      }
      case CSS2PROPERTIES_COUNTERINCREMENT:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.counterincrement", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetCounterIncrement(prop);
        
        break;
      }
      case CSS2PROPERTIES_COUNTERRESET:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.counterreset", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetCounterReset(prop);
        
        break;
      }
      case CSS2PROPERTIES_CUE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.cue", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetCue(prop);
        
        break;
      }
      case CSS2PROPERTIES_CUEAFTER:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.cueafter", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetCueAfter(prop);
        
        break;
      }
      case CSS2PROPERTIES_CUEBEFORE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.cuebefore", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetCueBefore(prop);
        
        break;
      }
      case CSS2PROPERTIES_CURSOR:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.cursor", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetCursor(prop);
        
        break;
      }
      case CSS2PROPERTIES_DIRECTION:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.direction", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetDirection(prop);
        
        break;
      }
      case CSS2PROPERTIES_DISPLAY:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.display", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetDisplay(prop);
        
        break;
      }
      case CSS2PROPERTIES_ELEVATION:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.elevation", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetElevation(prop);
        
        break;
      }
      case CSS2PROPERTIES_EMPTYCELLS:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.emptycells", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetEmptyCells(prop);
        
        break;
      }
      case CSS2PROPERTIES_CSSFLOAT:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.cssfloat", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetCssFloat(prop);
        
        break;
      }
      case CSS2PROPERTIES_FONT:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.font", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetFont(prop);
        
        break;
      }
      case CSS2PROPERTIES_FONTFAMILY:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.fontfamily", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetFontFamily(prop);
        
        break;
      }
      case CSS2PROPERTIES_FONTSIZE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.fontsize", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetFontSize(prop);
        
        break;
      }
      case CSS2PROPERTIES_FONTSIZEADJUST:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.fontsizeadjust", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetFontSizeAdjust(prop);
        
        break;
      }
      case CSS2PROPERTIES_FONTSTRETCH:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.fontstretch", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetFontStretch(prop);
        
        break;
      }
      case CSS2PROPERTIES_FONTSTYLE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.fontstyle", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetFontStyle(prop);
        
        break;
      }
      case CSS2PROPERTIES_FONTVARIANT:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.fontvariant", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetFontVariant(prop);
        
        break;
      }
      case CSS2PROPERTIES_FONTWEIGHT:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.fontweight", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetFontWeight(prop);
        
        break;
      }
      case CSS2PROPERTIES_HEIGHT:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.height", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetHeight(prop);
        
        break;
      }
      case CSS2PROPERTIES_LEFT:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.left", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetLeft(prop);
        
        break;
      }
      case CSS2PROPERTIES_LETTERSPACING:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.letterspacing", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetLetterSpacing(prop);
        
        break;
      }
      case CSS2PROPERTIES_LINEHEIGHT:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.lineheight", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetLineHeight(prop);
        
        break;
      }
      case CSS2PROPERTIES_LISTSTYLE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.liststyle", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetListStyle(prop);
        
        break;
      }
      case CSS2PROPERTIES_LISTSTYLEIMAGE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.liststyleimage", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetListStyleImage(prop);
        
        break;
      }
      case CSS2PROPERTIES_LISTSTYLEPOSITION:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.liststyleposition", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetListStylePosition(prop);
        
        break;
      }
      case CSS2PROPERTIES_LISTSTYLETYPE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.liststyletype", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetListStyleType(prop);
        
        break;
      }
      case CSS2PROPERTIES_MARGIN:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.margin", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetMargin(prop);
        
        break;
      }
      case CSS2PROPERTIES_MARGINTOP:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.margintop", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetMarginTop(prop);
        
        break;
      }
      case CSS2PROPERTIES_MARGINRIGHT:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.marginright", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetMarginRight(prop);
        
        break;
      }
      case CSS2PROPERTIES_MARGINBOTTOM:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.marginbottom", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetMarginBottom(prop);
        
        break;
      }
      case CSS2PROPERTIES_MARGINLEFT:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.marginleft", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetMarginLeft(prop);
        
        break;
      }
      case CSS2PROPERTIES_MARKEROFFSET:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.markeroffset", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetMarkerOffset(prop);
        
        break;
      }
      case CSS2PROPERTIES_MARKS:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.marks", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetMarks(prop);
        
        break;
      }
      case CSS2PROPERTIES_MAXHEIGHT:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.maxheight", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetMaxHeight(prop);
        
        break;
      }
      case CSS2PROPERTIES_MAXWIDTH:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.maxwidth", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetMaxWidth(prop);
        
        break;
      }
      case CSS2PROPERTIES_MINHEIGHT:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.minheight", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetMinHeight(prop);
        
        break;
      }
      case CSS2PROPERTIES_MINWIDTH:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.minwidth", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetMinWidth(prop);
        
        break;
      }
      case CSS2PROPERTIES_ORPHANS:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.orphans", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetOrphans(prop);
        
        break;
      }
      case CSS2PROPERTIES_OUTLINE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.outline", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetOutline(prop);
        
        break;
      }
      case CSS2PROPERTIES_OUTLINECOLOR:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.outlinecolor", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetOutlineColor(prop);
        
        break;
      }
      case CSS2PROPERTIES_OUTLINESTYLE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.outlinestyle", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetOutlineStyle(prop);
        
        break;
      }
      case CSS2PROPERTIES_OUTLINEWIDTH:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.outlinewidth", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetOutlineWidth(prop);
        
        break;
      }
      case CSS2PROPERTIES_OVERFLOW:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.overflow", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetOverflow(prop);
        
        break;
      }
      case CSS2PROPERTIES_PADDING:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.padding", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetPadding(prop);
        
        break;
      }
      case CSS2PROPERTIES_PADDINGTOP:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.paddingtop", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetPaddingTop(prop);
        
        break;
      }
      case CSS2PROPERTIES_PADDINGRIGHT:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.paddingright", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetPaddingRight(prop);
        
        break;
      }
      case CSS2PROPERTIES_PADDINGBOTTOM:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.paddingbottom", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetPaddingBottom(prop);
        
        break;
      }
      case CSS2PROPERTIES_PADDINGLEFT:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.paddingleft", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetPaddingLeft(prop);
        
        break;
      }
      case CSS2PROPERTIES_PAGE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.page", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetPage(prop);
        
        break;
      }
      case CSS2PROPERTIES_PAGEBREAKAFTER:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.pagebreakafter", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetPageBreakAfter(prop);
        
        break;
      }
      case CSS2PROPERTIES_PAGEBREAKBEFORE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.pagebreakbefore", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetPageBreakBefore(prop);
        
        break;
      }
      case CSS2PROPERTIES_PAGEBREAKINSIDE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.pagebreakinside", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetPageBreakInside(prop);
        
        break;
      }
      case CSS2PROPERTIES_PAUSE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.pause", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetPause(prop);
        
        break;
      }
      case CSS2PROPERTIES_PAUSEAFTER:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.pauseafter", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetPauseAfter(prop);
        
        break;
      }
      case CSS2PROPERTIES_PAUSEBEFORE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.pausebefore", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetPauseBefore(prop);
        
        break;
      }
      case CSS2PROPERTIES_PITCH:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.pitch", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetPitch(prop);
        
        break;
      }
      case CSS2PROPERTIES_PITCHRANGE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.pitchrange", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetPitchRange(prop);
        
        break;
      }
      case CSS2PROPERTIES_PLAYDURING:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.playduring", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetPlayDuring(prop);
        
        break;
      }
      case CSS2PROPERTIES_POSITION:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.position", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetPosition(prop);
        
        break;
      }
      case CSS2PROPERTIES_QUOTES:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.quotes", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetQuotes(prop);
        
        break;
      }
      case CSS2PROPERTIES_RICHNESS:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.richness", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetRichness(prop);
        
        break;
      }
      case CSS2PROPERTIES_RIGHT:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.right", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetRight(prop);
        
        break;
      }
      case CSS2PROPERTIES_SIZE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.size", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetSize(prop);
        
        break;
      }
      case CSS2PROPERTIES_SPEAK:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.speak", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetSpeak(prop);
        
        break;
      }
      case CSS2PROPERTIES_SPEAKHEADER:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.speakheader", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetSpeakHeader(prop);
        
        break;
      }
      case CSS2PROPERTIES_SPEAKNUMERAL:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.speaknumeral", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetSpeakNumeral(prop);
        
        break;
      }
      case CSS2PROPERTIES_SPEAKPUNCTUATION:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.speakpunctuation", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetSpeakPunctuation(prop);
        
        break;
      }
      case CSS2PROPERTIES_SPEECHRATE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.speechrate", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetSpeechRate(prop);
        
        break;
      }
      case CSS2PROPERTIES_STRESS:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.stress", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetStress(prop);
        
        break;
      }
      case CSS2PROPERTIES_TABLELAYOUT:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.tablelayout", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetTableLayout(prop);
        
        break;
      }
      case CSS2PROPERTIES_TEXTALIGN:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.textalign", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetTextAlign(prop);
        
        break;
      }
      case CSS2PROPERTIES_TEXTDECORATION:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.textdecoration", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetTextDecoration(prop);
        
        break;
      }
      case CSS2PROPERTIES_TEXTINDENT:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.textindent", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetTextIndent(prop);
        
        break;
      }
      case CSS2PROPERTIES_TEXTSHADOW:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.textshadow", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetTextShadow(prop);
        
        break;
      }
      case CSS2PROPERTIES_TEXTTRANSFORM:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.texttransform", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetTextTransform(prop);
        
        break;
      }
      case CSS2PROPERTIES_TOP:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.top", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetTop(prop);
        
        break;
      }
      case CSS2PROPERTIES_UNICODEBIDI:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.unicodebidi", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetUnicodeBidi(prop);
        
        break;
      }
      case CSS2PROPERTIES_VERTICALALIGN:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.verticalalign", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetVerticalAlign(prop);
        
        break;
      }
      case CSS2PROPERTIES_VISIBILITY:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.visibility", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetVisibility(prop);
        
        break;
      }
      case CSS2PROPERTIES_VOICEFAMILY:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.voicefamily", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetVoiceFamily(prop);
        
        break;
      }
      case CSS2PROPERTIES_VOLUME:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.volume", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetVolume(prop);
        
        break;
      }
      case CSS2PROPERTIES_WHITESPACE:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.whitespace", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetWhiteSpace(prop);
        
        break;
      }
      case CSS2PROPERTIES_WIDOWS:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.widows", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetWidows(prop);
        
        break;
      }
      case CSS2PROPERTIES_WIDTH:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.width", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetWidth(prop);
        
        break;
      }
      case CSS2PROPERTIES_WORDSPACING:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.wordspacing", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetWordSpacing(prop);
        
        break;
      }
      case CSS2PROPERTIES_ZINDEX:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.zindex", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetZIndex(prop);
        
        break;
      }
      case CSS2PROPERTIES_OPACITY:
      {
        PRBool ok = PR_FALSE;
        secMan->CheckScriptAccess(scriptCX, obj, "css2properties.opacity", PR_TRUE, &ok);
        if (!ok) {
          return nsJSUtils::nsReportError(cx, NS_ERROR_DOM_SECURITY_ERR);
        }
        nsAutoString prop;
        nsJSUtils::nsConvertJSValToString(prop, cx, *vp);
      
        a->SetOpacity(prop);
        
        break;
      }
      default:
        return nsJSUtils::nsCallJSScriptObjectSetProperty(a, cx, id, vp);
    }
  }
  else {
    return nsJSUtils::nsCallJSScriptObjectSetProperty(a, cx, id, vp);
  }

  return PR_TRUE;
}


//
// CSS2Properties finalizer
//
PR_STATIC_CALLBACK(void)
FinalizeCSS2Properties(JSContext *cx, JSObject *obj)
{
  nsJSUtils::nsGenericFinalize(cx, obj);
}


//
// CSS2Properties enumerate
//
PR_STATIC_CALLBACK(JSBool)
EnumerateCSS2Properties(JSContext *cx, JSObject *obj)
{
  return nsJSUtils::nsGenericEnumerate(cx, obj);
}


//
// CSS2Properties resolve
//
PR_STATIC_CALLBACK(JSBool)
ResolveCSS2Properties(JSContext *cx, JSObject *obj, jsval id)
{
  return nsJSUtils::nsGenericResolve(cx, obj, id);
}


/***********************************************************************/
//
// class for CSS2Properties
//
JSClass CSS2PropertiesClass = {
  "CSS2Properties", 
  JSCLASS_HAS_PRIVATE | JSCLASS_PRIVATE_IS_NSISUPPORTS,
  JS_PropertyStub,
  JS_PropertyStub,
  GetCSS2PropertiesProperty,
  SetCSS2PropertiesProperty,
  EnumerateCSS2Properties,
  ResolveCSS2Properties,
  JS_ConvertStub,
  FinalizeCSS2Properties
};


//
// CSS2Properties class properties
//
static JSPropertySpec CSS2PropertiesProperties[] =
{
  {"azimuth",    CSS2PROPERTIES_AZIMUTH,    JSPROP_ENUMERATE},
  {"background",    CSS2PROPERTIES_BACKGROUND,    JSPROP_ENUMERATE},
  {"backgroundAttachment",    CSS2PROPERTIES_BACKGROUNDATTACHMENT,    JSPROP_ENUMERATE},
  {"backgroundColor",    CSS2PROPERTIES_BACKGROUNDCOLOR,    JSPROP_ENUMERATE},
  {"backgroundImage",    CSS2PROPERTIES_BACKGROUNDIMAGE,    JSPROP_ENUMERATE},
  {"backgroundPosition",    CSS2PROPERTIES_BACKGROUNDPOSITION,    JSPROP_ENUMERATE},
  {"backgroundRepeat",    CSS2PROPERTIES_BACKGROUNDREPEAT,    JSPROP_ENUMERATE},
  {"border",    CSS2PROPERTIES_BORDER,    JSPROP_ENUMERATE},
  {"borderCollapse",    CSS2PROPERTIES_BORDERCOLLAPSE,    JSPROP_ENUMERATE},
  {"borderColor",    CSS2PROPERTIES_BORDERCOLOR,    JSPROP_ENUMERATE},
  {"borderSpacing",    CSS2PROPERTIES_BORDERSPACING,    JSPROP_ENUMERATE},
  {"borderStyle",    CSS2PROPERTIES_BORDERSTYLE,    JSPROP_ENUMERATE},
  {"borderTop",    CSS2PROPERTIES_BORDERTOP,    JSPROP_ENUMERATE},
  {"borderRight",    CSS2PROPERTIES_BORDERRIGHT,    JSPROP_ENUMERATE},
  {"borderBottom",    CSS2PROPERTIES_BORDERBOTTOM,    JSPROP_ENUMERATE},
  {"borderLeft",    CSS2PROPERTIES_BORDERLEFT,    JSPROP_ENUMERATE},
  {"borderTopColor",    CSS2PROPERTIES_BORDERTOPCOLOR,    JSPROP_ENUMERATE},
  {"borderRightColor",    CSS2PROPERTIES_BORDERRIGHTCOLOR,    JSPROP_ENUMERATE},
  {"borderBottomColor",    CSS2PROPERTIES_BORDERBOTTOMCOLOR,    JSPROP_ENUMERATE},
  {"borderLeftColor",    CSS2PROPERTIES_BORDERLEFTCOLOR,    JSPROP_ENUMERATE},
  {"borderTopStyle",    CSS2PROPERTIES_BORDERTOPSTYLE,    JSPROP_ENUMERATE},
  {"borderRightStyle",    CSS2PROPERTIES_BORDERRIGHTSTYLE,    JSPROP_ENUMERATE},
  {"borderBottomStyle",    CSS2PROPERTIES_BORDERBOTTOMSTYLE,    JSPROP_ENUMERATE},
  {"borderLeftStyle",    CSS2PROPERTIES_BORDERLEFTSTYLE,    JSPROP_ENUMERATE},
  {"borderTopWidth",    CSS2PROPERTIES_BORDERTOPWIDTH,    JSPROP_ENUMERATE},
  {"borderRightWidth",    CSS2PROPERTIES_BORDERRIGHTWIDTH,    JSPROP_ENUMERATE},
  {"borderBottomWidth",    CSS2PROPERTIES_BORDERBOTTOMWIDTH,    JSPROP_ENUMERATE},
  {"borderLeftWidth",    CSS2PROPERTIES_BORDERLEFTWIDTH,    JSPROP_ENUMERATE},
  {"borderWidth",    CSS2PROPERTIES_BORDERWIDTH,    JSPROP_ENUMERATE},
  {"bottom",    CSS2PROPERTIES_BOTTOM,    JSPROP_ENUMERATE},
  {"captionSide",    CSS2PROPERTIES_CAPTIONSIDE,    JSPROP_ENUMERATE},
  {"clear",    CSS2PROPERTIES_CLEAR,    JSPROP_ENUMERATE},
  {"clip",    CSS2PROPERTIES_CLIP,    JSPROP_ENUMERATE},
  {"color",    CSS2PROPERTIES_COLOR,    JSPROP_ENUMERATE},
  {"content",    CSS2PROPERTIES_CONTENT,    JSPROP_ENUMERATE},
  {"counterIncrement",    CSS2PROPERTIES_COUNTERINCREMENT,    JSPROP_ENUMERATE},
  {"counterReset",    CSS2PROPERTIES_COUNTERRESET,    JSPROP_ENUMERATE},
  {"cue",    CSS2PROPERTIES_CUE,    JSPROP_ENUMERATE},
  {"cueAfter",    CSS2PROPERTIES_CUEAFTER,    JSPROP_ENUMERATE},
  {"cueBefore",    CSS2PROPERTIES_CUEBEFORE,    JSPROP_ENUMERATE},
  {"cursor",    CSS2PROPERTIES_CURSOR,    JSPROP_ENUMERATE},
  {"direction",    CSS2PROPERTIES_DIRECTION,    JSPROP_ENUMERATE},
  {"display",    CSS2PROPERTIES_DISPLAY,    JSPROP_ENUMERATE},
  {"elevation",    CSS2PROPERTIES_ELEVATION,    JSPROP_ENUMERATE},
  {"emptyCells",    CSS2PROPERTIES_EMPTYCELLS,    JSPROP_ENUMERATE},
  {"cssFloat",    CSS2PROPERTIES_CSSFLOAT,    JSPROP_ENUMERATE},
  {"font",    CSS2PROPERTIES_FONT,    JSPROP_ENUMERATE},
  {"fontFamily",    CSS2PROPERTIES_FONTFAMILY,    JSPROP_ENUMERATE},
  {"fontSize",    CSS2PROPERTIES_FONTSIZE,    JSPROP_ENUMERATE},
  {"fontSizeAdjust",    CSS2PROPERTIES_FONTSIZEADJUST,    JSPROP_ENUMERATE},
  {"fontStretch",    CSS2PROPERTIES_FONTSTRETCH,    JSPROP_ENUMERATE},
  {"fontStyle",    CSS2PROPERTIES_FONTSTYLE,    JSPROP_ENUMERATE},
  {"fontVariant",    CSS2PROPERTIES_FONTVARIANT,    JSPROP_ENUMERATE},
  {"fontWeight",    CSS2PROPERTIES_FONTWEIGHT,    JSPROP_ENUMERATE},
  {"height",    CSS2PROPERTIES_HEIGHT,    JSPROP_ENUMERATE},
  {"left",    CSS2PROPERTIES_LEFT,    JSPROP_ENUMERATE},
  {"letterSpacing",    CSS2PROPERTIES_LETTERSPACING,    JSPROP_ENUMERATE},
  {"lineHeight",    CSS2PROPERTIES_LINEHEIGHT,    JSPROP_ENUMERATE},
  {"listStyle",    CSS2PROPERTIES_LISTSTYLE,    JSPROP_ENUMERATE},
  {"listStyleImage",    CSS2PROPERTIES_LISTSTYLEIMAGE,    JSPROP_ENUMERATE},
  {"listStylePosition",    CSS2PROPERTIES_LISTSTYLEPOSITION,    JSPROP_ENUMERATE},
  {"listStyleType",    CSS2PROPERTIES_LISTSTYLETYPE,    JSPROP_ENUMERATE},
  {"margin",    CSS2PROPERTIES_MARGIN,    JSPROP_ENUMERATE},
  {"marginTop",    CSS2PROPERTIES_MARGINTOP,    JSPROP_ENUMERATE},
  {"marginRight",    CSS2PROPERTIES_MARGINRIGHT,    JSPROP_ENUMERATE},
  {"marginBottom",    CSS2PROPERTIES_MARGINBOTTOM,    JSPROP_ENUMERATE},
  {"marginLeft",    CSS2PROPERTIES_MARGINLEFT,    JSPROP_ENUMERATE},
  {"markerOffset",    CSS2PROPERTIES_MARKEROFFSET,    JSPROP_ENUMERATE},
  {"marks",    CSS2PROPERTIES_MARKS,    JSPROP_ENUMERATE},
  {"maxHeight",    CSS2PROPERTIES_MAXHEIGHT,    JSPROP_ENUMERATE},
  {"maxWidth",    CSS2PROPERTIES_MAXWIDTH,    JSPROP_ENUMERATE},
  {"minHeight",    CSS2PROPERTIES_MINHEIGHT,    JSPROP_ENUMERATE},
  {"minWidth",    CSS2PROPERTIES_MINWIDTH,    JSPROP_ENUMERATE},
  {"orphans",    CSS2PROPERTIES_ORPHANS,    JSPROP_ENUMERATE},
  {"outline",    CSS2PROPERTIES_OUTLINE,    JSPROP_ENUMERATE},
  {"outlineColor",    CSS2PROPERTIES_OUTLINECOLOR,    JSPROP_ENUMERATE},
  {"outlineStyle",    CSS2PROPERTIES_OUTLINESTYLE,    JSPROP_ENUMERATE},
  {"outlineWidth",    CSS2PROPERTIES_OUTLINEWIDTH,    JSPROP_ENUMERATE},
  {"overflow",    CSS2PROPERTIES_OVERFLOW,    JSPROP_ENUMERATE},
  {"padding",    CSS2PROPERTIES_PADDING,    JSPROP_ENUMERATE},
  {"paddingTop",    CSS2PROPERTIES_PADDINGTOP,    JSPROP_ENUMERATE},
  {"paddingRight",    CSS2PROPERTIES_PADDINGRIGHT,    JSPROP_ENUMERATE},
  {"paddingBottom",    CSS2PROPERTIES_PADDINGBOTTOM,    JSPROP_ENUMERATE},
  {"paddingLeft",    CSS2PROPERTIES_PADDINGLEFT,    JSPROP_ENUMERATE},
  {"page",    CSS2PROPERTIES_PAGE,    JSPROP_ENUMERATE},
  {"pageBreakAfter",    CSS2PROPERTIES_PAGEBREAKAFTER,    JSPROP_ENUMERATE},
  {"pageBreakBefore",    CSS2PROPERTIES_PAGEBREAKBEFORE,    JSPROP_ENUMERATE},
  {"pageBreakInside",    CSS2PROPERTIES_PAGEBREAKINSIDE,    JSPROP_ENUMERATE},
  {"pause",    CSS2PROPERTIES_PAUSE,    JSPROP_ENUMERATE},
  {"pauseAfter",    CSS2PROPERTIES_PAUSEAFTER,    JSPROP_ENUMERATE},
  {"pauseBefore",    CSS2PROPERTIES_PAUSEBEFORE,    JSPROP_ENUMERATE},
  {"pitch",    CSS2PROPERTIES_PITCH,    JSPROP_ENUMERATE},
  {"pitchRange",    CSS2PROPERTIES_PITCHRANGE,    JSPROP_ENUMERATE},
  {"playDuring",    CSS2PROPERTIES_PLAYDURING,    JSPROP_ENUMERATE},
  {"position",    CSS2PROPERTIES_POSITION,    JSPROP_ENUMERATE},
  {"quotes",    CSS2PROPERTIES_QUOTES,    JSPROP_ENUMERATE},
  {"richness",    CSS2PROPERTIES_RICHNESS,    JSPROP_ENUMERATE},
  {"right",    CSS2PROPERTIES_RIGHT,    JSPROP_ENUMERATE},
  {"size",    CSS2PROPERTIES_SIZE,    JSPROP_ENUMERATE},
  {"speak",    CSS2PROPERTIES_SPEAK,    JSPROP_ENUMERATE},
  {"speakHeader",    CSS2PROPERTIES_SPEAKHEADER,    JSPROP_ENUMERATE},
  {"speakNumeral",    CSS2PROPERTIES_SPEAKNUMERAL,    JSPROP_ENUMERATE},
  {"speakPunctuation",    CSS2PROPERTIES_SPEAKPUNCTUATION,    JSPROP_ENUMERATE},
  {"speechRate",    CSS2PROPERTIES_SPEECHRATE,    JSPROP_ENUMERATE},
  {"stress",    CSS2PROPERTIES_STRESS,    JSPROP_ENUMERATE},
  {"tableLayout",    CSS2PROPERTIES_TABLELAYOUT,    JSPROP_ENUMERATE},
  {"textAlign",    CSS2PROPERTIES_TEXTALIGN,    JSPROP_ENUMERATE},
  {"textDecoration",    CSS2PROPERTIES_TEXTDECORATION,    JSPROP_ENUMERATE},
  {"textIndent",    CSS2PROPERTIES_TEXTINDENT,    JSPROP_ENUMERATE},
  {"textShadow",    CSS2PROPERTIES_TEXTSHADOW,    JSPROP_ENUMERATE},
  {"textTransform",    CSS2PROPERTIES_TEXTTRANSFORM,    JSPROP_ENUMERATE},
  {"top",    CSS2PROPERTIES_TOP,    JSPROP_ENUMERATE},
  {"unicodeBidi",    CSS2PROPERTIES_UNICODEBIDI,    JSPROP_ENUMERATE},
  {"verticalAlign",    CSS2PROPERTIES_VERTICALALIGN,    JSPROP_ENUMERATE},
  {"visibility",    CSS2PROPERTIES_VISIBILITY,    JSPROP_ENUMERATE},
  {"voiceFamily",    CSS2PROPERTIES_VOICEFAMILY,    JSPROP_ENUMERATE},
  {"volume",    CSS2PROPERTIES_VOLUME,    JSPROP_ENUMERATE},
  {"whiteSpace",    CSS2PROPERTIES_WHITESPACE,    JSPROP_ENUMERATE},
  {"widows",    CSS2PROPERTIES_WIDOWS,    JSPROP_ENUMERATE},
  {"width",    CSS2PROPERTIES_WIDTH,    JSPROP_ENUMERATE},
  {"wordSpacing",    CSS2PROPERTIES_WORDSPACING,    JSPROP_ENUMERATE},
  {"zIndex",    CSS2PROPERTIES_ZINDEX,    JSPROP_ENUMERATE},
  {"opacity",    CSS2PROPERTIES_OPACITY,    JSPROP_ENUMERATE},
  {0}
};


//
// CSS2Properties class methods
//
static JSFunctionSpec CSS2PropertiesMethods[] = 
{
  {0}
};


//
// CSS2Properties constructor
//
PR_STATIC_CALLBACK(JSBool)
CSS2Properties(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
  return JS_FALSE;
}


//
// CSS2Properties class initialization
//
extern "C" NS_DOM nsresult NS_InitCSS2PropertiesClass(nsIScriptContext *aContext, void **aPrototype)
{
  JSContext *jscontext = (JSContext *)aContext->GetNativeContext();
  JSObject *proto = nsnull;
  JSObject *constructor = nsnull;
  JSObject *parent_proto = nsnull;
  JSObject *global = JS_GetGlobalObject(jscontext);
  jsval vp;

  if ((PR_TRUE != JS_LookupProperty(jscontext, global, "CSS2Properties", &vp)) ||
      !JSVAL_IS_OBJECT(vp) ||
      ((constructor = JSVAL_TO_OBJECT(vp)) == nsnull) ||
      (PR_TRUE != JS_LookupProperty(jscontext, JSVAL_TO_OBJECT(vp), "prototype", &vp)) || 
      !JSVAL_IS_OBJECT(vp)) {

    if (NS_OK != NS_InitCSSStyleDeclarationClass(aContext, (void **)&parent_proto)) {
      return NS_ERROR_FAILURE;
    }
    proto = JS_InitClass(jscontext,     // context
                         global,        // global object
                         parent_proto,  // parent proto 
                         &CSS2PropertiesClass,      // JSClass
                         CSS2Properties,            // JSNative ctor
                         0,             // ctor args
                         CSS2PropertiesProperties,  // proto props
                         CSS2PropertiesMethods,     // proto funcs
                         nsnull,        // ctor props (static)
                         nsnull);       // ctor funcs (static)
    if (nsnull == proto) {
      return NS_ERROR_FAILURE;
    }

  }
  else if ((nsnull != constructor) && JSVAL_IS_OBJECT(vp)) {
    proto = JSVAL_TO_OBJECT(vp);
  }
  else {
    return NS_ERROR_FAILURE;
  }

  if (aPrototype) {
    *aPrototype = proto;
  }
  return NS_OK;
}


//
// Method for creating a new CSS2Properties JavaScript object
//
extern "C" NS_DOM nsresult NS_NewScriptCSS2Properties(nsIScriptContext *aContext, nsISupports *aSupports, nsISupports *aParent, void **aReturn)
{
  NS_PRECONDITION(nsnull != aContext && nsnull != aSupports && nsnull != aReturn, "null argument to NS_NewScriptCSS2Properties");
  JSObject *proto;
  JSObject *parent;
  nsIScriptObjectOwner *owner;
  JSContext *jscontext = (JSContext *)aContext->GetNativeContext();
  nsresult result = NS_OK;
  nsIDOMCSS2Properties *aCSS2Properties;

  if (nsnull == aParent) {
    parent = nsnull;
  }
  else if (NS_OK == aParent->QueryInterface(kIScriptObjectOwnerIID, (void**)&owner)) {
    if (NS_OK != owner->GetScriptObject(aContext, (void **)&parent)) {
      NS_RELEASE(owner);
      return NS_ERROR_FAILURE;
    }
    NS_RELEASE(owner);
  }
  else {
    return NS_ERROR_FAILURE;
  }

  if (NS_OK != NS_InitCSS2PropertiesClass(aContext, (void **)&proto)) {
    return NS_ERROR_FAILURE;
  }

  result = aSupports->QueryInterface(kICSS2PropertiesIID, (void **)&aCSS2Properties);
  if (NS_OK != result) {
    return result;
  }

  // create a js object for this class
  *aReturn = JS_NewObject(jscontext, &CSS2PropertiesClass, proto, parent);
  if (nsnull != *aReturn) {
    // connect the native object to the js object
    JS_SetPrivate(jscontext, (JSObject *)*aReturn, aCSS2Properties);
  }
  else {
    NS_RELEASE(aCSS2Properties);
    return NS_ERROR_FAILURE; 
  }

  return NS_OK;
}
