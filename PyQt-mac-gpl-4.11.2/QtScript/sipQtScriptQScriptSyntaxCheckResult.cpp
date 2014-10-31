/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.3 on Mon Sep 22 17:44:07 2014
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

#include "sipAPIQtScript.h"

#line 281 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtScript/qscriptengine.sip"
#include <qscriptengine.h>
#line 34 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtScript/sipQtScriptQScriptSyntaxCheckResult.cpp"

#line 36 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 38 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtScript/sipQtScriptQScriptSyntaxCheckResult.cpp"


PyDoc_STRVAR(doc_QScriptSyntaxCheckResult_state, "QScriptSyntaxCheckResult.state() -> QScriptSyntaxCheckResult.State");

extern "C" {static PyObject *meth_QScriptSyntaxCheckResult_state(PyObject *, PyObject *);}
static PyObject *meth_QScriptSyntaxCheckResult_state(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QScriptSyntaxCheckResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptSyntaxCheckResult, &sipCpp))
        {
            QScriptSyntaxCheckResult::State sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->state();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QScriptSyntaxCheckResult_State);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptSyntaxCheckResult, sipName_state, doc_QScriptSyntaxCheckResult_state);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptSyntaxCheckResult_errorLineNumber, "QScriptSyntaxCheckResult.errorLineNumber() -> int");

extern "C" {static PyObject *meth_QScriptSyntaxCheckResult_errorLineNumber(PyObject *, PyObject *);}
static PyObject *meth_QScriptSyntaxCheckResult_errorLineNumber(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QScriptSyntaxCheckResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptSyntaxCheckResult, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->errorLineNumber();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptSyntaxCheckResult, sipName_errorLineNumber, doc_QScriptSyntaxCheckResult_errorLineNumber);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptSyntaxCheckResult_errorColumnNumber, "QScriptSyntaxCheckResult.errorColumnNumber() -> int");

extern "C" {static PyObject *meth_QScriptSyntaxCheckResult_errorColumnNumber(PyObject *, PyObject *);}
static PyObject *meth_QScriptSyntaxCheckResult_errorColumnNumber(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QScriptSyntaxCheckResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptSyntaxCheckResult, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->errorColumnNumber();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptSyntaxCheckResult, sipName_errorColumnNumber, doc_QScriptSyntaxCheckResult_errorColumnNumber);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptSyntaxCheckResult_errorMessage, "QScriptSyntaxCheckResult.errorMessage() -> QString");

extern "C" {static PyObject *meth_QScriptSyntaxCheckResult_errorMessage(PyObject *, PyObject *);}
static PyObject *meth_QScriptSyntaxCheckResult_errorMessage(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QScriptSyntaxCheckResult *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptSyntaxCheckResult, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->errorMessage());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptSyntaxCheckResult, sipName_errorMessage, doc_QScriptSyntaxCheckResult_errorMessage);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QScriptSyntaxCheckResult(void *, const sipTypeDef *);}
static void *cast_QScriptSyntaxCheckResult(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QScriptSyntaxCheckResult)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QScriptSyntaxCheckResult(void *, int);}
static void release_QScriptSyntaxCheckResult(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QScriptSyntaxCheckResult *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QScriptSyntaxCheckResult(sipSimpleWrapper *);}
static void dealloc_QScriptSyntaxCheckResult(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QScriptSyntaxCheckResult(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QScriptSyntaxCheckResult(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QScriptSyntaxCheckResult(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QScriptSyntaxCheckResult *sipCpp = 0;

    {
        const QScriptSyntaxCheckResult* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QScriptSyntaxCheckResult, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QScriptSyntaxCheckResult(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QScriptSyntaxCheckResult[] = {
    {SIP_MLNAME_CAST(sipName_errorColumnNumber), meth_QScriptSyntaxCheckResult_errorColumnNumber, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptSyntaxCheckResult_errorColumnNumber)},
    {SIP_MLNAME_CAST(sipName_errorLineNumber), meth_QScriptSyntaxCheckResult_errorLineNumber, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptSyntaxCheckResult_errorLineNumber)},
    {SIP_MLNAME_CAST(sipName_errorMessage), meth_QScriptSyntaxCheckResult_errorMessage, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptSyntaxCheckResult_errorMessage)},
    {SIP_MLNAME_CAST(sipName_state), meth_QScriptSyntaxCheckResult_state, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptSyntaxCheckResult_state)}
};

static sipEnumMemberDef enummembers_QScriptSyntaxCheckResult[] = {
    {sipName_Error, static_cast<int>(QScriptSyntaxCheckResult::Error), 20},
    {sipName_Intermediate, static_cast<int>(QScriptSyntaxCheckResult::Intermediate), 20},
    {sipName_Valid, static_cast<int>(QScriptSyntaxCheckResult::Valid), 20},
};

PyDoc_STRVAR(doc_QScriptSyntaxCheckResult, "\1QScriptSyntaxCheckResult(QScriptSyntaxCheckResult)");


pyqt4ClassTypeDef sipTypeDef_QtScript_QScriptSyntaxCheckResult = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QScriptSyntaxCheckResult,
        {0}
    },
    {
        sipNameNr_QScriptSyntaxCheckResult,
        {0, 0, 1},
        4, methods_QScriptSyntaxCheckResult,
        3, enummembers_QScriptSyntaxCheckResult,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QScriptSyntaxCheckResult,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QScriptSyntaxCheckResult,
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
    dealloc_QScriptSyntaxCheckResult,
    0,
    0,
    0,
    release_QScriptSyntaxCheckResult,
    cast_QScriptSyntaxCheckResult,
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
