/*
 * Module code.
 *
 * Generated by SIP 4.16.3 on Mon Sep 22 17:44:01 2014
 *
 * Copyright (c) 2014 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * If you are unsure which license is appropriate for your use, please
 * contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtMultimedia.h"

#line 34 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 34 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtMultimedia/sipQtMultimediacmodule.cpp"
#line 33 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtMultimedia/qvideoframe.sip"
#include <qvideoframe.h>
#line 37 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtMultimedia/sipQtMultimediacmodule.cpp"
#line 33 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtMultimedia/qvideosurfaceformat.sip"
#include <qvideosurfaceformat.h>
#line 40 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtMultimedia/sipQtMultimediacmodule.cpp"
#line 154 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtMultimedia/qvideoframe.sip"
#include <qvideoframe.h>
#line 43 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtMultimedia/sipQtMultimediacmodule.cpp"
#line 33 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtMultimedia/qabstractvideobuffer.sip"
#include <qabstractvideobuffer.h>
#line 46 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtMultimedia/sipQtMultimediacmodule.cpp"
#line 274 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 49 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtMultimedia/sipQtMultimediacmodule.cpp"
#line 33 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtMultimedia/qaudiodeviceinfo.sip"
#include <qaudiodeviceinfo.h>
#line 52 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtMultimedia/sipQtMultimediacmodule.cpp"
#line 33 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtMultimedia/qaudioformat.sip"
#include <qaudioformat.h>
#line 55 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtMultimedia/sipQtMultimediacmodule.cpp"

/* Define the strings used by this module. */
const char sipStrings_QtMultimedia[] = {
    'Q', 'V', 'i', 'd', 'e', 'o', 'S', 'u', 'r', 'f', 'a', 'c', 'e', 'F', 'o', 'r', 'm', 'a', 't', ':', ':', 'Y', 'C', 'b', 'C', 'r', 'C', 'o', 'l', 'o', 'r', 'S', 'p', 'a', 'c', 'e', 0,
    'Q', 'A', 'b', 's', 't', 'r', 'a', 'c', 't', 'V', 'i', 'd', 'e', 'o', 'B', 'u', 'f', 'f', 'e', 'r', ':', ':', 'H', 'a', 'n', 'd', 'l', 'e', 'T', 'y', 'p', 'e', 0,
    'Q', 'L', 'i', 's', 't', '<', 'Q', 'V', 'i', 'd', 'e', 'o', 'F', 'r', 'a', 'm', 'e', ':', ':', 'P', 'i', 'x', 'e', 'l', 'F', 'o', 'r', 'm', 'a', 't', '>', 0,
    'Q', 'L', 'i', 's', 't', '<', 'Q', 'A', 'u', 'd', 'i', 'o', 'F', 'o', 'r', 'm', 'a', 't', ':', ':', 'S', 'a', 'm', 'p', 'l', 'e', 'T', 'y', 'p', 'e', '>', 0,
    'Q', 'V', 'i', 'd', 'e', 'o', 'S', 'u', 'r', 'f', 'a', 'c', 'e', 'F', 'o', 'r', 'm', 'a', 't', ':', ':', 'D', 'i', 'r', 'e', 'c', 't', 'i', 'o', 'n', 0,
    'F', 'o', 'r', 'm', 'a', 't', '_', 'B', 'G', 'R', 'A', '5', '6', '5', '8', '_', 'P', 'r', 'e', 'm', 'u', 'l', 't', 'i', 'p', 'l', 'i', 'e', 'd', 0,
    'Q', 'A', 'b', 's', 't', 'r', 'a', 'c', 't', 'V', 'i', 'd', 'e', 'o', 'B', 'u', 'f', 'f', 'e', 'r', ':', ':', 'M', 'a', 'p', 'M', 'o', 'd', 'e', 0,
    'F', 'o', 'r', 'm', 'a', 't', '_', 'A', 'R', 'G', 'B', '8', '5', '6', '5', '_', 'P', 'r', 'e', 'm', 'u', 'l', 't', 'i', 'p', 'l', 'i', 'e', 'd', 0,
    'F', 'o', 'r', 'm', 'a', 't', '_', 'A', 'Y', 'U', 'V', '4', '4', '4', '_', 'P', 'r', 'e', 'm', 'u', 'l', 't', 'i', 'p', 'l', 'i', 'e', 'd', 0,
    'Q', 'A', 'b', 's', 't', 'r', 'a', 'c', 't', 'V', 'i', 'd', 'e', 'o', 'S', 'u', 'r', 'f', 'a', 'c', 'e', ':', ':', 'E', 'r', 'r', 'o', 'r', 0,
    'P', 'y', 'Q', 't', '4', '.', 'Q', 't', 'C', 'o', 'r', 'e', '.', 'p', 'y', 'q', 't', 'W', 'r', 'a', 'p', 'p', 'e', 'r', 'T', 'y', 'p', 'e', 0,
    'F', 'o', 'r', 'm', 'a', 't', '_', 'B', 'G', 'R', 'A', '3', '2', '_', 'P', 'r', 'e', 'm', 'u', 'l', 't', 'i', 'p', 'l', 'i', 'e', 'd', 0,
    'Q', 'L', 'i', 's', 't', '<', 'Q', 'A', 'u', 'd', 'i', 'o', 'F', 'o', 'r', 'm', 'a', 't', ':', ':', 'E', 'n', 'd', 'i', 'a', 'n', '>', 0,
    'F', 'o', 'r', 'm', 'a', 't', '_', 'A', 'R', 'G', 'B', '3', '2', '_', 'P', 'r', 'e', 'm', 'u', 'l', 't', 'i', 'p', 'l', 'i', 'e', 'd', 0,
    'i', 'm', 'a', 'g', 'e', 'F', 'o', 'r', 'm', 'a', 't', 'F', 'r', 'o', 'm', 'P', 'i', 'x', 'e', 'l', 'F', 'o', 'r', 'm', 'a', 't', 0,
    'p', 'i', 'x', 'e', 'l', 'F', 'o', 'r', 'm', 'a', 't', 'F', 'r', 'o', 'm', 'I', 'm', 'a', 'g', 'e', 'F', 'o', 'r', 'm', 'a', 't', 0,
    'Q', 'V', 'i', 'd', 'e', 'o', 'F', 'r', 'a', 'm', 'e', ':', ':', 'P', 'i', 'x', 'e', 'l', 'F', 'o', 'r', 'm', 'a', 't', 0,
    'Q', 'A', 'u', 'd', 'i', 'o', 'F', 'o', 'r', 'm', 'a', 't', ':', ':', 'S', 'a', 'm', 'p', 'l', 'e', 'T', 'y', 'p', 'e', 0,
    'Q', 'L', 'i', 's', 't', '<', 'Q', 'A', 'u', 'd', 'i', 'o', 'D', 'e', 'v', 'i', 'c', 'e', 'I', 'n', 'f', 'o', '>', 0,
    's', 'u', 'p', 'p', 'o', 'r', 't', 'e', 'd', 'F', 'o', 'r', 'm', 'a', 't', 's', 'C', 'h', 'a', 'n', 'g', 'e', 'd', 0,
    'Q', 'V', 'i', 'd', 'e', 'o', 'F', 'r', 'a', 'm', 'e', ':', ':', 'F', 'i', 'e', 'l', 'd', 'T', 'y', 'p', 'e', 0,
    's', 'u', 'p', 'p', 'o', 'r', 't', 'e', 'd', 'C', 'h', 'a', 'n', 'n', 'e', 'l', 'C', 'o', 'u', 'n', 't', 's', 0,
    'U', 'n', 's', 'u', 'p', 'p', 'o', 'r', 't', 'e', 'd', 'F', 'o', 'r', 'm', 'a', 't', 'E', 'r', 'r', 'o', 'r', 0,
    's', 'u', 'p', 'p', 'o', 'r', 't', 'e', 'd', 'P', 'i', 'x', 'e', 'l', 'F', 'o', 'r', 'm', 'a', 't', 's', 0,
    'Q', 'A', 'b', 's', 't', 'r', 'a', 'c', 't', 'V', 'i', 'd', 'e', 'o', 'S', 'u', 'r', 'f', 'a', 'c', 'e', 0,
    's', 'e', 't', 'S', 'c', 'a', 'n', 'L', 'i', 'n', 'e', 'D', 'i', 'r', 'e', 'c', 't', 'i', 'o', 'n', 0,
    'Q', 'A', 'u', 'd', 'i', 'o', 'F', 'o', 'r', 'm', 'a', 't', ':', ':', 'E', 'n', 'd', 'i', 'a', 'n', 0,
    's', 'u', 'p', 'p', 'o', 'r', 't', 'e', 'd', 'S', 'a', 'm', 'p', 'l', 'e', 'R', 'a', 't', 'e', 's', 0,
    's', 'u', 'p', 'p', 'o', 'r', 't', 'e', 'd', 'S', 'a', 'm', 'p', 'l', 'e', 'T', 'y', 'p', 'e', 's', 0,
    's', 'u', 'p', 'p', 'o', 'r', 't', 'e', 'd', 'S', 'a', 'm', 'p', 'l', 'e', 'S', 'i', 'z', 'e', 's', 0,
    's', 'u', 'p', 'p', 'o', 'r', 't', 'e', 'd', 'F', 'r', 'e', 'q', 'u', 'e', 'n', 'c', 'i', 'e', 's', 0,
    's', 'u', 'r', 'f', 'a', 'c', 'e', 'F', 'o', 'r', 'm', 'a', 't', 'C', 'h', 'a', 'n', 'g', 'e', 'd', 0,
    'I', 'n', 'c', 'o', 'r', 'r', 'e', 'c', 't', 'F', 'o', 'r', 'm', 'a', 't', 'E', 'r', 'r', 'o', 'r', 0,
    'Q', 'A', 'b', 's', 't', 'r', 'a', 'c', 't', 'V', 'i', 'd', 'e', 'o', 'B', 'u', 'f', 'f', 'e', 'r', 0,
    's', 'e', 't', 'P', 'i', 'x', 'e', 'l', 'A', 's', 'p', 'e', 'c', 't', 'R', 'a', 't', 'i', 'o', 0,
    'Q', 'V', 'i', 'd', 'e', 'o', 'S', 'u', 'r', 'f', 'a', 'c', 'e', 'F', 'o', 'r', 'm', 'a', 't', 0,
    'd', 'e', 'f', 'a', 'u', 'l', 't', 'O', 'u', 't', 'p', 'u', 't', 'D', 'e', 'v', 'i', 'c', 'e', 0,
    's', 'u', 'p', 'p', 'o', 'r', 't', 'e', 'd', 'B', 'y', 't', 'e', 'O', 'r', 'd', 'e', 'r', 's', 0,
    'd', 'e', 'f', 'a', 'u', 'l', 't', 'B', 'u', 't', 't', 'o', 'n', 'N', 'u', 'm', 'b', 'e', 'r', 0,
    's', 'e', 't', 'Y', 'C', 'b', 'C', 'r', 'C', 'o', 'l', 'o', 'r', 'S', 'p', 'a', 'c', 'e', 0,
    'd', 'e', 'f', 'a', 'u', 'l', 't', 'I', 'n', 'p', 'u', 't', 'D', 'e', 'v', 'i', 'c', 'e', 0,
    'e', 's', 'c', 'a', 'p', 'e', 'B', 'u', 't', 't', 'o', 'n', 'N', 'u', 'm', 'b', 'e', 'r', 0,
    'P', 'y', 'Q', 't', '4', '.', 'Q', 't', 'M', 'u', 'l', 't', 'i', 'm', 'e', 'd', 'i', 'a', 0,
    's', 'c', 'a', 'n', 'L', 'i', 'n', 'e', 'D', 'i', 'r', 'e', 'c', 't', 'i', 'o', 'n', 0,
    's', 'e', 't', 'N', 'o', 't', 'i', 'f', 'y', 'I', 'n', 't', 'e', 'r', 'v', 'a', 'l', 0,
    's', 'u', 'p', 'p', 'o', 'r', 't', 'e', 'd', 'C', 'h', 'a', 'n', 'n', 'e', 'l', 's', 0,
    'i', 's', 'F', 'o', 'r', 'm', 'a', 't', 'S', 'u', 'p', 'p', 'o', 'r', 't', 'e', 'd', 0,
    's', 'i', 'p', '.', 's', 'i', 'm', 'p', 'l', 'e', 'w', 'r', 'a', 'p', 'p', 'e', 'r', 0,
    'p', 'i', 'x', 'e', 'l', 'A', 's', 'p', 'e', 'c', 't', 'R', 'a', 't', 'i', 'o', 0,
    'P', 'r', 'o', 'g', 'r', 'e', 's', 's', 'i', 'v', 'e', 'F', 'r', 'a', 'm', 'e', 0,
    'a', 'v', 'a', 'i', 'l', 'a', 'b', 'l', 'e', 'D', 'e', 'v', 'i', 'c', 'e', 's', 0,
    'Q', 'A', 'u', 'd', 'i', 'o', 'D', 'e', 'v', 'i', 'c', 'e', 'I', 'n', 'f', 'o', 0,
    'X', 'v', 'S', 'h', 'm', 'I', 'm', 'a', 'g', 'e', 'H', 'a', 'n', 'd', 'l', 'e', 0,
    'd', 'i', 's', 'c', 'o', 'n', 'n', 'e', 'c', 't', 'N', 'o', 't', 'i', 'f', 'y', 0,
    'y', 'C', 'b', 'C', 'r', 'C', 'o', 'l', 'o', 'r', 'S', 'p', 'a', 'c', 'e', 0,
    'Y', 'C', 'b', 'C', 'r', '_', 'U', 'n', 'd', 'e', 'f', 'i', 'n', 'e', 'd', 0,
    'I', 'n', 't', 'e', 'r', 'l', 'a', 'c', 'e', 'd', 'F', 'r', 'a', 'm', 'e', 0,
    's', 'e', 't', 'C', 'h', 'a', 'n', 'n', 'e', 'l', 'C', 'o', 'u', 'n', 't', 0,
    's', 'u', 'p', 'p', 'o', 'r', 't', 'e', 'd', 'C', 'o', 'd', 'e', 'c', 's', 0,
    'p', 'r', 'e', 'f', 'e', 'r', 'r', 'e', 'd', 'F', 'o', 'r', 'm', 'a', 't', 0,
    'C', 'o', 'r', 'e', 'I', 'm', 'a', 'g', 'e', 'H', 'a', 'n', 'd', 'l', 'e', 0,
    'G', 'L', 'T', 'e', 'x', 't', 'u', 'r', 'e', 'H', 'a', 'n', 'd', 'l', 'e', 0,
    'a', 's', 'p', 'e', 'c', 't', 'R', 'a', 't', 'i', 'o', 'M', 'o', 'd', 'e', 0,
    'd', 'e', 'v', 'i', 'c', 'e', 'T', 'r', 'a', 'n', 's', 'f', 'o', 'r', 'm', 0,
    'Y', 'C', 'b', 'C', 'r', '_', 'x', 'v', 'Y', 'C', 'C', '7', '0', '9', 0,
    'Y', 'C', 'b', 'C', 'r', '_', 'x', 'v', 'Y', 'C', 'C', '6', '0', '1', 0,
    'F', 'o', 'r', 'm', 'a', 't', '_', 'Y', 'U', 'V', '4', '2', '0', 'P', 0,
    'F', 'o', 'r', 'm', 'a', 't', '_', 'A', 'Y', 'U', 'V', '4', '4', '4', 0,
    'p', 'r', 'o', 'c', 'e', 's', 's', 'e', 'd', 'U', 'S', 'e', 'c', 's', 0,
    'n', 'o', 't', 'i', 'f', 'y', 'I', 'n', 't', 'e', 'r', 'v', 'a', 'l', 0,
    'S', 'u', 's', 'p', 'e', 'n', 'd', 'e', 'd', 'S', 't', 'a', 't', 'e', 0,
    'F', 'o', 'r', 'm', 'a', 't', '_', 'I', 'n', 'v', 'a', 'l', 'i', 'd', 0,
    's', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'F', 'i', 'l', 't', 'e', 'r', 0,
    'p', 'r', 'o', 'p', 'e', 'r', 't', 'y', 'N', 'a', 'm', 'e', 's', 0,
    'F', 'o', 'r', 'm', 'a', 't', '_', 'Y', 'U', 'V', '4', '4', '4', 0,
    'F', 'o', 'r', 'm', 'a', 't', '_', 'B', 'G', 'R', '5', '5', '5', 0,
    'F', 'o', 'r', 'm', 'a', 't', '_', 'B', 'G', 'R', '5', '6', '5', 0,
    'F', 'o', 'r', 'm', 'a', 't', '_', 'B', 'G', 'R', 'A', '3', '2', 0,
    'F', 'o', 'r', 'm', 'a', 't', '_', 'R', 'G', 'B', '5', '6', '5', 0,
    's', 'e', 't', 'B', 'u', 'f', 'f', 'e', 'r', 'S', 'i', 'z', 'e', 0,
    's', 'e', 't', 'S', 'a', 'm', 'p', 'l', 'e', 'R', 'a', 't', 'e', 0,
    's', 'e', 't', 'S', 'a', 'm', 'p', 'l', 'e', 'T', 'y', 'p', 'e', 0,
    's', 'e', 't', 'S', 'a', 'm', 'p', 'l', 'e', 'S', 'i', 'z', 'e', 0,
    'Q', 'A', 'u', 'd', 'i', 'o', ':', ':', 'S', 't', 'a', 't', 'e', 0,
    'U', 'n', 'd', 'e', 'r', 'r', 'u', 'n', 'E', 'r', 'r', 'o', 'r', 0,
    'Q', 'A', 'u', 'd', 'i', 'o', ':', ':', 'E', 'r', 'r', 'o', 'r', 0,
    'a', 'c', 't', 'i', 'v', 'e', 'C', 'h', 'a', 'n', 'g', 'e', 'd', 0,
    's', 'u', 'r', 'f', 'a', 'c', 'e', 'F', 'o', 'r', 'm', 'a', 't', 0,
    'n', 'e', 'a', 'r', 'e', 's', 't', 'F', 'o', 'r', 'm', 'a', 't', 0,
    'Q', 'P', 'i', 'x', 'm', 'a', 'p', 'H', 'a', 'n', 'd', 'l', 'e', 0,
    'c', 'h', 'a', 'n', 'g', 'e', 'd', 'S', 'i', 'g', 'n', 'a', 'l', 0,
    't', 'r', 'a', 'n', 's', 'f', 'o', 'r', 'm', 'M', 'o', 'd', 'e', 0,
    'F', 'o', 'r', 'm', 'a', 't', '_', 'R', 'G', 'B', '5', '5', '5', 0,
    'F', 'o', 'r', 'm', 'a', 't', '_', 'A', 'R', 'G', 'B', '3', '2', 0,
    'R', 'e', 's', 'o', 'u', 'r', 'c', 'e', 'E', 'r', 'r', 'o', 'r', 0,
    's', 'e', 't', 'F', 'r', 'a', 'm', 'e', 'R', 'a', 't', 'e', 0,
    's', 'e', 't', 'F', 'r', 'a', 'm', 'e', 'S', 'i', 'z', 'e', 0,
    's', 'e', 't', 'S', 't', 'a', 'r', 't', 'T', 'i', 'm', 'e', 0,
    's', 'e', 't', 'F', 'i', 'e', 'l', 'd', 'T', 'y', 'p', 'e', 0,
    'F', 'o', 'r', 'm', 'a', 't', '_', 'B', 'G', 'R', '2', '4', 0,
    'F', 'o', 'r', 'm', 'a', 't', '_', 'B', 'G', 'R', '3', '2', 0,
    'F', 'o', 'r', 'm', 'a', 't', '_', 'R', 'G', 'B', '2', '4', 0,
    'Q', 'A', 'u', 'd', 'i', 'o', 'O', 'u', 't', 'p', 'u', 't', 0,
    'e', 'l', 'a', 'p', 's', 'e', 'd', 'U', 'S', 'e', 'c', 's', 0,
    'c', 'h', 'a', 'n', 'n', 'e', 'l', 'C', 'o', 'u', 'n', 't', 0,
    's', 'e', 't', 'F', 'r', 'e', 'q', 'u', 'e', 'n', 'c', 'y', 0,
    'Q', 'A', 'u', 'd', 'i', 'o', 'F', 'o', 'r', 'm', 'a', 't', 0,
    'Q', 'A', 'u', 'd', 'i', 'o', ':', ':', 'M', 'o', 'd', 'e', 0,
    'S', 't', 'o', 'p', 'p', 'e', 'd', 'S', 't', 'a', 't', 'e', 0,
    'S', 't', 'o', 'p', 'p', 'e', 'd', 'E', 'r', 'r', 'o', 'r', 0,
    's', 'o', 'u', 'r', 'c', 'e', 'R', 'e', 'g', 'i', 'o', 'n', 0,
    't', 'a', 'r', 'g', 'e', 't', 'O', 'f', 'f', 's', 'e', 't', 0,
    'b', 'y', 't', 'e', 's', 'P', 'e', 'r', 'L', 'i', 'n', 'e', 0,
    'F', 'o', 'r', 'm', 'a', 't', '_', 'R', 'G', 'B', '3', '2', 0,
    'b', 'o', 'u', 'n', 'd', 'i', 'n', 'g', 'R', 'e', 'c', 't', 0,
    'm', 'i', 'd', 'L', 'i', 'n', 'e', 'W', 'i', 'd', 't', 'h', 0,
    's', 'e', 't', 'B', 'y', 't', 'e', 'O', 'r', 'd', 'e', 'r', 0,
    's', 't', 'a', 't', 'e', 'C', 'h', 'a', 'n', 'g', 'e', 'd', 0,
    'L', 'i', 't', 't', 'l', 'e', 'E', 'n', 'd', 'i', 'a', 'n', 0,
    'f', 'r', 'a', 'm', 'e', 'H', 'e', 'i', 'g', 'h', 't', 0,
    'Y', 'C', 'b', 'C', 'r', '_', 'B', 'T', '7', '0', '9', 0,
    'Y', 'C', 'b', 'C', 'r', '_', 'B', 'T', '6', '0', '1', 0,
    'm', 'a', 'p', 'p', 'e', 'd', 'B', 'y', 't', 'e', 's', 0,
    'p', 'i', 'x', 'e', 'l', 'F', 'o', 'r', 'm', 'a', 't', 0,
    'F', 'o', 'r', 'm', 'a', 't', '_', 'U', 's', 'e', 'r', 0,
    'F', 'o', 'r', 'm', 'a', 't', '_', 'I', 'M', 'C', '4', 0,
    'F', 'o', 'r', 'm', 'a', 't', '_', 'I', 'M', 'C', '3', 0,
    'F', 'o', 'r', 'm', 'a', 't', '_', 'I', 'M', 'C', '2', 0,
    'F', 'o', 'r', 'm', 'a', 't', '_', 'I', 'M', 'C', '1', 0,
    'F', 'o', 'r', 'm', 'a', 't', '_', 'N', 'V', '2', '1', 0,
    'F', 'o', 'r', 'm', 'a', 't', '_', 'N', 'V', '1', '2', 0,
    'F', 'o', 'r', 'm', 'a', 't', '_', 'Y', 'U', 'Y', 'V', 0,
    'F', 'o', 'r', 'm', 'a', 't', '_', 'U', 'Y', 'V', 'Y', 0,
    'F', 'o', 'r', 'm', 'a', 't', '_', 'Y', 'V', '1', '2', 0,
    'B', 'o', 't', 't', 'o', 'm', 'F', 'i', 'e', 'l', 'd', 0,
    'Q', 'V', 'i', 'd', 'e', 'o', 'F', 'r', 'a', 'm', 'e', 0,
    'Q', 'A', 'u', 'd', 'i', 'o', 'I', 'n', 'p', 'u', 't', 0,
    's', 'e', 't', 'C', 'h', 'a', 'n', 'n', 'e', 'l', 's', 0,
    'U', 'n', 'S', 'i', 'g', 'n', 'e', 'd', 'I', 'n', 't', 0,
    'A', 'c', 't', 'i', 'v', 'e', 'S', 't', 'a', 't', 'e', 0,
    'b', 'u', 't', 't', 'o', 'n', '2', 'T', 'e', 'x', 't', 0,
    'b', 'u', 't', 't', 'o', 'n', '1', 'T', 'e', 'x', 't', 0,
    'B', 'o', 't', 't', 'o', 'm', 'T', 'o', 'T', 'o', 'p', 0,
    'T', 'o', 'p', 'T', 'o', 'B', 'o', 't', 't', 'o', 'm', 0,
    's', 'e', 't', 'V', 'i', 'e', 'w', 'p', 'o', 'r', 't', 0,
    'c', 'u', 's', 't', 'o', 'm', 'E', 'v', 'e', 'n', 't', 0,
    's', 'e', 't', 'P', 'r', 'o', 'p', 'e', 'r', 't', 'y', 0,
    'e', 'v', 'e', 'n', 't', 'F', 'i', 'l', 't', 'e', 'r', 0,
    'Y', 'C', 'b', 'C', 'r', '_', 'J', 'P', 'E', 'G', 0,
    's', 'e', 't', 'E', 'n', 'd', 'T', 'i', 'm', 'e', 0,
    'F', 'o', 'r', 'm', 'a', 't', '_', 'Y', '1', '6', 0,
    'p', 'e', 'r', 'i', 'o', 'd', 'S', 'i', 'z', 'e', 0,
    'b', 'y', 't', 'e', 's', 'R', 'e', 'a', 'd', 'y', 0,
    'b', 'u', 'f', 'f', 'e', 'r', 'S', 'i', 'z', 'e', 0,
    's', 'a', 'm', 'p', 'l', 'e', 'R', 'a', 't', 'e', 0,
    's', 'a', 'm', 'p', 'l', 'e', 'T', 'y', 'p', 'e', 0,
    's', 'a', 'm', 'p', 'l', 'e', 'S', 'i', 'z', 'e', 0,
    'd', 'e', 'v', 'i', 'c', 'e', 'N', 'a', 'm', 'e', 0,
    'h', 'a', 'n', 'd', 'l', 'e', 'T', 'y', 'p', 'e', 0,
    'U', 's', 'e', 'r', 'H', 'a', 'n', 'd', 'l', 'e', 0,
    'f', 'r', 'a', 'm', 'e', 'W', 'i', 'd', 't', 'h', 0,
    'f', 'i', 'e', 'l', 'd', 'W', 'i', 'd', 't', 'h', 0,
    'c', 'h', 'i', 'l', 'd', 'E', 'v', 'e', 'n', 't', 0,
    't', 'i', 'm', 'e', 'r', 'E', 'v', 'e', 'n', 't', 0,
    'i', 's', 'W', 'r', 'i', 't', 'a', 'b', 'l', 'e', 0,
    'F', 'a', 't', 'a', 'l', 'E', 'r', 'r', 'o', 'r', 0,
    'i', 's', 'R', 'e', 'a', 'd', 'a', 'b', 'l', 'e', 0,
    'f', 'r', 'a', 'm', 'e', 'R', 'a', 't', 'e', 0,
    's', 't', 'a', 'r', 't', 'T', 'i', 'm', 'e', 0,
    'f', 'i', 'e', 'l', 'd', 'T', 'y', 'p', 'e', 0,
    'F', 'o', 'r', 'm', 'a', 't', '_', 'Y', '8', 0,
    'b', 'y', 't', 'e', 's', 'F', 'r', 'e', 'e', 0,
    'f', 'r', 'e', 'q', 'u', 'e', 'n', 'c', 'y', 0,
    'I', 'd', 'l', 'e', 'S', 't', 'a', 't', 'e', 0,
    'N', 'o', 't', 'M', 'a', 'p', 'p', 'e', 'd', 0,
    'f', 'r', 'a', 'm', 'e', 'S', 'i', 'z', 'e', 0,
    'o', 'p', 'e', 'r', 'a', 't', 'i', 'o', 'n', 0,
    'l', 'i', 'n', 'e', 'W', 'i', 'd', 't', 'h', 0,
    'd', 'i', 'r', 'e', 'c', 't', 'o', 'r', 'y', 0,
    'a', 'l', 'i', 'g', 'n', 'm', 'e', 'n', 't', 0,
    'R', 'e', 'a', 'd', 'W', 'r', 'i', 't', 'e', 0,
    'W', 'r', 'i', 't', 'e', 'O', 'n', 'l', 'y', 0,
    'O', 'p', 'e', 'n', 'E', 'r', 'r', 'o', 'r', 0,
    'b', 'y', 't', 'e', 'O', 'r', 'd', 'e', 'r', 0,
    'p', 'r', 'e', 'c', 'i', 's', 'i', 'o', 'n', 0,
    'B', 'i', 'g', 'E', 'n', 'd', 'i', 'a', 'n', 0,
    'i', 's', 'M', 'a', 'p', 'p', 'e', 'd', 0,
    'T', 'o', 'p', 'F', 'i', 'e', 'l', 'd', 0,
    'c', 'h', 'a', 'n', 'n', 'e', 'l', 's', 0,
    'N', 'o', 'H', 'a', 'n', 'd', 'l', 'e', 0,
    'f', 'i', 'l', 'l', 'R', 'u', 'l', 'e', 0,
    't', 'a', 'b', 'A', 'r', 'r', 'a', 'y', 0,
    't', 'a', 'b', 'S', 't', 'o', 'p', 's', 0,
    'u', 's', 'e', 'r', 'D', 'a', 't', 'a', 0,
    'v', 'i', 'e', 'w', 'p', 'o', 'r', 't', 0,
    's', 'i', 'z', 'e', 'H', 'i', 'n', 't', 0,
    's', 'h', 'o', 'r', 't', 'c', 'u', 't', 0,
    's', 'e', 't', 'C', 'o', 'd', 'e', 'c', 0,
    'b', 'e', 'h', 'a', 'v', 'i', 'o', 'r', 0,
    'p', 'o', 's', 'i', 't', 'i', 'o', 'n', 0,
    'f', 'i', 'l', 'l', 'C', 'h', 'a', 'r', 0,
    'p', 'r', 'o', 'p', 'e', 'r', 't', 'y', 0,
    'R', 'e', 'a', 'd', 'O', 'n', 'l', 'y', 0,
    'i', 's', 'A', 'c', 't', 'i', 'v', 'e', 0,
    's', 'e', 't', 'E', 'r', 'r', 'o', 'r', 0,
    'e', 'n', 'd', 'T', 'i', 'm', 'e', 0,
    's', 'u', 's', 'p', 'e', 'n', 'd', 0,
    'I', 'O', 'E', 'r', 'r', 'o', 'r', 0,
    'p', 'r', 'e', 's', 'e', 'n', 't', 0,
    'm', 'a', 'p', 'M', 'o', 'd', 'e', 0,
    'U', 'n', 'k', 'n', 'o', 'w', 'n', 0,
    'e', 'x', 'p', 'o', 's', 'e', 'd', 0,
    'b', 'u', 't', 't', 'o', 'n', '2', 0,
    'b', 'u', 't', 't', 'o', 'n', '1', 0,
    'q', 'u', 'a', 'l', 'i', 't', 'y', 0,
    'y', 'M', 'a', 'r', 'g', 'i', 'n', 0,
    'x', 'M', 'a', 'r', 'g', 'i', 'n', 0,
    'c', 'a', 'p', 't', 'i', 'o', 'n', 0,
    'o', 'p', 't', 'i', 'o', 'n', 's', 0,
    'N', 'o', 'E', 'r', 'r', 'o', 'r', 0,
    'i', 's', 'V', 'a', 'l', 'i', 'd', 0,
    'f', 'i', 'l', 't', 'e', 'r', 's', 0,
    'Q', 'A', 'u', 'd', 'i', 'o', 0,
    'y', 'R', 'o', 'u', 'n', 'd', 0,
    'x', 'R', 'o', 'u', 'n', 'd', 0,
    'l', 'a', 'y', 'e', 'r', 's', 0,
    's', 'u', 'n', 'k', 'e', 'n', 0,
    'o', 'p', 't', 'i', 'o', 'n', 0,
    'h', 'e', 'i', 'g', 'h', 't', 0,
    'p', 'r', 'o', 'p', 'e', 'r', 0,
    'v', 'a', 'l', 'u', 'e', '9', 0,
    'v', 'a', 'l', 'u', 'e', '8', 0,
    'v', 'a', 'l', 'u', 'e', '7', 0,
    'v', 'a', 'l', 'u', 'e', '6', 0,
    'v', 'a', 'l', 'u', 'e', '5', 0,
    'v', 'a', 'l', 'u', 'e', '4', 0,
    'v', 'a', 'l', 'u', 'e', '3', 0,
    'v', 'a', 'l', 'u', 'e', '0', 0,
    's', 'y', 'm', 'b', 'o', 'l', 0,
    's', 'u', 'f', 'f', 'i', 'x', 0,
    'p', 'r', 'e', 'f', 'i', 'x', 0,
    'n', 'o', 't', 'i', 'f', 'y', 0,
    'f', 'o', 'r', 'm', 'a', 't', 0,
    'v', 'a', 'l', 'u', 'e', '2', 0,
    'v', 'a', 'l', 'u', 'e', '1', 0,
    'i', 's', 'N', 'u', 'l', 'l', 0,
    'a', 'c', 't', 'i', 'o', 'n', 0,
    'c', 'o', 'l', 'u', 'm', 'n', 0,
    'h', 'a', 'n', 'd', 'l', 'e', 0,
    'f', 'i', 'l', 't', 'e', 'r', 0,
    'r', 'e', 's', 'u', 'm', 'e', 0,
    'p', 'a', 'r', 'e', 'n', 't', 0,
    '_', '_', 'n', 'e', '_', '_', 0,
    '_', '_', 'e', 'q', '_', '_', 0,
    'b', 'r', 'u', 's', 'h', 0,
    'c', 'o', 'd', 'e', 'c', 0,
    'F', 'l', 'o', 'a', 't', 0,
    'h', 'i', 'n', 't', 's', 0,
    'w', 'i', 'd', 't', 'h', 0,
    'r', 'e', 's', 'e', 't', 0,
    'u', 'n', 'm', 'a', 'p', 0,
    'e', 'r', 'r', 'o', 'r', 0,
    'f', 'l', 'a', 'g', 's', 0,
    'e', 'v', 'e', 'n', 't', 0,
    'm', 's', 'e', 'c', 's', 0,
    's', 't', 'a', 'r', 't', 0,
    's', 't', 'a', 't', 'e', 0,
    'b', 'i', 't', 's', 0,
    'm', 'o', 'd', 'e', 0,
    'n', 'a', 'm', 'e', 0,
    'b', 'a', 's', 'e', 0,
    'f', 'i', 'l', 'l', 0,
    'f', 'r', 'o', 'm', 0,
    's', 'o', 'r', 't', 0,
    't', 'y', 'p', 'e', 0,
    's', 'i', 'z', 'e', 0,
    's', 't', 'o', 'p', 0,
    'p', 'e', 'n', 0,
    'p', 'o', 's', 0,
    's', 'w', 0,
    's', 'y', 0,
    's', 'x', 0,
};

bool sipVH_QtMultimedia_0(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, const QVideoFrame& a0)
{
    bool sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "N",new QVideoFrame(a0),sipType_QVideoFrame,NULL);

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "b", &sipRes);

    return sipRes;
}

bool sipVH_QtMultimedia_1(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, const QVideoSurfaceFormat& a0)
{
    bool sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "N",new QVideoSurfaceFormat(a0),sipType_QVideoSurfaceFormat,NULL);

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "b", &sipRes);

    return sipRes;
}

QVideoSurfaceFormat sipVH_QtMultimedia_2(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, const QVideoSurfaceFormat& a0)
{
    QVideoSurfaceFormat sipRes;
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "N",new QVideoSurfaceFormat(a0),sipType_QVideoSurfaceFormat,NULL);

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "H5", sipType_QVideoSurfaceFormat, &sipRes);

    return sipRes;
}

QList<QVideoFrame::PixelFormat> sipVH_QtMultimedia_3(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, QAbstractVideoBuffer::HandleType a0)
{
    QList<QVideoFrame::PixelFormat> sipRes;
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "F",a0,sipType_QAbstractVideoBuffer_HandleType);

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "H5", sipType_QList_0100QVideoFrame_PixelFormat, &sipRes);

    return sipRes;
}

QVariant sipVH_QtMultimedia_4(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod)
{
    QVariant sipRes;
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "");

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "H5", sipType_QVariant, &sipRes);

    return sipRes;
}

unsigned char* sipVH_QtMultimedia_5(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, QAbstractVideoBuffer::MapMode a0,int*a1,int*a2, int sipResKey)
{
    unsigned char* sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "F",a0,sipType_QAbstractVideoBuffer_MapMode);

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "(Bii)", sipResKey, &sipRes, a1, a2);

    return sipRes;
}

QAbstractVideoBuffer::MapMode sipVH_QtMultimedia_6(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod)
{
    QAbstractVideoBuffer::MapMode sipRes = (QAbstractVideoBuffer::MapMode)0;
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "");

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "F", sipType_QAbstractVideoBuffer_MapMode, &sipRes);

    return sipRes;
}


/* Convert to a sub-class if possible. */
extern "C" {static const sipTypeDef *sipSubClass_QAbstractVideoSurface(void **);}
static const sipTypeDef *sipSubClass_QAbstractVideoSurface(void **sipCppRet)
{
    QObject *sipCpp = reinterpret_cast<QObject *>(*sipCppRet);
    const sipTypeDef *sipType;

#line 37 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtMultimedia/qabstractvideosurface.sip"
    static struct class_graph {
        const char *name;
        sipTypeDef **type;
        int yes, no;
    } graph[] = {
        {sipName_QAudioOutput, &sipType_QAudioOutput, -1, 1},
        {sipName_QAudioInput, &sipType_QAudioInput, -1, 2},
        {sipName_QAbstractVideoSurface, &sipType_QAbstractVideoSurface, -1, -1},
    };
    
    int i = 0;
    
    sipType = NULL;
    
    do
    {
        struct class_graph *cg = &graph[i];
    
        if (cg->name != NULL && sipCpp->inherits(cg->name))
        {
            sipType = *cg->type;
            i = cg->yes;
        }
        else
            i = cg->no;
    }
    while (i >= 0);
#line 449 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtMultimedia/sipQtMultimediacmodule.cpp"

    return sipType;
}
static sipEnumTypeDef enumTypes[] = {
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QVideoSurfaceFormat__YCbCrColorSpace, {0}}, sipNameNr_YCbCrColorSpace, 22, NULL},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QVideoSurfaceFormat__Direction, {0}}, sipNameNr_Direction, 22, NULL},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QVideoFrame__PixelFormat, {0}}, sipNameNr_PixelFormat, 19, NULL},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QVideoFrame__FieldType, {0}}, sipNameNr_FieldType, 19, NULL},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QAudioFormat__Endian, {0}}, sipNameNr_Endian, 10, NULL},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QAudioFormat__SampleType, {0}}, sipNameNr_SampleType, 10, NULL},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QAudio__Mode, {0}}, sipNameNr_Mode, 5, NULL},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QAudio__State, {0}}, sipNameNr_State, 5, NULL},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QAudio__Error, {0}}, sipNameNr_Error, 5, NULL},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QAbstractVideoSurface__Error, {0}}, sipNameNr_Error, 3, NULL},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QAbstractVideoBuffer__MapMode, {0}}, sipNameNr_MapMode, 0, NULL},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QAbstractVideoBuffer__HandleType, {0}}, sipNameNr_HandleType, 0, NULL},
};


/*
 * This defines each type in this module.
 */
static sipTypeDef *typesTable[] = {
    &sipTypeDef_QtMultimedia_QAbstractVideoBuffer.super.ctd_base,
    &enumTypes[11].etd_base,
    &enumTypes[10].etd_base,
    &sipTypeDef_QtMultimedia_QAbstractVideoSurface.super.ctd_base,
    &enumTypes[9].etd_base,
    &sipTypeDef_QtMultimedia_QAudio.super.ctd_base,
    &enumTypes[8].etd_base,
    &enumTypes[6].etd_base,
    &enumTypes[7].etd_base,
    &sipTypeDef_QtMultimedia_QAudioDeviceInfo.super.ctd_base,
    &sipTypeDef_QtMultimedia_QAudioFormat.super.ctd_base,
    &enumTypes[4].etd_base,
    &enumTypes[5].etd_base,
    &sipTypeDef_QtMultimedia_QAudioInput.super.ctd_base,
    &sipTypeDef_QtMultimedia_QAudioOutput.super.ctd_base,
    &sipTypeDef_QtMultimedia_QList_0100QAudioDeviceInfo.mtd_base,
    &sipTypeDef_QtMultimedia_QList_0100QAudioFormat_Endian.mtd_base,
    &sipTypeDef_QtMultimedia_QList_0100QAudioFormat_SampleType.mtd_base,
    &sipTypeDef_QtMultimedia_QList_0100QVideoFrame_PixelFormat.mtd_base,
    &sipTypeDef_QtMultimedia_QVideoFrame.super.ctd_base,
    &enumTypes[3].etd_base,
    &enumTypes[2].etd_base,
    &sipTypeDef_QtMultimedia_QVideoSurfaceFormat.super.ctd_base,
    &enumTypes[1].etd_base,
    &enumTypes[0].etd_base,
};


/*
 * This defines the virtual handlers that this module implements and can be
 * used by other modules.
 */
static sipVirtHandlerFunc virtHandlersTable[] = {
    (sipVirtHandlerFunc)sipVH_QtMultimedia_0,
    (sipVirtHandlerFunc)sipVH_QtMultimedia_1,
    (sipVirtHandlerFunc)sipVH_QtMultimedia_2,
    (sipVirtHandlerFunc)sipVH_QtMultimedia_3,
    (sipVirtHandlerFunc)sipVH_QtMultimedia_4,
    (sipVirtHandlerFunc)sipVH_QtMultimedia_5,
    (sipVirtHandlerFunc)sipVH_QtMultimedia_6,
};


/* This defines the modules that this module needs to import. */
static sipImportedModuleDef importsTable[] = {
    {"PyQt4.QtCore", 1, NULL},
    {"PyQt4.QtGui", -1, NULL},
    {NULL, -1, NULL}
};


/* This defines the class sub-convertors that this module defines. */
static sipSubClassConvertorDef convertorsTable[] = {
    {sipSubClass_QAbstractVideoSurface, {141, 0, 0}, NULL},
    {NULL, {0, 0, 0}, NULL}
};


/* This defines this module. */
sipExportedModuleDef sipModuleAPI_QtMultimedia = {
    0,
    SIP_API_MINOR_NR,
    sipNameNr_PyQt4_QtMultimedia,
    0,
    -1,
    sipStrings_QtMultimedia,
    importsTable,
    NULL,
    25,
    typesTable,
    NULL,
    0,
    NULL,
    0,
    NULL,
    virtHandlersTable,
    NULL,
    convertorsTable,
    {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL},
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL
};


/* The SIP API and the APIs of any imported modules. */
const sipAPIDef *sipAPI_QtMultimedia;
const sipExportedModuleDef *sipModuleAPI_QtMultimedia_QtCore;
const sipExportedModuleDef *sipModuleAPI_QtMultimedia_QtGui;

sip_qt_metaobject_func sip_QtMultimedia_qt_metaobject;
sip_qt_metacall_func sip_QtMultimedia_qt_metacall;
sip_qt_metacast_func sip_QtMultimedia_qt_metacast;


/* The Python module initialisation function. */
#if PY_MAJOR_VERSION >= 3
#define SIP_MODULE_ENTRY        PyInit_QtMultimedia
#define SIP_MODULE_TYPE         PyObject *
#define SIP_MODULE_DISCARD(r)   Py_DECREF(r)
#define SIP_MODULE_RETURN(r)    return (r)
#else
#define SIP_MODULE_ENTRY        initQtMultimedia
#define SIP_MODULE_TYPE         void
#define SIP_MODULE_DISCARD(r)
#define SIP_MODULE_RETURN(r)    return
#endif

#if defined(SIP_STATIC_MODULE)
extern "C" SIP_MODULE_TYPE SIP_MODULE_ENTRY()
#else
PyMODINIT_FUNC SIP_MODULE_ENTRY()
#endif
{
    static PyMethodDef sip_methods[] = {
        {0, 0, 0, 0}
    };

#if PY_MAJOR_VERSION >= 3
    static PyModuleDef sip_module_def = {
        PyModuleDef_HEAD_INIT,
        "PyQt4.QtMultimedia",
        NULL,
        -1,
        sip_methods,
        NULL,
        NULL,
        NULL,
        NULL
    };
#endif

    PyObject *sipModule, *sipModuleDict;
    PyObject *sip_sipmod, *sip_capiobj;

    /* Initialise the module and get it's dictionary. */
#if PY_MAJOR_VERSION >= 3
    sipModule = PyModule_Create(&sip_module_def);
#elif PY_VERSION_HEX >= 0x02050000
    sipModule = Py_InitModule(sipName_PyQt4_QtMultimedia, sip_methods);
#else
    sipModule = Py_InitModule(const_cast<char *>(sipName_PyQt4_QtMultimedia), sip_methods);
#endif

    if (sipModule == NULL)
        SIP_MODULE_RETURN(NULL);

    sipModuleDict = PyModule_GetDict(sipModule);

    /* Get the SIP module's API. */
#if PY_VERSION_HEX >= 0x02050000
    sip_sipmod = PyImport_ImportModule(SIP_MODULE_NAME);
#else
    sip_sipmod = PyImport_ImportModule(const_cast<char *>(SIP_MODULE_NAME));
#endif

    if (sip_sipmod == NULL)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(NULL);
    }

    sip_capiobj = PyDict_GetItemString(PyModule_GetDict(sip_sipmod), "_C_API");
    Py_DECREF(sip_sipmod);

#if defined(SIP_USE_PYCAPSULE)
    if (sip_capiobj == NULL || !PyCapsule_CheckExact(sip_capiobj))
#else
    if (sip_capiobj == NULL || !PyCObject_Check(sip_capiobj))
#endif
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(NULL);
    }

#if defined(SIP_USE_PYCAPSULE)
    sipAPI_QtMultimedia = reinterpret_cast<const sipAPIDef *>(PyCapsule_GetPointer(sip_capiobj, SIP_MODULE_NAME "._C_API"));
#else
    sipAPI_QtMultimedia = reinterpret_cast<const sipAPIDef *>(PyCObject_AsVoidPtr(sip_capiobj));
#endif

#if defined(SIP_USE_PYCAPSULE)
    if (sipAPI_QtMultimedia == NULL)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(NULL);
    }
#endif

    /* Export the module and publish it's API. */
    if (sipExportModule(&sipModuleAPI_QtMultimedia,SIP_API_MAJOR_NR,SIP_API_MINOR_NR,0) < 0)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(0);
    }

    sip_QtMultimedia_qt_metaobject = (sip_qt_metaobject_func)sipImportSymbol("qtcore_qt_metaobject");
    sip_QtMultimedia_qt_metacall = (sip_qt_metacall_func)sipImportSymbol("qtcore_qt_metacall");
    sip_QtMultimedia_qt_metacast = (sip_qt_metacast_func)sipImportSymbol("qtcore_qt_metacast");

    if (!sip_QtMultimedia_qt_metacast)
        Py_FatalError("Unable to import qtcore_qt_metacast");

    /* Initialise the module now all its dependencies have been set up. */
    if (sipInitModule(&sipModuleAPI_QtMultimedia,sipModuleDict) < 0)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(0);
    }

    /* Get the APIs of the modules that this one is dependent on. */
    sipModuleAPI_QtMultimedia_QtCore = sipModuleAPI_QtMultimedia.em_imports[0].im_module;
    sipModuleAPI_QtMultimedia_QtGui = sipModuleAPI_QtMultimedia.em_imports[1].im_module;

    SIP_MODULE_RETURN(sipModule);
}
