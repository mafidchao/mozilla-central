/* -*- Mode: Java; c-basic-offset: 4; tab-width: 20; indent-tabs-mode: nil; -*-
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

package org.mozilla.gecko.gfx;

import javax.microedition.khronos.opengles.GL10;

/** Information needed to render Cairo bitmaps using OpenGL ES. */
public class CairoGLInfo {
    public final int internalFormat;
    public final int format;
    public final int type;

    public CairoGLInfo(int cairoFormat) {
        switch (cairoFormat) {
        case CairoImage.FORMAT_ARGB32:
            internalFormat = format = GL10.GL_RGBA; type = GL10.GL_UNSIGNED_BYTE;
            break;
        case CairoImage.FORMAT_RGB24:
            internalFormat = format = GL10.GL_RGB; type = GL10.GL_UNSIGNED_BYTE;
            break;
        case CairoImage.FORMAT_RGB16_565:
            internalFormat = format = GL10.GL_RGB; type = GL10.GL_UNSIGNED_SHORT_5_6_5;
            break;
        case CairoImage.FORMAT_A8:
        case CairoImage.FORMAT_A1:
            throw new RuntimeException("Cairo FORMAT_A1 and FORMAT_A8 unsupported");
        default:
            throw new RuntimeException("Unknown Cairo format");
        }
    }
}

