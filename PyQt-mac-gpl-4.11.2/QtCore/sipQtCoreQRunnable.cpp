/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.3 on Mon Sep 22 17:43:44 2014
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

#include "sipAPIQtCore.h"

#line 33 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qrunnable.sip"
#include <qrunnable.h>
#line 34 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtCore/sipQtCoreQRunnable.cpp"



class sipQRunnable : public QRunnable
{
public:
    sipQRunnable();
    sipQRunnable(const QRunnable&);
    virtual ~sipQRunnable();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void run();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQRunnable(const sipQRunnable &);
    sipQRunnable &operator = (const sipQRunnable &);

    char sipPyMethods[1];
};

sipQRunnable::sipQRunnable(): QRunnable(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQRunnable::sipQRunnable(const QRunnable& a0): QRunnable(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQRunnable::~sipQRunnable()
{
    sipCommonDtor(sipPySelf);
}

void sipQRunnable::run()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_QRunnable,sipName_run);

    if (!sipMeth)
        return;

    extern void sipVH_QtCore_11(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH_QtCore_11(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_QRunnable_run, "QRunnable.run()");

extern "C" {static PyObject *meth_QRunnable_run(PyObject *, PyObject *);}
static PyObject *meth_QRunnable_run(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QRunnable *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRunnable, &sipCpp))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QRunnable, sipName_run);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->run();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRunnable, sipName_run, doc_QRunnable_run);

    return NULL;
}


PyDoc_STRVAR(doc_QRunnable_autoDelete, "QRunnable.autoDelete() -> bool");

extern "C" {static PyObject *meth_QRunnable_autoDelete(PyObject *, PyObject *);}
static PyObject *meth_QRunnable_autoDelete(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRunnable *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRunnable, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->autoDelete();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRunnable, sipName_autoDelete, doc_QRunnable_autoDelete);

    return NULL;
}


PyDoc_STRVAR(doc_QRunnable_setAutoDelete, "QRunnable.setAutoDelete(bool)");

extern "C" {static PyObject *meth_QRunnable_setAutoDelete(PyObject *, PyObject *);}
static PyObject *meth_QRunnable_setAutoDelete(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QRunnable *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QRunnable, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setAutoDelete(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRunnable, sipName_setAutoDelete, doc_QRunnable_setAutoDelete);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QRunnable(void *, const sipTypeDef *);}
static void *cast_QRunnable(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QRunnable)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QRunnable(void *, int);}
static void release_QRunnable(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQRunnable *>(sipCppV);
    else
        delete reinterpret_cast<QRunnable *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QRunnable(sipSimpleWrapper *);}
static void dealloc_QRunnable(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQRunnable *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QRunnable(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QRunnable(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QRunnable(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQRunnable *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQRunnable();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QRunnable* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QRunnable, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQRunnable(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QRunnable[] = {
    {SIP_MLNAME_CAST(sipName_autoDelete), meth_QRunnable_autoDelete, METH_VARARGS, SIP_MLDOC_CAST(doc_QRunnable_autoDelete)},
    {SIP_MLNAME_CAST(sipName_run), meth_QRunnable_run, METH_VARARGS, SIP_MLDOC_CAST(doc_QRunnable_run)},
    {SIP_MLNAME_CAST(sipName_setAutoDelete), meth_QRunnable_setAutoDelete, METH_VARARGS, SIP_MLDOC_CAST(doc_QRunnable_setAutoDelete)}
};

PyDoc_STRVAR(doc_QRunnable, "\1QRunnable()\n"
    "QRunnable(QRunnable)");


pyqt4ClassTypeDef sipTypeDef_QtCore_QRunnable = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QRunnable,
        {0}
    },
    {
        sipNameNr_QRunnable,
        {0, 0, 1},
        3, methods_QRunnable,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QRunnable,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    -1,
    0,
    0,
    init_type_QRunnable,
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
    dealloc_QRunnable,
    0,
    0,
    0,
    release_QRunnable,
    cast_QRunnable,
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