/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.3 on Mon Sep 22 17:43:44 2014
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

#include "sipAPIQtCore.h"

#line 31 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qlibraryinfo.sip"
#include <qlibraryinfo.h>
#line 34 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtCore/sipQtCoreQLibraryInfo.cpp"

#line 35 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qdatetime.sip"
#include <qdatetime.h>
#line 38 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtCore/sipQtCoreQLibraryInfo.cpp"
#line 36 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 41 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtCore/sipQtCoreQLibraryInfo.cpp"


PyDoc_STRVAR(doc_QLibraryInfo_licensee, "QLibraryInfo.licensee() -> QString");

extern "C" {static PyObject *meth_QLibraryInfo_licensee(PyObject *, PyObject *);}
static PyObject *meth_QLibraryInfo_licensee(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(QLibraryInfo::licensee());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLibraryInfo, sipName_licensee, doc_QLibraryInfo_licensee);

    return NULL;
}


PyDoc_STRVAR(doc_QLibraryInfo_licensedProducts, "QLibraryInfo.licensedProducts() -> QString");

extern "C" {static PyObject *meth_QLibraryInfo_licensedProducts(PyObject *, PyObject *);}
static PyObject *meth_QLibraryInfo_licensedProducts(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(QLibraryInfo::licensedProducts());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLibraryInfo, sipName_licensedProducts, doc_QLibraryInfo_licensedProducts);

    return NULL;
}


PyDoc_STRVAR(doc_QLibraryInfo_buildKey, "QLibraryInfo.buildKey() -> QString");

extern "C" {static PyObject *meth_QLibraryInfo_buildKey(PyObject *, PyObject *);}
static PyObject *meth_QLibraryInfo_buildKey(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(QLibraryInfo::buildKey());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLibraryInfo, sipName_buildKey, doc_QLibraryInfo_buildKey);

    return NULL;
}


PyDoc_STRVAR(doc_QLibraryInfo_location, "QLibraryInfo.location(QLibraryInfo.LibraryLocation) -> QString");

extern "C" {static PyObject *meth_QLibraryInfo_location(PyObject *, PyObject *);}
static PyObject *meth_QLibraryInfo_location(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QLibraryInfo::LibraryLocation a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "E", sipType_QLibraryInfo_LibraryLocation, &a0))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(QLibraryInfo::location(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLibraryInfo, sipName_location, doc_QLibraryInfo_location);

    return NULL;
}


PyDoc_STRVAR(doc_QLibraryInfo_buildDate, "QLibraryInfo.buildDate() -> QDate");

extern "C" {static PyObject *meth_QLibraryInfo_buildDate(PyObject *, PyObject *);}
static PyObject *meth_QLibraryInfo_buildDate(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QDate*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QDate(QLibraryInfo::buildDate());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QDate,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLibraryInfo, sipName_buildDate, doc_QLibraryInfo_buildDate);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QLibraryInfo(void *, const sipTypeDef *);}
static void *cast_QLibraryInfo(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QLibraryInfo)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QLibraryInfo(void *, int);}
static void release_QLibraryInfo(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QLibraryInfo *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QLibraryInfo(sipSimpleWrapper *);}
static void dealloc_QLibraryInfo(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QLibraryInfo(sipGetAddress(sipSelf),0);
    }
}


static PyMethodDef methods_QLibraryInfo[] = {
    {SIP_MLNAME_CAST(sipName_buildDate), meth_QLibraryInfo_buildDate, METH_VARARGS, SIP_MLDOC_CAST(doc_QLibraryInfo_buildDate)},
    {SIP_MLNAME_CAST(sipName_buildKey), meth_QLibraryInfo_buildKey, METH_VARARGS, SIP_MLDOC_CAST(doc_QLibraryInfo_buildKey)},
    {SIP_MLNAME_CAST(sipName_licensedProducts), meth_QLibraryInfo_licensedProducts, METH_VARARGS, SIP_MLDOC_CAST(doc_QLibraryInfo_licensedProducts)},
    {SIP_MLNAME_CAST(sipName_licensee), meth_QLibraryInfo_licensee, METH_VARARGS, SIP_MLDOC_CAST(doc_QLibraryInfo_licensee)},
    {SIP_MLNAME_CAST(sipName_location), meth_QLibraryInfo_location, METH_VARARGS, SIP_MLDOC_CAST(doc_QLibraryInfo_location)}
};

static sipEnumMemberDef enummembers_QLibraryInfo[] = {
    {sipName_BinariesPath, static_cast<int>(QLibraryInfo::BinariesPath), 90},
    {sipName_DataPath, static_cast<int>(QLibraryInfo::DataPath), 90},
    {sipName_DemosPath, static_cast<int>(QLibraryInfo::DemosPath), 90},
    {sipName_DocumentationPath, static_cast<int>(QLibraryInfo::DocumentationPath), 90},
    {sipName_ExamplesPath, static_cast<int>(QLibraryInfo::ExamplesPath), 90},
    {sipName_HeadersPath, static_cast<int>(QLibraryInfo::HeadersPath), 90},
    {sipName_ImportsPath, static_cast<int>(QLibraryInfo::ImportsPath), 90},
    {sipName_LibrariesPath, static_cast<int>(QLibraryInfo::LibrariesPath), 90},
    {sipName_PluginsPath, static_cast<int>(QLibraryInfo::PluginsPath), 90},
    {sipName_PrefixPath, static_cast<int>(QLibraryInfo::PrefixPath), 90},
    {sipName_SettingsPath, static_cast<int>(QLibraryInfo::SettingsPath), 90},
    {sipName_TranslationsPath, static_cast<int>(QLibraryInfo::TranslationsPath), 90},
};


pyqt4ClassTypeDef sipTypeDef_QtCore_QLibraryInfo = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QLibraryInfo,
        {0}
    },
    {
        sipNameNr_QLibraryInfo,
        {0, 0, 1},
        5, methods_QLibraryInfo,
        12, enummembers_QLibraryInfo,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    0,
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
    dealloc_QLibraryInfo,
    0,
    0,
    0,
    release_QLibraryInfo,
    cast_QLibraryInfo,
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
