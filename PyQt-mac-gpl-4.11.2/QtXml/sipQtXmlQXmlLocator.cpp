/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.3 on Mon Sep 22 17:44:24 2014
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

#include "sipAPIQtXml.h"

#line 206 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtXml/qxml.sip"
#include <qxml.h>
#line 34 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtXml/sipQtXmlQXmlLocator.cpp"



class sipQXmlLocator : public QXmlLocator
{
public:
    sipQXmlLocator();
    sipQXmlLocator(const QXmlLocator&);
    virtual ~sipQXmlLocator();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    int lineNumber() const;
    int columnNumber() const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQXmlLocator(const sipQXmlLocator &);
    sipQXmlLocator &operator = (const sipQXmlLocator &);

    char sipPyMethods[2];
};

sipQXmlLocator::sipQXmlLocator(): QXmlLocator(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQXmlLocator::sipQXmlLocator(const QXmlLocator& a0): QXmlLocator(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQXmlLocator::~sipQXmlLocator()
{
    sipCommonDtor(sipPySelf);
}

int sipQXmlLocator::lineNumber() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,sipName_QXmlLocator,sipName_lineNumber);

    if (!sipMeth)
        return 0;

    typedef int (*sipVH_QtCore_6)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_6)(sipModuleAPI_QtXml_QtCore->em_virthandlers[6]))(sipGILState, 0, sipPySelf, sipMeth);
}

int sipQXmlLocator::columnNumber() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,sipName_QXmlLocator,sipName_columnNumber);

    if (!sipMeth)
        return 0;

    typedef int (*sipVH_QtCore_6)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_6)(sipModuleAPI_QtXml_QtCore->em_virthandlers[6]))(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_QXmlLocator_columnNumber, "QXmlLocator.columnNumber() -> int");

extern "C" {static PyObject *meth_QXmlLocator_columnNumber(PyObject *, PyObject *);}
static PyObject *meth_QXmlLocator_columnNumber(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QXmlLocator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlLocator, &sipCpp))
        {
            int sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlLocator, sipName_columnNumber);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->columnNumber();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlLocator, sipName_columnNumber, doc_QXmlLocator_columnNumber);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlLocator_lineNumber, "QXmlLocator.lineNumber() -> int");

extern "C" {static PyObject *meth_QXmlLocator_lineNumber(PyObject *, PyObject *);}
static PyObject *meth_QXmlLocator_lineNumber(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QXmlLocator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlLocator, &sipCpp))
        {
            int sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlLocator, sipName_lineNumber);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->lineNumber();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlLocator, sipName_lineNumber, doc_QXmlLocator_lineNumber);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QXmlLocator(void *, const sipTypeDef *);}
static void *cast_QXmlLocator(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QXmlLocator)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QXmlLocator(void *, int);}
static void release_QXmlLocator(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQXmlLocator *>(sipCppV);
    else
        delete reinterpret_cast<QXmlLocator *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QXmlLocator(sipSimpleWrapper *);}
static void dealloc_QXmlLocator(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQXmlLocator *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QXmlLocator(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QXmlLocator(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QXmlLocator(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQXmlLocator *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQXmlLocator();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QXmlLocator* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QXmlLocator, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQXmlLocator(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QXmlLocator[] = {
    {SIP_MLNAME_CAST(sipName_columnNumber), meth_QXmlLocator_columnNumber, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlLocator_columnNumber)},
    {SIP_MLNAME_CAST(sipName_lineNumber), meth_QXmlLocator_lineNumber, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlLocator_lineNumber)}
};

PyDoc_STRVAR(doc_QXmlLocator, "\1QXmlLocator()\n"
    "QXmlLocator(QXmlLocator)");


pyqt4ClassTypeDef sipTypeDef_QtXml_QXmlLocator = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QXmlLocator,
        {0}
    },
    {
        sipNameNr_QXmlLocator,
        {0, 0, 1},
        2, methods_QXmlLocator,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QXmlLocator,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QXmlLocator,
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
    dealloc_QXmlLocator,
    0,
    0,
    0,
    release_QXmlLocator,
    cast_QXmlLocator,
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
