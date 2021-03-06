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

#line 35 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtGui/qtextdocument.sip"
#include <qtextdocument.h>
#line 34 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQt.cpp"

#line 36 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 38 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQt.cpp"


PyDoc_STRVAR(doc_Qt_convertFromPlainText, "Qt.convertFromPlainText(QString, Qt.WhiteSpaceMode mode=Qt.WhiteSpacePre) -> QString");

extern "C" {static PyObject *meth_Qt_convertFromPlainText(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_Qt_convertFromPlainText(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        Qt::WhiteSpaceMode a1 = Qt::WhiteSpacePre;

        static const char *sipKwdList[] = {
            NULL,
            sipName_mode,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "J1|E", sipType_QString,&a0, &a0State, sipType_Qt_WhiteSpaceMode, &a1))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(Qt::convertFromPlainText(*a0,a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_convertFromPlainText, doc_Qt_convertFromPlainText);

    return NULL;
}


PyDoc_STRVAR(doc_Qt_escape, "Qt.escape(QString) -> QString");

extern "C" {static PyObject *meth_Qt_escape(PyObject *, PyObject *);}
static PyObject *meth_Qt_escape(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString,&a0, &a0State))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(Qt::escape(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_escape, doc_Qt_escape);

    return NULL;
}


PyDoc_STRVAR(doc_Qt_mightBeRichText, "Qt.mightBeRichText(QString) -> bool");

extern "C" {static PyObject *meth_Qt_mightBeRichText(PyObject *, PyObject *);}
static PyObject *meth_Qt_mightBeRichText(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = Qt::mightBeRichText(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_mightBeRichText, doc_Qt_mightBeRichText);

    return NULL;
}


static PyMethodDef methods_Qt[] = {
    {SIP_MLNAME_CAST(sipName_convertFromPlainText), (PyCFunction)meth_Qt_convertFromPlainText, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_Qt_convertFromPlainText)},
    {SIP_MLNAME_CAST(sipName_escape), meth_Qt_escape, METH_VARARGS, SIP_MLDOC_CAST(doc_Qt_escape)},
    {SIP_MLNAME_CAST(sipName_mightBeRichText), meth_Qt_mightBeRichText, METH_VARARGS, SIP_MLDOC_CAST(doc_Qt_mightBeRichText)}
};

static sipEnumMemberDef enummembers_Qt[] = {
    {sipName_ExactHit, static_cast<int>(Qt::ExactHit), 773},
    {sipName_FuzzyHit, static_cast<int>(Qt::FuzzyHit), 773},
    {sipName_WhiteSpaceModeUndefined, static_cast<int>(Qt::WhiteSpaceModeUndefined), 774},
    {sipName_WhiteSpaceNoWrap, static_cast<int>(Qt::WhiteSpaceNoWrap), 774},
    {sipName_WhiteSpaceNormal, static_cast<int>(Qt::WhiteSpaceNormal), 774},
    {sipName_WhiteSpacePre, static_cast<int>(Qt::WhiteSpacePre), 774},
};


pyqt4ClassTypeDef sipTypeDef_QtGui_Qt = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_NAMESPACE,
        sipNameNr_Qt,
        {0}
    },
    {
        -1,
        {274, 0, 0},
        3, methods_Qt,
        6, enummembers_Qt,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    0,
    0,
    0,
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
    0,
    0,
    0,
    0,
    0,
    0,
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
