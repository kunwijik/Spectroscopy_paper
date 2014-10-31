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

#line 33 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qvector.sip"
#include <qvector.h>
#line 34 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtCore/sipQtCoreQVector0100QXmlStreamNamespaceDeclaration.cpp"

#line 257 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qxmlstream.sip"
#include <qxmlstream.h>
#line 38 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtCore/sipQtCoreQVector0100QXmlStreamNamespaceDeclaration.cpp"


extern "C" {static void assign_QVector_0100QXmlStreamNamespaceDeclaration(void *, SIP_SSIZE_T, const void *);}
static void assign_QVector_0100QXmlStreamNamespaceDeclaration(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QVector<QXmlStreamNamespaceDeclaration> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QVector<QXmlStreamNamespaceDeclaration> *>(sipSrc);
}


extern "C" {static void *array_QVector_0100QXmlStreamNamespaceDeclaration(SIP_SSIZE_T);}
static void *array_QVector_0100QXmlStreamNamespaceDeclaration(SIP_SSIZE_T sipNrElem)
{
    return new QVector<QXmlStreamNamespaceDeclaration>[sipNrElem];
}


extern "C" {static void *copy_QVector_0100QXmlStreamNamespaceDeclaration(const void *, SIP_SSIZE_T);}
static void *copy_QVector_0100QXmlStreamNamespaceDeclaration(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QVector<QXmlStreamNamespaceDeclaration>(reinterpret_cast<const QVector<QXmlStreamNamespaceDeclaration> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QVector_0100QXmlStreamNamespaceDeclaration(void *, int);}
static void release_QVector_0100QXmlStreamNamespaceDeclaration(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QVector<QXmlStreamNamespaceDeclaration> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QVector_0100QXmlStreamNamespaceDeclaration(PyObject *, void **, int *, PyObject *);}
static int convertTo_QVector_0100QXmlStreamNamespaceDeclaration(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QVector<QXmlStreamNamespaceDeclaration> **sipCppPtr = reinterpret_cast<QVector<QXmlStreamNamespaceDeclaration> **>(sipCppPtrV);

#line 64 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qvector.sip"
    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PyList_Check(sipPy))
            return 0;

        for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i)
            if (!sipCanConvertToType(PyList_GET_ITEM(sipPy, i), sipType_QXmlStreamNamespaceDeclaration, SIP_NOT_NONE))
                return 0;

        return 1;
    }

    QVector<QXmlStreamNamespaceDeclaration> *qv = new QVector<QXmlStreamNamespaceDeclaration>;
 
    for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i)
    {
        int state;
        QXmlStreamNamespaceDeclaration *t = reinterpret_cast<QXmlStreamNamespaceDeclaration *>(sipConvertToType(PyList_GET_ITEM(sipPy, i), sipType_QXmlStreamNamespaceDeclaration, sipTransferObj, SIP_NOT_NONE, &state, sipIsErr));
 
        if (*sipIsErr)
        {
            sipReleaseType(t, sipType_QXmlStreamNamespaceDeclaration, state);

            delete qv;
            return 0;
        }

        qv->append(*t);

        sipReleaseType(t, sipType_QXmlStreamNamespaceDeclaration, state);
    }
 
    *sipCppPtr = qv;
 
    return sipGetState(sipTransferObj);
#line 115 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtCore/sipQtCoreQVector0100QXmlStreamNamespaceDeclaration.cpp"
}


extern "C" {static PyObject *convertFrom_QVector_0100QXmlStreamNamespaceDeclaration(void *, PyObject *);}
static PyObject *convertFrom_QVector_0100QXmlStreamNamespaceDeclaration(void *sipCppV, PyObject *sipTransferObj)
{
   QVector<QXmlStreamNamespaceDeclaration> *sipCpp = reinterpret_cast<QVector<QXmlStreamNamespaceDeclaration> *>(sipCppV);

#line 37 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qvector.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QXmlStreamNamespaceDeclaration *t = new QXmlStreamNamespaceDeclaration(sipCpp->at(i));
        PyObject *tobj;

        if ((tobj = sipConvertFromNewType(t, sipType_QXmlStreamNamespaceDeclaration, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            delete t;

            return NULL;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 149 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtCore/sipQtCoreQVector0100QXmlStreamNamespaceDeclaration.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QVector_0100QXmlStreamNamespaceDeclaration = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_43,
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
    assign_QVector_0100QXmlStreamNamespaceDeclaration,
    array_QVector_0100QXmlStreamNamespaceDeclaration,
    copy_QVector_0100QXmlStreamNamespaceDeclaration,
    release_QVector_0100QXmlStreamNamespaceDeclaration,
    convertTo_QVector_0100QXmlStreamNamespaceDeclaration,
    convertFrom_QVector_0100QXmlStreamNamespaceDeclaration
};
