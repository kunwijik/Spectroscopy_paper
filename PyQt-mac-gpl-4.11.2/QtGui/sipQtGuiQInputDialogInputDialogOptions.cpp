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

#line 35 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtGui/qinputdialog.sip"
#include <qinputdialog.h>
#line 34 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQInputDialogInputDialogOptions.cpp"

#line 35 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtGui/qinputdialog.sip"
#include <qinputdialog.h>
#line 38 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQInputDialogInputDialogOptions.cpp"


extern "C" {static int slot_QInputDialog_InputDialogOptions___bool__(PyObject *);}
static int slot_QInputDialog_InputDialogOptions___bool__(PyObject *sipSelf)
{
    QInputDialog::InputDialogOptions *sipCpp = reinterpret_cast<QInputDialog::InputDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QInputDialog_InputDialogOptions));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 370 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QInputDialog::InputDialogOptions::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 60 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQInputDialogInputDialogOptions.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QInputDialog_InputDialogOptions___ne__(PyObject *,PyObject *);}
static PyObject *slot_QInputDialog_InputDialogOptions___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QInputDialog::InputDialogOptions *sipCpp = reinterpret_cast<QInputDialog::InputDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QInputDialog_InputDialogOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QInputDialog::InputDialogOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QInputDialog_InputDialogOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 361 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QInputDialog::InputDialogOptions::Int() != a0->operator QInputDialog::InputDialogOptions::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 94 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQInputDialogInputDialogOptions.cpp"
            sipReleaseType(const_cast<QInputDialog::InputDialogOptions *>(a0),sipType_QInputDialog_InputDialogOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QInputDialog_InputDialogOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QInputDialog_InputDialogOptions___eq__(PyObject *,PyObject *);}
static PyObject *slot_QInputDialog_InputDialogOptions___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QInputDialog::InputDialogOptions *sipCpp = reinterpret_cast<QInputDialog::InputDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QInputDialog_InputDialogOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QInputDialog::InputDialogOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QInputDialog_InputDialogOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 352 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QInputDialog::InputDialogOptions::Int() == a0->operator QInputDialog::InputDialogOptions::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 134 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQInputDialogInputDialogOptions.cpp"
            sipReleaseType(const_cast<QInputDialog::InputDialogOptions *>(a0),sipType_QInputDialog_InputDialogOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QInputDialog_InputDialogOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QInputDialog_InputDialogOptions___invert__(PyObject *);}
static PyObject *slot_QInputDialog_InputDialogOptions___invert__(PyObject *sipSelf)
{
    QInputDialog::InputDialogOptions *sipCpp = reinterpret_cast<QInputDialog::InputDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QInputDialog_InputDialogOptions));

    if (!sipCpp)
        return 0;


    {
        {
            QInputDialog::InputDialogOptions*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QInputDialog::InputDialogOptions(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QInputDialog_InputDialogOptions,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QInputDialog_InputDialogOptions___and__(PyObject *,PyObject *);}
static PyObject *slot_QInputDialog_InputDialogOptions___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QInputDialog::InputDialogOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QInputDialog_InputDialogOptions, &a0, &a0State, &a1))
        {
            QInputDialog::InputDialogOptions*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QInputDialog::InputDialogOptions((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QInputDialog_InputDialogOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QInputDialog_InputDialogOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QInputDialog_InputDialogOptions___xor__(PyObject *,PyObject *);}
static PyObject *slot_QInputDialog_InputDialogOptions___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QInputDialog::InputDialogOptions* a0;
        int a0State = 0;
        QInputDialog::InputDialogOptions* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QInputDialog_InputDialogOptions, &a0, &a0State, sipType_QInputDialog_InputDialogOptions, &a1, &a1State))
        {
            QInputDialog::InputDialogOptions*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QInputDialog::InputDialogOptions((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QInputDialog_InputDialogOptions,a0State);
            sipReleaseType(a1,sipType_QInputDialog_InputDialogOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QInputDialog_InputDialogOptions,NULL);
        }
    }

    {
        QInputDialog::InputDialogOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QInputDialog_InputDialogOptions, &a0, &a0State, &a1))
        {
            QInputDialog::InputDialogOptions*sipRes = 0;

#line 346 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qglobal.sip"
        sipRes = new QInputDialog::InputDialogOptions(*a0 ^ a1);
#line 243 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQInputDialogInputDialogOptions.cpp"
            sipReleaseType(a0,sipType_QInputDialog_InputDialogOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QInputDialog_InputDialogOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QInputDialog_InputDialogOptions___or__(PyObject *,PyObject *);}
static PyObject *slot_QInputDialog_InputDialogOptions___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QInputDialog::InputDialogOptions* a0;
        int a0State = 0;
        QInputDialog::InputDialogOptions* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QInputDialog_InputDialogOptions, &a0, &a0State, sipType_QInputDialog_InputDialogOptions, &a1, &a1State))
        {
            QInputDialog::InputDialogOptions*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QInputDialog::InputDialogOptions((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QInputDialog_InputDialogOptions,a0State);
            sipReleaseType(a1,sipType_QInputDialog_InputDialogOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QInputDialog_InputDialogOptions,NULL);
        }
    }

    {
        QInputDialog::InputDialogOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QInputDialog_InputDialogOptions, &a0, &a0State, &a1))
        {
            QInputDialog::InputDialogOptions*sipRes = 0;

#line 341 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qglobal.sip"
        sipRes = new QInputDialog::InputDialogOptions(*a0 | a1);
#line 295 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQInputDialogInputDialogOptions.cpp"
            sipReleaseType(a0,sipType_QInputDialog_InputDialogOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QInputDialog_InputDialogOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QInputDialog_InputDialogOptions___int__(PyObject *);}
static PyObject *slot_QInputDialog_InputDialogOptions___int__(PyObject *sipSelf)
{
    QInputDialog::InputDialogOptions *sipCpp = reinterpret_cast<QInputDialog::InputDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QInputDialog_InputDialogOptions));

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


extern "C" {static PyObject *slot_QInputDialog_InputDialogOptions___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QInputDialog_InputDialogOptions___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QInputDialog_InputDialogOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QInputDialog::InputDialogOptions *sipCpp = reinterpret_cast<QInputDialog::InputDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QInputDialog_InputDialogOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QInputDialog::InputDialogOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QInputDialog_InputDialogOptions, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QInputDialog::InputDialogOptions::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QInputDialog_InputDialogOptions,a0State);

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


extern "C" {static PyObject *slot_QInputDialog_InputDialogOptions___ior__(PyObject *,PyObject *);}
static PyObject *slot_QInputDialog_InputDialogOptions___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QInputDialog_InputDialogOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QInputDialog::InputDialogOptions *sipCpp = reinterpret_cast<QInputDialog::InputDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QInputDialog_InputDialogOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QInputDialog::InputDialogOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QInputDialog_InputDialogOptions, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QInputDialog::InputDialogOptions::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QInputDialog_InputDialogOptions,a0State);

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


extern "C" {static PyObject *slot_QInputDialog_InputDialogOptions___iand__(PyObject *,PyObject *);}
static PyObject *slot_QInputDialog_InputDialogOptions___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QInputDialog_InputDialogOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QInputDialog::InputDialogOptions *sipCpp = reinterpret_cast<QInputDialog::InputDialogOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QInputDialog_InputDialogOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QInputDialog::InputDialogOptions::operator&=(a0);
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
extern "C" {static void *cast_QInputDialog_InputDialogOptions(void *, const sipTypeDef *);}
static void *cast_QInputDialog_InputDialogOptions(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QInputDialog_InputDialogOptions)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QInputDialog_InputDialogOptions(void *, int);}
static void release_QInputDialog_InputDialogOptions(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QInputDialog::InputDialogOptions *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QInputDialog_InputDialogOptions(void *, SIP_SSIZE_T, const void *);}
static void assign_QInputDialog_InputDialogOptions(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QInputDialog::InputDialogOptions *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QInputDialog::InputDialogOptions *>(sipSrc);
}


extern "C" {static void *array_QInputDialog_InputDialogOptions(SIP_SSIZE_T);}
static void *array_QInputDialog_InputDialogOptions(SIP_SSIZE_T sipNrElem)
{
    return new QInputDialog::InputDialogOptions[sipNrElem];
}


extern "C" {static void *copy_QInputDialog_InputDialogOptions(const void *, SIP_SSIZE_T);}
static void *copy_QInputDialog_InputDialogOptions(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QInputDialog::InputDialogOptions(reinterpret_cast<const QInputDialog::InputDialogOptions *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QInputDialog_InputDialogOptions(sipSimpleWrapper *);}
static void dealloc_QInputDialog_InputDialogOptions(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QInputDialog_InputDialogOptions(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QInputDialog_InputDialogOptions(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QInputDialog_InputDialogOptions(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QInputDialog::InputDialogOptions *sipCpp = 0;

    {
        const QInputDialog::InputDialogOptions* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QInputDialog_InputDialogOptions, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QInputDialog::InputDialogOptions(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QInputDialog::InputDialogOptions *>(a0),sipType_QInputDialog_InputDialogOptions,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QInputDialog::InputDialogOptions(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QInputDialog::InputDialogOptions();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QInputDialog_InputDialogOptions(PyObject *, void **, int *, PyObject *);}
static int convertTo_QInputDialog_InputDialogOptions(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QInputDialog::InputDialogOptions **sipCppPtr = reinterpret_cast<QInputDialog::InputDialogOptions **>(sipCppPtrV);

#line 379 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QInputDialog::InputDialogOptions is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QInputDialog_InputDialogOption)) ||
            sipCanConvertToType(sipPy, sipType_QInputDialog_InputDialogOptions, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QInputDialog_InputDialogOption)))
{
    *sipCppPtr = new QInputDialog::InputDialogOptions(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QInputDialog::InputDialogOptions *>(sipConvertToType(sipPy, sipType_QInputDialog_InputDialogOptions, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 590 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQInputDialogInputDialogOptions.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QInputDialog_InputDialogOptions[] = {
    {(void *)slot_QInputDialog_InputDialogOptions___bool__, bool_slot},
    {(void *)slot_QInputDialog_InputDialogOptions___ne__, ne_slot},
    {(void *)slot_QInputDialog_InputDialogOptions___eq__, eq_slot},
    {(void *)slot_QInputDialog_InputDialogOptions___invert__, invert_slot},
    {(void *)slot_QInputDialog_InputDialogOptions___and__, and_slot},
    {(void *)slot_QInputDialog_InputDialogOptions___xor__, xor_slot},
    {(void *)slot_QInputDialog_InputDialogOptions___or__, or_slot},
    {(void *)slot_QInputDialog_InputDialogOptions___int__, int_slot},
    {(void *)slot_QInputDialog_InputDialogOptions___ixor__, ixor_slot},
    {(void *)slot_QInputDialog_InputDialogOptions___ior__, ior_slot},
    {(void *)slot_QInputDialog_InputDialogOptions___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QInputDialog_InputDialogOptions, "\1QInputDialog.InputDialogOptions(QInputDialog.InputDialogOptions)\n"
    "QInputDialog.InputDialogOptions(int)\n"
    "QInputDialog.InputDialogOptions()");


pyqt4ClassTypeDef sipTypeDef_QtGui_QInputDialog_InputDialogOptions = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QInputDialog__InputDialogOptions,
        {0}
    },
    {
        sipNameNr_InputDialogOptions,
        {247, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QInputDialog_InputDialogOptions,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QInputDialog_InputDialogOptions,
    init_type_QInputDialog_InputDialogOptions,
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
    dealloc_QInputDialog_InputDialogOptions,
    assign_QInputDialog_InputDialogOptions,
    array_QInputDialog_InputDialogOptions,
    copy_QInputDialog_InputDialogOptions,
    release_QInputDialog_InputDialogOptions,
    cast_QInputDialog_InputDialogOptions,
    convertTo_QInputDialog_InputDialogOptions,
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
