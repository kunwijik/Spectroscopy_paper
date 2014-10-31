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

#line 483 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 34 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQStyleOptionFrameV2.cpp"

#line 483 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 38 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQStyleOptionFrameV2.cpp"
#line 414 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 41 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQStyleOptionFrameV2.cpp"
#line 35 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 44 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQStyleOptionFrameV2.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QStyleOptionFrameV2(void *, const sipTypeDef *);}
static void *cast_QStyleOptionFrameV2(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QStyleOptionFrameV2)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QStyleOptionFrame)->ctd_cast((QStyleOptionFrame *)(QStyleOptionFrameV2 *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionFrameV2(void *, int);}
static void release_QStyleOptionFrameV2(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QStyleOptionFrameV2 *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStyleOptionFrameV2(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionFrameV2(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionFrameV2 *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionFrameV2 *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionFrameV2(SIP_SSIZE_T);}
static void *array_QStyleOptionFrameV2(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionFrameV2[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionFrameV2(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionFrameV2(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionFrameV2(reinterpret_cast<const QStyleOptionFrameV2 *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionFrameV2(sipSimpleWrapper *);}
static void dealloc_QStyleOptionFrameV2(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionFrameV2(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QStyleOptionFrameV2(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionFrameV2(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOptionFrameV2 *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionFrameV2();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QStyleOptionFrameV2* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionFrameV2, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionFrameV2(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QStyleOptionFrame* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionFrame, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionFrameV2(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionFrameV2[] = {{523, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionFrameV2[] = {
    {sipName_Flat, static_cast<int>(QStyleOptionFrameV2::Flat), 527},
    {sipName_None, static_cast<int>(QStyleOptionFrameV2::None), 527},
    {sipName_Version, static_cast<int>(QStyleOptionFrameV2::Version), 529},
};


extern "C" {static PyObject *varget_QStyleOptionFrameV2_features(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionFrameV2_features(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QStyleOptionFrameV2::FrameFeatures*sipVal;
    QStyleOptionFrameV2 *sipCpp = reinterpret_cast<QStyleOptionFrameV2 *>(sipSelf);

    sipVal = &sipCpp->features;

    sipPy = sipConvertFromType(sipVal, sipType_QStyleOptionFrameV2_FrameFeatures, NULL);
    sipKeepReference(sipPy, -1, sipPySelf);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionFrameV2_features(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionFrameV2_features(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QStyleOptionFrameV2::FrameFeatures*sipVal;
    QStyleOptionFrameV2 *sipCpp = reinterpret_cast<QStyleOptionFrameV2 *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QStyleOptionFrameV2::FrameFeatures *>(sipForceConvertToType(sipPy,sipType_QStyleOptionFrameV2_FrameFeatures,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->features = *sipVal;

    sipReleaseType(sipVal, sipType_QStyleOptionFrameV2_FrameFeatures, sipValState);

    return 0;
}

sipVariableDef variables_QStyleOptionFrameV2[] = {
    {InstanceVariable, sipName_features, (PyMethodDef *)varget_QStyleOptionFrameV2_features, (PyMethodDef *)varset_QStyleOptionFrameV2_features, NULL, NULL},
};

PyDoc_STRVAR(doc_QStyleOptionFrameV2, "\1QStyleOptionFrameV2()\n"
    "QStyleOptionFrameV2(QStyleOptionFrameV2)\n"
    "QStyleOptionFrameV2(QStyleOptionFrame)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QStyleOptionFrameV2 = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionFrameV2,
        {0}
    },
    {
        sipNameNr_QStyleOptionFrameV2,
        {0, 0, 1},
        0, 0,
        3, enummembers_QStyleOptionFrameV2,
        1, variables_QStyleOptionFrameV2,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionFrameV2,
    -1,
    -1,
    supers_QStyleOptionFrameV2,
    0,
    init_type_QStyleOptionFrameV2,
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
    dealloc_QStyleOptionFrameV2,
    assign_QStyleOptionFrameV2,
    array_QStyleOptionFrameV2,
    copy_QStyleOptionFrameV2,
    release_QStyleOptionFrameV2,
    cast_QStyleOptionFrameV2,
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
