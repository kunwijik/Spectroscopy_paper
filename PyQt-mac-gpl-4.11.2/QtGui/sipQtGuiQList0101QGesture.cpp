/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.3 on Mon Sep 22 17:43:52 2014
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

#line 120 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 34 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQList0101QGesture.cpp"

#line 33 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtGui/qgesture.sip"
#include <qgesture.h>
#line 38 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQList0101QGesture.cpp"


extern "C" {static void assign_QList_0101QGesture(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0101QGesture(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QGesture*> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QGesture*> *>(sipSrc);
}


extern "C" {static void *array_QList_0101QGesture(SIP_SSIZE_T);}
static void *array_QList_0101QGesture(SIP_SSIZE_T sipNrElem)
{
    return new QList<QGesture*>[sipNrElem];
}


extern "C" {static void *copy_QList_0101QGesture(const void *, SIP_SSIZE_T);}
static void *copy_QList_0101QGesture(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QGesture*>(reinterpret_cast<const QList<QGesture*> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0101QGesture(void *, int);}
static void release_QList_0101QGesture(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QList<QGesture*> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QList_0101QGesture(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0101QGesture(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QGesture*> **sipCppPtr = reinterpret_cast<QList<QGesture*> **>(sipCppPtrV);

#line 150 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qlist.sip"
    SIP_SSIZE_T len;

    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PySequence_Check(sipPy) || (len = PySequence_Size(sipPy)) < 0)
            return 0;

        for (SIP_SSIZE_T i = 0; i < len; ++i)
        {
            PyObject *itm = PySequence_ITEM(sipPy, i);
            bool ok = (itm && sipCanConvertToType(itm, sipType_QGesture, 0));

            Py_XDECREF(itm);

            if (!ok)
                return 0;
        }

        return 1;
    }

    QList<QGesture *> *ql = new QList<QGesture *>;
    len = PySequence_Size(sipPy);
 
    for (SIP_SSIZE_T i = 0; i < len; ++i)
    {
        PyObject *itm = PySequence_ITEM(sipPy, i);
        QGesture *t = reinterpret_cast<QGesture *>(sipConvertToType(itm, sipType_QGesture, sipTransferObj, 0, 0, sipIsErr));

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
#line 123 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQList0101QGesture.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0101QGesture(void *, PyObject *);}
static PyObject *convertFrom_QList_0101QGesture(void *sipCppV, PyObject *sipTransferObj)
{
   QList<QGesture*> *sipCpp = reinterpret_cast<QList<QGesture*> *>(sipCppV);

#line 124 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qlist.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QGesture *t = sipCpp->at(i);
        PyObject *tobj;

        // The explicit (void *) cast allows QGesture to be const.
        if ((tobj = sipConvertFromType((void *)t, sipType_QGesture, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            return NULL;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 156 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQList0101QGesture.cpp"
}


sipMappedTypeDef sipTypeDef_QtGui_QList_0101QGesture = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_44376,
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
    assign_QList_0101QGesture,
    array_QList_0101QGesture,
    copy_QList_0101QGesture,
    release_QList_0101QGesture,
    convertTo_QList_0101QGesture,
    convertFrom_QList_0101QGesture
};
