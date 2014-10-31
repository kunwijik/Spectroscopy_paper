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

#line 42 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtDesigner/extension.sip"
#include <extension.h>
#line 34 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtDesigner/sipQtDesignerQAbstractExtensionManager.cpp"

#line 34 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 38 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtDesigner/sipQtDesignerQAbstractExtensionManager.cpp"
#line 36 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 41 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtDesigner/sipQtDesignerQAbstractExtensionManager.cpp"
#line 31 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtDesigner/extension.sip"
#include <extension.h>
#line 44 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtDesigner/sipQtDesignerQAbstractExtensionManager.cpp"


class sipQAbstractExtensionManager : public QAbstractExtensionManager
{
public:
    sipQAbstractExtensionManager();
    sipQAbstractExtensionManager(const QAbstractExtensionManager&);
    virtual ~sipQAbstractExtensionManager();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QObject* extension(QObject*,const QString&) const;
    void unregisterExtensions(QAbstractExtensionFactory*,const QString&);
    void registerExtensions(QAbstractExtensionFactory*,const QString&);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQAbstractExtensionManager(const sipQAbstractExtensionManager &);
    sipQAbstractExtensionManager &operator = (const sipQAbstractExtensionManager &);

    char sipPyMethods[3];
};

sipQAbstractExtensionManager::sipQAbstractExtensionManager(): QAbstractExtensionManager(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQAbstractExtensionManager::sipQAbstractExtensionManager(const QAbstractExtensionManager& a0): QAbstractExtensionManager(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQAbstractExtensionManager::~sipQAbstractExtensionManager()
{
    sipCommonDtor(sipPySelf);
}

QObject* sipQAbstractExtensionManager::extension(QObject*a0,const QString& a1) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,sipName_QAbstractExtensionManager,sipName_extension);

    if (!sipMeth)
        return 0;

    extern QObject* sipVH_QtDesigner_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,const QString&);

    return sipVH_QtDesigner_1(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

void sipQAbstractExtensionManager::unregisterExtensions(QAbstractExtensionFactory*a0,const QString& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,sipName_QAbstractExtensionManager,sipName_unregisterExtensions);

    if (!sipMeth)
        return;

    extern void sipVH_QtDesigner_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QAbstractExtensionFactory*,const QString&);

    sipVH_QtDesigner_2(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

void sipQAbstractExtensionManager::registerExtensions(QAbstractExtensionFactory*a0,const QString& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,sipName_QAbstractExtensionManager,sipName_registerExtensions);

    if (!sipMeth)
        return;

    extern void sipVH_QtDesigner_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QAbstractExtensionFactory*,const QString&);

    sipVH_QtDesigner_2(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}


PyDoc_STRVAR(doc_QAbstractExtensionManager_registerExtensions, "QAbstractExtensionManager.registerExtensions(QAbstractExtensionFactory, QString)");

extern "C" {static PyObject *meth_QAbstractExtensionManager_registerExtensions(PyObject *, PyObject *);}
static PyObject *meth_QAbstractExtensionManager_registerExtensions(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QAbstractExtensionFactory* a0;
        const QString* a1;
        int a1State = 0;
        QAbstractExtensionManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J1", &sipSelf, sipType_QAbstractExtensionManager, &sipCpp, sipType_QAbstractExtensionFactory, &a0, sipType_QString,&a1, &a1State))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractExtensionManager, sipName_registerExtensions);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->registerExtensions(a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractExtensionManager, sipName_registerExtensions, doc_QAbstractExtensionManager_registerExtensions);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractExtensionManager_unregisterExtensions, "QAbstractExtensionManager.unregisterExtensions(QAbstractExtensionFactory, QString)");

extern "C" {static PyObject *meth_QAbstractExtensionManager_unregisterExtensions(PyObject *, PyObject *);}
static PyObject *meth_QAbstractExtensionManager_unregisterExtensions(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QAbstractExtensionFactory* a0;
        const QString* a1;
        int a1State = 0;
        QAbstractExtensionManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J1", &sipSelf, sipType_QAbstractExtensionManager, &sipCpp, sipType_QAbstractExtensionFactory, &a0, sipType_QString,&a1, &a1State))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractExtensionManager, sipName_unregisterExtensions);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->unregisterExtensions(a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractExtensionManager, sipName_unregisterExtensions, doc_QAbstractExtensionManager_unregisterExtensions);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractExtensionManager_extension, "QAbstractExtensionManager.extension(QObject, QString) -> QObject");

extern "C" {static PyObject *meth_QAbstractExtensionManager_extension(PyObject *, PyObject *);}
static PyObject *meth_QAbstractExtensionManager_extension(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QObject* a0;
        const QString* a1;
        int a1State = 0;
        const QAbstractExtensionManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J1", &sipSelf, sipType_QAbstractExtensionManager, &sipCpp, sipType_QObject, &a0, sipType_QString,&a1, &a1State))
        {
            QObject*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractExtensionManager, sipName_extension);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->extension(a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractExtensionManager, sipName_extension, doc_QAbstractExtensionManager_extension);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QAbstractExtensionManager(void *, const sipTypeDef *);}
static void *cast_QAbstractExtensionManager(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QAbstractExtensionManager)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QAbstractExtensionManager(void *, int);}
static void release_QAbstractExtensionManager(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQAbstractExtensionManager *>(sipCppV);
    else
        delete reinterpret_cast<QAbstractExtensionManager *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QAbstractExtensionManager(sipSimpleWrapper *);}
static void dealloc_QAbstractExtensionManager(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQAbstractExtensionManager *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QAbstractExtensionManager(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QAbstractExtensionManager(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QAbstractExtensionManager(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQAbstractExtensionManager *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQAbstractExtensionManager();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QAbstractExtensionManager* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QAbstractExtensionManager, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQAbstractExtensionManager(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QAbstractExtensionManager[] = {
    {SIP_MLNAME_CAST(sipName_extension), meth_QAbstractExtensionManager_extension, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractExtensionManager_extension)},
    {SIP_MLNAME_CAST(sipName_registerExtensions), meth_QAbstractExtensionManager_registerExtensions, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractExtensionManager_registerExtensions)},
    {SIP_MLNAME_CAST(sipName_unregisterExtensions), meth_QAbstractExtensionManager_unregisterExtensions, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractExtensionManager_unregisterExtensions)}
};

PyDoc_STRVAR(doc_QAbstractExtensionManager, "\1QAbstractExtensionManager()\n"
    "QAbstractExtensionManager(QAbstractExtensionManager)");


pyqt4ClassTypeDef sipTypeDef_QtDesigner_QAbstractExtensionManager = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QAbstractExtensionManager,
        {0}
    },
    {
        sipNameNr_QAbstractExtensionManager,
        {0, 0, 1},
        3, methods_QAbstractExtensionManager,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QAbstractExtensionManager,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QAbstractExtensionManager,
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
    dealloc_QAbstractExtensionManager,
    0,
    0,
    0,
    release_QAbstractExtensionManager,
    cast_QAbstractExtensionManager,
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
