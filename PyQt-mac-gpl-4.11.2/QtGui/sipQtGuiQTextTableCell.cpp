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

#line 31 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtGui/qtexttable.sip"
#include <qtexttable.h>
#line 34 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQTextTableCell.cpp"

#line 31 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtGui/qtextcursor.sip"
#include <qtextcursor.h>
#line 38 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQTextTableCell.cpp"
#line 336 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 41 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQTextTableCell.cpp"


PyDoc_STRVAR(doc_QTextTableCell_format, "QTextTableCell.format() -> QTextCharFormat");

extern "C" {static PyObject *meth_QTextTableCell_format(PyObject *, PyObject *);}
static PyObject *meth_QTextTableCell_format(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextTableCell *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextTableCell, &sipCpp))
        {
            QTextCharFormat*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextCharFormat(sipCpp->format());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextCharFormat,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextTableCell, sipName_format, doc_QTextTableCell_format);

    return NULL;
}


PyDoc_STRVAR(doc_QTextTableCell_setFormat, "QTextTableCell.setFormat(QTextCharFormat)");

extern "C" {static PyObject *meth_QTextTableCell_setFormat(PyObject *, PyObject *);}
static PyObject *meth_QTextTableCell_setFormat(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextCharFormat* a0;
        QTextTableCell *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QTextTableCell, &sipCpp, sipType_QTextCharFormat, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setFormat(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextTableCell, sipName_setFormat, doc_QTextTableCell_setFormat);

    return NULL;
}


PyDoc_STRVAR(doc_QTextTableCell_row, "QTextTableCell.row() -> int");

extern "C" {static PyObject *meth_QTextTableCell_row(PyObject *, PyObject *);}
static PyObject *meth_QTextTableCell_row(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextTableCell *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextTableCell, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->row();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextTableCell, sipName_row, doc_QTextTableCell_row);

    return NULL;
}


PyDoc_STRVAR(doc_QTextTableCell_column, "QTextTableCell.column() -> int");

extern "C" {static PyObject *meth_QTextTableCell_column(PyObject *, PyObject *);}
static PyObject *meth_QTextTableCell_column(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextTableCell *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextTableCell, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->column();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextTableCell, sipName_column, doc_QTextTableCell_column);

    return NULL;
}


PyDoc_STRVAR(doc_QTextTableCell_rowSpan, "QTextTableCell.rowSpan() -> int");

extern "C" {static PyObject *meth_QTextTableCell_rowSpan(PyObject *, PyObject *);}
static PyObject *meth_QTextTableCell_rowSpan(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextTableCell *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextTableCell, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->rowSpan();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextTableCell, sipName_rowSpan, doc_QTextTableCell_rowSpan);

    return NULL;
}


PyDoc_STRVAR(doc_QTextTableCell_columnSpan, "QTextTableCell.columnSpan() -> int");

extern "C" {static PyObject *meth_QTextTableCell_columnSpan(PyObject *, PyObject *);}
static PyObject *meth_QTextTableCell_columnSpan(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextTableCell *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextTableCell, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->columnSpan();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextTableCell, sipName_columnSpan, doc_QTextTableCell_columnSpan);

    return NULL;
}


PyDoc_STRVAR(doc_QTextTableCell_isValid, "QTextTableCell.isValid() -> bool");

extern "C" {static PyObject *meth_QTextTableCell_isValid(PyObject *, PyObject *);}
static PyObject *meth_QTextTableCell_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextTableCell *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextTableCell, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isValid();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextTableCell, sipName_isValid, doc_QTextTableCell_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QTextTableCell_firstCursorPosition, "QTextTableCell.firstCursorPosition() -> QTextCursor");

extern "C" {static PyObject *meth_QTextTableCell_firstCursorPosition(PyObject *, PyObject *);}
static PyObject *meth_QTextTableCell_firstCursorPosition(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextTableCell *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextTableCell, &sipCpp))
        {
            QTextCursor*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextCursor(sipCpp->firstCursorPosition());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextCursor,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextTableCell, sipName_firstCursorPosition, doc_QTextTableCell_firstCursorPosition);

    return NULL;
}


PyDoc_STRVAR(doc_QTextTableCell_lastCursorPosition, "QTextTableCell.lastCursorPosition() -> QTextCursor");

extern "C" {static PyObject *meth_QTextTableCell_lastCursorPosition(PyObject *, PyObject *);}
static PyObject *meth_QTextTableCell_lastCursorPosition(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextTableCell *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextTableCell, &sipCpp))
        {
            QTextCursor*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextCursor(sipCpp->lastCursorPosition());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextCursor,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextTableCell, sipName_lastCursorPosition, doc_QTextTableCell_lastCursorPosition);

    return NULL;
}


PyDoc_STRVAR(doc_QTextTableCell_tableCellFormatIndex, "QTextTableCell.tableCellFormatIndex() -> int");

extern "C" {static PyObject *meth_QTextTableCell_tableCellFormatIndex(PyObject *, PyObject *);}
static PyObject *meth_QTextTableCell_tableCellFormatIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextTableCell *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextTableCell, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->tableCellFormatIndex();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextTableCell, sipName_tableCellFormatIndex, doc_QTextTableCell_tableCellFormatIndex);

    return NULL;
}


extern "C" {static PyObject *slot_QTextTableCell___ne__(PyObject *,PyObject *);}
static PyObject *slot_QTextTableCell___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextTableCell *sipCpp = reinterpret_cast<QTextTableCell *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextTableCell));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTextTableCell* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QTextTableCell, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QTextTableCell::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QTextTableCell,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QTextTableCell___eq__(PyObject *,PyObject *);}
static PyObject *slot_QTextTableCell___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextTableCell *sipCpp = reinterpret_cast<QTextTableCell *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextTableCell));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTextTableCell* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QTextTableCell, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QTextTableCell::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QTextTableCell,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QTextTableCell(void *, const sipTypeDef *);}
static void *cast_QTextTableCell(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QTextTableCell)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextTableCell(void *, int);}
static void release_QTextTableCell(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QTextTableCell *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QTextTableCell(void *, SIP_SSIZE_T, const void *);}
static void assign_QTextTableCell(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QTextTableCell *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QTextTableCell *>(sipSrc);
}


extern "C" {static void *array_QTextTableCell(SIP_SSIZE_T);}
static void *array_QTextTableCell(SIP_SSIZE_T sipNrElem)
{
    return new QTextTableCell[sipNrElem];
}


extern "C" {static void *copy_QTextTableCell(const void *, SIP_SSIZE_T);}
static void *copy_QTextTableCell(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QTextTableCell(reinterpret_cast<const QTextTableCell *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTextTableCell(sipSimpleWrapper *);}
static void dealloc_QTextTableCell(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QTextTableCell(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QTextTableCell(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTextTableCell(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QTextTableCell *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextTableCell();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QTextTableCell* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QTextTableCell, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextTableCell(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QTextTableCell[] = {
    {(void *)slot_QTextTableCell___ne__, ne_slot},
    {(void *)slot_QTextTableCell___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QTextTableCell[] = {
    {SIP_MLNAME_CAST(sipName_column), meth_QTextTableCell_column, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextTableCell_column)},
    {SIP_MLNAME_CAST(sipName_columnSpan), meth_QTextTableCell_columnSpan, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextTableCell_columnSpan)},
    {SIP_MLNAME_CAST(sipName_firstCursorPosition), meth_QTextTableCell_firstCursorPosition, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextTableCell_firstCursorPosition)},
    {SIP_MLNAME_CAST(sipName_format), meth_QTextTableCell_format, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextTableCell_format)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QTextTableCell_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextTableCell_isValid)},
    {SIP_MLNAME_CAST(sipName_lastCursorPosition), meth_QTextTableCell_lastCursorPosition, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextTableCell_lastCursorPosition)},
    {SIP_MLNAME_CAST(sipName_row), meth_QTextTableCell_row, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextTableCell_row)},
    {SIP_MLNAME_CAST(sipName_rowSpan), meth_QTextTableCell_rowSpan, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextTableCell_rowSpan)},
    {SIP_MLNAME_CAST(sipName_setFormat), meth_QTextTableCell_setFormat, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextTableCell_setFormat)},
    {SIP_MLNAME_CAST(sipName_tableCellFormatIndex), meth_QTextTableCell_tableCellFormatIndex, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextTableCell_tableCellFormatIndex)}
};

PyDoc_STRVAR(doc_QTextTableCell, "\1QTextTableCell()\n"
    "QTextTableCell(QTextTableCell)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QTextTableCell = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QTextTableCell,
        {0}
    },
    {
        sipNameNr_QTextTableCell,
        {0, 0, 1},
        10, methods_QTextTableCell,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTextTableCell,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QTextTableCell,
    init_type_QTextTableCell,
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
    dealloc_QTextTableCell,
    assign_QTextTableCell,
    array_QTextTableCell,
    copy_QTextTableCell,
    release_QTextTableCell,
    cast_QTextTableCell,
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
