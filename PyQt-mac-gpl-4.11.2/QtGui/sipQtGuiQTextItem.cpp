/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.3 on Mon Sep 22 17:43:53 2014
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

#line 35 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtGui/qpaintengine.sip"
#include <qpaintengine.h>
#line 34 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQTextItem.cpp"

#line 35 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtGui/qfont.sip"
#include <qfont.h>
#line 38 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQTextItem.cpp"
#line 36 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 41 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQTextItem.cpp"
#line 35 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtGui/qpaintengine.sip"
#include <qpaintengine.h>
#line 44 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQTextItem.cpp"


PyDoc_STRVAR(doc_QTextItem_descent, "QTextItem.descent() -> float");

extern "C" {static PyObject *meth_QTextItem_descent(PyObject *, PyObject *);}
static PyObject *meth_QTextItem_descent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextItem, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->descent();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextItem, sipName_descent, doc_QTextItem_descent);

    return NULL;
}


PyDoc_STRVAR(doc_QTextItem_ascent, "QTextItem.ascent() -> float");

extern "C" {static PyObject *meth_QTextItem_ascent(PyObject *, PyObject *);}
static PyObject *meth_QTextItem_ascent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextItem, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->ascent();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextItem, sipName_ascent, doc_QTextItem_ascent);

    return NULL;
}


PyDoc_STRVAR(doc_QTextItem_width, "QTextItem.width() -> float");

extern "C" {static PyObject *meth_QTextItem_width(PyObject *, PyObject *);}
static PyObject *meth_QTextItem_width(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextItem, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->width();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextItem, sipName_width, doc_QTextItem_width);

    return NULL;
}


PyDoc_STRVAR(doc_QTextItem_renderFlags, "QTextItem.renderFlags() -> QTextItem.RenderFlags");

extern "C" {static PyObject *meth_QTextItem_renderFlags(PyObject *, PyObject *);}
static PyObject *meth_QTextItem_renderFlags(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextItem, &sipCpp))
        {
            QTextItem::RenderFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextItem::RenderFlags(sipCpp->renderFlags());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextItem_RenderFlags,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextItem, sipName_renderFlags, doc_QTextItem_renderFlags);

    return NULL;
}


PyDoc_STRVAR(doc_QTextItem_text, "QTextItem.text() -> QString");

extern "C" {static PyObject *meth_QTextItem_text(PyObject *, PyObject *);}
static PyObject *meth_QTextItem_text(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextItem, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->text());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextItem, sipName_text, doc_QTextItem_text);

    return NULL;
}


PyDoc_STRVAR(doc_QTextItem_font, "QTextItem.font() -> QFont");

extern "C" {static PyObject *meth_QTextItem_font(PyObject *, PyObject *);}
static PyObject *meth_QTextItem_font(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextItem, &sipCpp))
        {
            QFont*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QFont(sipCpp->font());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QFont,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextItem, sipName_font, doc_QTextItem_font);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QTextItem(void *, const sipTypeDef *);}
static void *cast_QTextItem(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QTextItem)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextItem(void *, int);}
static void release_QTextItem(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QTextItem *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QTextItem(void *, SIP_SSIZE_T, const void *);}
static void assign_QTextItem(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QTextItem *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QTextItem *>(sipSrc);
}


extern "C" {static void *array_QTextItem(SIP_SSIZE_T);}
static void *array_QTextItem(SIP_SSIZE_T sipNrElem)
{
    return new QTextItem[sipNrElem];
}


extern "C" {static void *copy_QTextItem(const void *, SIP_SSIZE_T);}
static void *copy_QTextItem(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QTextItem(reinterpret_cast<const QTextItem *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTextItem(sipSimpleWrapper *);}
static void dealloc_QTextItem(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QTextItem(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QTextItem(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTextItem(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QTextItem *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextItem();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QTextItem* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QTextItem, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextItem(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QTextItem[] = {
    {SIP_MLNAME_CAST(sipName_ascent), meth_QTextItem_ascent, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextItem_ascent)},
    {SIP_MLNAME_CAST(sipName_descent), meth_QTextItem_descent, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextItem_descent)},
    {SIP_MLNAME_CAST(sipName_font), meth_QTextItem_font, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextItem_font)},
    {SIP_MLNAME_CAST(sipName_renderFlags), meth_QTextItem_renderFlags, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextItem_renderFlags)},
    {SIP_MLNAME_CAST(sipName_text), meth_QTextItem_text, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextItem_text)},
    {SIP_MLNAME_CAST(sipName_width), meth_QTextItem_width, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextItem_width)}
};

static sipEnumMemberDef enummembers_QTextItem[] = {
    {sipName_Overline, static_cast<int>(QTextItem::Overline), 689},
    {sipName_RightToLeft, static_cast<int>(QTextItem::RightToLeft), 689},
    {sipName_StrikeOut, static_cast<int>(QTextItem::StrikeOut), 689},
    {sipName_Underline, static_cast<int>(QTextItem::Underline), 689},
};

PyDoc_STRVAR(doc_QTextItem, "\1QTextItem()\n"
    "QTextItem(QTextItem)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QTextItem = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QTextItem,
        {0}
    },
    {
        sipNameNr_QTextItem,
        {0, 0, 1},
        6, methods_QTextItem,
        4, enummembers_QTextItem,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTextItem,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QTextItem,
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
    dealloc_QTextItem,
    assign_QTextItem,
    array_QTextItem,
    copy_QTextItem,
    release_QTextItem,
    cast_QTextItem,
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
