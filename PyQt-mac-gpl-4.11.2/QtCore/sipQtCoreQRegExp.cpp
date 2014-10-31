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

#line 35 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 34 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtCore/sipQtCoreQRegExp.cpp"

#line 36 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 38 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtCore/sipQtCoreQRegExp.cpp"
#line 35 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 41 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtCore/sipQtCoreQRegExp.cpp"
#line 36 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 44 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtCore/sipQtCoreQRegExp.cpp"


PyDoc_STRVAR(doc_QRegExp_isEmpty, "QRegExp.isEmpty() -> bool");

extern "C" {static PyObject *meth_QRegExp_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_QRegExp_isEmpty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRegExp *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegExp, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isEmpty();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegExp, sipName_isEmpty, doc_QRegExp_isEmpty);

    return NULL;
}


PyDoc_STRVAR(doc_QRegExp_isValid, "QRegExp.isValid() -> bool");

extern "C" {static PyObject *meth_QRegExp_isValid(PyObject *, PyObject *);}
static PyObject *meth_QRegExp_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRegExp *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegExp, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isValid();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegExp, sipName_isValid, doc_QRegExp_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QRegExp_pattern, "QRegExp.pattern() -> QString");

extern "C" {static PyObject *meth_QRegExp_pattern(PyObject *, PyObject *);}
static PyObject *meth_QRegExp_pattern(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRegExp *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegExp, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->pattern());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegExp, sipName_pattern, doc_QRegExp_pattern);

    return NULL;
}


PyDoc_STRVAR(doc_QRegExp_setPattern, "QRegExp.setPattern(QString)");

extern "C" {static PyObject *meth_QRegExp_setPattern(PyObject *, PyObject *);}
static PyObject *meth_QRegExp_setPattern(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QRegExp *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QRegExp, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setPattern(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegExp, sipName_setPattern, doc_QRegExp_setPattern);

    return NULL;
}


PyDoc_STRVAR(doc_QRegExp_caseSensitivity, "QRegExp.caseSensitivity() -> Qt.CaseSensitivity");

extern "C" {static PyObject *meth_QRegExp_caseSensitivity(PyObject *, PyObject *);}
static PyObject *meth_QRegExp_caseSensitivity(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRegExp *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegExp, &sipCpp))
        {
            Qt::CaseSensitivity sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->caseSensitivity();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_Qt_CaseSensitivity);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegExp, sipName_caseSensitivity, doc_QRegExp_caseSensitivity);

    return NULL;
}


PyDoc_STRVAR(doc_QRegExp_setCaseSensitivity, "QRegExp.setCaseSensitivity(Qt.CaseSensitivity)");

extern "C" {static PyObject *meth_QRegExp_setCaseSensitivity(PyObject *, PyObject *);}
static PyObject *meth_QRegExp_setCaseSensitivity(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::CaseSensitivity a0;
        QRegExp *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QRegExp, &sipCpp, sipType_Qt_CaseSensitivity, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setCaseSensitivity(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegExp, sipName_setCaseSensitivity, doc_QRegExp_setCaseSensitivity);

    return NULL;
}


PyDoc_STRVAR(doc_QRegExp_patternSyntax, "QRegExp.patternSyntax() -> QRegExp.PatternSyntax");

extern "C" {static PyObject *meth_QRegExp_patternSyntax(PyObject *, PyObject *);}
static PyObject *meth_QRegExp_patternSyntax(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRegExp *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegExp, &sipCpp))
        {
            QRegExp::PatternSyntax sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->patternSyntax();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QRegExp_PatternSyntax);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegExp, sipName_patternSyntax, doc_QRegExp_patternSyntax);

    return NULL;
}


PyDoc_STRVAR(doc_QRegExp_setPatternSyntax, "QRegExp.setPatternSyntax(QRegExp.PatternSyntax)");

extern "C" {static PyObject *meth_QRegExp_setPatternSyntax(PyObject *, PyObject *);}
static PyObject *meth_QRegExp_setPatternSyntax(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QRegExp::PatternSyntax a0;
        QRegExp *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QRegExp, &sipCpp, sipType_QRegExp_PatternSyntax, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setPatternSyntax(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegExp, sipName_setPatternSyntax, doc_QRegExp_setPatternSyntax);

    return NULL;
}


PyDoc_STRVAR(doc_QRegExp_isMinimal, "QRegExp.isMinimal() -> bool");

extern "C" {static PyObject *meth_QRegExp_isMinimal(PyObject *, PyObject *);}
static PyObject *meth_QRegExp_isMinimal(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRegExp *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegExp, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isMinimal();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegExp, sipName_isMinimal, doc_QRegExp_isMinimal);

    return NULL;
}


PyDoc_STRVAR(doc_QRegExp_setMinimal, "QRegExp.setMinimal(bool)");

extern "C" {static PyObject *meth_QRegExp_setMinimal(PyObject *, PyObject *);}
static PyObject *meth_QRegExp_setMinimal(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QRegExp *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QRegExp, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setMinimal(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegExp, sipName_setMinimal, doc_QRegExp_setMinimal);

    return NULL;
}


PyDoc_STRVAR(doc_QRegExp_exactMatch, "QRegExp.exactMatch(QString) -> bool");

extern "C" {static PyObject *meth_QRegExp_exactMatch(PyObject *, PyObject *);}
static PyObject *meth_QRegExp_exactMatch(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QRegExp *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QRegExp, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->exactMatch(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegExp, sipName_exactMatch, doc_QRegExp_exactMatch);

    return NULL;
}


PyDoc_STRVAR(doc_QRegExp_indexIn, "QRegExp.indexIn(QString, int offset=0, QRegExp.CaretMode caretMode=QRegExp.CaretAtZero) -> int");

extern "C" {static PyObject *meth_QRegExp_indexIn(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QRegExp_indexIn(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        int a1 = 0;
        QRegExp::CaretMode a2 = QRegExp::CaretAtZero;
        const QRegExp *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_offset,
            sipName_caretMode,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1|iE", &sipSelf, sipType_QRegExp, &sipCpp, sipType_QString,&a0, &a0State, &a1, sipType_QRegExp_CaretMode, &a2))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->indexIn(*a0,a1,a2);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegExp, sipName_indexIn, doc_QRegExp_indexIn);

    return NULL;
}


PyDoc_STRVAR(doc_QRegExp_lastIndexIn, "QRegExp.lastIndexIn(QString, int offset=-1, QRegExp.CaretMode caretMode=QRegExp.CaretAtZero) -> int");

extern "C" {static PyObject *meth_QRegExp_lastIndexIn(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QRegExp_lastIndexIn(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        int a1 = -1;
        QRegExp::CaretMode a2 = QRegExp::CaretAtZero;
        const QRegExp *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_offset,
            sipName_caretMode,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1|iE", &sipSelf, sipType_QRegExp, &sipCpp, sipType_QString,&a0, &a0State, &a1, sipType_QRegExp_CaretMode, &a2))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->lastIndexIn(*a0,a1,a2);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegExp, sipName_lastIndexIn, doc_QRegExp_lastIndexIn);

    return NULL;
}


PyDoc_STRVAR(doc_QRegExp_matchedLength, "QRegExp.matchedLength() -> int");

extern "C" {static PyObject *meth_QRegExp_matchedLength(PyObject *, PyObject *);}
static PyObject *meth_QRegExp_matchedLength(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRegExp *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegExp, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->matchedLength();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegExp, sipName_matchedLength, doc_QRegExp_matchedLength);

    return NULL;
}


PyDoc_STRVAR(doc_QRegExp_numCaptures, "QRegExp.numCaptures() -> int");

extern "C" {static PyObject *meth_QRegExp_numCaptures(PyObject *, PyObject *);}
static PyObject *meth_QRegExp_numCaptures(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRegExp *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegExp, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->numCaptures();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegExp, sipName_numCaptures, doc_QRegExp_numCaptures);

    return NULL;
}


PyDoc_STRVAR(doc_QRegExp_capturedTexts, "QRegExp.capturedTexts() -> QStringList");

extern "C" {static PyObject *meth_QRegExp_capturedTexts(PyObject *, PyObject *);}
static PyObject *meth_QRegExp_capturedTexts(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QRegExp *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegExp, &sipCpp))
        {
            QStringList*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStringList(sipCpp->capturedTexts());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegExp, sipName_capturedTexts, doc_QRegExp_capturedTexts);

    return NULL;
}


PyDoc_STRVAR(doc_QRegExp_cap, "QRegExp.cap(int nth=0) -> QString");

extern "C" {static PyObject *meth_QRegExp_cap(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QRegExp_cap(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        int a0 = 0;
        QRegExp *sipCpp;

        static const char *sipKwdList[] = {
            sipName_nth,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|i", &sipSelf, sipType_QRegExp, &sipCpp, &a0))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->cap(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegExp, sipName_cap, doc_QRegExp_cap);

    return NULL;
}


PyDoc_STRVAR(doc_QRegExp_pos, "QRegExp.pos(int nth=0) -> int");

extern "C" {static PyObject *meth_QRegExp_pos(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QRegExp_pos(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        int a0 = 0;
        QRegExp *sipCpp;

        static const char *sipKwdList[] = {
            sipName_nth,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|i", &sipSelf, sipType_QRegExp, &sipCpp, &a0))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->pos(a0);
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegExp, sipName_pos, doc_QRegExp_pos);

    return NULL;
}


PyDoc_STRVAR(doc_QRegExp_errorString, "QRegExp.errorString() -> QString");

extern "C" {static PyObject *meth_QRegExp_errorString(PyObject *, PyObject *);}
static PyObject *meth_QRegExp_errorString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QRegExp *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegExp, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->errorString());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegExp, sipName_errorString, doc_QRegExp_errorString);

    return NULL;
}


PyDoc_STRVAR(doc_QRegExp_escape, "QRegExp.escape(QString) -> QString");

extern "C" {static PyObject *meth_QRegExp_escape(PyObject *, PyObject *);}
static PyObject *meth_QRegExp_escape(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString,&a0, &a0State))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(QRegExp::escape(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegExp, sipName_escape, doc_QRegExp_escape);

    return NULL;
}


PyDoc_STRVAR(doc_QRegExp_captureCount, "QRegExp.captureCount() -> int");

extern "C" {static PyObject *meth_QRegExp_captureCount(PyObject *, PyObject *);}
static PyObject *meth_QRegExp_captureCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRegExp *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegExp, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->captureCount();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegExp, sipName_captureCount, doc_QRegExp_captureCount);

    return NULL;
}


PyDoc_STRVAR(doc_QRegExp_swap, "QRegExp.swap(QRegExp)");

extern "C" {static PyObject *meth_QRegExp_swap(PyObject *, PyObject *);}
static PyObject *meth_QRegExp_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QRegExp* a0;
        QRegExp *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QRegExp, &sipCpp, sipType_QRegExp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->swap(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegExp, sipName_swap, doc_QRegExp_swap);

    return NULL;
}


extern "C" {static PyObject *slot_QRegExp___ne__(PyObject *,PyObject *);}
static PyObject *slot_QRegExp___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QRegExp *sipCpp = reinterpret_cast<QRegExp *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRegExp));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QRegExp* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QRegExp, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QRegExp::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QRegExp,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QRegExp___eq__(PyObject *,PyObject *);}
static PyObject *slot_QRegExp___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QRegExp *sipCpp = reinterpret_cast<QRegExp *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRegExp));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QRegExp* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QRegExp, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QRegExp::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QRegExp,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QRegExp___repr__(PyObject *);}
static PyObject *slot_QRegExp___repr__(PyObject *sipSelf)
{
    QRegExp *sipCpp = reinterpret_cast<QRegExp *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRegExp));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 68 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qregexp.sip"
        PyObject *uni = qpycore_PyObject_FromQString(sipCpp->pattern());
        
        if (uni)
        {
        #if PY_MAJOR_VERSION >= 3
            sipRes = PyUnicode_FromFormat("PyQt4.QtCore.QRegExp(%R", uni);
        
            if (sipCpp->caseSensitivity() != Qt::CaseSensitive ||
                sipCpp->patternSyntax() != QRegExp::RegExp)
            {
                qpycore_Unicode_ConcatAndDel(&sipRes,
                        PyUnicode_FromFormat(", PyQt4.QtCore.Qt.CaseSensitivity(%i)",
                                (int)sipCpp->caseSensitivity()));
        
                if (sipCpp->patternSyntax() != QRegExp::RegExp)
                    qpycore_Unicode_ConcatAndDel(&sipRes,
                            PyUnicode_FromFormat(
                                    ", PyQt4.QtCore.QRegExp.PatternSyntax(%i)",
                                    (int)sipCpp->patternSyntax()));
            }
        
            qpycore_Unicode_ConcatAndDel(&sipRes, PyUnicode_FromString(")"));
        #else
            sipRes = PyString_FromString("PyQt4.QtCore.QRegExp(");
            PyString_ConcatAndDel(&sipRes, PyObject_Repr(uni));
        
            if (sipCpp->caseSensitivity() != Qt::CaseSensitive ||
                sipCpp->patternSyntax() != QRegExp::RegExp)
            {
                PyString_ConcatAndDel(&sipRes,
                        PyString_FromFormat(", PyQt4.QtCore.Qt.CaseSensitivity(%i)",
                                (int)sipCpp->caseSensitivity()));
        
                if (sipCpp->patternSyntax() != QRegExp::RegExp)
                    PyString_ConcatAndDel(&sipRes,
                            PyString_FromFormat(
                                    ", PyQt4.QtCore.QRegExp.PatternSyntax(%i)",
                                    (int)sipCpp->patternSyntax()));
            }
        
            PyString_ConcatAndDel(&sipRes, PyString_FromString(")"));
        #endif
        
            Py_DECREF(uni);
        }
        else
        {
            sipRes = 0;
        }
#line 855 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtCore/sipQtCoreQRegExp.cpp"

            return sipRes;
        }
    }

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QRegExp(void *, const sipTypeDef *);}
static void *cast_QRegExp(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QRegExp)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QRegExp(void *, int);}
static void release_QRegExp(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QRegExp *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QRegExp(void *, SIP_SSIZE_T, const void *);}
static void assign_QRegExp(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QRegExp *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QRegExp *>(sipSrc);
}


extern "C" {static void *array_QRegExp(SIP_SSIZE_T);}
static void *array_QRegExp(SIP_SSIZE_T sipNrElem)
{
    return new QRegExp[sipNrElem];
}


extern "C" {static void *copy_QRegExp(const void *, SIP_SSIZE_T);}
static void *copy_QRegExp(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QRegExp(reinterpret_cast<const QRegExp *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QRegExp(sipSimpleWrapper *);}
static void dealloc_QRegExp(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QRegExp(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QRegExp(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QRegExp(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QRegExp *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QRegExp();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        Qt::CaseSensitivity a1 = Qt::CaseSensitive;
        QRegExp::PatternSyntax a2 = QRegExp::RegExp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_cs,
            sipName_syntax,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1|EE", sipType_QString,&a0, &a0State, sipType_Qt_CaseSensitivity, &a1, sipType_QRegExp_PatternSyntax, &a2))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QRegExp(*a0,a1,a2);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipCpp;
        }
    }

    {
        const QRegExp* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QRegExp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QRegExp(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QRegExp[] = {
    {(void *)slot_QRegExp___ne__, ne_slot},
    {(void *)slot_QRegExp___eq__, eq_slot},
    {(void *)slot_QRegExp___repr__, repr_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QRegExp[] = {
    {SIP_MLNAME_CAST(sipName_cap), (PyCFunction)meth_QRegExp_cap, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QRegExp_cap)},
    {SIP_MLNAME_CAST(sipName_captureCount), meth_QRegExp_captureCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegExp_captureCount)},
    {SIP_MLNAME_CAST(sipName_capturedTexts), meth_QRegExp_capturedTexts, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegExp_capturedTexts)},
    {SIP_MLNAME_CAST(sipName_caseSensitivity), meth_QRegExp_caseSensitivity, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegExp_caseSensitivity)},
    {SIP_MLNAME_CAST(sipName_errorString), meth_QRegExp_errorString, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegExp_errorString)},
    {SIP_MLNAME_CAST(sipName_escape), meth_QRegExp_escape, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegExp_escape)},
    {SIP_MLNAME_CAST(sipName_exactMatch), meth_QRegExp_exactMatch, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegExp_exactMatch)},
    {SIP_MLNAME_CAST(sipName_indexIn), (PyCFunction)meth_QRegExp_indexIn, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QRegExp_indexIn)},
    {SIP_MLNAME_CAST(sipName_isEmpty), meth_QRegExp_isEmpty, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegExp_isEmpty)},
    {SIP_MLNAME_CAST(sipName_isMinimal), meth_QRegExp_isMinimal, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegExp_isMinimal)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QRegExp_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegExp_isValid)},
    {SIP_MLNAME_CAST(sipName_lastIndexIn), (PyCFunction)meth_QRegExp_lastIndexIn, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QRegExp_lastIndexIn)},
    {SIP_MLNAME_CAST(sipName_matchedLength), meth_QRegExp_matchedLength, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegExp_matchedLength)},
    {SIP_MLNAME_CAST(sipName_numCaptures), meth_QRegExp_numCaptures, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegExp_numCaptures)},
    {SIP_MLNAME_CAST(sipName_pattern), meth_QRegExp_pattern, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegExp_pattern)},
    {SIP_MLNAME_CAST(sipName_patternSyntax), meth_QRegExp_patternSyntax, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegExp_patternSyntax)},
    {SIP_MLNAME_CAST(sipName_pos), (PyCFunction)meth_QRegExp_pos, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QRegExp_pos)},
    {SIP_MLNAME_CAST(sipName_setCaseSensitivity), meth_QRegExp_setCaseSensitivity, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegExp_setCaseSensitivity)},
    {SIP_MLNAME_CAST(sipName_setMinimal), meth_QRegExp_setMinimal, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegExp_setMinimal)},
    {SIP_MLNAME_CAST(sipName_setPattern), meth_QRegExp_setPattern, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegExp_setPattern)},
    {SIP_MLNAME_CAST(sipName_setPatternSyntax), meth_QRegExp_setPatternSyntax, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegExp_setPatternSyntax)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QRegExp_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegExp_swap)}
};

static sipEnumMemberDef enummembers_QRegExp[] = {
    {sipName_CaretAtOffset, static_cast<int>(QRegExp::CaretAtOffset), 166},
    {sipName_CaretAtZero, static_cast<int>(QRegExp::CaretAtZero), 166},
    {sipName_CaretWontMatch, static_cast<int>(QRegExp::CaretWontMatch), 166},
    {sipName_FixedString, static_cast<int>(QRegExp::FixedString), 167},
    {sipName_RegExp, static_cast<int>(QRegExp::RegExp), 167},
    {sipName_RegExp2, static_cast<int>(QRegExp::RegExp2), 167},
    {sipName_W3CXmlSchema11, static_cast<int>(QRegExp::W3CXmlSchema11), 167},
    {sipName_Wildcard, static_cast<int>(QRegExp::Wildcard), 167},
    {sipName_WildcardUnix, static_cast<int>(QRegExp::WildcardUnix), 167},
};

PyDoc_STRVAR(doc_QRegExp, "\1QRegExp()\n"
    "QRegExp(QString, Qt.CaseSensitivity cs=Qt.CaseSensitive, QRegExp.PatternSyntax syntax=QRegExp.RegExp)\n"
    "QRegExp(QRegExp)");


pyqt4ClassTypeDef sipTypeDef_QtCore_QRegExp = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QRegExp,
        {0}
    },
    {
        sipNameNr_QRegExp,
        {0, 0, 1},
        22, methods_QRegExp,
        9, enummembers_QRegExp,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QRegExp,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QRegExp,
    init_type_QRegExp,
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
    dealloc_QRegExp,
    assign_QRegExp,
    array_QRegExp,
    copy_QRegExp,
    release_QRegExp,
    cast_QRegExp,
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
