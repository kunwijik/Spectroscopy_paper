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

#line 43 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtGui/qitemeditorfactory.sip"
#include <qitemeditorfactory.h>
#line 34 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQItemEditorFactory.cpp"

#line 274 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 38 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQItemEditorFactory.cpp"
#line 31 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtGui/qitemeditorfactory.sip"
#include <qitemeditorfactory.h>
#line 41 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQItemEditorFactory.cpp"
#line 37 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 44 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQItemEditorFactory.cpp"
#line 35 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 47 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQItemEditorFactory.cpp"


class sipQItemEditorFactory : public QItemEditorFactory
{
public:
    sipQItemEditorFactory();
    sipQItemEditorFactory(const QItemEditorFactory&);
    virtual ~sipQItemEditorFactory();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QByteArray valuePropertyName(QVariant::Type) const;
    QWidget* createEditor(QVariant::Type,QWidget*) const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQItemEditorFactory(const sipQItemEditorFactory &);
    sipQItemEditorFactory &operator = (const sipQItemEditorFactory &);

    char sipPyMethods[2];
};

sipQItemEditorFactory::sipQItemEditorFactory(): QItemEditorFactory(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQItemEditorFactory::sipQItemEditorFactory(const QItemEditorFactory& a0): QItemEditorFactory(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQItemEditorFactory::~sipQItemEditorFactory()
{
    sipCommonDtor(sipPySelf);
}

QByteArray sipQItemEditorFactory::valuePropertyName(QVariant::Type a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_valuePropertyName);

    if (!sipMeth)
        return QItemEditorFactory::valuePropertyName(a0);

    extern QByteArray sipVH_QtGui_165(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QVariant::Type);

    return sipVH_QtGui_165(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QWidget* sipQItemEditorFactory::createEditor(QVariant::Type a0,QWidget*a1) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_createEditor);

    if (!sipMeth)
        return QItemEditorFactory::createEditor(a0,a1);

    extern QWidget* sipVH_QtGui_166(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QVariant::Type,QWidget*);

    return sipVH_QtGui_166(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}


PyDoc_STRVAR(doc_QItemEditorFactory_createEditor, "QItemEditorFactory.createEditor(Type, QWidget) -> QWidget");

extern "C" {static PyObject *meth_QItemEditorFactory_createEditor(PyObject *, PyObject *);}
static PyObject *meth_QItemEditorFactory_createEditor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QVariant::Type a0;
        QWidget* a1;
        sipWrapper *sipOwner = 0;
        const QItemEditorFactory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BEJH", &sipSelf, sipType_QItemEditorFactory, &sipCpp, sipType_QVariant_Type, &a0, sipType_QWidget, &a1, &sipOwner))
        {
            QWidget*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QItemEditorFactory::createEditor(a0,a1) : sipCpp->createEditor(a0,a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QWidget,(PyObject *)sipOwner);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QItemEditorFactory, sipName_createEditor, doc_QItemEditorFactory_createEditor);

    return NULL;
}


PyDoc_STRVAR(doc_QItemEditorFactory_valuePropertyName, "QItemEditorFactory.valuePropertyName(Type) -> QByteArray");

extern "C" {static PyObject *meth_QItemEditorFactory_valuePropertyName(PyObject *, PyObject *);}
static PyObject *meth_QItemEditorFactory_valuePropertyName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QVariant::Type a0;
        const QItemEditorFactory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QItemEditorFactory, &sipCpp, sipType_QVariant_Type, &a0))
        {
            QByteArray*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QByteArray((sipSelfWasArg ? sipCpp->QItemEditorFactory::valuePropertyName(a0) : sipCpp->valuePropertyName(a0)));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QItemEditorFactory, sipName_valuePropertyName, doc_QItemEditorFactory_valuePropertyName);

    return NULL;
}


PyDoc_STRVAR(doc_QItemEditorFactory_registerEditor, "QItemEditorFactory.registerEditor(Type, QItemEditorCreatorBase)");

extern "C" {static PyObject *meth_QItemEditorFactory_registerEditor(PyObject *, PyObject *);}
static PyObject *meth_QItemEditorFactory_registerEditor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QVariant::Type a0;
        QItemEditorCreatorBase* a1;
        QItemEditorFactory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BEJ:", &sipSelf, sipType_QItemEditorFactory, &sipCpp, sipType_QVariant_Type, &a0, sipType_QItemEditorCreatorBase, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->registerEditor(a0,a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QItemEditorFactory, sipName_registerEditor, doc_QItemEditorFactory_registerEditor);

    return NULL;
}


PyDoc_STRVAR(doc_QItemEditorFactory_defaultFactory, "QItemEditorFactory.defaultFactory() -> QItemEditorFactory");

extern "C" {static PyObject *meth_QItemEditorFactory_defaultFactory(PyObject *, PyObject *);}
static PyObject *meth_QItemEditorFactory_defaultFactory(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            const QItemEditorFactory*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QItemEditorFactory::defaultFactory();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(const_cast<QItemEditorFactory *>(sipRes),sipType_QItemEditorFactory,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QItemEditorFactory, sipName_defaultFactory, doc_QItemEditorFactory_defaultFactory);

    return NULL;
}


PyDoc_STRVAR(doc_QItemEditorFactory_setDefaultFactory, "QItemEditorFactory.setDefaultFactory(QItemEditorFactory)");

extern "C" {static PyObject *meth_QItemEditorFactory_setDefaultFactory(PyObject *, PyObject *);}
static PyObject *meth_QItemEditorFactory_setDefaultFactory(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QItemEditorFactory* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J:", sipType_QItemEditorFactory, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            QItemEditorFactory::setDefaultFactory(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QItemEditorFactory, sipName_setDefaultFactory, doc_QItemEditorFactory_setDefaultFactory);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QItemEditorFactory(void *, const sipTypeDef *);}
static void *cast_QItemEditorFactory(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QItemEditorFactory)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QItemEditorFactory(void *, int);}
static void release_QItemEditorFactory(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQItemEditorFactory *>(sipCppV);
    else
        delete reinterpret_cast<QItemEditorFactory *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QItemEditorFactory(void *, SIP_SSIZE_T, const void *);}
static void assign_QItemEditorFactory(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QItemEditorFactory *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QItemEditorFactory *>(sipSrc);
}


extern "C" {static void *array_QItemEditorFactory(SIP_SSIZE_T);}
static void *array_QItemEditorFactory(SIP_SSIZE_T sipNrElem)
{
    return new QItemEditorFactory[sipNrElem];
}


extern "C" {static void *copy_QItemEditorFactory(const void *, SIP_SSIZE_T);}
static void *copy_QItemEditorFactory(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QItemEditorFactory(reinterpret_cast<const QItemEditorFactory *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QItemEditorFactory(sipSimpleWrapper *);}
static void dealloc_QItemEditorFactory(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQItemEditorFactory *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QItemEditorFactory(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QItemEditorFactory(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QItemEditorFactory(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQItemEditorFactory *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQItemEditorFactory();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QItemEditorFactory* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QItemEditorFactory, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQItemEditorFactory(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QItemEditorFactory[] = {
    {SIP_MLNAME_CAST(sipName_createEditor), meth_QItemEditorFactory_createEditor, METH_VARARGS, SIP_MLDOC_CAST(doc_QItemEditorFactory_createEditor)},
    {SIP_MLNAME_CAST(sipName_defaultFactory), meth_QItemEditorFactory_defaultFactory, METH_VARARGS, SIP_MLDOC_CAST(doc_QItemEditorFactory_defaultFactory)},
    {SIP_MLNAME_CAST(sipName_registerEditor), meth_QItemEditorFactory_registerEditor, METH_VARARGS, SIP_MLDOC_CAST(doc_QItemEditorFactory_registerEditor)},
    {SIP_MLNAME_CAST(sipName_setDefaultFactory), meth_QItemEditorFactory_setDefaultFactory, METH_VARARGS, SIP_MLDOC_CAST(doc_QItemEditorFactory_setDefaultFactory)},
    {SIP_MLNAME_CAST(sipName_valuePropertyName), meth_QItemEditorFactory_valuePropertyName, METH_VARARGS, SIP_MLDOC_CAST(doc_QItemEditorFactory_valuePropertyName)}
};

PyDoc_STRVAR(doc_QItemEditorFactory, "\1QItemEditorFactory()\n"
    "QItemEditorFactory(QItemEditorFactory)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QItemEditorFactory = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QItemEditorFactory,
        {0}
    },
    {
        sipNameNr_QItemEditorFactory,
        {0, 0, 1},
        5, methods_QItemEditorFactory,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QItemEditorFactory,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    -1,
    0,
    0,
    init_type_QItemEditorFactory,
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
    dealloc_QItemEditorFactory,
    assign_QItemEditorFactory,
    array_QItemEditorFactory,
    copy_QItemEditorFactory,
    release_QItemEditorFactory,
    cast_QItemEditorFactory,
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
