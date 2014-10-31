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

#line 1853 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 34 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQStyleOptionGroupBox.cpp"

#line 483 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 38 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQStyleOptionGroupBox.cpp"
#line 36 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 41 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQStyleOptionGroupBox.cpp"
#line 35 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 44 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQStyleOptionGroupBox.cpp"
#line 35 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtGui/qcolor.sip"
#include <qcolor.h>
#line 47 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQStyleOptionGroupBox.cpp"
#line 35 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 50 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQStyleOptionGroupBox.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QStyleOptionGroupBox(void *, const sipTypeDef *);}
static void *cast_QStyleOptionGroupBox(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QStyleOptionGroupBox)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QStyleOptionComplex)->ctd_cast((QStyleOptionComplex *)(QStyleOptionGroupBox *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionGroupBox(void *, int);}
static void release_QStyleOptionGroupBox(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QStyleOptionGroupBox *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStyleOptionGroupBox(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionGroupBox(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionGroupBox *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionGroupBox *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionGroupBox(SIP_SSIZE_T);}
static void *array_QStyleOptionGroupBox(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionGroupBox[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionGroupBox(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionGroupBox(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionGroupBox(reinterpret_cast<const QStyleOptionGroupBox *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionGroupBox(sipSimpleWrapper *);}
static void dealloc_QStyleOptionGroupBox(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionGroupBox(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QStyleOptionGroupBox(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionGroupBox(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOptionGroupBox *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionGroupBox();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QStyleOptionGroupBox* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionGroupBox, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionGroupBox(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionGroupBox[] = {{512, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionGroupBox[] = {
    {sipName_Type, static_cast<int>(QStyleOptionGroupBox::Type), 536},
    {sipName_Version, static_cast<int>(QStyleOptionGroupBox::Version), 537},
};


extern "C" {static PyObject *varget_QStyleOptionGroupBox_features(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionGroupBox_features(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QStyleOptionFrameV2::FrameFeatures*sipVal;
    QStyleOptionGroupBox *sipCpp = reinterpret_cast<QStyleOptionGroupBox *>(sipSelf);

    sipVal = &sipCpp->features;

    sipPy = sipConvertFromType(sipVal, sipType_QStyleOptionFrameV2_FrameFeatures, NULL);
    sipKeepReference(sipPy, -1, sipPySelf);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionGroupBox_features(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionGroupBox_features(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QStyleOptionFrameV2::FrameFeatures*sipVal;
    QStyleOptionGroupBox *sipCpp = reinterpret_cast<QStyleOptionGroupBox *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QStyleOptionFrameV2::FrameFeatures *>(sipForceConvertToType(sipPy,sipType_QStyleOptionFrameV2_FrameFeatures,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->features = *sipVal;

    sipReleaseType(sipVal, sipType_QStyleOptionFrameV2_FrameFeatures, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionGroupBox_lineWidth(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionGroupBox_lineWidth(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
    QStyleOptionGroupBox *sipCpp = reinterpret_cast<QStyleOptionGroupBox *>(sipSelf);

    sipVal = sipCpp->lineWidth;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionGroupBox_lineWidth(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionGroupBox_lineWidth(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
    QStyleOptionGroupBox *sipCpp = reinterpret_cast<QStyleOptionGroupBox *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->lineWidth = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionGroupBox_midLineWidth(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionGroupBox_midLineWidth(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
    QStyleOptionGroupBox *sipCpp = reinterpret_cast<QStyleOptionGroupBox *>(sipSelf);

    sipVal = sipCpp->midLineWidth;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionGroupBox_midLineWidth(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionGroupBox_midLineWidth(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
    QStyleOptionGroupBox *sipCpp = reinterpret_cast<QStyleOptionGroupBox *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->midLineWidth = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionGroupBox_text(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionGroupBox_text(void *sipSelf, PyObject *, PyObject *)
{
    QString*sipVal;
    QStyleOptionGroupBox *sipCpp = reinterpret_cast<QStyleOptionGroupBox *>(sipSelf);

    sipVal = &sipCpp->text;

    return sipConvertFromType(sipVal, sipType_QString, NULL);
}


extern "C" {static int varset_QStyleOptionGroupBox_text(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionGroupBox_text(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QString*sipVal;
    QStyleOptionGroupBox *sipCpp = reinterpret_cast<QStyleOptionGroupBox *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QString *>(sipForceConvertToType(sipPy,sipType_QString,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->text = *sipVal;

    sipReleaseType(sipVal, sipType_QString, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionGroupBox_textAlignment(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionGroupBox_textAlignment(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    Qt::Alignment*sipVal;
    QStyleOptionGroupBox *sipCpp = reinterpret_cast<QStyleOptionGroupBox *>(sipSelf);

    sipVal = &sipCpp->textAlignment;

    sipPy = sipConvertFromType(sipVal, sipType_Qt_Alignment, NULL);
    sipKeepReference(sipPy, -1, sipPySelf);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionGroupBox_textAlignment(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionGroupBox_textAlignment(void *sipSelf, PyObject *sipPy, PyObject *)
{
    Qt::Alignment*sipVal;
    QStyleOptionGroupBox *sipCpp = reinterpret_cast<QStyleOptionGroupBox *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<Qt::Alignment *>(sipForceConvertToType(sipPy,sipType_Qt_Alignment,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->textAlignment = *sipVal;

    sipReleaseType(sipVal, sipType_Qt_Alignment, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionGroupBox_textColor(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionGroupBox_textColor(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QColor*sipVal;
    QStyleOptionGroupBox *sipCpp = reinterpret_cast<QStyleOptionGroupBox *>(sipSelf);

    sipVal = &sipCpp->textColor;

    sipPy = sipConvertFromType(sipVal, sipType_QColor, NULL);
    sipKeepReference(sipPy, -1, sipPySelf);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionGroupBox_textColor(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionGroupBox_textColor(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QColor*sipVal;
    QStyleOptionGroupBox *sipCpp = reinterpret_cast<QStyleOptionGroupBox *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QColor *>(sipForceConvertToType(sipPy,sipType_QColor,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->textColor = *sipVal;

    sipReleaseType(sipVal, sipType_QColor, sipValState);

    return 0;
}

sipVariableDef variables_QStyleOptionGroupBox[] = {
    {InstanceVariable, sipName_features, (PyMethodDef *)varget_QStyleOptionGroupBox_features, (PyMethodDef *)varset_QStyleOptionGroupBox_features, NULL, NULL},
    {InstanceVariable, sipName_lineWidth, (PyMethodDef *)varget_QStyleOptionGroupBox_lineWidth, (PyMethodDef *)varset_QStyleOptionGroupBox_lineWidth, NULL, NULL},
    {InstanceVariable, sipName_midLineWidth, (PyMethodDef *)varget_QStyleOptionGroupBox_midLineWidth, (PyMethodDef *)varset_QStyleOptionGroupBox_midLineWidth, NULL, NULL},
    {InstanceVariable, sipName_text, (PyMethodDef *)varget_QStyleOptionGroupBox_text, (PyMethodDef *)varset_QStyleOptionGroupBox_text, NULL, NULL},
    {InstanceVariable, sipName_textAlignment, (PyMethodDef *)varget_QStyleOptionGroupBox_textAlignment, (PyMethodDef *)varset_QStyleOptionGroupBox_textAlignment, NULL, NULL},
    {InstanceVariable, sipName_textColor, (PyMethodDef *)varget_QStyleOptionGroupBox_textColor, (PyMethodDef *)varset_QStyleOptionGroupBox_textColor, NULL, NULL},
};

PyDoc_STRVAR(doc_QStyleOptionGroupBox, "\1QStyleOptionGroupBox()\n"
    "QStyleOptionGroupBox(QStyleOptionGroupBox)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QStyleOptionGroupBox = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionGroupBox,
        {0}
    },
    {
        sipNameNr_QStyleOptionGroupBox,
        {0, 0, 1},
        0, 0,
        2, enummembers_QStyleOptionGroupBox,
        6, variables_QStyleOptionGroupBox,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionGroupBox,
    -1,
    -1,
    supers_QStyleOptionGroupBox,
    0,
    init_type_QStyleOptionGroupBox,
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
    dealloc_QStyleOptionGroupBox,
    assign_QStyleOptionGroupBox,
    array_QStyleOptionGroupBox,
    copy_QStyleOptionGroupBox,
    release_QStyleOptionGroupBox,
    cast_QStyleOptionGroupBox,
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
