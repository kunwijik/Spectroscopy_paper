/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.3 on Mon Sep 22 17:44:06 2014
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

#include "sipAPIQtOpenGL.h"

#line 40 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtOpenGL/qglshaderprogram.sip"
#include <qglshaderprogram.h>
#line 34 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtOpenGL/sipQtOpenGLQGLShaderShaderType.cpp"

#line 40 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtOpenGL/qglshaderprogram.sip"
#include <qglshaderprogram.h>
#line 38 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtOpenGL/sipQtOpenGLQGLShaderShaderType.cpp"


extern "C" {static int slot_QGLShader_ShaderType___bool__(PyObject *);}
static int slot_QGLShader_ShaderType___bool__(PyObject *sipSelf)
{
    QGLShader::ShaderType *sipCpp = reinterpret_cast<QGLShader::ShaderType *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGLShader_ShaderType));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 370 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QGLShader::ShaderType::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 60 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtOpenGL/sipQtOpenGLQGLShaderShaderType.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QGLShader_ShaderType___ne__(PyObject *,PyObject *);}
static PyObject *slot_QGLShader_ShaderType___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QGLShader::ShaderType *sipCpp = reinterpret_cast<QGLShader::ShaderType *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGLShader_ShaderType));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGLShader::ShaderType* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGLShader_ShaderType, &a0, &a0State))
        {
            bool sipRes = 0;

#line 361 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QGLShader::ShaderType::Int() != a0->operator QGLShader::ShaderType::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 94 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtOpenGL/sipQtOpenGLQGLShaderShaderType.cpp"
            sipReleaseType(const_cast<QGLShader::ShaderType *>(a0),sipType_QGLShader_ShaderType,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtOpenGL,ne_slot,sipType_QGLShader_ShaderType,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGLShader_ShaderType___eq__(PyObject *,PyObject *);}
static PyObject *slot_QGLShader_ShaderType___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QGLShader::ShaderType *sipCpp = reinterpret_cast<QGLShader::ShaderType *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGLShader_ShaderType));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGLShader::ShaderType* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGLShader_ShaderType, &a0, &a0State))
        {
            bool sipRes = 0;

#line 352 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QGLShader::ShaderType::Int() == a0->operator QGLShader::ShaderType::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 134 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtOpenGL/sipQtOpenGLQGLShaderShaderType.cpp"
            sipReleaseType(const_cast<QGLShader::ShaderType *>(a0),sipType_QGLShader_ShaderType,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtOpenGL,eq_slot,sipType_QGLShader_ShaderType,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGLShader_ShaderType___invert__(PyObject *);}
static PyObject *slot_QGLShader_ShaderType___invert__(PyObject *sipSelf)
{
    QGLShader::ShaderType *sipCpp = reinterpret_cast<QGLShader::ShaderType *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGLShader_ShaderType));

    if (!sipCpp)
        return 0;


    {
        {
            QGLShader::ShaderType*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGLShader::ShaderType(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QGLShader_ShaderType,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QGLShader_ShaderType___and__(PyObject *,PyObject *);}
static PyObject *slot_QGLShader_ShaderType___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGLShader::ShaderType* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGLShader_ShaderType, &a0, &a0State, &a1))
        {
            QGLShader::ShaderType*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGLShader::ShaderType((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGLShader_ShaderType,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGLShader_ShaderType,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtOpenGL,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGLShader_ShaderType___xor__(PyObject *,PyObject *);}
static PyObject *slot_QGLShader_ShaderType___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGLShader::ShaderType* a0;
        int a0State = 0;
        QGLShader::ShaderType* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QGLShader_ShaderType, &a0, &a0State, sipType_QGLShader_ShaderType, &a1, &a1State))
        {
            QGLShader::ShaderType*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGLShader::ShaderType((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGLShader_ShaderType,a0State);
            sipReleaseType(a1,sipType_QGLShader_ShaderType,a1State);

            return sipConvertFromNewType(sipRes,sipType_QGLShader_ShaderType,NULL);
        }
    }

    {
        QGLShader::ShaderType* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGLShader_ShaderType, &a0, &a0State, &a1))
        {
            QGLShader::ShaderType*sipRes = 0;

#line 346 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qglobal.sip"
        sipRes = new QGLShader::ShaderType(*a0 ^ a1);
#line 243 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtOpenGL/sipQtOpenGLQGLShaderShaderType.cpp"
            sipReleaseType(a0,sipType_QGLShader_ShaderType,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGLShader_ShaderType,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtOpenGL,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGLShader_ShaderType___or__(PyObject *,PyObject *);}
static PyObject *slot_QGLShader_ShaderType___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGLShader::ShaderType* a0;
        int a0State = 0;
        QGLShader::ShaderType* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QGLShader_ShaderType, &a0, &a0State, sipType_QGLShader_ShaderType, &a1, &a1State))
        {
            QGLShader::ShaderType*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGLShader::ShaderType((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGLShader_ShaderType,a0State);
            sipReleaseType(a1,sipType_QGLShader_ShaderType,a1State);

            return sipConvertFromNewType(sipRes,sipType_QGLShader_ShaderType,NULL);
        }
    }

    {
        QGLShader::ShaderType* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGLShader_ShaderType, &a0, &a0State, &a1))
        {
            QGLShader::ShaderType*sipRes = 0;

#line 341 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qglobal.sip"
        sipRes = new QGLShader::ShaderType(*a0 | a1);
#line 295 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtOpenGL/sipQtOpenGLQGLShaderShaderType.cpp"
            sipReleaseType(a0,sipType_QGLShader_ShaderType,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGLShader_ShaderType,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtOpenGL,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGLShader_ShaderType___int__(PyObject *);}
static PyObject *slot_QGLShader_ShaderType___int__(PyObject *sipSelf)
{
    QGLShader::ShaderType *sipCpp = reinterpret_cast<QGLShader::ShaderType *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGLShader_ShaderType));

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


extern "C" {static PyObject *slot_QGLShader_ShaderType___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QGLShader_ShaderType___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGLShader_ShaderType)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGLShader::ShaderType *sipCpp = reinterpret_cast<QGLShader::ShaderType *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGLShader_ShaderType));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QGLShader::ShaderType* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGLShader_ShaderType, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QGLShader::ShaderType::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGLShader_ShaderType,a0State);

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


extern "C" {static PyObject *slot_QGLShader_ShaderType___ior__(PyObject *,PyObject *);}
static PyObject *slot_QGLShader_ShaderType___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGLShader_ShaderType)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGLShader::ShaderType *sipCpp = reinterpret_cast<QGLShader::ShaderType *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGLShader_ShaderType));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QGLShader::ShaderType* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGLShader_ShaderType, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QGLShader::ShaderType::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QGLShader_ShaderType,a0State);

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


extern "C" {static PyObject *slot_QGLShader_ShaderType___iand__(PyObject *,PyObject *);}
static PyObject *slot_QGLShader_ShaderType___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGLShader_ShaderType)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGLShader::ShaderType *sipCpp = reinterpret_cast<QGLShader::ShaderType *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGLShader_ShaderType));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QGLShader::ShaderType::operator&=(a0);
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
extern "C" {static void *cast_QGLShader_ShaderType(void *, const sipTypeDef *);}
static void *cast_QGLShader_ShaderType(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QGLShader_ShaderType)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGLShader_ShaderType(void *, int);}
static void release_QGLShader_ShaderType(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QGLShader::ShaderType *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QGLShader_ShaderType(void *, SIP_SSIZE_T, const void *);}
static void assign_QGLShader_ShaderType(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QGLShader::ShaderType *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QGLShader::ShaderType *>(sipSrc);
}


extern "C" {static void *array_QGLShader_ShaderType(SIP_SSIZE_T);}
static void *array_QGLShader_ShaderType(SIP_SSIZE_T sipNrElem)
{
    return new QGLShader::ShaderType[sipNrElem];
}


extern "C" {static void *copy_QGLShader_ShaderType(const void *, SIP_SSIZE_T);}
static void *copy_QGLShader_ShaderType(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QGLShader::ShaderType(reinterpret_cast<const QGLShader::ShaderType *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QGLShader_ShaderType(sipSimpleWrapper *);}
static void dealloc_QGLShader_ShaderType(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QGLShader_ShaderType(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QGLShader_ShaderType(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGLShader_ShaderType(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QGLShader::ShaderType *sipCpp = 0;

    {
        const QGLShader::ShaderType* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QGLShader_ShaderType, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QGLShader::ShaderType(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QGLShader::ShaderType *>(a0),sipType_QGLShader_ShaderType,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QGLShader::ShaderType(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QGLShader::ShaderType();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QGLShader_ShaderType(PyObject *, void **, int *, PyObject *);}
static int convertTo_QGLShader_ShaderType(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QGLShader::ShaderType **sipCppPtr = reinterpret_cast<QGLShader::ShaderType **>(sipCppPtrV);

#line 379 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QGLShader::ShaderType is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QGLShader_ShaderTypeBit)) ||
            sipCanConvertToType(sipPy, sipType_QGLShader_ShaderType, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QGLShader_ShaderTypeBit)))
{
    *sipCppPtr = new QGLShader::ShaderType(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QGLShader::ShaderType *>(sipConvertToType(sipPy, sipType_QGLShader_ShaderType, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 590 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtOpenGL/sipQtOpenGLQGLShaderShaderType.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QGLShader_ShaderType[] = {
    {(void *)slot_QGLShader_ShaderType___bool__, bool_slot},
    {(void *)slot_QGLShader_ShaderType___ne__, ne_slot},
    {(void *)slot_QGLShader_ShaderType___eq__, eq_slot},
    {(void *)slot_QGLShader_ShaderType___invert__, invert_slot},
    {(void *)slot_QGLShader_ShaderType___and__, and_slot},
    {(void *)slot_QGLShader_ShaderType___xor__, xor_slot},
    {(void *)slot_QGLShader_ShaderType___or__, or_slot},
    {(void *)slot_QGLShader_ShaderType___int__, int_slot},
    {(void *)slot_QGLShader_ShaderType___ixor__, ixor_slot},
    {(void *)slot_QGLShader_ShaderType___ior__, ior_slot},
    {(void *)slot_QGLShader_ShaderType___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QGLShader_ShaderType, "\1QGLShader.ShaderType(QGLShader.ShaderType)\n"
    "QGLShader.ShaderType(int)\n"
    "QGLShader.ShaderType()");


pyqt4ClassTypeDef sipTypeDef_QtOpenGL_QGLShader_ShaderType = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QGLShader__ShaderType,
        {0}
    },
    {
        sipNameNr_ShaderType,
        {19, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGLShader_ShaderType,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QGLShader_ShaderType,
    init_type_QGLShader_ShaderType,
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
    dealloc_QGLShader_ShaderType,
    assign_QGLShader_ShaderType,
    array_QGLShader_ShaderType,
    copy_QGLShader_ShaderType,
    release_QGLShader_ShaderType,
    cast_QGLShader_ShaderType,
    convertTo_QGLShader_ShaderType,
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
