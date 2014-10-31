/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.3 on Mon Sep 22 17:44:02 2014
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

#include "sipAPIQtNetwork.h"

#line 33 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 34 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtNetwork/sipQtNetworkQList0100QSslCipher.cpp"

#line 34 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtNetwork/qsslcipher.sip"
#include <qsslcipher.h>
#line 38 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtNetwork/sipQtNetworkQList0100QSslCipher.cpp"


extern "C" {static void assign_QList_0100QSslCipher(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0100QSslCipher(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QSslCipher> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QSslCipher> *>(sipSrc);
}


extern "C" {static void *array_QList_0100QSslCipher(SIP_SSIZE_T);}
static void *array_QList_0100QSslCipher(SIP_SSIZE_T sipNrElem)
{
    return new QList<QSslCipher>[sipNrElem];
}


extern "C" {static void *copy_QList_0100QSslCipher(const void *, SIP_SSIZE_T);}
static void *copy_QList_0100QSslCipher(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QSslCipher>(reinterpret_cast<const QList<QSslCipher> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0100QSslCipher(void *, int);}
static void release_QList_0100QSslCipher(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QList<QSslCipher> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QList_0100QSslCipher(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0100QSslCipher(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QSslCipher> **sipCppPtr = reinterpret_cast<QList<QSslCipher> **>(sipCppPtrV);

#line 64 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qlist.sip"
    SIP_SSIZE_T len;

    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PySequence_Check(sipPy) || (len = PySequence_Size(sipPy)) < 0)
            return 0;

        for (SIP_SSIZE_T i = 0; i < len; ++i)
        {
            PyObject *itm = PySequence_ITEM(sipPy, i);
            bool ok = (itm && sipCanConvertToType(itm, sipType_QSslCipher, SIP_NOT_NONE));

            Py_XDECREF(itm);

            if (!ok)
                return 0;
        }

        return 1;
    }

    QList<QSslCipher> *ql = new QList<QSslCipher>;
    len = PySequence_Size(sipPy);
 
    for (SIP_SSIZE_T i = 0; i < len; ++i)
    {
        PyObject *itm = PySequence_ITEM(sipPy, i);
        int state;
        QSslCipher *t = reinterpret_cast<QSslCipher *>(sipConvertToType(itm, sipType_QSslCipher, sipTransferObj, SIP_NOT_NONE, &state, sipIsErr));

        Py_DECREF(itm);
 
        if (*sipIsErr)
        {
            sipReleaseType(t, sipType_QSslCipher, state);

            delete ql;
            return 0;
        }

        ql->append(*t);

        sipReleaseType(t, sipType_QSslCipher, state);
    }
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 128 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtNetwork/sipQtNetworkQList0100QSslCipher.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0100QSslCipher(void *, PyObject *);}
static PyObject *convertFrom_QList_0100QSslCipher(void *sipCppV, PyObject *sipTransferObj)
{
   QList<QSslCipher> *sipCpp = reinterpret_cast<QList<QSslCipher> *>(sipCppV);

#line 37 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qlist.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QSslCipher *t = new QSslCipher(sipCpp->at(i));
        PyObject *tobj;

        if ((tobj = sipConvertFromNewType(t, sipType_QSslCipher, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            delete t;

            return NULL;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 162 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtNetwork/sipQtNetworkQList0100QSslCipher.cpp"
}


sipMappedTypeDef sipTypeDef_QtNetwork_QList_0100QSslCipher = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_5745,
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
    assign_QList_0100QSslCipher,
    array_QList_0100QSslCipher,
    copy_QList_0100QSslCipher,
    release_QList_0100QSslCipher,
    convertTo_QList_0100QSslCipher,
    convertFrom_QList_0100QSslCipher
};
