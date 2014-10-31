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

#line 35 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtGui/qtextoption.sip"
#include <qtextoption.h>
#line 34 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQTextOptionFlags.cpp"

#line 35 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtGui/qtextoption.sip"
#include <qtextoption.h>
#line 38 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQTextOptionFlags.cpp"


extern "C" {static int slot_QTextOption_Flags___bool__(PyObject *);}
static int slot_QTextOption_Flags___bool__(PyObject *sipSelf)
{
    QTextOption::Flags *sipCpp = reinterpret_cast<QTextOption::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextOption_Flags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 370 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QTextOption::Flags::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 60 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQTextOptionFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QTextOption_Flags___ne__(PyObject *,PyObject *);}
static PyObject *slot_QTextOption_Flags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextOption::Flags *sipCpp = reinterpret_cast<QTextOption::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextOption_Flags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTextOption::Flags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTextOption_Flags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 361 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QTextOption::Flags::Int() != a0->operator QTextOption::Flags::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 94 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQTextOptionFlags.cpp"
            sipReleaseType(const_cast<QTextOption::Flags *>(a0),sipType_QTextOption_Flags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QTextOption_Flags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QTextOption_Flags___eq__(PyObject *,PyObject *);}
static PyObject *slot_QTextOption_Flags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextOption::Flags *sipCpp = reinterpret_cast<QTextOption::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextOption_Flags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTextOption::Flags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTextOption_Flags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 352 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QTextOption::Flags::Int() == a0->operator QTextOption::Flags::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 134 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQTextOptionFlags.cpp"
            sipReleaseType(const_cast<QTextOption::Flags *>(a0),sipType_QTextOption_Flags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QTextOption_Flags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QTextOption_Flags___invert__(PyObject *);}
static PyObject *slot_QTextOption_Flags___invert__(PyObject *sipSelf)
{
    QTextOption::Flags *sipCpp = reinterpret_cast<QTextOption::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextOption_Flags));

    if (!sipCpp)
        return 0;


    {
        {
            QTextOption::Flags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextOption::Flags(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextOption_Flags,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QTextOption_Flags___and__(PyObject *,PyObject *);}
static PyObject *slot_QTextOption_Flags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QTextOption::Flags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTextOption_Flags, &a0, &a0State, &a1))
        {
            QTextOption::Flags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextOption::Flags((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QTextOption_Flags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextOption_Flags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QTextOption_Flags___xor__(PyObject *,PyObject *);}
static PyObject *slot_QTextOption_Flags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QTextOption::Flags* a0;
        int a0State = 0;
        QTextOption::Flags* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QTextOption_Flags, &a0, &a0State, sipType_QTextOption_Flags, &a1, &a1State))
        {
            QTextOption::Flags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextOption::Flags((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QTextOption_Flags,a0State);
            sipReleaseType(a1,sipType_QTextOption_Flags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QTextOption_Flags,NULL);
        }
    }

    {
        QTextOption::Flags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTextOption_Flags, &a0, &a0State, &a1))
        {
            QTextOption::Flags*sipRes = 0;

#line 346 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qglobal.sip"
        sipRes = new QTextOption::Flags(*a0 ^ a1);
#line 243 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQTextOptionFlags.cpp"
            sipReleaseType(a0,sipType_QTextOption_Flags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextOption_Flags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QTextOption_Flags___or__(PyObject *,PyObject *);}
static PyObject *slot_QTextOption_Flags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QTextOption::Flags* a0;
        int a0State = 0;
        QTextOption::Flags* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QTextOption_Flags, &a0, &a0State, sipType_QTextOption_Flags, &a1, &a1State))
        {
            QTextOption::Flags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextOption::Flags((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QTextOption_Flags,a0State);
            sipReleaseType(a1,sipType_QTextOption_Flags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QTextOption_Flags,NULL);
        }
    }

    {
        QTextOption::Flags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTextOption_Flags, &a0, &a0State, &a1))
        {
            QTextOption::Flags*sipRes = 0;

#line 341 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qglobal.sip"
        sipRes = new QTextOption::Flags(*a0 | a1);
#line 295 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQTextOptionFlags.cpp"
            sipReleaseType(a0,sipType_QTextOption_Flags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextOption_Flags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QTextOption_Flags___int__(PyObject *);}
static PyObject *slot_QTextOption_Flags___int__(PyObject *sipSelf)
{
    QTextOption::Flags *sipCpp = reinterpret_cast<QTextOption::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextOption_Flags));

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


extern "C" {static PyObject *slot_QTextOption_Flags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QTextOption_Flags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTextOption_Flags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QTextOption::Flags *sipCpp = reinterpret_cast<QTextOption::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextOption_Flags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QTextOption::Flags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTextOption_Flags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QTextOption::Flags::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QTextOption_Flags,a0State);

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


extern "C" {static PyObject *slot_QTextOption_Flags___ior__(PyObject *,PyObject *);}
static PyObject *slot_QTextOption_Flags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTextOption_Flags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QTextOption::Flags *sipCpp = reinterpret_cast<QTextOption::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextOption_Flags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QTextOption::Flags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTextOption_Flags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QTextOption::Flags::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QTextOption_Flags,a0State);

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


extern "C" {static PyObject *slot_QTextOption_Flags___iand__(PyObject *,PyObject *);}
static PyObject *slot_QTextOption_Flags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTextOption_Flags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QTextOption::Flags *sipCpp = reinterpret_cast<QTextOption::Flags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextOption_Flags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QTextOption::Flags::operator&=(a0);
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
extern "C" {static void *cast_QTextOption_Flags(void *, const sipTypeDef *);}
static void *cast_QTextOption_Flags(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QTextOption_Flags)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextOption_Flags(void *, int);}
static void release_QTextOption_Flags(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QTextOption::Flags *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QTextOption_Flags(void *, SIP_SSIZE_T, const void *);}
static void assign_QTextOption_Flags(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QTextOption::Flags *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QTextOption::Flags *>(sipSrc);
}


extern "C" {static void *array_QTextOption_Flags(SIP_SSIZE_T);}
static void *array_QTextOption_Flags(SIP_SSIZE_T sipNrElem)
{
    return new QTextOption::Flags[sipNrElem];
}


extern "C" {static void *copy_QTextOption_Flags(const void *, SIP_SSIZE_T);}
static void *copy_QTextOption_Flags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QTextOption::Flags(reinterpret_cast<const QTextOption::Flags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTextOption_Flags(sipSimpleWrapper *);}
static void dealloc_QTextOption_Flags(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QTextOption_Flags(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QTextOption_Flags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTextOption_Flags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QTextOption::Flags *sipCpp = 0;

    {
        const QTextOption::Flags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QTextOption_Flags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextOption::Flags(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QTextOption::Flags *>(a0),sipType_QTextOption_Flags,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextOption::Flags(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextOption::Flags();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QTextOption_Flags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QTextOption_Flags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QTextOption::Flags **sipCppPtr = reinterpret_cast<QTextOption::Flags **>(sipCppPtrV);

#line 379 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QTextOption::Flags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QTextOption_Flag)) ||
            sipCanConvertToType(sipPy, sipType_QTextOption_Flags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QTextOption_Flag)))
{
    *sipCppPtr = new QTextOption::Flags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QTextOption::Flags *>(sipConvertToType(sipPy, sipType_QTextOption_Flags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 590 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQTextOptionFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QTextOption_Flags[] = {
    {(void *)slot_QTextOption_Flags___bool__, bool_slot},
    {(void *)slot_QTextOption_Flags___ne__, ne_slot},
    {(void *)slot_QTextOption_Flags___eq__, eq_slot},
    {(void *)slot_QTextOption_Flags___invert__, invert_slot},
    {(void *)slot_QTextOption_Flags___and__, and_slot},
    {(void *)slot_QTextOption_Flags___xor__, xor_slot},
    {(void *)slot_QTextOption_Flags___or__, or_slot},
    {(void *)slot_QTextOption_Flags___int__, int_slot},
    {(void *)slot_QTextOption_Flags___ixor__, ixor_slot},
    {(void *)slot_QTextOption_Flags___ior__, ior_slot},
    {(void *)slot_QTextOption_Flags___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QTextOption_Flags, "\1QTextOption.Flags(QTextOption.Flags)\n"
    "QTextOption.Flags(int)\n"
    "QTextOption.Flags()");


pyqt4ClassTypeDef sipTypeDef_QtGui_QTextOption_Flags = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QTextOption__Flags,
        {0}
    },
    {
        sipNameNr_Flags,
        {704, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTextOption_Flags,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QTextOption_Flags,
    init_type_QTextOption_Flags,
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
    dealloc_QTextOption_Flags,
    assign_QTextOption_Flags,
    array_QTextOption_Flags,
    copy_QTextOption_Flags,
    release_QTextOption_Flags,
    cast_QTextOption_Flags,
    convertTo_QTextOption_Flags,
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
