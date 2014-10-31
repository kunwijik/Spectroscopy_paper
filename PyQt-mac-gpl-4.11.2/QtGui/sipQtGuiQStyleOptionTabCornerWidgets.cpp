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

#line 768 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 34 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQStyleOptionTabCornerWidgets.cpp"

#line 768 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 38 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQStyleOptionTabCornerWidgets.cpp"


extern "C" {static int slot_QStyleOptionTab_CornerWidgets___bool__(PyObject *);}
static int slot_QStyleOptionTab_CornerWidgets___bool__(PyObject *sipSelf)
{
    QStyleOptionTab::CornerWidgets *sipCpp = reinterpret_cast<QStyleOptionTab::CornerWidgets *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionTab_CornerWidgets));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 370 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QStyleOptionTab::CornerWidgets::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 60 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQStyleOptionTabCornerWidgets.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QStyleOptionTab_CornerWidgets___ne__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionTab_CornerWidgets___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QStyleOptionTab::CornerWidgets *sipCpp = reinterpret_cast<QStyleOptionTab::CornerWidgets *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionTab_CornerWidgets));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QStyleOptionTab::CornerWidgets* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyleOptionTab_CornerWidgets, &a0, &a0State))
        {
            bool sipRes = 0;

#line 361 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QStyleOptionTab::CornerWidgets::Int() != a0->operator QStyleOptionTab::CornerWidgets::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 94 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQStyleOptionTabCornerWidgets.cpp"
            sipReleaseType(const_cast<QStyleOptionTab::CornerWidgets *>(a0),sipType_QStyleOptionTab_CornerWidgets,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QStyleOptionTab_CornerWidgets,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QStyleOptionTab_CornerWidgets___eq__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionTab_CornerWidgets___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QStyleOptionTab::CornerWidgets *sipCpp = reinterpret_cast<QStyleOptionTab::CornerWidgets *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionTab_CornerWidgets));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QStyleOptionTab::CornerWidgets* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyleOptionTab_CornerWidgets, &a0, &a0State))
        {
            bool sipRes = 0;

#line 352 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QStyleOptionTab::CornerWidgets::Int() == a0->operator QStyleOptionTab::CornerWidgets::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 134 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQStyleOptionTabCornerWidgets.cpp"
            sipReleaseType(const_cast<QStyleOptionTab::CornerWidgets *>(a0),sipType_QStyleOptionTab_CornerWidgets,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QStyleOptionTab_CornerWidgets,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QStyleOptionTab_CornerWidgets___invert__(PyObject *);}
static PyObject *slot_QStyleOptionTab_CornerWidgets___invert__(PyObject *sipSelf)
{
    QStyleOptionTab::CornerWidgets *sipCpp = reinterpret_cast<QStyleOptionTab::CornerWidgets *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionTab_CornerWidgets));

    if (!sipCpp)
        return 0;


    {
        {
            QStyleOptionTab::CornerWidgets*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStyleOptionTab::CornerWidgets(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionTab_CornerWidgets,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QStyleOptionTab_CornerWidgets___and__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionTab_CornerWidgets___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QStyleOptionTab::CornerWidgets* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QStyleOptionTab_CornerWidgets, &a0, &a0State, &a1))
        {
            QStyleOptionTab::CornerWidgets*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStyleOptionTab::CornerWidgets((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QStyleOptionTab_CornerWidgets,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionTab_CornerWidgets,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QStyleOptionTab_CornerWidgets___xor__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionTab_CornerWidgets___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QStyleOptionTab::CornerWidgets* a0;
        int a0State = 0;
        QStyleOptionTab::CornerWidgets* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QStyleOptionTab_CornerWidgets, &a0, &a0State, sipType_QStyleOptionTab_CornerWidgets, &a1, &a1State))
        {
            QStyleOptionTab::CornerWidgets*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStyleOptionTab::CornerWidgets((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QStyleOptionTab_CornerWidgets,a0State);
            sipReleaseType(a1,sipType_QStyleOptionTab_CornerWidgets,a1State);

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionTab_CornerWidgets,NULL);
        }
    }

    {
        QStyleOptionTab::CornerWidgets* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QStyleOptionTab_CornerWidgets, &a0, &a0State, &a1))
        {
            QStyleOptionTab::CornerWidgets*sipRes = 0;

#line 346 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qglobal.sip"
        sipRes = new QStyleOptionTab::CornerWidgets(*a0 ^ a1);
#line 243 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQStyleOptionTabCornerWidgets.cpp"
            sipReleaseType(a0,sipType_QStyleOptionTab_CornerWidgets,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionTab_CornerWidgets,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QStyleOptionTab_CornerWidgets___or__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionTab_CornerWidgets___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QStyleOptionTab::CornerWidgets* a0;
        int a0State = 0;
        QStyleOptionTab::CornerWidgets* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QStyleOptionTab_CornerWidgets, &a0, &a0State, sipType_QStyleOptionTab_CornerWidgets, &a1, &a1State))
        {
            QStyleOptionTab::CornerWidgets*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStyleOptionTab::CornerWidgets((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QStyleOptionTab_CornerWidgets,a0State);
            sipReleaseType(a1,sipType_QStyleOptionTab_CornerWidgets,a1State);

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionTab_CornerWidgets,NULL);
        }
    }

    {
        QStyleOptionTab::CornerWidgets* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QStyleOptionTab_CornerWidgets, &a0, &a0State, &a1))
        {
            QStyleOptionTab::CornerWidgets*sipRes = 0;

#line 341 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qglobal.sip"
        sipRes = new QStyleOptionTab::CornerWidgets(*a0 | a1);
#line 295 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQStyleOptionTabCornerWidgets.cpp"
            sipReleaseType(a0,sipType_QStyleOptionTab_CornerWidgets,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionTab_CornerWidgets,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QStyleOptionTab_CornerWidgets___int__(PyObject *);}
static PyObject *slot_QStyleOptionTab_CornerWidgets___int__(PyObject *sipSelf)
{
    QStyleOptionTab::CornerWidgets *sipCpp = reinterpret_cast<QStyleOptionTab::CornerWidgets *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionTab_CornerWidgets));

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


extern "C" {static PyObject *slot_QStyleOptionTab_CornerWidgets___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionTab_CornerWidgets___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStyleOptionTab_CornerWidgets)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QStyleOptionTab::CornerWidgets *sipCpp = reinterpret_cast<QStyleOptionTab::CornerWidgets *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionTab_CornerWidgets));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QStyleOptionTab::CornerWidgets* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyleOptionTab_CornerWidgets, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QStyleOptionTab::CornerWidgets::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QStyleOptionTab_CornerWidgets,a0State);

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


extern "C" {static PyObject *slot_QStyleOptionTab_CornerWidgets___ior__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionTab_CornerWidgets___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStyleOptionTab_CornerWidgets)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QStyleOptionTab::CornerWidgets *sipCpp = reinterpret_cast<QStyleOptionTab::CornerWidgets *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionTab_CornerWidgets));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QStyleOptionTab::CornerWidgets* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyleOptionTab_CornerWidgets, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QStyleOptionTab::CornerWidgets::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QStyleOptionTab_CornerWidgets,a0State);

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


extern "C" {static PyObject *slot_QStyleOptionTab_CornerWidgets___iand__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionTab_CornerWidgets___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStyleOptionTab_CornerWidgets)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QStyleOptionTab::CornerWidgets *sipCpp = reinterpret_cast<QStyleOptionTab::CornerWidgets *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionTab_CornerWidgets));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QStyleOptionTab::CornerWidgets::operator&=(a0);
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
extern "C" {static void *cast_QStyleOptionTab_CornerWidgets(void *, const sipTypeDef *);}
static void *cast_QStyleOptionTab_CornerWidgets(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QStyleOptionTab_CornerWidgets)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionTab_CornerWidgets(void *, int);}
static void release_QStyleOptionTab_CornerWidgets(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QStyleOptionTab::CornerWidgets *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStyleOptionTab_CornerWidgets(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionTab_CornerWidgets(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionTab::CornerWidgets *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionTab::CornerWidgets *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionTab_CornerWidgets(SIP_SSIZE_T);}
static void *array_QStyleOptionTab_CornerWidgets(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionTab::CornerWidgets[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionTab_CornerWidgets(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionTab_CornerWidgets(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionTab::CornerWidgets(reinterpret_cast<const QStyleOptionTab::CornerWidgets *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionTab_CornerWidgets(sipSimpleWrapper *);}
static void dealloc_QStyleOptionTab_CornerWidgets(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionTab_CornerWidgets(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QStyleOptionTab_CornerWidgets(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionTab_CornerWidgets(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOptionTab::CornerWidgets *sipCpp = 0;

    {
        const QStyleOptionTab::CornerWidgets* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QStyleOptionTab_CornerWidgets, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionTab::CornerWidgets(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QStyleOptionTab::CornerWidgets *>(a0),sipType_QStyleOptionTab_CornerWidgets,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionTab::CornerWidgets(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionTab::CornerWidgets();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QStyleOptionTab_CornerWidgets(PyObject *, void **, int *, PyObject *);}
static int convertTo_QStyleOptionTab_CornerWidgets(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QStyleOptionTab::CornerWidgets **sipCppPtr = reinterpret_cast<QStyleOptionTab::CornerWidgets **>(sipCppPtrV);

#line 379 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QStyleOptionTab::CornerWidgets is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QStyleOptionTab_CornerWidget)) ||
            sipCanConvertToType(sipPy, sipType_QStyleOptionTab_CornerWidgets, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QStyleOptionTab_CornerWidget)))
{
    *sipCppPtr = new QStyleOptionTab::CornerWidgets(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QStyleOptionTab::CornerWidgets *>(sipConvertToType(sipPy, sipType_QStyleOptionTab_CornerWidgets, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 590 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQStyleOptionTabCornerWidgets.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QStyleOptionTab_CornerWidgets[] = {
    {(void *)slot_QStyleOptionTab_CornerWidgets___bool__, bool_slot},
    {(void *)slot_QStyleOptionTab_CornerWidgets___ne__, ne_slot},
    {(void *)slot_QStyleOptionTab_CornerWidgets___eq__, eq_slot},
    {(void *)slot_QStyleOptionTab_CornerWidgets___invert__, invert_slot},
    {(void *)slot_QStyleOptionTab_CornerWidgets___and__, and_slot},
    {(void *)slot_QStyleOptionTab_CornerWidgets___xor__, xor_slot},
    {(void *)slot_QStyleOptionTab_CornerWidgets___or__, or_slot},
    {(void *)slot_QStyleOptionTab_CornerWidgets___int__, int_slot},
    {(void *)slot_QStyleOptionTab_CornerWidgets___ixor__, ixor_slot},
    {(void *)slot_QStyleOptionTab_CornerWidgets___ior__, ior_slot},
    {(void *)slot_QStyleOptionTab_CornerWidgets___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QStyleOptionTab_CornerWidgets, "\1QStyleOptionTab.CornerWidgets(QStyleOptionTab.CornerWidgets)\n"
    "QStyleOptionTab.CornerWidgets(int)\n"
    "QStyleOptionTab.CornerWidgets()");


pyqt4ClassTypeDef sipTypeDef_QtGui_QStyleOptionTab_CornerWidgets = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionTab__CornerWidgets,
        {0}
    },
    {
        sipNameNr_CornerWidgets,
        {567, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionTab_CornerWidgets,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QStyleOptionTab_CornerWidgets,
    init_type_QStyleOptionTab_CornerWidgets,
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
    dealloc_QStyleOptionTab_CornerWidgets,
    assign_QStyleOptionTab_CornerWidgets,
    array_QStyleOptionTab_CornerWidgets,
    copy_QStyleOptionTab_CornerWidgets,
    release_QStyleOptionTab_CornerWidgets,
    cast_QStyleOptionTab_CornerWidgets,
    convertTo_QStyleOptionTab_CornerWidgets,
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
