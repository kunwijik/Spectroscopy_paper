/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.3 on Mon Sep 22 18:00:47 2014
 *
 * Copyright (c) 2014 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of QScintilla.
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

#include "sipAPIQsci.h"

#line 29 "sip/qscimacro.sip"
#include <Qsci/qscimacro.h>
#line 34 "./sipQsciQsciMacro.cpp"

#line 29 "sip/qsciscintilla.sip"
#include <Qsci/qsciscintilla.h>
#line 38 "./sipQsciQsciMacro.cpp"
#line 36 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtCore/qstring.sip"
#include <qstring.h>
#line 41 "./sipQsciQsciMacro.cpp"
#line 31 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 44 "./sipQsciQsciMacro.cpp"
#line 355 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 47 "./sipQsciQsciMacro.cpp"
#line 338 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 50 "./sipQsciQsciMacro.cpp"
#line 34 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtCore/qobject.sip"
#include <qobject.h>
#line 53 "./sipQsciQsciMacro.cpp"
#line 274 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtCore/qvariant.sip"
#include <qvariant.h>
#line 56 "./sipQsciQsciMacro.cpp"
#line 33 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtCore/qlist.sip"
#include <qlist.h>
#line 59 "./sipQsciQsciMacro.cpp"
#line 37 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 62 "./sipQsciQsciMacro.cpp"
#line 35 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 65 "./sipQsciQsciMacro.cpp"
#line 120 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtCore/qlist.sip"
#include <qlist.h>
#line 68 "./sipQsciQsciMacro.cpp"
#line 31 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtCore/qthread.sip"
#include <qthread.h>
#line 71 "./sipQsciQsciMacro.cpp"
#line 35 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtCore/qregexp.sip"
#include <qregexp.h>
#line 74 "./sipQsciQsciMacro.cpp"
#line 31 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 77 "./sipQsciQsciMacro.cpp"


class sipQsciMacro : public QsciMacro
{
public:
    sipQsciMacro(QsciScintilla*);
    sipQsciMacro(const QString&,QsciScintilla*);
    virtual ~sipQsciMacro();

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
    void endRecording();
    void startRecording();
    void play();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQsciMacro(const sipQsciMacro &);
    sipQsciMacro &operator = (const sipQsciMacro &);

    char sipPyMethods[10];
};

sipQsciMacro::sipQsciMacro(QsciScintilla*a0): QsciMacro(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQsciMacro::sipQsciMacro(const QString& a0,QsciScintilla*a1): QsciMacro(a0,a1), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQsciMacro::~sipQsciMacro()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQsciMacro::metaObject() const
{
    return sip_Qsci_qt_metaobject(sipPySelf,sipType_QsciMacro);
}

int sipQsciMacro::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QsciMacro::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_Qsci_qt_metacall(sipPySelf,sipType_QsciMacro,_c,_id,_a);

    return _id;
}

void *sipQsciMacro::qt_metacast(const char *_clname)
{
    return (sip_Qsci_qt_metacast(sipPySelf, sipType_QsciMacro, _clname)) ? this : QsciMacro::qt_metacast(_clname);
}

void sipQsciMacro::disconnectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QsciMacro::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    ((sipVH_QtCore_24)(sipModuleAPI_Qsci_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQsciMacro::connectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QsciMacro::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    ((sipVH_QtCore_24)(sipModuleAPI_Qsci_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQsciMacro::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QsciMacro::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_17)(sipModuleAPI_Qsci_QtCore->em_virthandlers[17]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQsciMacro::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QsciMacro::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_Qsci_QtCore->em_virthandlers[25]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQsciMacro::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QsciMacro::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_Qsci_QtCore->em_virthandlers[9]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQsciMacro::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QsciMacro::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_18)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_18)(sipModuleAPI_Qsci_QtCore->em_virthandlers[18]))(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQsciMacro::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QsciMacro::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_Qsci_QtCore->em_virthandlers[5]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQsciMacro::endRecording()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_endRecording);

    if (!sipMeth)
    {
        QsciMacro::endRecording();
        return;
    }

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_Qsci_QtCore->em_virthandlers[11]))(sipGILState, 0, sipPySelf, sipMeth);
}

void sipQsciMacro::startRecording()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipName_startRecording);

    if (!sipMeth)
    {
        QsciMacro::startRecording();
        return;
    }

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_Qsci_QtCore->em_virthandlers[11]))(sipGILState, 0, sipPySelf, sipMeth);
}

void sipQsciMacro::play()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,NULL,sipName_play);

    if (!sipMeth)
    {
        QsciMacro::play();
        return;
    }

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_Qsci_QtCore->em_virthandlers[11]))(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_QsciMacro_clear, "QsciMacro.clear()");

extern "C" {static PyObject *meth_QsciMacro_clear(PyObject *, PyObject *);}
static PyObject *meth_QsciMacro_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QsciMacro *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QsciMacro, &sipCpp))
        {
            sipCpp->clear();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QsciMacro, sipName_clear, doc_QsciMacro_clear);

    return NULL;
}


PyDoc_STRVAR(doc_QsciMacro_load, "QsciMacro.load(QString) -> bool");

extern "C" {static PyObject *meth_QsciMacro_load(PyObject *, PyObject *);}
static PyObject *meth_QsciMacro_load(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QsciMacro *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QsciMacro, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp->load(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QsciMacro, sipName_load, doc_QsciMacro_load);

    return NULL;
}


PyDoc_STRVAR(doc_QsciMacro_save, "QsciMacro.save() -> QString");

extern "C" {static PyObject *meth_QsciMacro_save(PyObject *, PyObject *);}
static PyObject *meth_QsciMacro_save(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QsciMacro *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QsciMacro, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->save());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QsciMacro, sipName_save, doc_QsciMacro_save);

    return NULL;
}


PyDoc_STRVAR(doc_QsciMacro_play, "QsciMacro.play()");

extern "C" {static PyObject *meth_QsciMacro_play(PyObject *, PyObject *);}
static PyObject *meth_QsciMacro_play(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QsciMacro *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QsciMacro, &sipCpp))
        {
            (sipSelfWasArg ? sipCpp->QsciMacro::play() : sipCpp->play());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QsciMacro, sipName_play, doc_QsciMacro_play);

    return NULL;
}


PyDoc_STRVAR(doc_QsciMacro_startRecording, "QsciMacro.startRecording()");

extern "C" {static PyObject *meth_QsciMacro_startRecording(PyObject *, PyObject *);}
static PyObject *meth_QsciMacro_startRecording(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QsciMacro *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QsciMacro, &sipCpp))
        {
            (sipSelfWasArg ? sipCpp->QsciMacro::startRecording() : sipCpp->startRecording());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QsciMacro, sipName_startRecording, doc_QsciMacro_startRecording);

    return NULL;
}


PyDoc_STRVAR(doc_QsciMacro_endRecording, "QsciMacro.endRecording()");

extern "C" {static PyObject *meth_QsciMacro_endRecording(PyObject *, PyObject *);}
static PyObject *meth_QsciMacro_endRecording(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QsciMacro *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QsciMacro, &sipCpp))
        {
            (sipSelfWasArg ? sipCpp->QsciMacro::endRecording() : sipCpp->endRecording());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QsciMacro, sipName_endRecording, doc_QsciMacro_endRecording);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QsciMacro(void *, const sipTypeDef *);}
static void *cast_QsciMacro(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QsciMacro)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QsciMacro *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QsciMacro(void *, int);}
static void release_QsciMacro(void *sipCppV,int)
{
    QsciMacro *sipCpp = reinterpret_cast<QsciMacro *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QsciMacro(sipSimpleWrapper *);}
static void dealloc_QsciMacro(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQsciMacro *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QsciMacro(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QsciMacro(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QsciMacro(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQsciMacro *sipCpp = 0;

    {
        QsciScintilla* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "JH", sipType_QsciScintilla, &a0, sipOwner))
        {
            sipCpp = new sipQsciMacro(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        QsciScintilla* a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1JH", sipType_QString,&a0, &a0State, sipType_QsciScintilla, &a1, sipOwner))
        {
            sipCpp = new sipQsciMacro(*a0,a1);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QsciMacro[] = {{141, 0, 1}};


static PyMethodDef methods_QsciMacro[] = {
    {SIP_MLNAME_CAST(sipName_clear), meth_QsciMacro_clear, METH_VARARGS, SIP_MLDOC_CAST(doc_QsciMacro_clear)},
    {SIP_MLNAME_CAST(sipName_endRecording), meth_QsciMacro_endRecording, METH_VARARGS, SIP_MLDOC_CAST(doc_QsciMacro_endRecording)},
    {SIP_MLNAME_CAST(sipName_load), meth_QsciMacro_load, METH_VARARGS, SIP_MLDOC_CAST(doc_QsciMacro_load)},
    {SIP_MLNAME_CAST(sipName_play), meth_QsciMacro_play, METH_VARARGS, SIP_MLDOC_CAST(doc_QsciMacro_play)},
    {SIP_MLNAME_CAST(sipName_save), meth_QsciMacro_save, METH_VARARGS, SIP_MLDOC_CAST(doc_QsciMacro_save)},
    {SIP_MLNAME_CAST(sipName_startRecording), meth_QsciMacro_startRecording, METH_VARARGS, SIP_MLDOC_CAST(doc_QsciMacro_startRecording)}
};

PyDoc_STRVAR(doc_QsciMacro, "\1QsciMacro(QsciScintilla)\n"
    "QsciMacro(QString, QsciScintilla)");


pyqt4ClassTypeDef sipTypeDef_Qsci_QsciMacro = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QsciMacro,
        {0}
    },
    {
        sipNameNr_QsciMacro,
        {0, 0, 1},
        6, methods_QsciMacro,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QsciMacro,
    -1,
    -1,
    supers_QsciMacro,
    0,
    init_type_QsciMacro,
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
    dealloc_QsciMacro,
    0,
    0,
    0,
    release_QsciMacro,
    cast_QsciMacro,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QsciMacro::staticMetaObject,
    0,
    0
};
