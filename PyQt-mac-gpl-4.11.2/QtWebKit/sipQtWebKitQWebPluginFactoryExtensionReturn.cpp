/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.3 on Mon Sep 22 17:44:23 2014
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

#include "sipAPIQtWebKit.h"

#line 33 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtWebKit/qwebpluginfactory.sip"
#include <qwebpluginfactory.h>
#line 85 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtWebKit/qwebpluginfactory.sip"
#include <qwebpluginfactory.h>
#line 36 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtWebKit/sipQtWebKitQWebPluginFactoryExtensionReturn.cpp"



/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QWebPluginFactory_ExtensionReturn(void *, const sipTypeDef *);}
static void *cast_QWebPluginFactory_ExtensionReturn(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QWebPluginFactory_ExtensionReturn)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QWebPluginFactory_ExtensionReturn(void *, int);}
static void release_QWebPluginFactory_ExtensionReturn(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QWebPluginFactory::ExtensionReturn *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QWebPluginFactory_ExtensionReturn(void *, SIP_SSIZE_T, const void *);}
static void assign_QWebPluginFactory_ExtensionReturn(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QWebPluginFactory::ExtensionReturn *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QWebPluginFactory::ExtensionReturn *>(sipSrc);
}


extern "C" {static void *array_QWebPluginFactory_ExtensionReturn(SIP_SSIZE_T);}
static void *array_QWebPluginFactory_ExtensionReturn(SIP_SSIZE_T sipNrElem)
{
    return new QWebPluginFactory::ExtensionReturn[sipNrElem];
}


extern "C" {static void *copy_QWebPluginFactory_ExtensionReturn(const void *, SIP_SSIZE_T);}
static void *copy_QWebPluginFactory_ExtensionReturn(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QWebPluginFactory::ExtensionReturn(reinterpret_cast<const QWebPluginFactory::ExtensionReturn *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QWebPluginFactory_ExtensionReturn(sipSimpleWrapper *);}
static void dealloc_QWebPluginFactory_ExtensionReturn(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QWebPluginFactory_ExtensionReturn(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QWebPluginFactory_ExtensionReturn(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QWebPluginFactory_ExtensionReturn(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QWebPluginFactory::ExtensionReturn *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QWebPluginFactory::ExtensionReturn();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QWebPluginFactory::ExtensionReturn* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QWebPluginFactory_ExtensionReturn, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QWebPluginFactory::ExtensionReturn(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}

PyDoc_STRVAR(doc_QWebPluginFactory_ExtensionReturn, "\1QWebPluginFactory.ExtensionReturn()\n"
    "QWebPluginFactory.ExtensionReturn(QWebPluginFactory.ExtensionReturn)");


pyqt4ClassTypeDef sipTypeDef_QtWebKit_QWebPluginFactory_ExtensionReturn = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QWebPluginFactory__ExtensionReturn,
        {0}
    },
    {
        sipNameNr_ExtensionReturn,
        {38, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QWebPluginFactory_ExtensionReturn,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QWebPluginFactory_ExtensionReturn,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QWebPluginFactory_ExtensionReturn,
    assign_QWebPluginFactory_ExtensionReturn,
    array_QWebPluginFactory_ExtensionReturn,
    copy_QWebPluginFactory_ExtensionReturn,
    release_QWebPluginFactory_ExtensionReturn,
    cast_QWebPluginFactory_ExtensionReturn,
    0,
    0,
    0,
    0,
    0,
    0
},
    0,
    0,
    0
};
