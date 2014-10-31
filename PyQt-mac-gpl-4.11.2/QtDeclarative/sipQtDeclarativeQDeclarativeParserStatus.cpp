/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.3 on Mon Sep 22 17:43:49 2014
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

#include "sipAPIQtDeclarative.h"

#line 33 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtDeclarative/qdeclarativeparserstatus.sip"
#include <qdeclarativeparserstatus.h>
#line 34 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtDeclarative/sipQtDeclarativeQDeclarativeParserStatus.cpp"



class sipQDeclarativeParserStatus : public QDeclarativeParserStatus
{
public:
    sipQDeclarativeParserStatus();
    sipQDeclarativeParserStatus(const QDeclarativeParserStatus&);
    virtual ~sipQDeclarativeParserStatus();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void componentComplete();
    void classBegin();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQDeclarativeParserStatus(const sipQDeclarativeParserStatus &);
    sipQDeclarativeParserStatus &operator = (const sipQDeclarativeParserStatus &);

    char sipPyMethods[2];
};

sipQDeclarativeParserStatus::sipQDeclarativeParserStatus(): QDeclarativeParserStatus(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQDeclarativeParserStatus::sipQDeclarativeParserStatus(const QDeclarativeParserStatus& a0): QDeclarativeParserStatus(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQDeclarativeParserStatus::~sipQDeclarativeParserStatus()
{
    sipCommonDtor(sipPySelf);
}

void sipQDeclarativeParserStatus::componentComplete()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_QDeclarativeParserStatus,sipName_componentComplete);

    if (!sipMeth)
        return;

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtDeclarative_QtCore->em_virthandlers[11]))(sipGILState, 0, sipPySelf, sipMeth);
}

void sipQDeclarativeParserStatus::classBegin()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,sipName_QDeclarativeParserStatus,sipName_classBegin);

    if (!sipMeth)
        return;

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtDeclarative_QtCore->em_virthandlers[11]))(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_QDeclarativeParserStatus_classBegin, "QDeclarativeParserStatus.classBegin()");

extern "C" {static PyObject *meth_QDeclarativeParserStatus_classBegin(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativeParserStatus_classBegin(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QDeclarativeParserStatus *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDeclarativeParserStatus, &sipCpp))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDeclarativeParserStatus, sipName_classBegin);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->classBegin();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativeParserStatus, sipName_classBegin, doc_QDeclarativeParserStatus_classBegin);

    return NULL;
}


PyDoc_STRVAR(doc_QDeclarativeParserStatus_componentComplete, "QDeclarativeParserStatus.componentComplete()");

extern "C" {static PyObject *meth_QDeclarativeParserStatus_componentComplete(PyObject *, PyObject *);}
static PyObject *meth_QDeclarativeParserStatus_componentComplete(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QDeclarativeParserStatus *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDeclarativeParserStatus, &sipCpp))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDeclarativeParserStatus, sipName_componentComplete);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->componentComplete();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDeclarativeParserStatus, sipName_componentComplete, doc_QDeclarativeParserStatus_componentComplete);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QDeclarativeParserStatus(void *, const sipTypeDef *);}
static void *cast_QDeclarativeParserStatus(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QDeclarativeParserStatus)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDeclarativeParserStatus(void *, int);}
static void release_QDeclarativeParserStatus(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQDeclarativeParserStatus *>(sipCppV);
    else
        delete reinterpret_cast<QDeclarativeParserStatus *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QDeclarativeParserStatus(sipSimpleWrapper *);}
static void dealloc_QDeclarativeParserStatus(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQDeclarativeParserStatus *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QDeclarativeParserStatus(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QDeclarativeParserStatus(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDeclarativeParserStatus(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQDeclarativeParserStatus *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQDeclarativeParserStatus();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QDeclarativeParserStatus* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDeclarativeParserStatus, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQDeclarativeParserStatus(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QDeclarativeParserStatus[] = {
    {SIP_MLNAME_CAST(sipName_classBegin), meth_QDeclarativeParserStatus_classBegin, METH_VARARGS, SIP_MLDOC_CAST(doc_QDeclarativeParserStatus_classBegin)},
    {SIP_MLNAME_CAST(sipName_componentComplete), meth_QDeclarativeParserStatus_componentComplete, METH_VARARGS, SIP_MLDOC_CAST(doc_QDeclarativeParserStatus_componentComplete)}
};

PyDoc_STRVAR(doc_QDeclarativeParserStatus, "\1QDeclarativeParserStatus()\n"
    "QDeclarativeParserStatus(QDeclarativeParserStatus)");


pyqt4ClassTypeDef sipTypeDef_QtDeclarative_QDeclarativeParserStatus = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QDeclarativeParserStatus,
        {0}
    },
    {
        sipNameNr_QDeclarativeParserStatus,
        {0, 0, 1},
        2, methods_QDeclarativeParserStatus,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDeclarativeParserStatus,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QDeclarativeParserStatus,
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
    dealloc_QDeclarativeParserStatus,
    0,
    0,
    0,
    release_QDeclarativeParserStatus,
    cast_QDeclarativeParserStatus,
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
