/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.3 on Mon Sep 22 17:44:28 2014
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

#include "sipAPIQtDesigner.h"

#line 31 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtDesigner/membersheet.sip"
#include <membersheet.h>
#line 34 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtDesigner/sipQtDesignerQDesignerMemberSheetExtension.cpp"

#line 33 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 38 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtDesigner/sipQtDesignerQDesignerMemberSheetExtension.cpp"
#line 37 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 41 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtDesigner/sipQtDesignerQDesignerMemberSheetExtension.cpp"
#line 36 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 44 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtDesigner/sipQtDesignerQDesignerMemberSheetExtension.cpp"


class sipQDesignerMemberSheetExtension : public QDesignerMemberSheetExtension
{
public:
    sipQDesignerMemberSheetExtension();
    sipQDesignerMemberSheetExtension(const QDesignerMemberSheetExtension&);
    virtual ~sipQDesignerMemberSheetExtension();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QList<QByteArray> parameterNames(int) const;
    QList<QByteArray> parameterTypes(int) const;
    QString signature(int) const;
    QString declaredInClass(int) const;
    bool inheritedFromWidget(int) const;
    bool isSlot(int) const;
    bool isSignal(int) const;
    void setVisible(int,bool);
    bool isVisible(int) const;
    void setMemberGroup(int,const QString&);
    QString memberGroup(int) const;
    QString memberName(int) const;
    int indexOf(const QString&) const;
    int count() const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQDesignerMemberSheetExtension(const sipQDesignerMemberSheetExtension &);
    sipQDesignerMemberSheetExtension &operator = (const sipQDesignerMemberSheetExtension &);

    char sipPyMethods[14];
};

sipQDesignerMemberSheetExtension::sipQDesignerMemberSheetExtension(): QDesignerMemberSheetExtension(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQDesignerMemberSheetExtension::sipQDesignerMemberSheetExtension(const QDesignerMemberSheetExtension& a0): QDesignerMemberSheetExtension(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQDesignerMemberSheetExtension::~sipQDesignerMemberSheetExtension()
{
    sipCommonDtor(sipPySelf);
}

QList<QByteArray> sipQDesignerMemberSheetExtension::parameterNames(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,sipName_QDesignerMemberSheetExtension,sipName_parameterNames);

    if (!sipMeth)
        return QList<QByteArray>();

    extern QList<QByteArray> sipVH_QtDesigner_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH_QtDesigner_5(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QList<QByteArray> sipQDesignerMemberSheetExtension::parameterTypes(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,sipName_QDesignerMemberSheetExtension,sipName_parameterTypes);

    if (!sipMeth)
        return QList<QByteArray>();

    extern QList<QByteArray> sipVH_QtDesigner_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH_QtDesigner_5(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QString sipQDesignerMemberSheetExtension::signature(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,sipName_QDesignerMemberSheetExtension,sipName_signature);

    if (!sipMeth)
        return QString();

    typedef QString (*sipVH_QtGui_111)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtGui_111)(sipModuleAPI_QtDesigner_QtGui->em_virthandlers[111]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QString sipQDesignerMemberSheetExtension::declaredInClass(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[3]),sipPySelf,sipName_QDesignerMemberSheetExtension,sipName_declaredInClass);

    if (!sipMeth)
        return QString();

    typedef QString (*sipVH_QtGui_111)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtGui_111)(sipModuleAPI_QtDesigner_QtGui->em_virthandlers[111]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQDesignerMemberSheetExtension::inheritedFromWidget(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[4]),sipPySelf,sipName_QDesignerMemberSheetExtension,sipName_inheritedFromWidget);

    if (!sipMeth)
        return 0;

    typedef bool (*sipVH_QtCore_23)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtCore_23)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[23]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQDesignerMemberSheetExtension::isSlot(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[5]),sipPySelf,sipName_QDesignerMemberSheetExtension,sipName_isSlot);

    if (!sipMeth)
        return 0;

    typedef bool (*sipVH_QtCore_23)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtCore_23)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[23]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQDesignerMemberSheetExtension::isSignal(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[6]),sipPySelf,sipName_QDesignerMemberSheetExtension,sipName_isSignal);

    if (!sipMeth)
        return 0;

    typedef bool (*sipVH_QtCore_23)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtCore_23)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[23]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQDesignerMemberSheetExtension::setVisible(int a0,bool a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,sipName_QDesignerMemberSheetExtension,sipName_setVisible);

    if (!sipMeth)
        return;

    extern void sipVH_QtDesigner_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int,bool);

    sipVH_QtDesigner_3(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQDesignerMemberSheetExtension::isVisible(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[8]),sipPySelf,sipName_QDesignerMemberSheetExtension,sipName_isVisible);

    if (!sipMeth)
        return 0;

    typedef bool (*sipVH_QtCore_23)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtCore_23)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[23]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQDesignerMemberSheetExtension::setMemberGroup(int a0,const QString& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,sipName_QDesignerMemberSheetExtension,sipName_setMemberGroup);

    if (!sipMeth)
        return;

    extern void sipVH_QtDesigner_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int,const QString&);

    sipVH_QtDesigner_4(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

QString sipQDesignerMemberSheetExtension::memberGroup(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[10]),sipPySelf,sipName_QDesignerMemberSheetExtension,sipName_memberGroup);

    if (!sipMeth)
        return QString();

    typedef QString (*sipVH_QtGui_111)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtGui_111)(sipModuleAPI_QtDesigner_QtGui->em_virthandlers[111]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QString sipQDesignerMemberSheetExtension::memberName(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[11]),sipPySelf,sipName_QDesignerMemberSheetExtension,sipName_memberName);

    if (!sipMeth)
        return QString();

    typedef QString (*sipVH_QtGui_111)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtGui_111)(sipModuleAPI_QtDesigner_QtGui->em_virthandlers[111]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

int sipQDesignerMemberSheetExtension::indexOf(const QString& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[12]),sipPySelf,sipName_QDesignerMemberSheetExtension,sipName_indexOf);

    if (!sipMeth)
        return 0;

    typedef int (*sipVH_QtGui_112)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QString&);

    return ((sipVH_QtGui_112)(sipModuleAPI_QtDesigner_QtGui->em_virthandlers[112]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

int sipQDesignerMemberSheetExtension::count() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[13]),sipPySelf,sipName_QDesignerMemberSheetExtension,sipName_count);

    if (!sipMeth)
        return 0;

    typedef int (*sipVH_QtCore_6)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_6)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[6]))(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_QDesignerMemberSheetExtension_count, "QDesignerMemberSheetExtension.count() -> int");

extern "C" {static PyObject *meth_QDesignerMemberSheetExtension_count(PyObject *, PyObject *);}
static PyObject *meth_QDesignerMemberSheetExtension_count(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QDesignerMemberSheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDesignerMemberSheetExtension, &sipCpp))
        {
            int sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerMemberSheetExtension, sipName_count);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->count();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerMemberSheetExtension, sipName_count, doc_QDesignerMemberSheetExtension_count);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerMemberSheetExtension_indexOf, "QDesignerMemberSheetExtension.indexOf(QString) -> int");

extern "C" {static PyObject *meth_QDesignerMemberSheetExtension_indexOf(PyObject *, PyObject *);}
static PyObject *meth_QDesignerMemberSheetExtension_indexOf(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QString* a0;
        int a0State = 0;
        const QDesignerMemberSheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QDesignerMemberSheetExtension, &sipCpp, sipType_QString,&a0, &a0State))
        {
            int sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerMemberSheetExtension, sipName_indexOf);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->indexOf(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerMemberSheetExtension, sipName_indexOf, doc_QDesignerMemberSheetExtension_indexOf);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerMemberSheetExtension_memberName, "QDesignerMemberSheetExtension.memberName(int) -> QString");

extern "C" {static PyObject *meth_QDesignerMemberSheetExtension_memberName(PyObject *, PyObject *);}
static PyObject *meth_QDesignerMemberSheetExtension_memberName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        const QDesignerMemberSheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QDesignerMemberSheetExtension, &sipCpp, &a0))
        {
            QString*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerMemberSheetExtension, sipName_memberName);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->memberName(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerMemberSheetExtension, sipName_memberName, doc_QDesignerMemberSheetExtension_memberName);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerMemberSheetExtension_memberGroup, "QDesignerMemberSheetExtension.memberGroup(int) -> QString");

extern "C" {static PyObject *meth_QDesignerMemberSheetExtension_memberGroup(PyObject *, PyObject *);}
static PyObject *meth_QDesignerMemberSheetExtension_memberGroup(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        const QDesignerMemberSheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QDesignerMemberSheetExtension, &sipCpp, &a0))
        {
            QString*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerMemberSheetExtension, sipName_memberGroup);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->memberGroup(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerMemberSheetExtension, sipName_memberGroup, doc_QDesignerMemberSheetExtension_memberGroup);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerMemberSheetExtension_setMemberGroup, "QDesignerMemberSheetExtension.setMemberGroup(int, QString)");

extern "C" {static PyObject *meth_QDesignerMemberSheetExtension_setMemberGroup(PyObject *, PyObject *);}
static PyObject *meth_QDesignerMemberSheetExtension_setMemberGroup(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        const QString* a1;
        int a1State = 0;
        QDesignerMemberSheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiJ1", &sipSelf, sipType_QDesignerMemberSheetExtension, &sipCpp, &a0, sipType_QString,&a1, &a1State))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerMemberSheetExtension, sipName_setMemberGroup);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->setMemberGroup(a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerMemberSheetExtension, sipName_setMemberGroup, doc_QDesignerMemberSheetExtension_setMemberGroup);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerMemberSheetExtension_isVisible, "QDesignerMemberSheetExtension.isVisible(int) -> bool");

extern "C" {static PyObject *meth_QDesignerMemberSheetExtension_isVisible(PyObject *, PyObject *);}
static PyObject *meth_QDesignerMemberSheetExtension_isVisible(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        const QDesignerMemberSheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QDesignerMemberSheetExtension, &sipCpp, &a0))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerMemberSheetExtension, sipName_isVisible);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isVisible(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerMemberSheetExtension, sipName_isVisible, doc_QDesignerMemberSheetExtension_isVisible);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerMemberSheetExtension_setVisible, "QDesignerMemberSheetExtension.setVisible(int, bool)");

extern "C" {static PyObject *meth_QDesignerMemberSheetExtension_setVisible(PyObject *, PyObject *);}
static PyObject *meth_QDesignerMemberSheetExtension_setVisible(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        bool a1;
        QDesignerMemberSheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bib", &sipSelf, sipType_QDesignerMemberSheetExtension, &sipCpp, &a0, &a1))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerMemberSheetExtension, sipName_setVisible);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->setVisible(a0,a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerMemberSheetExtension, sipName_setVisible, doc_QDesignerMemberSheetExtension_setVisible);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerMemberSheetExtension_isSignal, "QDesignerMemberSheetExtension.isSignal(int) -> bool");

extern "C" {static PyObject *meth_QDesignerMemberSheetExtension_isSignal(PyObject *, PyObject *);}
static PyObject *meth_QDesignerMemberSheetExtension_isSignal(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        const QDesignerMemberSheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QDesignerMemberSheetExtension, &sipCpp, &a0))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerMemberSheetExtension, sipName_isSignal);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isSignal(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerMemberSheetExtension, sipName_isSignal, doc_QDesignerMemberSheetExtension_isSignal);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerMemberSheetExtension_isSlot, "QDesignerMemberSheetExtension.isSlot(int) -> bool");

extern "C" {static PyObject *meth_QDesignerMemberSheetExtension_isSlot(PyObject *, PyObject *);}
static PyObject *meth_QDesignerMemberSheetExtension_isSlot(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        const QDesignerMemberSheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QDesignerMemberSheetExtension, &sipCpp, &a0))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerMemberSheetExtension, sipName_isSlot);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isSlot(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerMemberSheetExtension, sipName_isSlot, doc_QDesignerMemberSheetExtension_isSlot);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerMemberSheetExtension_inheritedFromWidget, "QDesignerMemberSheetExtension.inheritedFromWidget(int) -> bool");

extern "C" {static PyObject *meth_QDesignerMemberSheetExtension_inheritedFromWidget(PyObject *, PyObject *);}
static PyObject *meth_QDesignerMemberSheetExtension_inheritedFromWidget(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        const QDesignerMemberSheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QDesignerMemberSheetExtension, &sipCpp, &a0))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerMemberSheetExtension, sipName_inheritedFromWidget);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->inheritedFromWidget(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerMemberSheetExtension, sipName_inheritedFromWidget, doc_QDesignerMemberSheetExtension_inheritedFromWidget);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerMemberSheetExtension_declaredInClass, "QDesignerMemberSheetExtension.declaredInClass(int) -> QString");

extern "C" {static PyObject *meth_QDesignerMemberSheetExtension_declaredInClass(PyObject *, PyObject *);}
static PyObject *meth_QDesignerMemberSheetExtension_declaredInClass(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        const QDesignerMemberSheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QDesignerMemberSheetExtension, &sipCpp, &a0))
        {
            QString*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerMemberSheetExtension, sipName_declaredInClass);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->declaredInClass(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerMemberSheetExtension, sipName_declaredInClass, doc_QDesignerMemberSheetExtension_declaredInClass);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerMemberSheetExtension_signature, "QDesignerMemberSheetExtension.signature(int) -> QString");

extern "C" {static PyObject *meth_QDesignerMemberSheetExtension_signature(PyObject *, PyObject *);}
static PyObject *meth_QDesignerMemberSheetExtension_signature(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        const QDesignerMemberSheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QDesignerMemberSheetExtension, &sipCpp, &a0))
        {
            QString*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerMemberSheetExtension, sipName_signature);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->signature(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerMemberSheetExtension, sipName_signature, doc_QDesignerMemberSheetExtension_signature);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerMemberSheetExtension_parameterTypes, "QDesignerMemberSheetExtension.parameterTypes(int) -> list-of-QByteArray");

extern "C" {static PyObject *meth_QDesignerMemberSheetExtension_parameterTypes(PyObject *, PyObject *);}
static PyObject *meth_QDesignerMemberSheetExtension_parameterTypes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        const QDesignerMemberSheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QDesignerMemberSheetExtension, &sipCpp, &a0))
        {
            QList<QByteArray>*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerMemberSheetExtension, sipName_parameterTypes);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QByteArray>(sipCpp->parameterTypes(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerMemberSheetExtension, sipName_parameterTypes, doc_QDesignerMemberSheetExtension_parameterTypes);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerMemberSheetExtension_parameterNames, "QDesignerMemberSheetExtension.parameterNames(int) -> list-of-QByteArray");

extern "C" {static PyObject *meth_QDesignerMemberSheetExtension_parameterNames(PyObject *, PyObject *);}
static PyObject *meth_QDesignerMemberSheetExtension_parameterNames(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        const QDesignerMemberSheetExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QDesignerMemberSheetExtension, &sipCpp, &a0))
        {
            QList<QByteArray>*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerMemberSheetExtension, sipName_parameterNames);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QByteArray>(sipCpp->parameterNames(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerMemberSheetExtension, sipName_parameterNames, doc_QDesignerMemberSheetExtension_parameterNames);

    return NULL;
}


extern "C" {static SIP_SSIZE_T slot_QDesignerMemberSheetExtension___len__(PyObject *);}
static SIP_SSIZE_T slot_QDesignerMemberSheetExtension___len__(PyObject *sipSelf)
{
    QDesignerMemberSheetExtension *sipCpp = reinterpret_cast<QDesignerMemberSheetExtension *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDesignerMemberSheetExtension));

    if (!sipCpp)
        return 0;


    {
        {
            SIP_SSIZE_T sipRes = 0;

#line 1 "Auto-generated"
            sipRes = (SIP_SSIZE_T)sipCpp->count();
#line 846 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtDesigner/sipQtDesignerQDesignerMemberSheetExtension.cpp"

            return sipRes;
        }
    }

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QDesignerMemberSheetExtension(void *, const sipTypeDef *);}
static void *cast_QDesignerMemberSheetExtension(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QDesignerMemberSheetExtension)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDesignerMemberSheetExtension(void *, int);}
static void release_QDesignerMemberSheetExtension(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQDesignerMemberSheetExtension *>(sipCppV);
    else
        delete reinterpret_cast<QDesignerMemberSheetExtension *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QDesignerMemberSheetExtension(sipSimpleWrapper *);}
static void dealloc_QDesignerMemberSheetExtension(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQDesignerMemberSheetExtension *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QDesignerMemberSheetExtension(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QDesignerMemberSheetExtension(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDesignerMemberSheetExtension(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQDesignerMemberSheetExtension *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQDesignerMemberSheetExtension();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QDesignerMemberSheetExtension* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDesignerMemberSheetExtension, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQDesignerMemberSheetExtension(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QDesignerMemberSheetExtension[] = {
    {(void *)slot_QDesignerMemberSheetExtension___len__, len_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QDesignerMemberSheetExtension[] = {
    {SIP_MLNAME_CAST(sipName_count), meth_QDesignerMemberSheetExtension_count, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerMemberSheetExtension_count)},
    {SIP_MLNAME_CAST(sipName_declaredInClass), meth_QDesignerMemberSheetExtension_declaredInClass, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerMemberSheetExtension_declaredInClass)},
    {SIP_MLNAME_CAST(sipName_indexOf), meth_QDesignerMemberSheetExtension_indexOf, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerMemberSheetExtension_indexOf)},
    {SIP_MLNAME_CAST(sipName_inheritedFromWidget), meth_QDesignerMemberSheetExtension_inheritedFromWidget, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerMemberSheetExtension_inheritedFromWidget)},
    {SIP_MLNAME_CAST(sipName_isSignal), meth_QDesignerMemberSheetExtension_isSignal, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerMemberSheetExtension_isSignal)},
    {SIP_MLNAME_CAST(sipName_isSlot), meth_QDesignerMemberSheetExtension_isSlot, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerMemberSheetExtension_isSlot)},
    {SIP_MLNAME_CAST(sipName_isVisible), meth_QDesignerMemberSheetExtension_isVisible, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerMemberSheetExtension_isVisible)},
    {SIP_MLNAME_CAST(sipName_memberGroup), meth_QDesignerMemberSheetExtension_memberGroup, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerMemberSheetExtension_memberGroup)},
    {SIP_MLNAME_CAST(sipName_memberName), meth_QDesignerMemberSheetExtension_memberName, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerMemberSheetExtension_memberName)},
    {SIP_MLNAME_CAST(sipName_parameterNames), meth_QDesignerMemberSheetExtension_parameterNames, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerMemberSheetExtension_parameterNames)},
    {SIP_MLNAME_CAST(sipName_parameterTypes), meth_QDesignerMemberSheetExtension_parameterTypes, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerMemberSheetExtension_parameterTypes)},
    {SIP_MLNAME_CAST(sipName_setMemberGroup), meth_QDesignerMemberSheetExtension_setMemberGroup, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerMemberSheetExtension_setMemberGroup)},
    {SIP_MLNAME_CAST(sipName_setVisible), meth_QDesignerMemberSheetExtension_setVisible, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerMemberSheetExtension_setVisible)},
    {SIP_MLNAME_CAST(sipName_signature), meth_QDesignerMemberSheetExtension_signature, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerMemberSheetExtension_signature)}
};

PyDoc_STRVAR(doc_QDesignerMemberSheetExtension, "\1QDesignerMemberSheetExtension()\n"
    "QDesignerMemberSheetExtension(QDesignerMemberSheetExtension)");


pyqt4ClassTypeDef sipTypeDef_QtDesigner_QDesignerMemberSheetExtension = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QDesignerMemberSheetExtension,
        {0}
    },
    {
        sipNameNr_QDesignerMemberSheetExtension,
        {0, 0, 1},
        14, methods_QDesignerMemberSheetExtension,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDesignerMemberSheetExtension,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QDesignerMemberSheetExtension,
    init_type_QDesignerMemberSheetExtension,
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
    dealloc_QDesignerMemberSheetExtension,
    0,
    0,
    0,
    release_QDesignerMemberSheetExtension,
    cast_QDesignerMemberSheetExtension,
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
