/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.3 on Mon Sep 22 17:43:53 2014
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

#line 33 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtGui/qundostack.sip"
#include <qundostack.h>
#line 34 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQUndoCommand.cpp"

#line 36 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 38 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQUndoCommand.cpp"


class sipQUndoCommand : public QUndoCommand
{
public:
    sipQUndoCommand(QUndoCommand*);
    sipQUndoCommand(const QString&,QUndoCommand*);
    virtual ~sipQUndoCommand();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void undo();
    void redo();
    bool mergeWith(const QUndoCommand*);
    int id() const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQUndoCommand(const sipQUndoCommand &);
    sipQUndoCommand &operator = (const sipQUndoCommand &);

    char sipPyMethods[4];
};

sipQUndoCommand::sipQUndoCommand(QUndoCommand*a0): QUndoCommand(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQUndoCommand::sipQUndoCommand(const QString& a0,QUndoCommand*a1): QUndoCommand(a0,a1), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQUndoCommand::~sipQUndoCommand()
{
    sipCommonDtor(sipPySelf);
}

void sipQUndoCommand::undo()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_undo);

    if (!sipMeth)
    {
        QUndoCommand::undo();
        return;
    }

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtGui_QtCore->em_virthandlers[11]))(sipGILState, 0, sipPySelf, sipMeth);
}

void sipQUndoCommand::redo()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_redo);

    if (!sipMeth)
    {
        QUndoCommand::redo();
        return;
    }

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtGui_QtCore->em_virthandlers[11]))(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipQUndoCommand::mergeWith(const QUndoCommand*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_mergeWith);

    if (!sipMeth)
        return QUndoCommand::mergeWith(a0);

    extern bool sipVH_QtGui_35(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QUndoCommand*);

    return sipVH_QtGui_35(sipGILState, 0, sipPySelf, sipMeth, a0);
}

int sipQUndoCommand::id() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[3]),sipPySelf,NULL,sipName_id);

    if (!sipMeth)
        return QUndoCommand::id();

    typedef int (*sipVH_QtCore_6)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_6)(sipModuleAPI_QtGui_QtCore->em_virthandlers[6]))(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_QUndoCommand_id, "QUndoCommand.id() -> int");

extern "C" {static PyObject *meth_QUndoCommand_id(PyObject *, PyObject *);}
static PyObject *meth_QUndoCommand_id(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QUndoCommand *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUndoCommand, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QUndoCommand::id() : sipCpp->id());
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoCommand, sipName_id, doc_QUndoCommand_id);

    return NULL;
}


PyDoc_STRVAR(doc_QUndoCommand_mergeWith, "QUndoCommand.mergeWith(QUndoCommand) -> bool");

extern "C" {static PyObject *meth_QUndoCommand_mergeWith(PyObject *, PyObject *);}
static PyObject *meth_QUndoCommand_mergeWith(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QUndoCommand* a0;
        QUndoCommand *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QUndoCommand, &sipCpp, sipType_QUndoCommand, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QUndoCommand::mergeWith(a0) : sipCpp->mergeWith(a0));
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoCommand, sipName_mergeWith, doc_QUndoCommand_mergeWith);

    return NULL;
}


PyDoc_STRVAR(doc_QUndoCommand_redo, "QUndoCommand.redo()");

extern "C" {static PyObject *meth_QUndoCommand_redo(PyObject *, PyObject *);}
static PyObject *meth_QUndoCommand_redo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QUndoCommand *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUndoCommand, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QUndoCommand::redo() : sipCpp->redo());
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoCommand, sipName_redo, doc_QUndoCommand_redo);

    return NULL;
}


PyDoc_STRVAR(doc_QUndoCommand_setText, "QUndoCommand.setText(QString)");

extern "C" {static PyObject *meth_QUndoCommand_setText(PyObject *, PyObject *);}
static PyObject *meth_QUndoCommand_setText(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QUndoCommand *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QUndoCommand, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setText(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoCommand, sipName_setText, doc_QUndoCommand_setText);

    return NULL;
}


PyDoc_STRVAR(doc_QUndoCommand_text, "QUndoCommand.text() -> QString");

extern "C" {static PyObject *meth_QUndoCommand_text(PyObject *, PyObject *);}
static PyObject *meth_QUndoCommand_text(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUndoCommand *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUndoCommand, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->text());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoCommand, sipName_text, doc_QUndoCommand_text);

    return NULL;
}


PyDoc_STRVAR(doc_QUndoCommand_undo, "QUndoCommand.undo()");

extern "C" {static PyObject *meth_QUndoCommand_undo(PyObject *, PyObject *);}
static PyObject *meth_QUndoCommand_undo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QUndoCommand *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUndoCommand, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QUndoCommand::undo() : sipCpp->undo());
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoCommand, sipName_undo, doc_QUndoCommand_undo);

    return NULL;
}


PyDoc_STRVAR(doc_QUndoCommand_childCount, "QUndoCommand.childCount() -> int");

extern "C" {static PyObject *meth_QUndoCommand_childCount(PyObject *, PyObject *);}
static PyObject *meth_QUndoCommand_childCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUndoCommand *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUndoCommand, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->childCount();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoCommand, sipName_childCount, doc_QUndoCommand_childCount);

    return NULL;
}


PyDoc_STRVAR(doc_QUndoCommand_child, "QUndoCommand.child(int) -> QUndoCommand");

extern "C" {static PyObject *meth_QUndoCommand_child(PyObject *, PyObject *);}
static PyObject *meth_QUndoCommand_child(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QUndoCommand *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QUndoCommand, &sipCpp, &a0))
        {
            const QUndoCommand*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->child(a0);
            Py_END_ALLOW_THREADS

            return sipConvertFromType(const_cast<QUndoCommand *>(sipRes),sipType_QUndoCommand,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoCommand, sipName_child, doc_QUndoCommand_child);

    return NULL;
}


PyDoc_STRVAR(doc_QUndoCommand_actionText, "QUndoCommand.actionText() -> QString");

extern "C" {static PyObject *meth_QUndoCommand_actionText(PyObject *, PyObject *);}
static PyObject *meth_QUndoCommand_actionText(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUndoCommand *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUndoCommand, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->actionText());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoCommand, sipName_actionText, doc_QUndoCommand_actionText);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QUndoCommand(void *, const sipTypeDef *);}
static void *cast_QUndoCommand(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QUndoCommand)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QUndoCommand(void *, int);}
static void release_QUndoCommand(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQUndoCommand *>(sipCppV);
    else
        delete reinterpret_cast<QUndoCommand *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QUndoCommand(sipSimpleWrapper *);}
static void dealloc_QUndoCommand(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQUndoCommand *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QUndoCommand(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QUndoCommand(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QUndoCommand(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQUndoCommand *sipCpp = 0;

    {
        QUndoCommand* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QUndoCommand, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQUndoCommand(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        QUndoCommand* a1 = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1|JH", sipType_QString,&a0, &a0State, sipType_QUndoCommand, &a1, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQUndoCommand(*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QUndoCommand[] = {
    {SIP_MLNAME_CAST(sipName_actionText), meth_QUndoCommand_actionText, METH_VARARGS, SIP_MLDOC_CAST(doc_QUndoCommand_actionText)},
    {SIP_MLNAME_CAST(sipName_child), meth_QUndoCommand_child, METH_VARARGS, SIP_MLDOC_CAST(doc_QUndoCommand_child)},
    {SIP_MLNAME_CAST(sipName_childCount), meth_QUndoCommand_childCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QUndoCommand_childCount)},
    {SIP_MLNAME_CAST(sipName_id), meth_QUndoCommand_id, METH_VARARGS, SIP_MLDOC_CAST(doc_QUndoCommand_id)},
    {SIP_MLNAME_CAST(sipName_mergeWith), meth_QUndoCommand_mergeWith, METH_VARARGS, SIP_MLDOC_CAST(doc_QUndoCommand_mergeWith)},
    {SIP_MLNAME_CAST(sipName_redo), meth_QUndoCommand_redo, METH_VARARGS, SIP_MLDOC_CAST(doc_QUndoCommand_redo)},
    {SIP_MLNAME_CAST(sipName_setText), meth_QUndoCommand_setText, METH_VARARGS, SIP_MLDOC_CAST(doc_QUndoCommand_setText)},
    {SIP_MLNAME_CAST(sipName_text), meth_QUndoCommand_text, METH_VARARGS, SIP_MLDOC_CAST(doc_QUndoCommand_text)},
    {SIP_MLNAME_CAST(sipName_undo), meth_QUndoCommand_undo, METH_VARARGS, SIP_MLDOC_CAST(doc_QUndoCommand_undo)}
};

PyDoc_STRVAR(doc_QUndoCommand, "\1QUndoCommand(QUndoCommand parent=None)\n"
    "QUndoCommand(QString, QUndoCommand parent=None)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QUndoCommand = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QUndoCommand,
        {0}
    },
    {
        sipNameNr_QUndoCommand,
        {0, 0, 1},
        9, methods_QUndoCommand,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QUndoCommand,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    -1,
    0,
    0,
    init_type_QUndoCommand,
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
    dealloc_QUndoCommand,
    0,
    0,
    0,
    release_QUndoCommand,
    cast_QUndoCommand,
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
