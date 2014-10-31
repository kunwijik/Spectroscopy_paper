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

#line 1415 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 34 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQStyleOptionSlider.cpp"

#line 35 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 38 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQStyleOptionSlider.cpp"
#line 31 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtGui/qslider.sip"
#include <qslider.h>
#line 41 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQStyleOptionSlider.cpp"
#line 35 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 44 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtGui/sipQtGuiQStyleOptionSlider.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QStyleOptionSlider(void *, const sipTypeDef *);}
static void *cast_QStyleOptionSlider(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QStyleOptionSlider)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QStyleOptionComplex)->ctd_cast((QStyleOptionComplex *)(QStyleOptionSlider *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionSlider(void *, int);}
static void release_QStyleOptionSlider(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QStyleOptionSlider *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStyleOptionSlider(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionSlider(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionSlider *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionSlider *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionSlider(SIP_SSIZE_T);}
static void *array_QStyleOptionSlider(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionSlider[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionSlider(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionSlider(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionSlider(reinterpret_cast<const QStyleOptionSlider *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionSlider(sipSimpleWrapper *);}
static void dealloc_QStyleOptionSlider(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionSlider(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QStyleOptionSlider(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionSlider(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOptionSlider *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionSlider();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QStyleOptionSlider* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionSlider, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionSlider(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionSlider[] = {{512, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionSlider[] = {
    {sipName_Type, static_cast<int>(QStyleOptionSlider::Type), 562},
    {sipName_Version, static_cast<int>(QStyleOptionSlider::Version), 563},
};


extern "C" {static PyObject *varget_QStyleOptionSlider_dialWrapping(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionSlider_dialWrapping(void *sipSelf, PyObject *, PyObject *)
{
    bool sipVal;
    QStyleOptionSlider *sipCpp = reinterpret_cast<QStyleOptionSlider *>(sipSelf);

    sipVal = sipCpp->dialWrapping;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionSlider_dialWrapping(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionSlider_dialWrapping(void *sipSelf, PyObject *sipPy, PyObject *)
{
    bool sipVal;
    QStyleOptionSlider *sipCpp = reinterpret_cast<QStyleOptionSlider *>(sipSelf);

    sipVal = (bool)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->dialWrapping = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionSlider_maximum(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionSlider_maximum(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
    QStyleOptionSlider *sipCpp = reinterpret_cast<QStyleOptionSlider *>(sipSelf);

    sipVal = sipCpp->maximum;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionSlider_maximum(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionSlider_maximum(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
    QStyleOptionSlider *sipCpp = reinterpret_cast<QStyleOptionSlider *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->maximum = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionSlider_minimum(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionSlider_minimum(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
    QStyleOptionSlider *sipCpp = reinterpret_cast<QStyleOptionSlider *>(sipSelf);

    sipVal = sipCpp->minimum;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionSlider_minimum(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionSlider_minimum(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
    QStyleOptionSlider *sipCpp = reinterpret_cast<QStyleOptionSlider *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->minimum = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionSlider_notchTarget(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionSlider_notchTarget(void *sipSelf, PyObject *, PyObject *)
{
    qreal sipVal;
    QStyleOptionSlider *sipCpp = reinterpret_cast<QStyleOptionSlider *>(sipSelf);

    sipVal = sipCpp->notchTarget;

    return PyFloat_FromDouble(sipVal);
}


extern "C" {static int varset_QStyleOptionSlider_notchTarget(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionSlider_notchTarget(void *sipSelf, PyObject *sipPy, PyObject *)
{
    qreal sipVal;
    QStyleOptionSlider *sipCpp = reinterpret_cast<QStyleOptionSlider *>(sipSelf);

    sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->notchTarget = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionSlider_orientation(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionSlider_orientation(void *sipSelf, PyObject *, PyObject *)
{
    Qt::Orientation sipVal;
    QStyleOptionSlider *sipCpp = reinterpret_cast<QStyleOptionSlider *>(sipSelf);

    sipVal = sipCpp->orientation;

    return sipConvertFromEnum(sipVal, sipType_Qt_Orientation);
}


extern "C" {static int varset_QStyleOptionSlider_orientation(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionSlider_orientation(void *sipSelf, PyObject *sipPy, PyObject *)
{
    Qt::Orientation sipVal;
    QStyleOptionSlider *sipCpp = reinterpret_cast<QStyleOptionSlider *>(sipSelf);

    sipVal = (Qt::Orientation)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->orientation = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionSlider_pageStep(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionSlider_pageStep(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
    QStyleOptionSlider *sipCpp = reinterpret_cast<QStyleOptionSlider *>(sipSelf);

    sipVal = sipCpp->pageStep;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionSlider_pageStep(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionSlider_pageStep(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
    QStyleOptionSlider *sipCpp = reinterpret_cast<QStyleOptionSlider *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->pageStep = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionSlider_singleStep(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionSlider_singleStep(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
    QStyleOptionSlider *sipCpp = reinterpret_cast<QStyleOptionSlider *>(sipSelf);

    sipVal = sipCpp->singleStep;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionSlider_singleStep(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionSlider_singleStep(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
    QStyleOptionSlider *sipCpp = reinterpret_cast<QStyleOptionSlider *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->singleStep = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionSlider_sliderPosition(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionSlider_sliderPosition(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
    QStyleOptionSlider *sipCpp = reinterpret_cast<QStyleOptionSlider *>(sipSelf);

    sipVal = sipCpp->sliderPosition;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionSlider_sliderPosition(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionSlider_sliderPosition(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
    QStyleOptionSlider *sipCpp = reinterpret_cast<QStyleOptionSlider *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->sliderPosition = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionSlider_sliderValue(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionSlider_sliderValue(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
    QStyleOptionSlider *sipCpp = reinterpret_cast<QStyleOptionSlider *>(sipSelf);

    sipVal = sipCpp->sliderValue;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionSlider_sliderValue(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionSlider_sliderValue(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
    QStyleOptionSlider *sipCpp = reinterpret_cast<QStyleOptionSlider *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->sliderValue = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionSlider_tickInterval(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionSlider_tickInterval(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
    QStyleOptionSlider *sipCpp = reinterpret_cast<QStyleOptionSlider *>(sipSelf);

    sipVal = sipCpp->tickInterval;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionSlider_tickInterval(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionSlider_tickInterval(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
    QStyleOptionSlider *sipCpp = reinterpret_cast<QStyleOptionSlider *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->tickInterval = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionSlider_tickPosition(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionSlider_tickPosition(void *sipSelf, PyObject *, PyObject *)
{
    QSlider::TickPosition sipVal;
    QStyleOptionSlider *sipCpp = reinterpret_cast<QStyleOptionSlider *>(sipSelf);

    sipVal = sipCpp->tickPosition;

    return sipConvertFromEnum(sipVal, sipType_QSlider_TickPosition);
}


extern "C" {static int varset_QStyleOptionSlider_tickPosition(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionSlider_tickPosition(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QSlider::TickPosition sipVal;
    QStyleOptionSlider *sipCpp = reinterpret_cast<QStyleOptionSlider *>(sipSelf);

    sipVal = (QSlider::TickPosition)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->tickPosition = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionSlider_upsideDown(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionSlider_upsideDown(void *sipSelf, PyObject *, PyObject *)
{
    bool sipVal;
    QStyleOptionSlider *sipCpp = reinterpret_cast<QStyleOptionSlider *>(sipSelf);

    sipVal = sipCpp->upsideDown;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionSlider_upsideDown(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionSlider_upsideDown(void *sipSelf, PyObject *sipPy, PyObject *)
{
    bool sipVal;
    QStyleOptionSlider *sipCpp = reinterpret_cast<QStyleOptionSlider *>(sipSelf);

    sipVal = (bool)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->upsideDown = sipVal;

    return 0;
}

sipVariableDef variables_QStyleOptionSlider[] = {
    {InstanceVariable, sipName_dialWrapping, (PyMethodDef *)varget_QStyleOptionSlider_dialWrapping, (PyMethodDef *)varset_QStyleOptionSlider_dialWrapping, NULL, NULL},
    {InstanceVariable, sipName_maximum, (PyMethodDef *)varget_QStyleOptionSlider_maximum, (PyMethodDef *)varset_QStyleOptionSlider_maximum, NULL, NULL},
    {InstanceVariable, sipName_minimum, (PyMethodDef *)varget_QStyleOptionSlider_minimum, (PyMethodDef *)varset_QStyleOptionSlider_minimum, NULL, NULL},
    {InstanceVariable, sipName_notchTarget, (PyMethodDef *)varget_QStyleOptionSlider_notchTarget, (PyMethodDef *)varset_QStyleOptionSlider_notchTarget, NULL, NULL},
    {InstanceVariable, sipName_orientation, (PyMethodDef *)varget_QStyleOptionSlider_orientation, (PyMethodDef *)varset_QStyleOptionSlider_orientation, NULL, NULL},
    {InstanceVariable, sipName_pageStep, (PyMethodDef *)varget_QStyleOptionSlider_pageStep, (PyMethodDef *)varset_QStyleOptionSlider_pageStep, NULL, NULL},
    {InstanceVariable, sipName_singleStep, (PyMethodDef *)varget_QStyleOptionSlider_singleStep, (PyMethodDef *)varset_QStyleOptionSlider_singleStep, NULL, NULL},
    {InstanceVariable, sipName_sliderPosition, (PyMethodDef *)varget_QStyleOptionSlider_sliderPosition, (PyMethodDef *)varset_QStyleOptionSlider_sliderPosition, NULL, NULL},
    {InstanceVariable, sipName_sliderValue, (PyMethodDef *)varget_QStyleOptionSlider_sliderValue, (PyMethodDef *)varset_QStyleOptionSlider_sliderValue, NULL, NULL},
    {InstanceVariable, sipName_tickInterval, (PyMethodDef *)varget_QStyleOptionSlider_tickInterval, (PyMethodDef *)varset_QStyleOptionSlider_tickInterval, NULL, NULL},
    {InstanceVariable, sipName_tickPosition, (PyMethodDef *)varget_QStyleOptionSlider_tickPosition, (PyMethodDef *)varset_QStyleOptionSlider_tickPosition, NULL, NULL},
    {InstanceVariable, sipName_upsideDown, (PyMethodDef *)varget_QStyleOptionSlider_upsideDown, (PyMethodDef *)varset_QStyleOptionSlider_upsideDown, NULL, NULL},
};

PyDoc_STRVAR(doc_QStyleOptionSlider, "\1QStyleOptionSlider()\n"
    "QStyleOptionSlider(QStyleOptionSlider)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QStyleOptionSlider = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionSlider,
        {0}
    },
    {
        sipNameNr_QStyleOptionSlider,
        {0, 0, 1},
        0, 0,
        2, enummembers_QStyleOptionSlider,
        12, variables_QStyleOptionSlider,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionSlider,
    -1,
    -1,
    supers_QStyleOptionSlider,
    0,
    init_type_QStyleOptionSlider,
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
    dealloc_QStyleOptionSlider,
    assign_QStyleOptionSlider,
    array_QStyleOptionSlider,
    copy_QStyleOptionSlider,
    release_QStyleOptionSlider,
    cast_QStyleOptionSlider,
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
