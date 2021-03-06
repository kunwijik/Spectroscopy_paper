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

#line 31 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qthread.sip"
#include <qthread.h>
#line 34 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtCore/sipQtCoreQThread.cpp"

#line 34 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 38 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtCore/sipQtCoreQThread.cpp"
#line 31 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 41 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtCore/sipQtCoreQThread.cpp"
#line 355 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 44 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtCore/sipQtCoreQThread.cpp"
#line 338 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 47 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtCore/sipQtCoreQThread.cpp"
#line 274 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 50 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtCore/sipQtCoreQThread.cpp"
#line 33 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 53 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtCore/sipQtCoreQThread.cpp"
#line 37 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 56 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtCore/sipQtCoreQThread.cpp"
#line 35 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 59 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtCore/sipQtCoreQThread.cpp"
#line 120 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 62 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtCore/sipQtCoreQThread.cpp"
#line 36 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 65 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtCore/sipQtCoreQThread.cpp"
#line 35 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 68 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtCore/sipQtCoreQThread.cpp"
#line 31 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 71 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtCore/sipQtCoreQThread.cpp"


class sipQThread : public QThread
{
public:
    sipQThread(QObject*);
    virtual ~sipQThread();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void disconnectNotify(const char*);
    void connectNotify(const char*);
    void customEvent(QEvent*);
    void childEvent(QChildEvent*);
    void timerEvent(QTimerEvent*);
    bool eventFilter(QObject*,QEvent*);
    bool event(QEvent*);
    void run();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQThread(const sipQThread &);
    sipQThread &operator = (const sipQThread &);

    char sipPyMethods[8];
};

sipQThread::sipQThread(QObject*a0): QThread(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQThread::~sipQThread()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQThread::metaObject() const
{
    return sip_QtCore_qt_metaobject(sipPySelf,sipType_QThread);
}

int sipQThread::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QThread::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtCore_qt_metacall(sipPySelf,sipType_QThread,_c,_id,_a);

    return _id;
}

void *sipQThread::qt_metacast(const char *_clname)
{
    return (sip_QtCore_qt_metacast(sipPySelf, sipType_QThread, _clname)) ? this : QThread::qt_metacast(_clname);
}

void sipQThread::disconnectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QThread::disconnectNotify(a0);
        return;
    }

    extern void sipVH_QtCore_24(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtCore_24(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQThread::connectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QThread::connectNotify(a0);
        return;
    }

    extern void sipVH_QtCore_24(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    sipVH_QtCore_24(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQThread::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QThread::customEvent(a0);
        return;
    }

    extern void sipVH_QtCore_17(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    sipVH_QtCore_17(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQThread::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QThread::childEvent(a0);
        return;
    }

    extern void sipVH_QtCore_25(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    sipVH_QtCore_25(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQThread::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QThread::timerEvent(a0);
        return;
    }

    extern void sipVH_QtCore_9(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    sipVH_QtCore_9(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQThread::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QThread::eventFilter(a0,a1);

    extern bool sipVH_QtCore_18(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return sipVH_QtCore_18(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQThread::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QThread::event(a0);

    extern bool sipVH_QtCore_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return sipVH_QtCore_5(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQThread::run()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_run);

    if (!sipMeth)
    {
        QThread::run();
        sipEndThread();
        return;
    }

    extern void sipVH_QtCore_11(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH_QtCore_11(sipGILState, 0, sipPySelf, sipMeth);

    sipEndThread();
}


PyDoc_STRVAR(doc_QThread_currentThread, "QThread.currentThread() -> QThread");

extern "C" {static PyObject *meth_QThread_currentThread(PyObject *, PyObject *);}
static PyObject *meth_QThread_currentThread(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QThread*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QThread::currentThread();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QThread,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QThread, sipName_currentThread, doc_QThread_currentThread);

    return NULL;
}


PyDoc_STRVAR(doc_QThread_currentThreadId, "QThread.currentThreadId() -> sip.voidptr");

extern "C" {static PyObject *meth_QThread_currentThreadId(PyObject *, PyObject *);}
static PyObject *meth_QThread_currentThreadId(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            Qt::HANDLE sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QThread::currentThreadId();
            Py_END_ALLOW_THREADS

            return sipConvertFromVoidPtr((void *)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QThread, sipName_currentThreadId, doc_QThread_currentThreadId);

    return NULL;
}


PyDoc_STRVAR(doc_QThread_idealThreadCount, "QThread.idealThreadCount() -> int");

extern "C" {static PyObject *meth_QThread_idealThreadCount(PyObject *, PyObject *);}
static PyObject *meth_QThread_idealThreadCount(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QThread::idealThreadCount();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QThread, sipName_idealThreadCount, doc_QThread_idealThreadCount);

    return NULL;
}


PyDoc_STRVAR(doc_QThread_yieldCurrentThread, "QThread.yieldCurrentThread()");

extern "C" {static PyObject *meth_QThread_yieldCurrentThread(PyObject *, PyObject *);}
static PyObject *meth_QThread_yieldCurrentThread(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            QThread::yieldCurrentThread();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QThread, sipName_yieldCurrentThread, doc_QThread_yieldCurrentThread);

    return NULL;
}


PyDoc_STRVAR(doc_QThread_isFinished, "QThread.isFinished() -> bool");

extern "C" {static PyObject *meth_QThread_isFinished(PyObject *, PyObject *);}
static PyObject *meth_QThread_isFinished(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QThread *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QThread, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isFinished();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QThread, sipName_isFinished, doc_QThread_isFinished);

    return NULL;
}


PyDoc_STRVAR(doc_QThread_isRunning, "QThread.isRunning() -> bool");

extern "C" {static PyObject *meth_QThread_isRunning(PyObject *, PyObject *);}
static PyObject *meth_QThread_isRunning(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QThread *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QThread, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isRunning();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QThread, sipName_isRunning, doc_QThread_isRunning);

    return NULL;
}


PyDoc_STRVAR(doc_QThread_setPriority, "QThread.setPriority(QThread.Priority)");

extern "C" {static PyObject *meth_QThread_setPriority(PyObject *, PyObject *);}
static PyObject *meth_QThread_setPriority(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QThread::Priority a0;
        QThread *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QThread, &sipCpp, sipType_QThread_Priority, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setPriority(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QThread, sipName_setPriority, doc_QThread_setPriority);

    return NULL;
}


PyDoc_STRVAR(doc_QThread_priority, "QThread.priority() -> QThread.Priority");

extern "C" {static PyObject *meth_QThread_priority(PyObject *, PyObject *);}
static PyObject *meth_QThread_priority(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QThread *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QThread, &sipCpp))
        {
            QThread::Priority sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->priority();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QThread_Priority);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QThread, sipName_priority, doc_QThread_priority);

    return NULL;
}


PyDoc_STRVAR(doc_QThread_setStackSize, "QThread.setStackSize(int)");

extern "C" {static PyObject *meth_QThread_setStackSize(PyObject *, PyObject *);}
static PyObject *meth_QThread_setStackSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        uint a0;
        QThread *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bu", &sipSelf, sipType_QThread, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setStackSize(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QThread, sipName_setStackSize, doc_QThread_setStackSize);

    return NULL;
}


PyDoc_STRVAR(doc_QThread_stackSize, "QThread.stackSize() -> int");

extern "C" {static PyObject *meth_QThread_stackSize(PyObject *, PyObject *);}
static PyObject *meth_QThread_stackSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QThread *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QThread, &sipCpp))
        {
            uint sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->stackSize();
            Py_END_ALLOW_THREADS

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QThread, sipName_stackSize, doc_QThread_stackSize);

    return NULL;
}


PyDoc_STRVAR(doc_QThread_exit, "QThread.exit(int returnCode=0)");

extern "C" {static PyObject *meth_QThread_exit(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QThread_exit(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        int a0 = 0;
        QThread *sipCpp;

        static const char *sipKwdList[] = {
            sipName_returnCode,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|i", &sipSelf, sipType_QThread, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->exit(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QThread, sipName_exit, doc_QThread_exit);

    return NULL;
}


PyDoc_STRVAR(doc_QThread_start, "QThread.start(QThread.Priority priority=QThread.InheritPriority)");

extern "C" {static PyObject *meth_QThread_start(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QThread_start(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QThread::Priority a0 = QThread::InheritPriority;
        QThread *sipCpp;

        static const char *sipKwdList[] = {
            sipName_priority,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|E", &sipSelf, sipType_QThread, &sipCpp, sipType_QThread_Priority, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->start(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QThread, sipName_start, doc_QThread_start);

    return NULL;
}


PyDoc_STRVAR(doc_QThread_terminate, "QThread.terminate()");

extern "C" {static PyObject *meth_QThread_terminate(PyObject *, PyObject *);}
static PyObject *meth_QThread_terminate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QThread *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QThread, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->terminate();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QThread, sipName_terminate, doc_QThread_terminate);

    return NULL;
}


PyDoc_STRVAR(doc_QThread_quit, "QThread.quit()");

extern "C" {static PyObject *meth_QThread_quit(PyObject *, PyObject *);}
static PyObject *meth_QThread_quit(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QThread *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QThread, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->quit();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QThread, sipName_quit, doc_QThread_quit);

    return NULL;
}


PyDoc_STRVAR(doc_QThread_wait, "QThread.wait(int msecs=ULONG_MAX) -> bool");

extern "C" {static PyObject *meth_QThread_wait(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QThread_wait(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        unsigned long a0 = ULONG_MAX;
        QThread *sipCpp;

        static const char *sipKwdList[] = {
            sipName_msecs,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|m", &sipSelf, sipType_QThread, &sipCpp, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->wait(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QThread, sipName_wait, doc_QThread_wait);

    return NULL;
}


PyDoc_STRVAR(doc_QThread_run, "QThread.run()");

extern "C" {static PyObject *meth_QThread_run(PyObject *, PyObject *);}
static PyObject *meth_QThread_run(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QThread *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "p", &sipSelf, sipType_QThread, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QThread::run() : sipCpp->run());
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QThread, sipName_run, doc_QThread_run);

    return NULL;
}


PyDoc_STRVAR(doc_QThread_exec_, "QThread.exec_() -> int");

extern "C" {static PyObject *meth_QThread_exec_(PyObject *, PyObject *);}
static PyObject *meth_QThread_exec_(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QThread *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "p", &sipSelf, sipType_QThread, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->exec();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QThread, sipName_exec_, doc_QThread_exec_);

    return NULL;
}


PyDoc_STRVAR(doc_QThread_setTerminationEnabled, "QThread.setTerminationEnabled(bool enabled=True)");

extern "C" {static PyObject *meth_QThread_setTerminationEnabled(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QThread_setTerminationEnabled(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0 = 1;

        static const char *sipKwdList[] = {
            sipName_enabled,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "|b", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            QThread::setTerminationEnabled(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QThread, sipName_setTerminationEnabled, doc_QThread_setTerminationEnabled);

    return NULL;
}


PyDoc_STRVAR(doc_QThread_sleep, "QThread.sleep(int)");

extern "C" {static PyObject *meth_QThread_sleep(PyObject *, PyObject *);}
static PyObject *meth_QThread_sleep(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        unsigned long a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "m", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            QThread::sleep(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QThread, sipName_sleep, doc_QThread_sleep);

    return NULL;
}


PyDoc_STRVAR(doc_QThread_msleep, "QThread.msleep(int)");

extern "C" {static PyObject *meth_QThread_msleep(PyObject *, PyObject *);}
static PyObject *meth_QThread_msleep(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        unsigned long a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "m", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            QThread::msleep(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QThread, sipName_msleep, doc_QThread_msleep);

    return NULL;
}


PyDoc_STRVAR(doc_QThread_usleep, "QThread.usleep(int)");

extern "C" {static PyObject *meth_QThread_usleep(PyObject *, PyObject *);}
static PyObject *meth_QThread_usleep(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        unsigned long a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "m", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            QThread::usleep(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QThread, sipName_usleep, doc_QThread_usleep);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QThread(void *, const sipTypeDef *);}
static void *cast_QThread(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QThread)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QThread *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QThread(void *, int);}
static void release_QThread(void *sipCppV,int)
{
    QThread *sipCpp = reinterpret_cast<QThread *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QThread(sipSimpleWrapper *);}
static void dealloc_QThread(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQThread *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QThread(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QThread(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QThread(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQThread *sipCpp = 0;

    {
        QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQThread(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QThread[] = {{141, 255, 1}};


static PyMethodDef methods_QThread[] = {
    {SIP_MLNAME_CAST(sipName_currentThread), meth_QThread_currentThread, METH_VARARGS, SIP_MLDOC_CAST(doc_QThread_currentThread)},
    {SIP_MLNAME_CAST(sipName_currentThreadId), meth_QThread_currentThreadId, METH_VARARGS, SIP_MLDOC_CAST(doc_QThread_currentThreadId)},
    {SIP_MLNAME_CAST(sipName_exec_), meth_QThread_exec_, METH_VARARGS, SIP_MLDOC_CAST(doc_QThread_exec_)},
    {SIP_MLNAME_CAST(sipName_exit), (PyCFunction)meth_QThread_exit, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QThread_exit)},
    {SIP_MLNAME_CAST(sipName_idealThreadCount), meth_QThread_idealThreadCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QThread_idealThreadCount)},
    {SIP_MLNAME_CAST(sipName_isFinished), meth_QThread_isFinished, METH_VARARGS, SIP_MLDOC_CAST(doc_QThread_isFinished)},
    {SIP_MLNAME_CAST(sipName_isRunning), meth_QThread_isRunning, METH_VARARGS, SIP_MLDOC_CAST(doc_QThread_isRunning)},
    {SIP_MLNAME_CAST(sipName_msleep), meth_QThread_msleep, METH_VARARGS, SIP_MLDOC_CAST(doc_QThread_msleep)},
    {SIP_MLNAME_CAST(sipName_priority), meth_QThread_priority, METH_VARARGS, SIP_MLDOC_CAST(doc_QThread_priority)},
    {SIP_MLNAME_CAST(sipName_quit), meth_QThread_quit, METH_VARARGS, SIP_MLDOC_CAST(doc_QThread_quit)},
    {SIP_MLNAME_CAST(sipName_run), meth_QThread_run, METH_VARARGS, SIP_MLDOC_CAST(doc_QThread_run)},
    {SIP_MLNAME_CAST(sipName_setPriority), meth_QThread_setPriority, METH_VARARGS, SIP_MLDOC_CAST(doc_QThread_setPriority)},
    {SIP_MLNAME_CAST(sipName_setStackSize), meth_QThread_setStackSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QThread_setStackSize)},
    {SIP_MLNAME_CAST(sipName_setTerminationEnabled), (PyCFunction)meth_QThread_setTerminationEnabled, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QThread_setTerminationEnabled)},
    {SIP_MLNAME_CAST(sipName_sleep), meth_QThread_sleep, METH_VARARGS, SIP_MLDOC_CAST(doc_QThread_sleep)},
    {SIP_MLNAME_CAST(sipName_stackSize), meth_QThread_stackSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QThread_stackSize)},
    {SIP_MLNAME_CAST(sipName_start), (PyCFunction)meth_QThread_start, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QThread_start)},
    {SIP_MLNAME_CAST(sipName_terminate), meth_QThread_terminate, METH_VARARGS, SIP_MLDOC_CAST(doc_QThread_terminate)},
    {SIP_MLNAME_CAST(sipName_usleep), meth_QThread_usleep, METH_VARARGS, SIP_MLDOC_CAST(doc_QThread_usleep)},
    {SIP_MLNAME_CAST(sipName_wait), (PyCFunction)meth_QThread_wait, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QThread_wait)},
    {SIP_MLNAME_CAST(sipName_yieldCurrentThread), meth_QThread_yieldCurrentThread, METH_VARARGS, SIP_MLDOC_CAST(doc_QThread_yieldCurrentThread)}
};

static sipEnumMemberDef enummembers_QThread[] = {
    {sipName_HighPriority, static_cast<int>(QThread::HighPriority), 233},
    {sipName_HighestPriority, static_cast<int>(QThread::HighestPriority), 233},
    {sipName_IdlePriority, static_cast<int>(QThread::IdlePriority), 233},
    {sipName_InheritPriority, static_cast<int>(QThread::InheritPriority), 233},
    {sipName_LowPriority, static_cast<int>(QThread::LowPriority), 233},
    {sipName_LowestPriority, static_cast<int>(QThread::LowestPriority), 233},
    {sipName_NormalPriority, static_cast<int>(QThread::NormalPriority), 233},
    {sipName_TimeCriticalPriority, static_cast<int>(QThread::TimeCriticalPriority), 233},
};


/* Define this type's signals. */
static const pyqt4QtSignal signals_QThread[] = {
    {"terminated()", "\1QThread.terminated", 0, 0},
    {"finished()", "\1QThread.finished", 0, 0},
    {"started()", "\1QThread.started", 0, 0},
    {0, 0, 0, 0}
};

PyDoc_STRVAR(doc_QThread, "\1QThread(QObject parent=None)");


pyqt4ClassTypeDef sipTypeDef_QtCore_QThread = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QThread,
        {0}
    },
    {
        sipNameNr_QThread,
        {0, 0, 1},
        21, methods_QThread,
        8, enummembers_QThread,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QThread,
    -1,
    -1,
    supers_QThread,
    0,
    init_type_QThread,
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
    dealloc_QThread,
    0,
    0,
    0,
    release_QThread,
    cast_QThread,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QThread::staticMetaObject,
    0,
    signals_QThread,
};
