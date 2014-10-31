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

#line 35 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtGui/qtextoption.sip"
#include <qtextoption.h>
#line 34 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQTextOption.cpp"

#line 35 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 38 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQTextOption.cpp"
#line 33 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 41 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQTextOption.cpp"
#line 35 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtGui/qtextoption.sip"
#include <qtextoption.h>
#line 107 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtGui/qtextoption.sip"
#include <qtextoption.h>
#line 46 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQTextOption.cpp"
#line 35 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtGui/qtextoption.sip"
#include <qtextoption.h>
#line 49 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQTextOption.cpp"
#line 760 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 52 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQTextOption.cpp"
#line 35 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 55 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQTextOption.cpp"


PyDoc_STRVAR(doc_QTextOption_alignment, "QTextOption.alignment() -> Qt.Alignment");

extern "C" {static PyObject *meth_QTextOption_alignment(PyObject *, PyObject *);}
static PyObject *meth_QTextOption_alignment(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextOption *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextOption, &sipCpp))
        {
            Qt::Alignment*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::Alignment(sipCpp->alignment());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Qt_Alignment,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextOption, sipName_alignment, doc_QTextOption_alignment);

    return NULL;
}


PyDoc_STRVAR(doc_QTextOption_setTextDirection, "QTextOption.setTextDirection(Qt.LayoutDirection)");

extern "C" {static PyObject *meth_QTextOption_setTextDirection(PyObject *, PyObject *);}
static PyObject *meth_QTextOption_setTextDirection(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::LayoutDirection a0;
        QTextOption *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QTextOption, &sipCpp, sipType_Qt_LayoutDirection, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setTextDirection(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextOption, sipName_setTextDirection, doc_QTextOption_setTextDirection);

    return NULL;
}


PyDoc_STRVAR(doc_QTextOption_textDirection, "QTextOption.textDirection() -> Qt.LayoutDirection");

extern "C" {static PyObject *meth_QTextOption_textDirection(PyObject *, PyObject *);}
static PyObject *meth_QTextOption_textDirection(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextOption *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextOption, &sipCpp))
        {
            Qt::LayoutDirection sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->textDirection();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_Qt_LayoutDirection);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextOption, sipName_textDirection, doc_QTextOption_textDirection);

    return NULL;
}


PyDoc_STRVAR(doc_QTextOption_setWrapMode, "QTextOption.setWrapMode(QTextOption.WrapMode)");

extern "C" {static PyObject *meth_QTextOption_setWrapMode(PyObject *, PyObject *);}
static PyObject *meth_QTextOption_setWrapMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextOption::WrapMode a0;
        QTextOption *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QTextOption, &sipCpp, sipType_QTextOption_WrapMode, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setWrapMode(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextOption, sipName_setWrapMode, doc_QTextOption_setWrapMode);

    return NULL;
}


PyDoc_STRVAR(doc_QTextOption_wrapMode, "QTextOption.wrapMode() -> QTextOption.WrapMode");

extern "C" {static PyObject *meth_QTextOption_wrapMode(PyObject *, PyObject *);}
static PyObject *meth_QTextOption_wrapMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextOption *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextOption, &sipCpp))
        {
            QTextOption::WrapMode sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->wrapMode();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QTextOption_WrapMode);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextOption, sipName_wrapMode, doc_QTextOption_wrapMode);

    return NULL;
}


PyDoc_STRVAR(doc_QTextOption_flags, "QTextOption.flags() -> QTextOption.Flags");

extern "C" {static PyObject *meth_QTextOption_flags(PyObject *, PyObject *);}
static PyObject *meth_QTextOption_flags(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextOption *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextOption, &sipCpp))
        {
            QTextOption::Flags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextOption::Flags(sipCpp->flags());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextOption_Flags,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextOption, sipName_flags, doc_QTextOption_flags);

    return NULL;
}


PyDoc_STRVAR(doc_QTextOption_tabStop, "QTextOption.tabStop() -> float");

extern "C" {static PyObject *meth_QTextOption_tabStop(PyObject *, PyObject *);}
static PyObject *meth_QTextOption_tabStop(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextOption *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextOption, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->tabStop();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextOption, sipName_tabStop, doc_QTextOption_tabStop);

    return NULL;
}


PyDoc_STRVAR(doc_QTextOption_setTabArray, "QTextOption.setTabArray(list-of-float)");

extern "C" {static PyObject *meth_QTextOption_setTabArray(PyObject *, PyObject *);}
static PyObject *meth_QTextOption_setTabArray(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QList<qreal>* a0;
        int a0State = 0;
        QTextOption *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QTextOption, &sipCpp, sipType_QList_2400,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setTabArray(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QList_2400,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextOption, sipName_setTabArray, doc_QTextOption_setTabArray);

    return NULL;
}


PyDoc_STRVAR(doc_QTextOption_tabArray, "QTextOption.tabArray() -> list-of-float");

extern "C" {static PyObject *meth_QTextOption_tabArray(PyObject *, PyObject *);}
static PyObject *meth_QTextOption_tabArray(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextOption *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextOption, &sipCpp))
        {
            QList<qreal>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<qreal>(sipCpp->tabArray());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_2400,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextOption, sipName_tabArray, doc_QTextOption_tabArray);

    return NULL;
}


PyDoc_STRVAR(doc_QTextOption_setUseDesignMetrics, "QTextOption.setUseDesignMetrics(bool)");

extern "C" {static PyObject *meth_QTextOption_setUseDesignMetrics(PyObject *, PyObject *);}
static PyObject *meth_QTextOption_setUseDesignMetrics(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QTextOption *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QTextOption, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setUseDesignMetrics(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextOption, sipName_setUseDesignMetrics, doc_QTextOption_setUseDesignMetrics);

    return NULL;
}


PyDoc_STRVAR(doc_QTextOption_useDesignMetrics, "QTextOption.useDesignMetrics() -> bool");

extern "C" {static PyObject *meth_QTextOption_useDesignMetrics(PyObject *, PyObject *);}
static PyObject *meth_QTextOption_useDesignMetrics(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextOption *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextOption, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->useDesignMetrics();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextOption, sipName_useDesignMetrics, doc_QTextOption_useDesignMetrics);

    return NULL;
}


PyDoc_STRVAR(doc_QTextOption_setAlignment, "QTextOption.setAlignment(Qt.Alignment)");

extern "C" {static PyObject *meth_QTextOption_setAlignment(PyObject *, PyObject *);}
static PyObject *meth_QTextOption_setAlignment(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::Alignment* a0;
        int a0State = 0;
        QTextOption *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QTextOption, &sipCpp, sipType_Qt_Alignment, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setAlignment(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_Alignment,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextOption, sipName_setAlignment, doc_QTextOption_setAlignment);

    return NULL;
}


PyDoc_STRVAR(doc_QTextOption_setFlags, "QTextOption.setFlags(QTextOption.Flags)");

extern "C" {static PyObject *meth_QTextOption_setFlags(PyObject *, PyObject *);}
static PyObject *meth_QTextOption_setFlags(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextOption::Flags* a0;
        int a0State = 0;
        QTextOption *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QTextOption, &sipCpp, sipType_QTextOption_Flags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setFlags(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QTextOption_Flags,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextOption, sipName_setFlags, doc_QTextOption_setFlags);

    return NULL;
}


PyDoc_STRVAR(doc_QTextOption_setTabStop, "QTextOption.setTabStop(float)");

extern "C" {static PyObject *meth_QTextOption_setTabStop(PyObject *, PyObject *);}
static PyObject *meth_QTextOption_setTabStop(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QTextOption *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QTextOption, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setTabStop(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextOption, sipName_setTabStop, doc_QTextOption_setTabStop);

    return NULL;
}


PyDoc_STRVAR(doc_QTextOption_setTabs, "QTextOption.setTabs(list-of-QTextOption.Tab)");

extern "C" {static PyObject *meth_QTextOption_setTabs(PyObject *, PyObject *);}
static PyObject *meth_QTextOption_setTabs(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QList<QTextOption::Tab>* a0;
        int a0State = 0;
        QTextOption *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QTextOption, &sipCpp, sipType_QList_0100QTextOption_Tab,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setTabs(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QList_0100QTextOption_Tab,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextOption, sipName_setTabs, doc_QTextOption_setTabs);

    return NULL;
}


PyDoc_STRVAR(doc_QTextOption_tabs, "QTextOption.tabs() -> list-of-QTextOption.Tab");

extern "C" {static PyObject *meth_QTextOption_tabs(PyObject *, PyObject *);}
static PyObject *meth_QTextOption_tabs(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextOption *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextOption, &sipCpp))
        {
            QList<QTextOption::Tab>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QTextOption::Tab>(sipCpp->tabs());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QTextOption_Tab,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextOption, sipName_tabs, doc_QTextOption_tabs);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QTextOption(void *, const sipTypeDef *);}
static void *cast_QTextOption(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QTextOption)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextOption(void *, int);}
static void release_QTextOption(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QTextOption *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QTextOption(void *, SIP_SSIZE_T, const void *);}
static void assign_QTextOption(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QTextOption *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QTextOption *>(sipSrc);
}


extern "C" {static void *array_QTextOption(SIP_SSIZE_T);}
static void *array_QTextOption(SIP_SSIZE_T sipNrElem)
{
    return new QTextOption[sipNrElem];
}


extern "C" {static void *copy_QTextOption(const void *, SIP_SSIZE_T);}
static void *copy_QTextOption(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QTextOption(reinterpret_cast<const QTextOption *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTextOption(sipSimpleWrapper *);}
static void dealloc_QTextOption(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QTextOption(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QTextOption(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTextOption(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QTextOption *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextOption();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        Qt::Alignment* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_Qt_Alignment, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextOption(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_Alignment,a0State);

            return sipCpp;
        }
    }

    {
        const QTextOption* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QTextOption, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextOption(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QTextOption[] = {
    {SIP_MLNAME_CAST(sipName_alignment), meth_QTextOption_alignment, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextOption_alignment)},
    {SIP_MLNAME_CAST(sipName_flags), meth_QTextOption_flags, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextOption_flags)},
    {SIP_MLNAME_CAST(sipName_setAlignment), meth_QTextOption_setAlignment, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextOption_setAlignment)},
    {SIP_MLNAME_CAST(sipName_setFlags), meth_QTextOption_setFlags, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextOption_setFlags)},
    {SIP_MLNAME_CAST(sipName_setTabArray), meth_QTextOption_setTabArray, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextOption_setTabArray)},
    {SIP_MLNAME_CAST(sipName_setTabStop), meth_QTextOption_setTabStop, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextOption_setTabStop)},
    {SIP_MLNAME_CAST(sipName_setTabs), meth_QTextOption_setTabs, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextOption_setTabs)},
    {SIP_MLNAME_CAST(sipName_setTextDirection), meth_QTextOption_setTextDirection, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextOption_setTextDirection)},
    {SIP_MLNAME_CAST(sipName_setUseDesignMetrics), meth_QTextOption_setUseDesignMetrics, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextOption_setUseDesignMetrics)},
    {SIP_MLNAME_CAST(sipName_setWrapMode), meth_QTextOption_setWrapMode, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextOption_setWrapMode)},
    {SIP_MLNAME_CAST(sipName_tabArray), meth_QTextOption_tabArray, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextOption_tabArray)},
    {SIP_MLNAME_CAST(sipName_tabStop), meth_QTextOption_tabStop, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextOption_tabStop)},
    {SIP_MLNAME_CAST(sipName_tabs), meth_QTextOption_tabs, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextOption_tabs)},
    {SIP_MLNAME_CAST(sipName_textDirection), meth_QTextOption_textDirection, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextOption_textDirection)},
    {SIP_MLNAME_CAST(sipName_useDesignMetrics), meth_QTextOption_useDesignMetrics, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextOption_useDesignMetrics)},
    {SIP_MLNAME_CAST(sipName_wrapMode), meth_QTextOption_wrapMode, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextOption_wrapMode)}
};

static sipEnumMemberDef enummembers_QTextOption[] = {
    {sipName_AddSpaceForLineAndParagraphSeparators, static_cast<int>(QTextOption::AddSpaceForLineAndParagraphSeparators), 705},
    {sipName_CenterTab, static_cast<int>(QTextOption::CenterTab), 708},
    {sipName_DelimiterTab, static_cast<int>(QTextOption::DelimiterTab), 708},
    {sipName_IncludeTrailingSpaces, static_cast<int>(QTextOption::IncludeTrailingSpaces), 705},
    {sipName_LeftTab, static_cast<int>(QTextOption::LeftTab), 708},
    {sipName_ManualWrap, static_cast<int>(QTextOption::ManualWrap), 709},
    {sipName_NoWrap, static_cast<int>(QTextOption::NoWrap), 709},
    {sipName_RightTab, static_cast<int>(QTextOption::RightTab), 708},
    {sipName_ShowLineAndParagraphSeparators, static_cast<int>(QTextOption::ShowLineAndParagraphSeparators), 705},
    {sipName_ShowTabsAndSpaces, static_cast<int>(QTextOption::ShowTabsAndSpaces), 705},
    {sipName_SuppressColors, static_cast<int>(QTextOption::SuppressColors), 705},
    {sipName_WordWrap, static_cast<int>(QTextOption::WordWrap), 709},
    {sipName_WrapAnywhere, static_cast<int>(QTextOption::WrapAnywhere), 709},
    {sipName_WrapAtWordBoundaryOrAnywhere, static_cast<int>(QTextOption::WrapAtWordBoundaryOrAnywhere), 709},
};

PyDoc_STRVAR(doc_QTextOption, "\1QTextOption()\n"
    "QTextOption(Qt.Alignment)\n"
    "QTextOption(QTextOption)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QTextOption = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QTextOption,
        {0}
    },
    {
        sipNameNr_QTextOption,
        {0, 0, 1},
        16, methods_QTextOption,
        14, enummembers_QTextOption,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTextOption,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QTextOption,
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
    dealloc_QTextOption,
    assign_QTextOption,
    array_QTextOption,
    copy_QTextOption,
    release_QTextOption,
    cast_QTextOption,
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