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

#line 33 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qstatemachine.sip"
#include <qstatemachine.h>
#line 40 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qstatemachine.sip"
#include <qstatemachine.h>
#line 36 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtCore/sipQtCoreQStateMachineSignalEvent.cpp"

#line 33 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 40 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtCore/sipQtCoreQStateMachineSignalEvent.cpp"
#line 35 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 43 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtCore/sipQtCoreQStateMachineSignalEvent.cpp"
#line 274 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 46 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtCore/sipQtCoreQStateMachineSignalEvent.cpp"
#line 34 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 49 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtCore/sipQtCoreQStateMachineSignalEvent.cpp"
#line 31 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 52 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtCore/sipQtCoreQStateMachineSignalEvent.cpp"


PyDoc_STRVAR(doc_QStateMachine_SignalEvent_sender, "QStateMachine.SignalEvent.sender() -> QObject");

extern "C" {static PyObject *meth_QStateMachine_SignalEvent_sender(PyObject *, PyObject *);}
static PyObject *meth_QStateMachine_SignalEvent_sender(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QStateMachine::SignalEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QStateMachine_SignalEvent, &sipCpp))
        {
            QObject*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->sender();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_SignalEvent, sipName_sender, doc_QStateMachine_SignalEvent_sender);

    return NULL;
}


PyDoc_STRVAR(doc_QStateMachine_SignalEvent_signalIndex, "QStateMachine.SignalEvent.signalIndex() -> int");

extern "C" {static PyObject *meth_QStateMachine_SignalEvent_signalIndex(PyObject *, PyObject *);}
static PyObject *meth_QStateMachine_SignalEvent_signalIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QStateMachine::SignalEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QStateMachine_SignalEvent, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->signalIndex();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_SignalEvent, sipName_signalIndex, doc_QStateMachine_SignalEvent_signalIndex);

    return NULL;
}


PyDoc_STRVAR(doc_QStateMachine_SignalEvent_arguments, "QStateMachine.SignalEvent.arguments() -> list-of-QVariant");

extern "C" {static PyObject *meth_QStateMachine_SignalEvent_arguments(PyObject *, PyObject *);}
static PyObject *meth_QStateMachine_SignalEvent_arguments(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QStateMachine::SignalEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QStateMachine_SignalEvent, &sipCpp))
        {
            QList<QVariant>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QVariant>(sipCpp->arguments());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_SignalEvent, sipName_arguments, doc_QStateMachine_SignalEvent_arguments);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QStateMachine_SignalEvent(void *, const sipTypeDef *);}
static void *cast_QStateMachine_SignalEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QStateMachine_SignalEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QEvent)->ctd_cast((QEvent *)(QStateMachine::SignalEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStateMachine_SignalEvent(void *, int);}
static void release_QStateMachine_SignalEvent(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QStateMachine::SignalEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QStateMachine_SignalEvent(sipSimpleWrapper *);}
static void dealloc_QStateMachine_SignalEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStateMachine_SignalEvent(sipGetAddress(sipSelf),0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStateMachine_SignalEvent[] = {{58, 255, 1}};


static PyMethodDef methods_QStateMachine_SignalEvent[] = {
    {SIP_MLNAME_CAST(sipName_arguments), meth_QStateMachine_SignalEvent_arguments, METH_VARARGS, SIP_MLDOC_CAST(doc_QStateMachine_SignalEvent_arguments)},
    {SIP_MLNAME_CAST(sipName_sender), meth_QStateMachine_SignalEvent_sender, METH_VARARGS, SIP_MLDOC_CAST(doc_QStateMachine_SignalEvent_sender)},
    {SIP_MLNAME_CAST(sipName_signalIndex), meth_QStateMachine_SignalEvent_signalIndex, METH_VARARGS, SIP_MLDOC_CAST(doc_QStateMachine_SignalEvent_signalIndex)}
};


pyqt4ClassTypeDef sipTypeDef_QtCore_QStateMachine_SignalEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QStateMachine__SignalEvent,
        {0}
    },
    {
        sipNameNr_SignalEvent,
        {191, 255, 0},
        3, methods_QStateMachine_SignalEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QStateMachine_SignalEvent,
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
    dealloc_QStateMachine_SignalEvent,
    0,
    0,
    0,
    release_QStateMachine_SignalEvent,
    cast_QStateMachine_SignalEvent,
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
