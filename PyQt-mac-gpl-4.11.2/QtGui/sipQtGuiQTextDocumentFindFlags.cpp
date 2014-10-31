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

#line 68 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtGui/qtextdocument.sip"
#include <qtextdocument.h>
#line 34 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQTextDocumentFindFlags.cpp"

#line 68 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtGui/qtextdocument.sip"
#include <qtextdocument.h>
#line 38 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQTextDocumentFindFlags.cpp"


extern "C" {static int slot_QTextDocument_FindFlags___bool__(PyObject *);}
static int slot_QTextDocument_FindFlags___bool__(PyObject *sipSelf)
{
    QTextDocument::FindFlags *sipCpp = reinterpret_cast<QTextDocument::FindFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextDocument_FindFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 370 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QTextDocument::FindFlags::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 60 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQTextDocumentFindFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QTextDocument_FindFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_QTextDocument_FindFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextDocument::FindFlags *sipCpp = reinterpret_cast<QTextDocument::FindFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextDocument_FindFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTextDocument::FindFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTextDocument_FindFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 361 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QTextDocument::FindFlags::Int() != a0->operator QTextDocument::FindFlags::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 94 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQTextDocumentFindFlags.cpp"
            sipReleaseType(const_cast<QTextDocument::FindFlags *>(a0),sipType_QTextDocument_FindFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QTextDocument_FindFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QTextDocument_FindFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_QTextDocument_FindFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextDocument::FindFlags *sipCpp = reinterpret_cast<QTextDocument::FindFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextDocument_FindFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTextDocument::FindFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTextDocument_FindFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 352 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QTextDocument::FindFlags::Int() == a0->operator QTextDocument::FindFlags::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 134 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQTextDocumentFindFlags.cpp"
            sipReleaseType(const_cast<QTextDocument::FindFlags *>(a0),sipType_QTextDocument_FindFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QTextDocument_FindFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QTextDocument_FindFlags___invert__(PyObject *);}
static PyObject *slot_QTextDocument_FindFlags___invert__(PyObject *sipSelf)
{
    QTextDocument::FindFlags *sipCpp = reinterpret_cast<QTextDocument::FindFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextDocument_FindFlags));

    if (!sipCpp)
        return 0;


    {
        {
            QTextDocument::FindFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextDocument::FindFlags(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextDocument_FindFlags,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QTextDocument_FindFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_QTextDocument_FindFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QTextDocument::FindFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTextDocument_FindFlags, &a0, &a0State, &a1))
        {
            QTextDocument::FindFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextDocument::FindFlags((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QTextDocument_FindFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextDocument_FindFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QTextDocument_FindFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_QTextDocument_FindFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QTextDocument::FindFlags* a0;
        int a0State = 0;
        QTextDocument::FindFlags* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QTextDocument_FindFlags, &a0, &a0State, sipType_QTextDocument_FindFlags, &a1, &a1State))
        {
            QTextDocument::FindFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextDocument::FindFlags((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QTextDocument_FindFlags,a0State);
            sipReleaseType(a1,sipType_QTextDocument_FindFlags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QTextDocument_FindFlags,NULL);
        }
    }

    {
        QTextDocument::FindFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTextDocument_FindFlags, &a0, &a0State, &a1))
        {
            QTextDocument::FindFlags*sipRes = 0;

#line 346 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qglobal.sip"
        sipRes = new QTextDocument::FindFlags(*a0 ^ a1);
#line 243 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQTextDocumentFindFlags.cpp"
            sipReleaseType(a0,sipType_QTextDocument_FindFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextDocument_FindFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QTextDocument_FindFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_QTextDocument_FindFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QTextDocument::FindFlags* a0;
        int a0State = 0;
        QTextDocument::FindFlags* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QTextDocument_FindFlags, &a0, &a0State, sipType_QTextDocument_FindFlags, &a1, &a1State))
        {
            QTextDocument::FindFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextDocument::FindFlags((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QTextDocument_FindFlags,a0State);
            sipReleaseType(a1,sipType_QTextDocument_FindFlags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QTextDocument_FindFlags,NULL);
        }
    }

    {
        QTextDocument::FindFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTextDocument_FindFlags, &a0, &a0State, &a1))
        {
            QTextDocument::FindFlags*sipRes = 0;

#line 341 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qglobal.sip"
        sipRes = new QTextDocument::FindFlags(*a0 | a1);
#line 295 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQTextDocumentFindFlags.cpp"
            sipReleaseType(a0,sipType_QTextDocument_FindFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextDocument_FindFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QTextDocument_FindFlags___int__(PyObject *);}
static PyObject *slot_QTextDocument_FindFlags___int__(PyObject *sipSelf)
{
    QTextDocument::FindFlags *sipCpp = reinterpret_cast<QTextDocument::FindFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextDocument_FindFlags));

    if (!sipCpp)
        return 0;


    {
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = *sipCpp;
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QTextDocument_FindFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QTextDocument_FindFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTextDocument_FindFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QTextDocument::FindFlags *sipCpp = reinterpret_cast<QTextDocument::FindFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextDocument_FindFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QTextDocument::FindFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTextDocument_FindFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QTextDocument::FindFlags::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QTextDocument_FindFlags,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QTextDocument_FindFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_QTextDocument_FindFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTextDocument_FindFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QTextDocument::FindFlags *sipCpp = reinterpret_cast<QTextDocument::FindFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextDocument_FindFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QTextDocument::FindFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTextDocument_FindFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QTextDocument::FindFlags::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QTextDocument_FindFlags,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QTextDocument_FindFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_QTextDocument_FindFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTextDocument_FindFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QTextDocument::FindFlags *sipCpp = reinterpret_cast<QTextDocument::FindFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextDocument_FindFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QTextDocument::FindFlags::operator&=(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QTextDocument_FindFlags(void *, const sipTypeDef *);}
static void *cast_QTextDocument_FindFlags(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QTextDocument_FindFlags)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextDocument_FindFlags(void *, int);}
static void release_QTextDocument_FindFlags(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QTextDocument::FindFlags *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QTextDocument_FindFlags(void *, SIP_SSIZE_T, const void *);}
static void assign_QTextDocument_FindFlags(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QTextDocument::FindFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QTextDocument::FindFlags *>(sipSrc);
}


extern "C" {static void *array_QTextDocument_FindFlags(SIP_SSIZE_T);}
static void *array_QTextDocument_FindFlags(SIP_SSIZE_T sipNrElem)
{
    return new QTextDocument::FindFlags[sipNrElem];
}


extern "C" {static void *copy_QTextDocument_FindFlags(const void *, SIP_SSIZE_T);}
static void *copy_QTextDocument_FindFlags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QTextDocument::FindFlags(reinterpret_cast<const QTextDocument::FindFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTextDocument_FindFlags(sipSimpleWrapper *);}
static void dealloc_QTextDocument_FindFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QTextDocument_FindFlags(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QTextDocument_FindFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTextDocument_FindFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QTextDocument::FindFlags *sipCpp = 0;

    {
        const QTextDocument::FindFlags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QTextDocument_FindFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextDocument::FindFlags(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QTextDocument::FindFlags *>(a0),sipType_QTextDocument_FindFlags,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextDocument::FindFlags(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextDocument::FindFlags();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QTextDocument_FindFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QTextDocument_FindFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QTextDocument::FindFlags **sipCppPtr = reinterpret_cast<QTextDocument::FindFlags **>(sipCppPtrV);

#line 379 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QTextDocument::FindFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QTextDocument_FindFlag)) ||
            sipCanConvertToType(sipPy, sipType_QTextDocument_FindFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QTextDocument_FindFlag)))
{
    *sipCppPtr = new QTextDocument::FindFlags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QTextDocument::FindFlags *>(sipConvertToType(sipPy, sipType_QTextDocument_FindFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 590 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQTextDocumentFindFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QTextDocument_FindFlags[] = {
    {(void *)slot_QTextDocument_FindFlags___bool__, bool_slot},
    {(void *)slot_QTextDocument_FindFlags___ne__, ne_slot},
    {(void *)slot_QTextDocument_FindFlags___eq__, eq_slot},
    {(void *)slot_QTextDocument_FindFlags___invert__, invert_slot},
    {(void *)slot_QTextDocument_FindFlags___and__, and_slot},
    {(void *)slot_QTextDocument_FindFlags___xor__, xor_slot},
    {(void *)slot_QTextDocument_FindFlags___or__, or_slot},
    {(void *)slot_QTextDocument_FindFlags___int__, int_slot},
    {(void *)slot_QTextDocument_FindFlags___ixor__, ixor_slot},
    {(void *)slot_QTextDocument_FindFlags___ior__, ior_slot},
    {(void *)slot_QTextDocument_FindFlags___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QTextDocument_FindFlags, "\1QTextDocument.FindFlags(QTextDocument.FindFlags)\n"
    "QTextDocument.FindFlags(int)\n"
    "QTextDocument.FindFlags()");


pyqt4ClassTypeDef sipTypeDef_QtGui_QTextDocument_FindFlags = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QTextDocument__FindFlags,
        {0}
    },
    {
        sipNameNr_FindFlags,
        {661, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTextDocument_FindFlags,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QTextDocument_FindFlags,
    init_type_QTextDocument_FindFlags,
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
    dealloc_QTextDocument_FindFlags,
    assign_QTextDocument_FindFlags,
    array_QTextDocument_FindFlags,
    copy_QTextDocument_FindFlags,
    release_QTextDocument_FindFlags,
    cast_QTextDocument_FindFlags,
    convertTo_QTextDocument_FindFlags,
    0,
    0,
    0,
    0,
    0
},
    0,
    1,
    0
};
