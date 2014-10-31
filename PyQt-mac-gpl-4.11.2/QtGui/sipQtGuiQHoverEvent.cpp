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

#line 341 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 34 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQHoverEvent.cpp"

#line 31 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 38 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQHoverEvent.cpp"
#line 35 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 41 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQHoverEvent.cpp"


class sipQHoverEvent : public QHoverEvent
{
public:
    sipQHoverEvent(QEvent::Type,const QPoint&,const QPoint&);
    sipQHoverEvent(const QHoverEvent&);
    ~sipQHoverEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQHoverEvent(const sipQHoverEvent &);
    sipQHoverEvent &operator = (const sipQHoverEvent &);
};

sipQHoverEvent::sipQHoverEvent(QEvent::Type a0,const QPoint& a1,const QPoint& a2): QHoverEvent(a0,a1,a2), sipPySelf(0)
{
}

sipQHoverEvent::sipQHoverEvent(const QHoverEvent& a0): QHoverEvent(a0), sipPySelf(0)
{
}

sipQHoverEvent::~sipQHoverEvent()
{
    sipCommonDtor(sipPySelf);
}


PyDoc_STRVAR(doc_QHoverEvent_pos, "QHoverEvent.pos() -> QPoint");

extern "C" {static PyObject *meth_QHoverEvent_pos(PyObject *, PyObject *);}
static PyObject *meth_QHoverEvent_pos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QHoverEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHoverEvent, &sipCpp))
        {
            QPoint*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPoint(sipCpp->pos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHoverEvent, sipName_pos, doc_QHoverEvent_pos);

    return NULL;
}


PyDoc_STRVAR(doc_QHoverEvent_oldPos, "QHoverEvent.oldPos() -> QPoint");

extern "C" {static PyObject *meth_QHoverEvent_oldPos(PyObject *, PyObject *);}
static PyObject *meth_QHoverEvent_oldPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QHoverEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHoverEvent, &sipCpp))
        {
            QPoint*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPoint(sipCpp->oldPos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHoverEvent, sipName_oldPos, doc_QHoverEvent_oldPos);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QHoverEvent(void *, const sipTypeDef *);}
static void *cast_QHoverEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QHoverEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QEvent)->ctd_cast((QEvent *)(QHoverEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QHoverEvent(void *, int);}
static void release_QHoverEvent(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQHoverEvent *>(sipCppV);
    else
        delete reinterpret_cast<QHoverEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QHoverEvent(sipSimpleWrapper *);}
static void dealloc_QHoverEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQHoverEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QHoverEvent(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QHoverEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QHoverEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQHoverEvent *sipCpp = 0;

    {
        QEvent::Type a0;
        const QPoint* a1;
        const QPoint* a2;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "EJ9J9", sipType_QEvent_Type, &a0, sipType_QPoint, &a1, sipType_QPoint, &a2))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQHoverEvent(a0,*a1,*a2);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QHoverEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QHoverEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQHoverEvent(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QHoverEvent[] = {{58, 0, 1}};


static PyMethodDef methods_QHoverEvent[] = {
    {SIP_MLNAME_CAST(sipName_oldPos), meth_QHoverEvent_oldPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QHoverEvent_oldPos)},
    {SIP_MLNAME_CAST(sipName_pos), meth_QHoverEvent_pos, METH_VARARGS, SIP_MLDOC_CAST(doc_QHoverEvent_pos)}
};

PyDoc_STRVAR(doc_QHoverEvent, "\1QHoverEvent(QEvent.Type, QPoint, QPoint)\n"
    "QHoverEvent(QHoverEvent)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QHoverEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QHoverEvent,
        {0}
    },
    {
        sipNameNr_QHoverEvent,
        {0, 0, 1},
        2, methods_QHoverEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QHoverEvent,
    -1,
    -1,
    supers_QHoverEvent,
    0,
    init_type_QHoverEvent,
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
    dealloc_QHoverEvent,
    0,
    0,
    0,
    release_QHoverEvent,
    cast_QHoverEvent,
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
