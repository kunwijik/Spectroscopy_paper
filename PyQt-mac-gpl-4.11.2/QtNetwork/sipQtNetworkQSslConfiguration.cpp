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

#line 34 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtNetwork/qsslconfiguration.sip"
#include <qsslconfiguration.h>
#line 34 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtNetwork/sipQtNetworkQSslConfiguration.cpp"

#line 40 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtNetwork/qssl.sip"
#include <qssl.h>
#line 38 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtNetwork/sipQtNetworkQSslConfiguration.cpp"
#line 33 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 41 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtNetwork/sipQtNetworkQSslConfiguration.cpp"
#line 34 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtNetwork/qsslcertificate.sip"
#include <qsslcertificate.h>
#line 44 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtNetwork/sipQtNetworkQSslConfiguration.cpp"
#line 33 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 47 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtNetwork/sipQtNetworkQSslConfiguration.cpp"
#line 34 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtNetwork/qsslcipher.sip"
#include <qsslcipher.h>
#line 50 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtNetwork/sipQtNetworkQSslConfiguration.cpp"
#line 34 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtNetwork/qsslkey.sip"
#include <qsslkey.h>
#line 53 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtNetwork/sipQtNetworkQSslConfiguration.cpp"
#line 34 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtNetwork/qsslsocket.sip"
#include <qsslsocket.h>
#line 56 "/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/QtNetwork/sipQtNetworkQSslConfiguration.cpp"


PyDoc_STRVAR(doc_QSslConfiguration_isNull, "QSslConfiguration.isNull() -> bool");

extern "C" {static PyObject *meth_QSslConfiguration_isNull(PyObject *, PyObject *);}
static PyObject *meth_QSslConfiguration_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSslConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslConfiguration, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isNull();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslConfiguration, sipName_isNull, doc_QSslConfiguration_isNull);

    return NULL;
}


PyDoc_STRVAR(doc_QSslConfiguration_protocol, "QSslConfiguration.protocol() -> QSsl.SslProtocol");

extern "C" {static PyObject *meth_QSslConfiguration_protocol(PyObject *, PyObject *);}
static PyObject *meth_QSslConfiguration_protocol(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSslConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslConfiguration, &sipCpp))
        {
            QSsl::SslProtocol sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->protocol();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QSsl_SslProtocol);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslConfiguration, sipName_protocol, doc_QSslConfiguration_protocol);

    return NULL;
}


PyDoc_STRVAR(doc_QSslConfiguration_setProtocol, "QSslConfiguration.setProtocol(QSsl.SslProtocol)");

extern "C" {static PyObject *meth_QSslConfiguration_setProtocol(PyObject *, PyObject *);}
static PyObject *meth_QSslConfiguration_setProtocol(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSsl::SslProtocol a0;
        QSslConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QSslConfiguration, &sipCpp, sipType_QSsl_SslProtocol, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setProtocol(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslConfiguration, sipName_setProtocol, doc_QSslConfiguration_setProtocol);

    return NULL;
}


PyDoc_STRVAR(doc_QSslConfiguration_peerVerifyMode, "QSslConfiguration.peerVerifyMode() -> QSslSocket.PeerVerifyMode");

extern "C" {static PyObject *meth_QSslConfiguration_peerVerifyMode(PyObject *, PyObject *);}
static PyObject *meth_QSslConfiguration_peerVerifyMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSslConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslConfiguration, &sipCpp))
        {
            QSslSocket::PeerVerifyMode sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->peerVerifyMode();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QSslSocket_PeerVerifyMode);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslConfiguration, sipName_peerVerifyMode, doc_QSslConfiguration_peerVerifyMode);

    return NULL;
}


PyDoc_STRVAR(doc_QSslConfiguration_setPeerVerifyMode, "QSslConfiguration.setPeerVerifyMode(QSslSocket.PeerVerifyMode)");

extern "C" {static PyObject *meth_QSslConfiguration_setPeerVerifyMode(PyObject *, PyObject *);}
static PyObject *meth_QSslConfiguration_setPeerVerifyMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSslSocket::PeerVerifyMode a0;
        QSslConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QSslConfiguration, &sipCpp, sipType_QSslSocket_PeerVerifyMode, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setPeerVerifyMode(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslConfiguration, sipName_setPeerVerifyMode, doc_QSslConfiguration_setPeerVerifyMode);

    return NULL;
}


PyDoc_STRVAR(doc_QSslConfiguration_peerVerifyDepth, "QSslConfiguration.peerVerifyDepth() -> int");

extern "C" {static PyObject *meth_QSslConfiguration_peerVerifyDepth(PyObject *, PyObject *);}
static PyObject *meth_QSslConfiguration_peerVerifyDepth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSslConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslConfiguration, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->peerVerifyDepth();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslConfiguration, sipName_peerVerifyDepth, doc_QSslConfiguration_peerVerifyDepth);

    return NULL;
}


PyDoc_STRVAR(doc_QSslConfiguration_setPeerVerifyDepth, "QSslConfiguration.setPeerVerifyDepth(int)");

extern "C" {static PyObject *meth_QSslConfiguration_setPeerVerifyDepth(PyObject *, PyObject *);}
static PyObject *meth_QSslConfiguration_setPeerVerifyDepth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QSslConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QSslConfiguration, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setPeerVerifyDepth(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslConfiguration, sipName_setPeerVerifyDepth, doc_QSslConfiguration_setPeerVerifyDepth);

    return NULL;
}


PyDoc_STRVAR(doc_QSslConfiguration_localCertificate, "QSslConfiguration.localCertificate() -> QSslCertificate");

extern "C" {static PyObject *meth_QSslConfiguration_localCertificate(PyObject *, PyObject *);}
static PyObject *meth_QSslConfiguration_localCertificate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSslConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslConfiguration, &sipCpp))
        {
            QSslCertificate*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSslCertificate(sipCpp->localCertificate());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QSslCertificate,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslConfiguration, sipName_localCertificate, doc_QSslConfiguration_localCertificate);

    return NULL;
}


PyDoc_STRVAR(doc_QSslConfiguration_setLocalCertificate, "QSslConfiguration.setLocalCertificate(QSslCertificate)");

extern "C" {static PyObject *meth_QSslConfiguration_setLocalCertificate(PyObject *, PyObject *);}
static PyObject *meth_QSslConfiguration_setLocalCertificate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSslCertificate* a0;
        QSslConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QSslConfiguration, &sipCpp, sipType_QSslCertificate, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setLocalCertificate(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslConfiguration, sipName_setLocalCertificate, doc_QSslConfiguration_setLocalCertificate);

    return NULL;
}


PyDoc_STRVAR(doc_QSslConfiguration_peerCertificate, "QSslConfiguration.peerCertificate() -> QSslCertificate");

extern "C" {static PyObject *meth_QSslConfiguration_peerCertificate(PyObject *, PyObject *);}
static PyObject *meth_QSslConfiguration_peerCertificate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSslConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslConfiguration, &sipCpp))
        {
            QSslCertificate*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSslCertificate(sipCpp->peerCertificate());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QSslCertificate,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslConfiguration, sipName_peerCertificate, doc_QSslConfiguration_peerCertificate);

    return NULL;
}


PyDoc_STRVAR(doc_QSslConfiguration_peerCertificateChain, "QSslConfiguration.peerCertificateChain() -> list-of-QSslCertificate");

extern "C" {static PyObject *meth_QSslConfiguration_peerCertificateChain(PyObject *, PyObject *);}
static PyObject *meth_QSslConfiguration_peerCertificateChain(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSslConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslConfiguration, &sipCpp))
        {
            QList<QSslCertificate>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QSslCertificate>(sipCpp->peerCertificateChain());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QSslCertificate,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslConfiguration, sipName_peerCertificateChain, doc_QSslConfiguration_peerCertificateChain);

    return NULL;
}


PyDoc_STRVAR(doc_QSslConfiguration_sessionCipher, "QSslConfiguration.sessionCipher() -> QSslCipher");

extern "C" {static PyObject *meth_QSslConfiguration_sessionCipher(PyObject *, PyObject *);}
static PyObject *meth_QSslConfiguration_sessionCipher(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSslConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslConfiguration, &sipCpp))
        {
            QSslCipher*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSslCipher(sipCpp->sessionCipher());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QSslCipher,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslConfiguration, sipName_sessionCipher, doc_QSslConfiguration_sessionCipher);

    return NULL;
}


PyDoc_STRVAR(doc_QSslConfiguration_privateKey, "QSslConfiguration.privateKey() -> QSslKey");

extern "C" {static PyObject *meth_QSslConfiguration_privateKey(PyObject *, PyObject *);}
static PyObject *meth_QSslConfiguration_privateKey(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSslConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslConfiguration, &sipCpp))
        {
            QSslKey*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSslKey(sipCpp->privateKey());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QSslKey,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslConfiguration, sipName_privateKey, doc_QSslConfiguration_privateKey);

    return NULL;
}


PyDoc_STRVAR(doc_QSslConfiguration_setPrivateKey, "QSslConfiguration.setPrivateKey(QSslKey)");

extern "C" {static PyObject *meth_QSslConfiguration_setPrivateKey(PyObject *, PyObject *);}
static PyObject *meth_QSslConfiguration_setPrivateKey(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSslKey* a0;
        QSslConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QSslConfiguration, &sipCpp, sipType_QSslKey, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setPrivateKey(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslConfiguration, sipName_setPrivateKey, doc_QSslConfiguration_setPrivateKey);

    return NULL;
}


PyDoc_STRVAR(doc_QSslConfiguration_ciphers, "QSslConfiguration.ciphers() -> list-of-QSslCipher");

extern "C" {static PyObject *meth_QSslConfiguration_ciphers(PyObject *, PyObject *);}
static PyObject *meth_QSslConfiguration_ciphers(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSslConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslConfiguration, &sipCpp))
        {
            QList<QSslCipher>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QSslCipher>(sipCpp->ciphers());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QSslCipher,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslConfiguration, sipName_ciphers, doc_QSslConfiguration_ciphers);

    return NULL;
}


PyDoc_STRVAR(doc_QSslConfiguration_setCiphers, "QSslConfiguration.setCiphers(list-of-QSslCipher)");

extern "C" {static PyObject *meth_QSslConfiguration_setCiphers(PyObject *, PyObject *);}
static PyObject *meth_QSslConfiguration_setCiphers(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QList<QSslCipher>* a0;
        int a0State = 0;
        QSslConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSslConfiguration, &sipCpp, sipType_QList_0100QSslCipher,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setCiphers(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QList<QSslCipher> *>(a0),sipType_QList_0100QSslCipher,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslConfiguration, sipName_setCiphers, doc_QSslConfiguration_setCiphers);

    return NULL;
}


PyDoc_STRVAR(doc_QSslConfiguration_caCertificates, "QSslConfiguration.caCertificates() -> list-of-QSslCertificate");

extern "C" {static PyObject *meth_QSslConfiguration_caCertificates(PyObject *, PyObject *);}
static PyObject *meth_QSslConfiguration_caCertificates(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSslConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSslConfiguration, &sipCpp))
        {
            QList<QSslCertificate>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QSslCertificate>(sipCpp->caCertificates());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QSslCertificate,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslConfiguration, sipName_caCertificates, doc_QSslConfiguration_caCertificates);

    return NULL;
}


PyDoc_STRVAR(doc_QSslConfiguration_setCaCertificates, "QSslConfiguration.setCaCertificates(list-of-QSslCertificate)");

extern "C" {static PyObject *meth_QSslConfiguration_setCaCertificates(PyObject *, PyObject *);}
static PyObject *meth_QSslConfiguration_setCaCertificates(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QList<QSslCertificate>* a0;
        int a0State = 0;
        QSslConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSslConfiguration, &sipCpp, sipType_QList_0100QSslCertificate,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setCaCertificates(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QList<QSslCertificate> *>(a0),sipType_QList_0100QSslCertificate,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslConfiguration, sipName_setCaCertificates, doc_QSslConfiguration_setCaCertificates);

    return NULL;
}


PyDoc_STRVAR(doc_QSslConfiguration_defaultConfiguration, "QSslConfiguration.defaultConfiguration() -> QSslConfiguration");

extern "C" {static PyObject *meth_QSslConfiguration_defaultConfiguration(PyObject *, PyObject *);}
static PyObject *meth_QSslConfiguration_defaultConfiguration(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QSslConfiguration*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSslConfiguration(QSslConfiguration::defaultConfiguration());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QSslConfiguration,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslConfiguration, sipName_defaultConfiguration, doc_QSslConfiguration_defaultConfiguration);

    return NULL;
}


PyDoc_STRVAR(doc_QSslConfiguration_setDefaultConfiguration, "QSslConfiguration.setDefaultConfiguration(QSslConfiguration)");

extern "C" {static PyObject *meth_QSslConfiguration_setDefaultConfiguration(PyObject *, PyObject *);}
static PyObject *meth_QSslConfiguration_setDefaultConfiguration(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSslConfiguration* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9", sipType_QSslConfiguration, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            QSslConfiguration::setDefaultConfiguration(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslConfiguration, sipName_setDefaultConfiguration, doc_QSslConfiguration_setDefaultConfiguration);

    return NULL;
}


PyDoc_STRVAR(doc_QSslConfiguration_setSslOption, "QSslConfiguration.setSslOption(QSsl.SslOption, bool)");

extern "C" {static PyObject *meth_QSslConfiguration_setSslOption(PyObject *, PyObject *);}
static PyObject *meth_QSslConfiguration_setSslOption(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSsl::SslOption a0;
        bool a1;
        QSslConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BEb", &sipSelf, sipType_QSslConfiguration, &sipCpp, sipType_QSsl_SslOption, &a0, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setSslOption(a0,a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslConfiguration, sipName_setSslOption, doc_QSslConfiguration_setSslOption);

    return NULL;
}


PyDoc_STRVAR(doc_QSslConfiguration_testSslOption, "QSslConfiguration.testSslOption(QSsl.SslOption) -> bool");

extern "C" {static PyObject *meth_QSslConfiguration_testSslOption(PyObject *, PyObject *);}
static PyObject *meth_QSslConfiguration_testSslOption(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSsl::SslOption a0;
        const QSslConfiguration *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QSslConfiguration, &sipCpp, sipType_QSsl_SslOption, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->testSslOption(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSslConfiguration, sipName_testSslOption, doc_QSslConfiguration_testSslOption);

    return NULL;
}


extern "C" {static PyObject *slot_QSslConfiguration___ne__(PyObject *,PyObject *);}
static PyObject *slot_QSslConfiguration___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QSslConfiguration *sipCpp = reinterpret_cast<QSslConfiguration *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSslConfiguration));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSslConfiguration* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QSslConfiguration, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QSslConfiguration::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,ne_slot,sipType_QSslConfiguration,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QSslConfiguration___eq__(PyObject *,PyObject *);}
static PyObject *slot_QSslConfiguration___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QSslConfiguration *sipCpp = reinterpret_cast<QSslConfiguration *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSslConfiguration));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSslConfiguration* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QSslConfiguration, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QSslConfiguration::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,eq_slot,sipType_QSslConfiguration,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QSslConfiguration(void *, const sipTypeDef *);}
static void *cast_QSslConfiguration(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QSslConfiguration)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSslConfiguration(void *, int);}
static void release_QSslConfiguration(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QSslConfiguration *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QSslConfiguration(void *, SIP_SSIZE_T, const void *);}
static void assign_QSslConfiguration(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QSslConfiguration *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QSslConfiguration *>(sipSrc);
}


extern "C" {static void *array_QSslConfiguration(SIP_SSIZE_T);}
static void *array_QSslConfiguration(SIP_SSIZE_T sipNrElem)
{
    return new QSslConfiguration[sipNrElem];
}


extern "C" {static void *copy_QSslConfiguration(const void *, SIP_SSIZE_T);}
static void *copy_QSslConfiguration(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QSslConfiguration(reinterpret_cast<const QSslConfiguration *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSslConfiguration(sipSimpleWrapper *);}
static void dealloc_QSslConfiguration(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QSslConfiguration(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QSslConfiguration(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSslConfiguration(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QSslConfiguration *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QSslConfiguration();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QSslConfiguration* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QSslConfiguration, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QSslConfiguration(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QSslConfiguration[] = {
    {(void *)slot_QSslConfiguration___ne__, ne_slot},
    {(void *)slot_QSslConfiguration___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QSslConfiguration[] = {
    {SIP_MLNAME_CAST(sipName_caCertificates), meth_QSslConfiguration_caCertificates, METH_VARARGS, SIP_MLDOC_CAST(doc_QSslConfiguration_caCertificates)},
    {SIP_MLNAME_CAST(sipName_ciphers), meth_QSslConfiguration_ciphers, METH_VARARGS, SIP_MLDOC_CAST(doc_QSslConfiguration_ciphers)},
    {SIP_MLNAME_CAST(sipName_defaultConfiguration), meth_QSslConfiguration_defaultConfiguration, METH_VARARGS, SIP_MLDOC_CAST(doc_QSslConfiguration_defaultConfiguration)},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QSslConfiguration_isNull, METH_VARARGS, SIP_MLDOC_CAST(doc_QSslConfiguration_isNull)},
    {SIP_MLNAME_CAST(sipName_localCertificate), meth_QSslConfiguration_localCertificate, METH_VARARGS, SIP_MLDOC_CAST(doc_QSslConfiguration_localCertificate)},
    {SIP_MLNAME_CAST(sipName_peerCertificate), meth_QSslConfiguration_peerCertificate, METH_VARARGS, SIP_MLDOC_CAST(doc_QSslConfiguration_peerCertificate)},
    {SIP_MLNAME_CAST(sipName_peerCertificateChain), meth_QSslConfiguration_peerCertificateChain, METH_VARARGS, SIP_MLDOC_CAST(doc_QSslConfiguration_peerCertificateChain)},
    {SIP_MLNAME_CAST(sipName_peerVerifyDepth), meth_QSslConfiguration_peerVerifyDepth, METH_VARARGS, SIP_MLDOC_CAST(doc_QSslConfiguration_peerVerifyDepth)},
    {SIP_MLNAME_CAST(sipName_peerVerifyMode), meth_QSslConfiguration_peerVerifyMode, METH_VARARGS, SIP_MLDOC_CAST(doc_QSslConfiguration_peerVerifyMode)},
    {SIP_MLNAME_CAST(sipName_privateKey), meth_QSslConfiguration_privateKey, METH_VARARGS, SIP_MLDOC_CAST(doc_QSslConfiguration_privateKey)},
    {SIP_MLNAME_CAST(sipName_protocol), meth_QSslConfiguration_protocol, METH_VARARGS, SIP_MLDOC_CAST(doc_QSslConfiguration_protocol)},
    {SIP_MLNAME_CAST(sipName_sessionCipher), meth_QSslConfiguration_sessionCipher, METH_VARARGS, SIP_MLDOC_CAST(doc_QSslConfiguration_sessionCipher)},
    {SIP_MLNAME_CAST(sipName_setCaCertificates), meth_QSslConfiguration_setCaCertificates, METH_VARARGS, SIP_MLDOC_CAST(doc_QSslConfiguration_setCaCertificates)},
    {SIP_MLNAME_CAST(sipName_setCiphers), meth_QSslConfiguration_setCiphers, METH_VARARGS, SIP_MLDOC_CAST(doc_QSslConfiguration_setCiphers)},
    {SIP_MLNAME_CAST(sipName_setDefaultConfiguration), meth_QSslConfiguration_setDefaultConfiguration, METH_VARARGS, SIP_MLDOC_CAST(doc_QSslConfiguration_setDefaultConfiguration)},
    {SIP_MLNAME_CAST(sipName_setLocalCertificate), meth_QSslConfiguration_setLocalCertificate, METH_VARARGS, SIP_MLDOC_CAST(doc_QSslConfiguration_setLocalCertificate)},
    {SIP_MLNAME_CAST(sipName_setPeerVerifyDepth), meth_QSslConfiguration_setPeerVerifyDepth, METH_VARARGS, SIP_MLDOC_CAST(doc_QSslConfiguration_setPeerVerifyDepth)},
    {SIP_MLNAME_CAST(sipName_setPeerVerifyMode), meth_QSslConfiguration_setPeerVerifyMode, METH_VARARGS, SIP_MLDOC_CAST(doc_QSslConfiguration_setPeerVerifyMode)},
    {SIP_MLNAME_CAST(sipName_setPrivateKey), meth_QSslConfiguration_setPrivateKey, METH_VARARGS, SIP_MLDOC_CAST(doc_QSslConfiguration_setPrivateKey)},
    {SIP_MLNAME_CAST(sipName_setProtocol), meth_QSslConfiguration_setProtocol, METH_VARARGS, SIP_MLDOC_CAST(doc_QSslConfiguration_setProtocol)},
    {SIP_MLNAME_CAST(sipName_setSslOption), meth_QSslConfiguration_setSslOption, METH_VARARGS, SIP_MLDOC_CAST(doc_QSslConfiguration_setSslOption)},
    {SIP_MLNAME_CAST(sipName_testSslOption), meth_QSslConfiguration_testSslOption, METH_VARARGS, SIP_MLDOC_CAST(doc_QSslConfiguration_testSslOption)}
};

PyDoc_STRVAR(doc_QSslConfiguration, "\1QSslConfiguration()\n"
    "QSslConfiguration(QSslConfiguration)");


pyqt4ClassTypeDef sipTypeDef_QtNetwork_QSslConfiguration = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QSslConfiguration,
        {0}
    },
    {
        sipNameNr_QSslConfiguration,
        {0, 0, 1},
        22, methods_QSslConfiguration,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSslConfiguration,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QSslConfiguration,
    init_type_QSslConfiguration,
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
    dealloc_QSslConfiguration,
    assign_QSslConfiguration,
    array_QSslConfiguration,
    copy_QSslConfiguration,
    release_QSslConfiguration,
    cast_QSslConfiguration,
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