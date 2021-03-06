/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.3 on Mon Sep 22 18:00:47 2014
 *
 * Copyright (c) 2014 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of QScintilla.
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

#include "sipAPIQsci.h"

#line 120 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtCore/qlist.sip"
#include <qlist.h>
#line 34 "./sipQsciQList0101QsciCommand.cpp"

#line 29 "sip/qscicommand.sip"
#include <Qsci/qscicommand.h>
#line 38 "./sipQsciQList0101QsciCommand.cpp"


extern "C" {static void assign_QList_0101QsciCommand(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0101QsciCommand(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QsciCommand*> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QsciCommand*> *>(sipSrc);
}


extern "C" {static void *array_QList_0101QsciCommand(SIP_SSIZE_T);}
static void *array_QList_0101QsciCommand(SIP_SSIZE_T sipNrElem)
{
    return new QList<QsciCommand*>[sipNrElem];
}


extern "C" {static void *copy_QList_0101QsciCommand(const void *, SIP_SSIZE_T);}
static void *copy_QList_0101QsciCommand(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QsciCommand*>(reinterpret_cast<const QList<QsciCommand*> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0101QsciCommand(void *, int);}
static void release_QList_0101QsciCommand(void *ptr, int)
{
    delete reinterpret_cast<QList<QsciCommand*> *>(ptr);
}



extern "C" {static int convertTo_QList_0101QsciCommand(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0101QsciCommand(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QsciCommand*> **sipCppPtr = reinterpret_cast<QList<QsciCommand*> **>(sipCppPtrV);

#line 150 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtCore/qlist.sip"
    SIP_SSIZE_T len;

    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PySequence_Check(sipPy) || (len = PySequence_Size(sipPy)) < 0)
            return 0;

        for (SIP_SSIZE_T i = 0; i < len; ++i)
        {
            PyObject *itm = PySequence_ITEM(sipPy, i);
            bool ok = (itm && sipCanConvertToType(itm, sipType_QsciCommand, 0));

            Py_XDECREF(itm);

            if (!ok)
                return 0;
        }

        return 1;
    }

    QList<QsciCommand *> *ql = new QList<QsciCommand *>;
    len = PySequence_Size(sipPy);
 
    for (SIP_SSIZE_T i = 0; i < len; ++i)
    {
        PyObject *itm = PySequence_ITEM(sipPy, i);
        QsciCommand *t = reinterpret_cast<QsciCommand *>(sipConvertToType(itm, sipType_QsciCommand, sipTransferObj, 0, 0, sipIsErr));

        Py_DECREF(itm);
 
        if (*sipIsErr)
        {
            delete ql;
            return 0;
        }

        ql->append(t);
    }
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 121 "./sipQsciQList0101QsciCommand.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0101QsciCommand(void *, PyObject *);}
static PyObject *convertFrom_QList_0101QsciCommand(void *sipCppV, PyObject *sipTransferObj)
{
   QList<QsciCommand*> *sipCpp = reinterpret_cast<QList<QsciCommand*> *>(sipCppV);

#line 124 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtCore/qlist.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QsciCommand *t = sipCpp->at(i);
        PyObject *tobj;

        // The explicit (void *) cast allows QsciCommand to be const.
        if ((tobj = sipConvertFromType((void *)t, sipType_QsciCommand, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            return NULL;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 154 "./sipQsciQList0101QsciCommand.cpp"
}


sipMappedTypeDef sipTypeDef_Qsci_QList_0101QsciCommand = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_13159,
        {0}
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QList_0101QsciCommand,
    array_QList_0101QsciCommand,
    copy_QList_0101QsciCommand,
    release_QList_0101QsciCommand,
    convertTo_QList_0101QsciCommand,
    convertFrom_QList_0101QsciCommand
};
