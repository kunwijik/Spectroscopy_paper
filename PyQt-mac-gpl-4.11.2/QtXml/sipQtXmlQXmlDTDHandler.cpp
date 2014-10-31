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

#line 255 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtXml/qxml.sip"
#include <qxml.h>
#line 34 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtXml/sipQtXmlQXmlDTDHandler.cpp"

#line 36 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 38 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtXml/sipQtXmlQXmlDTDHandler.cpp"


class sipQXmlDTDHandler : public QXmlDTDHandler
{
public:
    sipQXmlDTDHandler();
    sipQXmlDTDHandler(const QXmlDTDHandler&);
    virtual ~sipQXmlDTDHandler();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QString errorString() const;
    bool unparsedEntityDecl(const QString&,const QString&,const QString&,const QString&);
    bool notationDecl(const QString&,const QString&,const QString&);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQXmlDTDHandler(const sipQXmlDTDHandler &);
    sipQXmlDTDHandler &operator = (const sipQXmlDTDHandler &);

    char sipPyMethods[3];
};

sipQXmlDTDHandler::sipQXmlDTDHandler(): QXmlDTDHandler(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQXmlDTDHandler::sipQXmlDTDHandler(const QXmlDTDHandler& a0): QXmlDTDHandler(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQXmlDTDHandler::~sipQXmlDTDHandler()
{
    sipCommonDtor(sipPySelf);
}

QString sipQXmlDTDHandler::errorString() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,sipName_QXmlDTDHandler,sipName_errorString);

    if (!sipMeth)
        return QString();

    typedef QString (*sipVH_QtCore_62)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_62)(sipModuleAPI_QtXml_QtCore->em_virthandlers[62]))(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipQXmlDTDHandler::unparsedEntityDecl(const QString& a0,const QString& a1,const QString& a2,const QString& a3)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,sipName_QXmlDTDHandler,sipName_unparsedEntityDecl);

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtXml_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QString&,const QString&,const QString&,const QString&);

    return sipVH_QtXml_4(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2, a3);
}

bool sipQXmlDTDHandler::notationDecl(const QString& a0,const QString& a1,const QString& a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,sipName_QXmlDTDHandler,sipName_notationDecl);

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtXml_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QString&,const QString&,const QString&);

    return sipVH_QtXml_0(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2);
}


PyDoc_STRVAR(doc_QXmlDTDHandler_notationDecl, "QXmlDTDHandler.notationDecl(QString, QString, QString) -> bool");

extern "C" {static PyObject *meth_QXmlDTDHandler_notationDecl(PyObject *, PyObject *);}
static PyObject *meth_QXmlDTDHandler_notationDecl(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QString* a0;
        int a0State = 0;
        const QString* a1;
        int a1State = 0;
        const QString* a2;
        int a2State = 0;
        QXmlDTDHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1J1", &sipSelf, sipType_QXmlDTDHandler, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, sipType_QString,&a2, &a2State))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlDTDHandler, sipName_notationDecl);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->notationDecl(*a0,*a1,*a2);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast<QString *>(a2),sipType_QString,a2State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlDTDHandler, sipName_notationDecl, doc_QXmlDTDHandler_notationDecl);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlDTDHandler_unparsedEntityDecl, "QXmlDTDHandler.unparsedEntityDecl(QString, QString, QString, QString) -> bool");

extern "C" {static PyObject *meth_QXmlDTDHandler_unparsedEntityDecl(PyObject *, PyObject *);}
static PyObject *meth_QXmlDTDHandler_unparsedEntityDecl(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QString* a0;
        int a0State = 0;
        const QString* a1;
        int a1State = 0;
        const QString* a2;
        int a2State = 0;
        const QString* a3;
        int a3State = 0;
        QXmlDTDHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1J1J1", &sipSelf, sipType_QXmlDTDHandler, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, sipType_QString,&a2, &a2State, sipType_QString,&a3, &a3State))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlDTDHandler, sipName_unparsedEntityDecl);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->unparsedEntityDecl(*a0,*a1,*a2,*a3);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast<QString *>(a2),sipType_QString,a2State);
            sipReleaseType(const_cast<QString *>(a3),sipType_QString,a3State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlDTDHandler, sipName_unparsedEntityDecl, doc_QXmlDTDHandler_unparsedEntityDecl);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlDTDHandler_errorString, "QXmlDTDHandler.errorString() -> QString");

extern "C" {static PyObject *meth_QXmlDTDHandler_errorString(PyObject *, PyObject *);}
static PyObject *meth_QXmlDTDHandler_errorString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QXmlDTDHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlDTDHandler, &sipCpp))
        {
            QString*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlDTDHandler, sipName_errorString);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->errorString());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlDTDHandler, sipName_errorString, doc_QXmlDTDHandler_errorString);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QXmlDTDHandler(void *, const sipTypeDef *);}
static void *cast_QXmlDTDHandler(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QXmlDTDHandler)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QXmlDTDHandler(void *, int);}
static void release_QXmlDTDHandler(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQXmlDTDHandler *>(sipCppV);
    else
        delete reinterpret_cast<QXmlDTDHandler *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QXmlDTDHandler(sipSimpleWrapper *);}
static void dealloc_QXmlDTDHandler(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQXmlDTDHandler *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QXmlDTDHandler(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QXmlDTDHandler(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QXmlDTDHandler(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQXmlDTDHandler *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQXmlDTDHandler();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QXmlDTDHandler* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QXmlDTDHandler, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQXmlDTDHandler(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QXmlDTDHandler[] = {
    {SIP_MLNAME_CAST(sipName_errorString), meth_QXmlDTDHandler_errorString, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlDTDHandler_errorString)},
    {SIP_MLNAME_CAST(sipName_notationDecl), meth_QXmlDTDHandler_notationDecl, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlDTDHandler_notationDecl)},
    {SIP_MLNAME_CAST(sipName_unparsedEntityDecl), meth_QXmlDTDHandler_unparsedEntityDecl, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlDTDHandler_unparsedEntityDecl)}
};

PyDoc_STRVAR(doc_QXmlDTDHandler, "\1QXmlDTDHandler()\n"
    "QXmlDTDHandler(QXmlDTDHandler)");


pyqt4ClassTypeDef sipTypeDef_QtXml_QXmlDTDHandler = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QXmlDTDHandler,
        {0}
    },
    {
        sipNameNr_QXmlDTDHandler,
        {0, 0, 1},
        3, methods_QXmlDTDHandler,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QXmlDTDHandler,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QXmlDTDHandler,
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
    dealloc_QXmlDTDHandler,
    0,
    0,
    0,
    release_QXmlDTDHandler,
    cast_QXmlDTDHandler,
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
