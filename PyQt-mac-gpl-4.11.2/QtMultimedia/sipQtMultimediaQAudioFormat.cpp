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

#include "sipAPIQtMultimedia.h"

#line 33 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtMultimedia/qaudioformat.sip"
#include <qaudioformat.h>
#line 34 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtMultimedia/sipQtMultimediaQAudioFormat.cpp"

#line 36 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 38 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtMultimedia/sipQtMultimediaQAudioFormat.cpp"


PyDoc_STRVAR(doc_QAudioFormat_isValid, "QAudioFormat.isValid() -> bool");

extern "C" {static PyObject *meth_QAudioFormat_isValid(PyObject *, PyObject *);}
static PyObject *meth_QAudioFormat_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAudioFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioFormat, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isValid();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioFormat, sipName_isValid, doc_QAudioFormat_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioFormat_setFrequency, "QAudioFormat.setFrequency(int)");

extern "C" {static PyObject *meth_QAudioFormat_setFrequency(PyObject *, PyObject *);}
static PyObject *meth_QAudioFormat_setFrequency(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QAudioFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QAudioFormat, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setFrequency(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioFormat, sipName_setFrequency, doc_QAudioFormat_setFrequency);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioFormat_frequency, "QAudioFormat.frequency() -> int");

extern "C" {static PyObject *meth_QAudioFormat_frequency(PyObject *, PyObject *);}
static PyObject *meth_QAudioFormat_frequency(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAudioFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioFormat, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->frequency();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioFormat, sipName_frequency, doc_QAudioFormat_frequency);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioFormat_setChannels, "QAudioFormat.setChannels(int)");

extern "C" {static PyObject *meth_QAudioFormat_setChannels(PyObject *, PyObject *);}
static PyObject *meth_QAudioFormat_setChannels(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QAudioFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QAudioFormat, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setChannels(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioFormat, sipName_setChannels, doc_QAudioFormat_setChannels);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioFormat_channels, "QAudioFormat.channels() -> int");

extern "C" {static PyObject *meth_QAudioFormat_channels(PyObject *, PyObject *);}
static PyObject *meth_QAudioFormat_channels(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAudioFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioFormat, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->channels();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioFormat, sipName_channels, doc_QAudioFormat_channels);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioFormat_setSampleSize, "QAudioFormat.setSampleSize(int)");

extern "C" {static PyObject *meth_QAudioFormat_setSampleSize(PyObject *, PyObject *);}
static PyObject *meth_QAudioFormat_setSampleSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QAudioFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QAudioFormat, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setSampleSize(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioFormat, sipName_setSampleSize, doc_QAudioFormat_setSampleSize);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioFormat_sampleSize, "QAudioFormat.sampleSize() -> int");

extern "C" {static PyObject *meth_QAudioFormat_sampleSize(PyObject *, PyObject *);}
static PyObject *meth_QAudioFormat_sampleSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAudioFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioFormat, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->sampleSize();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioFormat, sipName_sampleSize, doc_QAudioFormat_sampleSize);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioFormat_setCodec, "QAudioFormat.setCodec(QString)");

extern "C" {static PyObject *meth_QAudioFormat_setCodec(PyObject *, PyObject *);}
static PyObject *meth_QAudioFormat_setCodec(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QAudioFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QAudioFormat, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setCodec(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioFormat, sipName_setCodec, doc_QAudioFormat_setCodec);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioFormat_codec, "QAudioFormat.codec() -> QString");

extern "C" {static PyObject *meth_QAudioFormat_codec(PyObject *, PyObject *);}
static PyObject *meth_QAudioFormat_codec(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAudioFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioFormat, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->codec());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioFormat, sipName_codec, doc_QAudioFormat_codec);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioFormat_setByteOrder, "QAudioFormat.setByteOrder(QAudioFormat.Endian)");

extern "C" {static PyObject *meth_QAudioFormat_setByteOrder(PyObject *, PyObject *);}
static PyObject *meth_QAudioFormat_setByteOrder(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QAudioFormat::Endian a0;
        QAudioFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QAudioFormat, &sipCpp, sipType_QAudioFormat_Endian, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setByteOrder(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioFormat, sipName_setByteOrder, doc_QAudioFormat_setByteOrder);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioFormat_byteOrder, "QAudioFormat.byteOrder() -> QAudioFormat.Endian");

extern "C" {static PyObject *meth_QAudioFormat_byteOrder(PyObject *, PyObject *);}
static PyObject *meth_QAudioFormat_byteOrder(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAudioFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioFormat, &sipCpp))
        {
            QAudioFormat::Endian sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->byteOrder();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QAudioFormat_Endian);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioFormat, sipName_byteOrder, doc_QAudioFormat_byteOrder);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioFormat_setSampleType, "QAudioFormat.setSampleType(QAudioFormat.SampleType)");

extern "C" {static PyObject *meth_QAudioFormat_setSampleType(PyObject *, PyObject *);}
static PyObject *meth_QAudioFormat_setSampleType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QAudioFormat::SampleType a0;
        QAudioFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QAudioFormat, &sipCpp, sipType_QAudioFormat_SampleType, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setSampleType(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioFormat, sipName_setSampleType, doc_QAudioFormat_setSampleType);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioFormat_sampleType, "QAudioFormat.sampleType() -> QAudioFormat.SampleType");

extern "C" {static PyObject *meth_QAudioFormat_sampleType(PyObject *, PyObject *);}
static PyObject *meth_QAudioFormat_sampleType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAudioFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioFormat, &sipCpp))
        {
            QAudioFormat::SampleType sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->sampleType();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QAudioFormat_SampleType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioFormat, sipName_sampleType, doc_QAudioFormat_sampleType);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioFormat_setSampleRate, "QAudioFormat.setSampleRate(int)");

extern "C" {static PyObject *meth_QAudioFormat_setSampleRate(PyObject *, PyObject *);}
static PyObject *meth_QAudioFormat_setSampleRate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QAudioFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QAudioFormat, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setSampleRate(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioFormat, sipName_setSampleRate, doc_QAudioFormat_setSampleRate);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioFormat_sampleRate, "QAudioFormat.sampleRate() -> int");

extern "C" {static PyObject *meth_QAudioFormat_sampleRate(PyObject *, PyObject *);}
static PyObject *meth_QAudioFormat_sampleRate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAudioFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioFormat, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->sampleRate();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioFormat, sipName_sampleRate, doc_QAudioFormat_sampleRate);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioFormat_setChannelCount, "QAudioFormat.setChannelCount(int)");

extern "C" {static PyObject *meth_QAudioFormat_setChannelCount(PyObject *, PyObject *);}
static PyObject *meth_QAudioFormat_setChannelCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QAudioFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QAudioFormat, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setChannelCount(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioFormat, sipName_setChannelCount, doc_QAudioFormat_setChannelCount);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioFormat_channelCount, "QAudioFormat.channelCount() -> int");

extern "C" {static PyObject *meth_QAudioFormat_channelCount(PyObject *, PyObject *);}
static PyObject *meth_QAudioFormat_channelCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAudioFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioFormat, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->channelCount();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioFormat, sipName_channelCount, doc_QAudioFormat_channelCount);

    return NULL;
}


extern "C" {static PyObject *slot_QAudioFormat___ne__(PyObject *,PyObject *);}
static PyObject *slot_QAudioFormat___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QAudioFormat *sipCpp = reinterpret_cast<QAudioFormat *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAudioFormat));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QAudioFormat* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QAudioFormat, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QAudioFormat::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtMultimedia,ne_slot,sipType_QAudioFormat,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QAudioFormat___eq__(PyObject *,PyObject *);}
static PyObject *slot_QAudioFormat___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QAudioFormat *sipCpp = reinterpret_cast<QAudioFormat *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QAudioFormat));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QAudioFormat* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QAudioFormat, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QAudioFormat::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtMultimedia,eq_slot,sipType_QAudioFormat,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QAudioFormat(void *, const sipTypeDef *);}
static void *cast_QAudioFormat(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QAudioFormat)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QAudioFormat(void *, int);}
static void release_QAudioFormat(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QAudioFormat *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QAudioFormat(void *, SIP_SSIZE_T, const void *);}
static void assign_QAudioFormat(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QAudioFormat *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QAudioFormat *>(sipSrc);
}


extern "C" {static void *array_QAudioFormat(SIP_SSIZE_T);}
static void *array_QAudioFormat(SIP_SSIZE_T sipNrElem)
{
    return new QAudioFormat[sipNrElem];
}


extern "C" {static void *copy_QAudioFormat(const void *, SIP_SSIZE_T);}
static void *copy_QAudioFormat(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QAudioFormat(reinterpret_cast<const QAudioFormat *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QAudioFormat(sipSimpleWrapper *);}
static void dealloc_QAudioFormat(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QAudioFormat(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QAudioFormat(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QAudioFormat(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QAudioFormat *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QAudioFormat();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QAudioFormat* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QAudioFormat, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QAudioFormat(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QAudioFormat[] = {
    {(void *)slot_QAudioFormat___ne__, ne_slot},
    {(void *)slot_QAudioFormat___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QAudioFormat[] = {
    {SIP_MLNAME_CAST(sipName_byteOrder), meth_QAudioFormat_byteOrder, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioFormat_byteOrder)},
    {SIP_MLNAME_CAST(sipName_channelCount), meth_QAudioFormat_channelCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioFormat_channelCount)},
    {SIP_MLNAME_CAST(sipName_channels), meth_QAudioFormat_channels, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioFormat_channels)},
    {SIP_MLNAME_CAST(sipName_codec), meth_QAudioFormat_codec, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioFormat_codec)},
    {SIP_MLNAME_CAST(sipName_frequency), meth_QAudioFormat_frequency, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioFormat_frequency)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QAudioFormat_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioFormat_isValid)},
    {SIP_MLNAME_CAST(sipName_sampleRate), meth_QAudioFormat_sampleRate, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioFormat_sampleRate)},
    {SIP_MLNAME_CAST(sipName_sampleSize), meth_QAudioFormat_sampleSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioFormat_sampleSize)},
    {SIP_MLNAME_CAST(sipName_sampleType), meth_QAudioFormat_sampleType, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioFormat_sampleType)},
    {SIP_MLNAME_CAST(sipName_setByteOrder), meth_QAudioFormat_setByteOrder, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioFormat_setByteOrder)},
    {SIP_MLNAME_CAST(sipName_setChannelCount), meth_QAudioFormat_setChannelCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioFormat_setChannelCount)},
    {SIP_MLNAME_CAST(sipName_setChannels), meth_QAudioFormat_setChannels, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioFormat_setChannels)},
    {SIP_MLNAME_CAST(sipName_setCodec), meth_QAudioFormat_setCodec, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioFormat_setCodec)},
    {SIP_MLNAME_CAST(sipName_setFrequency), meth_QAudioFormat_setFrequency, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioFormat_setFrequency)},
    {SIP_MLNAME_CAST(sipName_setSampleRate), meth_QAudioFormat_setSampleRate, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioFormat_setSampleRate)},
    {SIP_MLNAME_CAST(sipName_setSampleSize), meth_QAudioFormat_setSampleSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioFormat_setSampleSize)},
    {SIP_MLNAME_CAST(sipName_setSampleType), meth_QAudioFormat_setSampleType, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioFormat_setSampleType)}
};

static sipEnumMemberDef enummembers_QAudioFormat[] = {
    {sipName_BigEndian, static_cast<int>(QAudioFormat::BigEndian), 11},
    {sipName_Float, static_cast<int>(QAudioFormat::Float), 12},
    {sipName_LittleEndian, static_cast<int>(QAudioFormat::LittleEndian), 11},
    {sipName_SignedInt, static_cast<int>(QAudioFormat::SignedInt), 12},
    {sipName_UnSignedInt, static_cast<int>(QAudioFormat::UnSignedInt), 12},
    {sipName_Unknown, static_cast<int>(QAudioFormat::Unknown), 12},
};

PyDoc_STRVAR(doc_QAudioFormat, "\1QAudioFormat()\n"
    "QAudioFormat(QAudioFormat)");


pyqt4ClassTypeDef sipTypeDef_QtMultimedia_QAudioFormat = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QAudioFormat,
        {0}
    },
    {
        sipNameNr_QAudioFormat,
        {0, 0, 1},
        17, methods_QAudioFormat,
        6, enummembers_QAudioFormat,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QAudioFormat,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QAudioFormat,
    init_type_QAudioFormat,
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
    dealloc_QAudioFormat,
    assign_QAudioFormat,
    array_QAudioFormat,
    copy_QAudioFormat,
    release_QAudioFormat,
    cast_QAudioFormat,
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
