/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.3 on Mon Sep 22 17:43:54 2014
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

#include "sipAPIQtGui.h"

#line 876 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 34 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQFileOpenEvent.cpp"

#line 84 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qfile.sip"
#include <qfile.h>
#line 38 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQFileOpenEvent.cpp"
#line 35 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qiodevice.sip"
#include <qiodevice.h>
#line 41 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQFileOpenEvent.cpp"
#line 107 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qurl.sip"
#include <qurl.h>
#line 44 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQFileOpenEvent.cpp"
#line 36 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 47 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQFileOpenEvent.cpp"
#line 31 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 50 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQFileOpenEvent.cpp"


PyDoc_STRVAR(doc_QFileOpenEvent_file, "QFileOpenEvent.file() -> QString");

extern "C" {static PyObject *meth_QFileOpenEvent_file(PyObject *, PyObject *);}
static PyObject *meth_QFileOpenEvent_file(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QFileOpenEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFileOpenEvent, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->file());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileOpenEvent, sipName_file, doc_QFileOpenEvent_file);

    return NULL;
}


PyDoc_STRVAR(doc_QFileOpenEvent_url, "QFileOpenEvent.url() -> QUrl");

extern "C" {static PyObject *meth_QFileOpenEvent_url(PyObject *, PyObject *);}
static PyObject *meth_QFileOpenEvent_url(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QFileOpenEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFileOpenEvent, &sipCpp))
        {
            QUrl*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QUrl(sipCpp->url());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QUrl,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileOpenEvent, sipName_url, doc_QFileOpenEvent_url);

    return NULL;
}


PyDoc_STRVAR(doc_QFileOpenEvent_openFile, "QFileOpenEvent.openFile(QFile, QIODevice.OpenMode) -> bool");

extern "C" {static PyObject *meth_QFileOpenEvent_openFile(PyObject *, PyObject *);}
static PyObject *meth_QFileOpenEvent_openFile(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QFile* a0;
        QIODevice::OpenMode* a1;
        int a1State = 0;
        const QFileOpenEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9J1", &sipSelf, sipType_QFileOpenEvent, &sipCpp, sipType_QFile, &a0, sipType_QIODevice_OpenMode, &a1, &a1State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->openFile(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(a1,sipType_QIODevice_OpenMode,a1State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileOpenEvent, sipName_openFile, doc_QFileOpenEvent_openFile);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QFileOpenEvent(void *, const sipTypeDef *);}
static void *cast_QFileOpenEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QFileOpenEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QEvent)->ctd_cast((QEvent *)(QFileOpenEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QFileOpenEvent(void *, int);}
static void release_QFileOpenEvent(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QFileOpenEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QFileOpenEvent(sipSimpleWrapper *);}
static void dealloc_QFileOpenEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QFileOpenEvent(sipGetAddress(sipSelf),0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QFileOpenEvent[] = {{58, 0, 1}};


static PyMethodDef methods_QFileOpenEvent[] = {
    {SIP_MLNAME_CAST(sipName_file), meth_QFileOpenEvent_file, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileOpenEvent_file)},
    {SIP_MLNAME_CAST(sipName_openFile), meth_QFileOpenEvent_openFile, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileOpenEvent_openFile)},
    {SIP_MLNAME_CAST(sipName_url), meth_QFileOpenEvent_url, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileOpenEvent_url)}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QFileOpenEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QFileOpenEvent,
        {0}
    },
    {
        sipNameNr_QFileOpenEvent,
        {0, 0, 1},
        3, methods_QFileOpenEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QFileOpenEvent,
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
    dealloc_QFileOpenEvent,
    0,
    0,
    0,
    release_QFileOpenEvent,
    cast_QFileOpenEvent,
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
