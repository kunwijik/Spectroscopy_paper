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

#line 656 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 34 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQInputMethodEvent.cpp"

#line 36 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 38 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQInputMethodEvent.cpp"
#line 33 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 41 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQInputMethodEvent.cpp"
#line 656 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 674 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 46 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQInputMethodEvent.cpp"
#line 31 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 49 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQInputMethodEvent.cpp"


class sipQInputMethodEvent : public QInputMethodEvent
{
public:
    sipQInputMethodEvent();
    sipQInputMethodEvent(const QString&,const QList<QInputMethodEvent::Attribute>&);
    sipQInputMethodEvent(const QInputMethodEvent&);
    ~sipQInputMethodEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQInputMethodEvent(const sipQInputMethodEvent &);
    sipQInputMethodEvent &operator = (const sipQInputMethodEvent &);
};

sipQInputMethodEvent::sipQInputMethodEvent(): QInputMethodEvent(), sipPySelf(0)
{
}

sipQInputMethodEvent::sipQInputMethodEvent(const QString& a0,const QList<QInputMethodEvent::Attribute>& a1): QInputMethodEvent(a0,a1), sipPySelf(0)
{
}

sipQInputMethodEvent::sipQInputMethodEvent(const QInputMethodEvent& a0): QInputMethodEvent(a0), sipPySelf(0)
{
}

sipQInputMethodEvent::~sipQInputMethodEvent()
{
    sipCommonDtor(sipPySelf);
}


PyDoc_STRVAR(doc_QInputMethodEvent_setCommitString, "QInputMethodEvent.setCommitString(QString, int from=0, int length=0)");

extern "C" {static PyObject *meth_QInputMethodEvent_setCommitString(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QInputMethodEvent_setCommitString(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        int a1 = 0;
        int a2 = 0;
        QInputMethodEvent *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_from,
            sipName_length,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1|ii", &sipSelf, sipType_QInputMethodEvent, &sipCpp, sipType_QString,&a0, &a0State, &a1, &a2))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setCommitString(*a0,a1,a2);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QInputMethodEvent, sipName_setCommitString, doc_QInputMethodEvent_setCommitString);

    return NULL;
}


PyDoc_STRVAR(doc_QInputMethodEvent_attributes, "QInputMethodEvent.attributes() -> list-of-QInputMethodEvent.Attribute");

extern "C" {static PyObject *meth_QInputMethodEvent_attributes(PyObject *, PyObject *);}
static PyObject *meth_QInputMethodEvent_attributes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QInputMethodEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QInputMethodEvent, &sipCpp))
        {
            QList<QInputMethodEvent::Attribute>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QInputMethodEvent::Attribute>(sipCpp->attributes());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QInputMethodEvent_Attribute,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QInputMethodEvent, sipName_attributes, doc_QInputMethodEvent_attributes);

    return NULL;
}


PyDoc_STRVAR(doc_QInputMethodEvent_preeditString, "QInputMethodEvent.preeditString() -> QString");

extern "C" {static PyObject *meth_QInputMethodEvent_preeditString(PyObject *, PyObject *);}
static PyObject *meth_QInputMethodEvent_preeditString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QInputMethodEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QInputMethodEvent, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->preeditString());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QInputMethodEvent, sipName_preeditString, doc_QInputMethodEvent_preeditString);

    return NULL;
}


PyDoc_STRVAR(doc_QInputMethodEvent_commitString, "QInputMethodEvent.commitString() -> QString");

extern "C" {static PyObject *meth_QInputMethodEvent_commitString(PyObject *, PyObject *);}
static PyObject *meth_QInputMethodEvent_commitString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QInputMethodEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QInputMethodEvent, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->commitString());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QInputMethodEvent, sipName_commitString, doc_QInputMethodEvent_commitString);

    return NULL;
}


PyDoc_STRVAR(doc_QInputMethodEvent_replacementStart, "QInputMethodEvent.replacementStart() -> int");

extern "C" {static PyObject *meth_QInputMethodEvent_replacementStart(PyObject *, PyObject *);}
static PyObject *meth_QInputMethodEvent_replacementStart(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QInputMethodEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QInputMethodEvent, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->replacementStart();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QInputMethodEvent, sipName_replacementStart, doc_QInputMethodEvent_replacementStart);

    return NULL;
}


PyDoc_STRVAR(doc_QInputMethodEvent_replacementLength, "QInputMethodEvent.replacementLength() -> int");

extern "C" {static PyObject *meth_QInputMethodEvent_replacementLength(PyObject *, PyObject *);}
static PyObject *meth_QInputMethodEvent_replacementLength(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QInputMethodEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QInputMethodEvent, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->replacementLength();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QInputMethodEvent, sipName_replacementLength, doc_QInputMethodEvent_replacementLength);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QInputMethodEvent(void *, const sipTypeDef *);}
static void *cast_QInputMethodEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QInputMethodEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QEvent)->ctd_cast((QEvent *)(QInputMethodEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QInputMethodEvent(void *, int);}
static void release_QInputMethodEvent(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQInputMethodEvent *>(sipCppV);
    else
        delete reinterpret_cast<QInputMethodEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QInputMethodEvent(void *, SIP_SSIZE_T, const void *);}
static void assign_QInputMethodEvent(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QInputMethodEvent *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QInputMethodEvent *>(sipSrc);
}


extern "C" {static void *array_QInputMethodEvent(SIP_SSIZE_T);}
static void *array_QInputMethodEvent(SIP_SSIZE_T sipNrElem)
{
    return new QInputMethodEvent[sipNrElem];
}


extern "C" {static void *copy_QInputMethodEvent(const void *, SIP_SSIZE_T);}
static void *copy_QInputMethodEvent(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QInputMethodEvent(reinterpret_cast<const QInputMethodEvent *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QInputMethodEvent(sipSimpleWrapper *);}
static void dealloc_QInputMethodEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQInputMethodEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QInputMethodEvent(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QInputMethodEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QInputMethodEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQInputMethodEvent *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQInputMethodEvent();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        const QList<QInputMethodEvent::Attribute>* a1;
        int a1State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1J1", sipType_QString,&a0, &a0State, sipType_QList_0100QInputMethodEvent_Attribute,&a1, &a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQInputMethodEvent(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QList<QInputMethodEvent::Attribute> *>(a1),sipType_QList_0100QInputMethodEvent_Attribute,a1State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QInputMethodEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QInputMethodEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQInputMethodEvent(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QInputMethodEvent[] = {{58, 0, 1}};


static PyMethodDef methods_QInputMethodEvent[] = {
    {SIP_MLNAME_CAST(sipName_attributes), meth_QInputMethodEvent_attributes, METH_VARARGS, SIP_MLDOC_CAST(doc_QInputMethodEvent_attributes)},
    {SIP_MLNAME_CAST(sipName_commitString), meth_QInputMethodEvent_commitString, METH_VARARGS, SIP_MLDOC_CAST(doc_QInputMethodEvent_commitString)},
    {SIP_MLNAME_CAST(sipName_preeditString), meth_QInputMethodEvent_preeditString, METH_VARARGS, SIP_MLDOC_CAST(doc_QInputMethodEvent_preeditString)},
    {SIP_MLNAME_CAST(sipName_replacementLength), meth_QInputMethodEvent_replacementLength, METH_VARARGS, SIP_MLDOC_CAST(doc_QInputMethodEvent_replacementLength)},
    {SIP_MLNAME_CAST(sipName_replacementStart), meth_QInputMethodEvent_replacementStart, METH_VARARGS, SIP_MLDOC_CAST(doc_QInputMethodEvent_replacementStart)},
    {SIP_MLNAME_CAST(sipName_setCommitString), (PyCFunction)meth_QInputMethodEvent_setCommitString, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QInputMethodEvent_setCommitString)}
};

static sipEnumMemberDef enummembers_QInputMethodEvent[] = {
    {sipName_Cursor, static_cast<int>(QInputMethodEvent::Cursor), 254},
    {sipName_Language, static_cast<int>(QInputMethodEvent::Language), 254},
    {sipName_Ruby, static_cast<int>(QInputMethodEvent::Ruby), 254},
    {sipName_Selection, static_cast<int>(QInputMethodEvent::Selection), 254},
    {sipName_TextFormat, static_cast<int>(QInputMethodEvent::TextFormat), 254},
};

PyDoc_STRVAR(doc_QInputMethodEvent, "\1QInputMethodEvent()\n"
    "QInputMethodEvent(QString, list-of-QInputMethodEvent.Attribute)\n"
    "QInputMethodEvent(QInputMethodEvent)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QInputMethodEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QInputMethodEvent,
        {0}
    },
    {
        sipNameNr_QInputMethodEvent,
        {0, 0, 1},
        6, methods_QInputMethodEvent,
        5, enummembers_QInputMethodEvent,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QInputMethodEvent,
    -1,
    -1,
    supers_QInputMethodEvent,
    0,
    init_type_QInputMethodEvent,
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
    dealloc_QInputMethodEvent,
    assign_QInputMethodEvent,
    array_QInputMethodEvent,
    copy_QInputMethodEvent,
    release_QInputMethodEvent,
    cast_QInputMethodEvent,
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
