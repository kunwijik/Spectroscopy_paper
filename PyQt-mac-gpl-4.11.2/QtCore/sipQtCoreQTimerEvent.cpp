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

#line 338 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 34 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtCore/sipQtCoreQTimerEvent.cpp"

#line 31 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 38 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtCore/sipQtCoreQTimerEvent.cpp"


class sipQTimerEvent : public QTimerEvent
{
public:
    sipQTimerEvent(int);
    sipQTimerEvent(const QTimerEvent&);
    ~sipQTimerEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQTimerEvent(const sipQTimerEvent &);
    sipQTimerEvent &operator = (const sipQTimerEvent &);
};

sipQTimerEvent::sipQTimerEvent(int a0): QTimerEvent(a0), sipPySelf(0)
{
}

sipQTimerEvent::sipQTimerEvent(const QTimerEvent& a0): QTimerEvent(a0), sipPySelf(0)
{
}

sipQTimerEvent::~sipQTimerEvent()
{
    sipCommonDtor(sipPySelf);
}


PyDoc_STRVAR(doc_QTimerEvent_timerId, "QTimerEvent.timerId() -> int");

extern "C" {static PyObject *meth_QTimerEvent_timerId(PyObject *, PyObject *);}
static PyObject *meth_QTimerEvent_timerId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTimerEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTimerEvent, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->timerId();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTimerEvent, sipName_timerId, doc_QTimerEvent_timerId);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QTimerEvent(void *, const sipTypeDef *);}
static void *cast_QTimerEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QTimerEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QEvent)->ctd_cast((QEvent *)(QTimerEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTimerEvent(void *, int);}
static void release_QTimerEvent(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQTimerEvent *>(sipCppV);
    else
        delete reinterpret_cast<QTimerEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QTimerEvent(sipSimpleWrapper *);}
static void dealloc_QTimerEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQTimerEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QTimerEvent(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QTimerEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTimerEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQTimerEvent *sipCpp = 0;

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQTimerEvent(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QTimerEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QTimerEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQTimerEvent(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QTimerEvent[] = {{58, 255, 1}};


static PyMethodDef methods_QTimerEvent[] = {
    {SIP_MLNAME_CAST(sipName_timerId), meth_QTimerEvent_timerId, METH_VARARGS, SIP_MLDOC_CAST(doc_QTimerEvent_timerId)}
};

PyDoc_STRVAR(doc_QTimerEvent, "\1QTimerEvent(int)\n"
    "QTimerEvent(QTimerEvent)");


pyqt4ClassTypeDef sipTypeDef_QtCore_QTimerEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QTimerEvent,
        {0}
    },
    {
        sipNameNr_QTimerEvent,
        {0, 0, 1},
        1, methods_QTimerEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTimerEvent,
    -1,
    -1,
    supers_QTimerEvent,
    0,
    init_type_QTimerEvent,
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
    dealloc_QTimerEvent,
    0,
    0,
    0,
    release_QTimerEvent,
    cast_QTimerEvent,
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
