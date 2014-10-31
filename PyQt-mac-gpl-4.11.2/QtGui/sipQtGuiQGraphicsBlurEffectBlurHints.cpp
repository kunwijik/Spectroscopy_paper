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

#line 125 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtGui/qgraphicseffect.sip"
#include <qgraphicseffect.h>
#line 34 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQGraphicsBlurEffectBlurHints.cpp"

#line 125 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtGui/qgraphicseffect.sip"
#include <qgraphicseffect.h>
#line 38 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQGraphicsBlurEffectBlurHints.cpp"


extern "C" {static int slot_QGraphicsBlurEffect_BlurHints___bool__(PyObject *);}
static int slot_QGraphicsBlurEffect_BlurHints___bool__(PyObject *sipSelf)
{
    QGraphicsBlurEffect::BlurHints *sipCpp = reinterpret_cast<QGraphicsBlurEffect::BlurHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsBlurEffect_BlurHints));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 370 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QGraphicsBlurEffect::BlurHints::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 60 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQGraphicsBlurEffectBlurHints.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QGraphicsBlurEffect_BlurHints___ne__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsBlurEffect_BlurHints___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QGraphicsBlurEffect::BlurHints *sipCpp = reinterpret_cast<QGraphicsBlurEffect::BlurHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsBlurEffect_BlurHints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGraphicsBlurEffect::BlurHints* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGraphicsBlurEffect_BlurHints, &a0, &a0State))
        {
            bool sipRes = 0;

#line 361 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QGraphicsBlurEffect::BlurHints::Int() != a0->operator QGraphicsBlurEffect::BlurHints::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 94 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQGraphicsBlurEffectBlurHints.cpp"
            sipReleaseType(const_cast<QGraphicsBlurEffect::BlurHints *>(a0),sipType_QGraphicsBlurEffect_BlurHints,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QGraphicsBlurEffect_BlurHints,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGraphicsBlurEffect_BlurHints___eq__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsBlurEffect_BlurHints___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QGraphicsBlurEffect::BlurHints *sipCpp = reinterpret_cast<QGraphicsBlurEffect::BlurHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsBlurEffect_BlurHints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGraphicsBlurEffect::BlurHints* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGraphicsBlurEffect_BlurHints, &a0, &a0State))
        {
            bool sipRes = 0;

#line 352 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QGraphicsBlurEffect::BlurHints::Int() == a0->operator QGraphicsBlurEffect::BlurHints::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 134 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQGraphicsBlurEffectBlurHints.cpp"
            sipReleaseType(const_cast<QGraphicsBlurEffect::BlurHints *>(a0),sipType_QGraphicsBlurEffect_BlurHints,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QGraphicsBlurEffect_BlurHints,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGraphicsBlurEffect_BlurHints___invert__(PyObject *);}
static PyObject *slot_QGraphicsBlurEffect_BlurHints___invert__(PyObject *sipSelf)
{
    QGraphicsBlurEffect::BlurHints *sipCpp = reinterpret_cast<QGraphicsBlurEffect::BlurHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsBlurEffect_BlurHints));

    if (!sipCpp)
        return 0;


    {
        {
            QGraphicsBlurEffect::BlurHints*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGraphicsBlurEffect::BlurHints(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QGraphicsBlurEffect_BlurHints,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QGraphicsBlurEffect_BlurHints___and__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsBlurEffect_BlurHints___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsBlurEffect::BlurHints* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGraphicsBlurEffect_BlurHints, &a0, &a0State, &a1))
        {
            QGraphicsBlurEffect::BlurHints*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGraphicsBlurEffect::BlurHints((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGraphicsBlurEffect_BlurHints,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsBlurEffect_BlurHints,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGraphicsBlurEffect_BlurHints___xor__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsBlurEffect_BlurHints___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsBlurEffect::BlurHints* a0;
        int a0State = 0;
        QGraphicsBlurEffect::BlurHints* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QGraphicsBlurEffect_BlurHints, &a0, &a0State, sipType_QGraphicsBlurEffect_BlurHints, &a1, &a1State))
        {
            QGraphicsBlurEffect::BlurHints*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGraphicsBlurEffect::BlurHints((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGraphicsBlurEffect_BlurHints,a0State);
            sipReleaseType(a1,sipType_QGraphicsBlurEffect_BlurHints,a1State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsBlurEffect_BlurHints,NULL);
        }
    }

    {
        QGraphicsBlurEffect::BlurHints* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGraphicsBlurEffect_BlurHints, &a0, &a0State, &a1))
        {
            QGraphicsBlurEffect::BlurHints*sipRes = 0;

#line 346 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qglobal.sip"
        sipRes = new QGraphicsBlurEffect::BlurHints(*a0 ^ a1);
#line 243 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQGraphicsBlurEffectBlurHints.cpp"
            sipReleaseType(a0,sipType_QGraphicsBlurEffect_BlurHints,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsBlurEffect_BlurHints,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGraphicsBlurEffect_BlurHints___or__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsBlurEffect_BlurHints___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsBlurEffect::BlurHints* a0;
        int a0State = 0;
        QGraphicsBlurEffect::BlurHints* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QGraphicsBlurEffect_BlurHints, &a0, &a0State, sipType_QGraphicsBlurEffect_BlurHints, &a1, &a1State))
        {
            QGraphicsBlurEffect::BlurHints*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGraphicsBlurEffect::BlurHints((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGraphicsBlurEffect_BlurHints,a0State);
            sipReleaseType(a1,sipType_QGraphicsBlurEffect_BlurHints,a1State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsBlurEffect_BlurHints,NULL);
        }
    }

    {
        QGraphicsBlurEffect::BlurHints* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGraphicsBlurEffect_BlurHints, &a0, &a0State, &a1))
        {
            QGraphicsBlurEffect::BlurHints*sipRes = 0;

#line 341 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qglobal.sip"
        sipRes = new QGraphicsBlurEffect::BlurHints(*a0 | a1);
#line 295 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQGraphicsBlurEffectBlurHints.cpp"
            sipReleaseType(a0,sipType_QGraphicsBlurEffect_BlurHints,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsBlurEffect_BlurHints,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGraphicsBlurEffect_BlurHints___int__(PyObject *);}
static PyObject *slot_QGraphicsBlurEffect_BlurHints___int__(PyObject *sipSelf)
{
    QGraphicsBlurEffect::BlurHints *sipCpp = reinterpret_cast<QGraphicsBlurEffect::BlurHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsBlurEffect_BlurHints));

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


extern "C" {static PyObject *slot_QGraphicsBlurEffect_BlurHints___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsBlurEffect_BlurHints___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGraphicsBlurEffect_BlurHints)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGraphicsBlurEffect::BlurHints *sipCpp = reinterpret_cast<QGraphicsBlurEffect::BlurHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsBlurEffect_BlurHints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QGraphicsBlurEffect::BlurHints* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGraphicsBlurEffect_BlurHints, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QGraphicsBlurEffect::BlurHints::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGraphicsBlurEffect_BlurHints,a0State);

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


extern "C" {static PyObject *slot_QGraphicsBlurEffect_BlurHints___ior__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsBlurEffect_BlurHints___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGraphicsBlurEffect_BlurHints)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGraphicsBlurEffect::BlurHints *sipCpp = reinterpret_cast<QGraphicsBlurEffect::BlurHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsBlurEffect_BlurHints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QGraphicsBlurEffect::BlurHints* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGraphicsBlurEffect_BlurHints, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QGraphicsBlurEffect::BlurHints::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGraphicsBlurEffect_BlurHints,a0State);

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


extern "C" {static PyObject *slot_QGraphicsBlurEffect_BlurHints___iand__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsBlurEffect_BlurHints___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGraphicsBlurEffect_BlurHints)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGraphicsBlurEffect::BlurHints *sipCpp = reinterpret_cast<QGraphicsBlurEffect::BlurHints *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsBlurEffect_BlurHints));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QGraphicsBlurEffect::BlurHints::operator&=(a0);
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
extern "C" {static void *cast_QGraphicsBlurEffect_BlurHints(void *, const sipTypeDef *);}
static void *cast_QGraphicsBlurEffect_BlurHints(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QGraphicsBlurEffect_BlurHints)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGraphicsBlurEffect_BlurHints(void *, int);}
static void release_QGraphicsBlurEffect_BlurHints(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QGraphicsBlurEffect::BlurHints *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QGraphicsBlurEffect_BlurHints(void *, SIP_SSIZE_T, const void *);}
static void assign_QGraphicsBlurEffect_BlurHints(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QGraphicsBlurEffect::BlurHints *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QGraphicsBlurEffect::BlurHints *>(sipSrc);
}


extern "C" {static void *array_QGraphicsBlurEffect_BlurHints(SIP_SSIZE_T);}
static void *array_QGraphicsBlurEffect_BlurHints(SIP_SSIZE_T sipNrElem)
{
    return new QGraphicsBlurEffect::BlurHints[sipNrElem];
}


extern "C" {static void *copy_QGraphicsBlurEffect_BlurHints(const void *, SIP_SSIZE_T);}
static void *copy_QGraphicsBlurEffect_BlurHints(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QGraphicsBlurEffect::BlurHints(reinterpret_cast<const QGraphicsBlurEffect::BlurHints *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QGraphicsBlurEffect_BlurHints(sipSimpleWrapper *);}
static void dealloc_QGraphicsBlurEffect_BlurHints(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QGraphicsBlurEffect_BlurHints(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QGraphicsBlurEffect_BlurHints(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGraphicsBlurEffect_BlurHints(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QGraphicsBlurEffect::BlurHints *sipCpp = 0;

    {
        const QGraphicsBlurEffect::BlurHints* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QGraphicsBlurEffect_BlurHints, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QGraphicsBlurEffect::BlurHints(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QGraphicsBlurEffect::BlurHints *>(a0),sipType_QGraphicsBlurEffect_BlurHints,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QGraphicsBlurEffect::BlurHints(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QGraphicsBlurEffect::BlurHints();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QGraphicsBlurEffect_BlurHints(PyObject *, void **, int *, PyObject *);}
static int convertTo_QGraphicsBlurEffect_BlurHints(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QGraphicsBlurEffect::BlurHints **sipCppPtr = reinterpret_cast<QGraphicsBlurEffect::BlurHints **>(sipCppPtrV);

#line 379 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QGraphicsBlurEffect::BlurHints is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QGraphicsBlurEffect_BlurHint)) ||
            sipCanConvertToType(sipPy, sipType_QGraphicsBlurEffect_BlurHints, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QGraphicsBlurEffect_BlurHint)))
{
    *sipCppPtr = new QGraphicsBlurEffect::BlurHints(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QGraphicsBlurEffect::BlurHints *>(sipConvertToType(sipPy, sipType_QGraphicsBlurEffect_BlurHints, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 590 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQGraphicsBlurEffectBlurHints.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QGraphicsBlurEffect_BlurHints[] = {
    {(void *)slot_QGraphicsBlurEffect_BlurHints___bool__, bool_slot},
    {(void *)slot_QGraphicsBlurEffect_BlurHints___ne__, ne_slot},
    {(void *)slot_QGraphicsBlurEffect_BlurHints___eq__, eq_slot},
    {(void *)slot_QGraphicsBlurEffect_BlurHints___invert__, invert_slot},
    {(void *)slot_QGraphicsBlurEffect_BlurHints___and__, and_slot},
    {(void *)slot_QGraphicsBlurEffect_BlurHints___xor__, xor_slot},
    {(void *)slot_QGraphicsBlurEffect_BlurHints___or__, or_slot},
    {(void *)slot_QGraphicsBlurEffect_BlurHints___int__, int_slot},
    {(void *)slot_QGraphicsBlurEffect_BlurHints___ixor__, ixor_slot},
    {(void *)slot_QGraphicsBlurEffect_BlurHints___ior__, ior_slot},
    {(void *)slot_QGraphicsBlurEffect_BlurHints___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QGraphicsBlurEffect_BlurHints, "\1QGraphicsBlurEffect.BlurHints(QGraphicsBlurEffect.BlurHints)\n"
    "QGraphicsBlurEffect.BlurHints(int)\n"
    "QGraphicsBlurEffect.BlurHints()");


pyqt4ClassTypeDef sipTypeDef_QtGui_QGraphicsBlurEffect_BlurHints = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QGraphicsBlurEffect__BlurHints,
        {0}
    },
    {
        sipNameNr_BlurHints,
        {159, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGraphicsBlurEffect_BlurHints,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QGraphicsBlurEffect_BlurHints,
    init_type_QGraphicsBlurEffect_BlurHints,
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
    dealloc_QGraphicsBlurEffect_BlurHints,
    assign_QGraphicsBlurEffect_BlurHints,
    array_QGraphicsBlurEffect_BlurHints,
    copy_QGraphicsBlurEffect_BlurHints,
    release_QGraphicsBlurEffect_BlurHints,
    cast_QGraphicsBlurEffect_BlurHints,
    convertTo_QGraphicsBlurEffect_BlurHints,
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
