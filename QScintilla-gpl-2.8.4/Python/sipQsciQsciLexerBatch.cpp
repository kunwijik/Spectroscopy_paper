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

#line 29 "sip/qscilexerbatch.sip"
#include <Qsci/qscilexerbatch.h>
#line 34 "./sipQsciQsciLexerBatch.cpp"

#line 34 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtCore/qobject.sip"
#include <qobject.h>
#line 38 "./sipQsciQsciLexerBatch.cpp"
#line 36 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtCore/qstring.sip"
#include <qstring.h>
#line 41 "./sipQsciQsciLexerBatch.cpp"
#line 35 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtGui/qcolor.sip"
#include <qcolor.h>
#line 44 "./sipQsciQsciLexerBatch.cpp"
#line 35 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtGui/qfont.sip"
#include <qfont.h>
#line 47 "./sipQsciQsciLexerBatch.cpp"
#line 31 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtCore/qsettings.sip"
#include <qsettings.h>
#line 50 "./sipQsciQsciLexerBatch.cpp"
#line 29 "sip/qsciabstractapis.sip"
#include <Qsci/qsciabstractapis.h>
#line 53 "./sipQsciQsciLexerBatch.cpp"
#line 29 "sip/qsciscintilla.sip"
#include <Qsci/qsciscintilla.h>
#line 56 "./sipQsciQsciLexerBatch.cpp"
#line 31 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 59 "./sipQsciQsciLexerBatch.cpp"
#line 355 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 62 "./sipQsciQsciLexerBatch.cpp"
#line 338 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 65 "./sipQsciQsciLexerBatch.cpp"
#line 274 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtCore/qvariant.sip"
#include <qvariant.h>
#line 68 "./sipQsciQsciLexerBatch.cpp"
#line 33 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtCore/qlist.sip"
#include <qlist.h>
#line 71 "./sipQsciQsciLexerBatch.cpp"
#line 37 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 74 "./sipQsciQsciLexerBatch.cpp"
#line 35 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 77 "./sipQsciQsciLexerBatch.cpp"
#line 120 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtCore/qlist.sip"
#include <qlist.h>
#line 80 "./sipQsciQsciLexerBatch.cpp"
#line 31 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtCore/qthread.sip"
#include <qthread.h>
#line 83 "./sipQsciQsciLexerBatch.cpp"
#line 35 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtCore/qregexp.sip"
#include <qregexp.h>
#line 86 "./sipQsciQsciLexerBatch.cpp"
#line 31 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 89 "./sipQsciQsciLexerBatch.cpp"


class sipQsciLexerBatch : public QsciLexerBatch
{
public:
    sipQsciLexerBatch(QObject*);
    virtual ~sipQsciLexerBatch();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void disconnectNotify(const char*);
    void connectNotify(const char*);
    void customEvent(QEvent*);
    void childEvent(QChildEvent*);
    void timerEvent(QTimerEvent*);
    bool eventFilter(QObject*,QEvent*);
    bool event(QEvent*);
    bool writeProperties(QSettings&,const QString&) const;
    bool readProperties(QSettings&,const QString&);
    void setPaper(const QColor&,int);
    void setFont(const QFont&,int);
    void setEolFill(bool,int);
    void setColor(const QColor&,int);
    void setAutoIndentStyle(int);
    const char* wordCharacters() const;
    int styleBitsNeeded() const;
    void refreshProperties();
    QColor defaultPaper(int) const;
    QFont defaultFont(int) const;
    bool defaultEolFill(int) const;
    QColor defaultColor(int) const;
    QColor paper(int) const;
    QString description(int) const;
    const char* keywords(int) const;
    QFont font(int) const;
    bool eolFill(int) const;
    QColor color(int) const;
    int lexerId() const;
    const char* lexer() const;
    const char* language() const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQsciLexerBatch(const sipQsciLexerBatch &);
    sipQsciLexerBatch &operator = (const sipQsciLexerBatch &);

    char sipPyMethods[30];
};

sipQsciLexerBatch::sipQsciLexerBatch(QObject*a0): QsciLexerBatch(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQsciLexerBatch::~sipQsciLexerBatch()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQsciLexerBatch::metaObject() const
{
    return sip_Qsci_qt_metaobject(sipPySelf,sipType_QsciLexerBatch);
}

int sipQsciLexerBatch::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QsciLexerBatch::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_Qsci_qt_metacall(sipPySelf,sipType_QsciLexerBatch,_c,_id,_a);

    return _id;
}

void *sipQsciLexerBatch::qt_metacast(const char *_clname)
{
    return (sip_Qsci_qt_metacast(sipPySelf, sipType_QsciLexerBatch, _clname)) ? this : QsciLexerBatch::qt_metacast(_clname);
}

void sipQsciLexerBatch::disconnectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QsciLexerBatch::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    ((sipVH_QtCore_24)(sipModuleAPI_Qsci_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQsciLexerBatch::connectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QsciLexerBatch::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    ((sipVH_QtCore_24)(sipModuleAPI_Qsci_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQsciLexerBatch::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QsciLexerBatch::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_17)(sipModuleAPI_Qsci_QtCore->em_virthandlers[17]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQsciLexerBatch::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QsciLexerBatch::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_Qsci_QtCore->em_virthandlers[25]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQsciLexerBatch::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QsciLexerBatch::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_Qsci_QtCore->em_virthandlers[9]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQsciLexerBatch::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QsciLexerBatch::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_18)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_18)(sipModuleAPI_Qsci_QtCore->em_virthandlers[18]))(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQsciLexerBatch::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QsciLexerBatch::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_Qsci_QtCore->em_virthandlers[5]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQsciLexerBatch::writeProperties(QSettings& a0,const QString& a1) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[7]),sipPySelf,NULL,sipName_writeProperties);

    if (!sipMeth)
        return QsciLexerBatch::writeProperties(a0,a1);

    extern bool sipVH_Qsci_7(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QSettings&,const QString&);

    return sipVH_Qsci_7(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQsciLexerBatch::readProperties(QSettings& a0,const QString& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipName_readProperties);

    if (!sipMeth)
        return QsciLexerBatch::readProperties(a0,a1);

    extern bool sipVH_Qsci_7(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QSettings&,const QString&);

    return sipVH_Qsci_7(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

void sipQsciLexerBatch::setPaper(const QColor& a0,int a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,NULL,sipName_setPaper);

    if (!sipMeth)
    {
        QsciLexerBatch::setPaper(a0,a1);
        return;
    }

    extern void sipVH_Qsci_8(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QColor&,int);

    sipVH_Qsci_8(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

void sipQsciLexerBatch::setFont(const QFont& a0,int a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[10],sipPySelf,NULL,sipName_setFont);

    if (!sipMeth)
    {
        QsciLexerBatch::setFont(a0,a1);
        return;
    }

    extern void sipVH_Qsci_9(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QFont&,int);

    sipVH_Qsci_9(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

void sipQsciLexerBatch::setEolFill(bool a0,int a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[11],sipPySelf,NULL,sipName_setEolFill);

    if (!sipMeth)
    {
        QsciLexerBatch::setEolFill(a0,a1);
        return;
    }

    extern void sipVH_Qsci_10(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, bool,int);

    sipVH_Qsci_10(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

void sipQsciLexerBatch::setColor(const QColor& a0,int a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[12],sipPySelf,NULL,sipName_setColor);

    if (!sipMeth)
    {
        QsciLexerBatch::setColor(a0,a1);
        return;
    }

    extern void sipVH_Qsci_8(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QColor&,int);

    sipVH_Qsci_8(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

void sipQsciLexerBatch::setAutoIndentStyle(int a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[13],sipPySelf,NULL,sipName_setAutoIndentStyle);

    if (!sipMeth)
    {
        QsciLexerBatch::setAutoIndentStyle(a0);
        return;
    }

    typedef void (*sipVH_QtCore_4)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    ((sipVH_QtCore_4)(sipModuleAPI_Qsci_QtCore->em_virthandlers[4]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

const char* sipQsciLexerBatch::wordCharacters() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[14]),sipPySelf,NULL,sipName_wordCharacters);

    if (!sipMeth)
        return QsciLexerBatch::wordCharacters();

    extern const char* sipVH_Qsci_11(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH_Qsci_11(sipGILState, 0, sipPySelf, sipMeth, -138);
}

int sipQsciLexerBatch::styleBitsNeeded() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[15]),sipPySelf,NULL,sipName_styleBitsNeeded);

    if (!sipMeth)
        return QsciLexerBatch::styleBitsNeeded();

    typedef int (*sipVH_QtCore_6)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_6)(sipModuleAPI_Qsci_QtCore->em_virthandlers[6]))(sipGILState, 0, sipPySelf, sipMeth);
}

void sipQsciLexerBatch::refreshProperties()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[16],sipPySelf,NULL,sipName_refreshProperties);

    if (!sipMeth)
    {
        QsciLexerBatch::refreshProperties();
        return;
    }

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_Qsci_QtCore->em_virthandlers[11]))(sipGILState, 0, sipPySelf, sipMeth);
}

QColor sipQsciLexerBatch::defaultPaper(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[17]),sipPySelf,NULL,sipName_defaultPaper);

    if (!sipMeth)
        return QsciLexerBatch::defaultPaper(a0);

    extern QColor sipVH_Qsci_12(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH_Qsci_12(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QFont sipQsciLexerBatch::defaultFont(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[18]),sipPySelf,NULL,sipName_defaultFont);

    if (!sipMeth)
        return QsciLexerBatch::defaultFont(a0);

    extern QFont sipVH_Qsci_13(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH_Qsci_13(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQsciLexerBatch::defaultEolFill(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[19]),sipPySelf,NULL,sipName_defaultEolFill);

    if (!sipMeth)
        return QsciLexerBatch::defaultEolFill(a0);

    typedef bool (*sipVH_QtCore_23)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtCore_23)(sipModuleAPI_Qsci_QtCore->em_virthandlers[23]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QColor sipQsciLexerBatch::defaultColor(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[20]),sipPySelf,NULL,sipName_defaultColor);

    if (!sipMeth)
        return QsciLexerBatch::defaultColor(a0);

    extern QColor sipVH_Qsci_12(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH_Qsci_12(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QColor sipQsciLexerBatch::paper(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[21]),sipPySelf,NULL,sipName_paper);

    if (!sipMeth)
        return QsciLexerBatch::paper(a0);

    extern QColor sipVH_Qsci_12(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH_Qsci_12(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QString sipQsciLexerBatch::description(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[22]),sipPySelf,NULL,sipName_description);

    if (!sipMeth)
        return QsciLexerBatch::description(a0);

    typedef QString (*sipVH_QtGui_111)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtGui_111)(sipModuleAPI_Qsci_QtGui->em_virthandlers[111]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

const char* sipQsciLexerBatch::keywords(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[23]),sipPySelf,NULL,sipName_keywords);

    if (!sipMeth)
        return QsciLexerBatch::keywords(a0);

    typedef const char* (*sipVH_QtGui_150)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int, int);

    return ((sipVH_QtGui_150)(sipModuleAPI_Qsci_QtGui->em_virthandlers[150]))(sipGILState, 0, sipPySelf, sipMeth, a0, -139);
}

QFont sipQsciLexerBatch::font(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[24]),sipPySelf,NULL,sipName_font);

    if (!sipMeth)
        return QsciLexerBatch::font(a0);

    extern QFont sipVH_Qsci_13(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH_Qsci_13(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQsciLexerBatch::eolFill(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[25]),sipPySelf,NULL,sipName_eolFill);

    if (!sipMeth)
        return QsciLexerBatch::eolFill(a0);

    typedef bool (*sipVH_QtCore_23)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtCore_23)(sipModuleAPI_Qsci_QtCore->em_virthandlers[23]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QColor sipQsciLexerBatch::color(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[26]),sipPySelf,NULL,sipName_color);

    if (!sipMeth)
        return QsciLexerBatch::color(a0);

    extern QColor sipVH_Qsci_12(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH_Qsci_12(sipGILState, 0, sipPySelf, sipMeth, a0);
}

int sipQsciLexerBatch::lexerId() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[27]),sipPySelf,NULL,sipName_lexerId);

    if (!sipMeth)
        return QsciLexerBatch::lexerId();

    typedef int (*sipVH_QtCore_6)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_6)(sipModuleAPI_Qsci_QtCore->em_virthandlers[6]))(sipGILState, 0, sipPySelf, sipMeth);
}

const char* sipQsciLexerBatch::lexer() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[28]),sipPySelf,NULL,sipName_lexer);

    if (!sipMeth)
        return QsciLexerBatch::lexer();

    extern const char* sipVH_Qsci_11(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH_Qsci_11(sipGILState, 0, sipPySelf, sipMeth, -140);
}

const char* sipQsciLexerBatch::language() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[29]),sipPySelf,NULL,sipName_language);

    if (!sipMeth)
        return QsciLexerBatch::language();

    extern const char* sipVH_Qsci_11(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH_Qsci_11(sipGILState, 0, sipPySelf, sipMeth, -141);
}


PyDoc_STRVAR(doc_QsciLexerBatch_language, "QsciLexerBatch.language() -> str");

extern "C" {static PyObject *meth_QsciLexerBatch_language(PyObject *, PyObject *);}
static PyObject *meth_QsciLexerBatch_language(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QsciLexerBatch *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QsciLexerBatch, &sipCpp))
        {
            const char*sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QsciLexerBatch::language() : sipCpp->language());

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return SIPBytes_FromString(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QsciLexerBatch, sipName_language, doc_QsciLexerBatch_language);

    return NULL;
}


PyDoc_STRVAR(doc_QsciLexerBatch_lexer, "QsciLexerBatch.lexer() -> str");

extern "C" {static PyObject *meth_QsciLexerBatch_lexer(PyObject *, PyObject *);}
static PyObject *meth_QsciLexerBatch_lexer(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QsciLexerBatch *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QsciLexerBatch, &sipCpp))
        {
            const char*sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QsciLexerBatch::lexer() : sipCpp->lexer());

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return SIPBytes_FromString(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QsciLexerBatch, sipName_lexer, doc_QsciLexerBatch_lexer);

    return NULL;
}


PyDoc_STRVAR(doc_QsciLexerBatch_defaultColor, "QsciLexerBatch.defaultColor(int) -> QColor");

extern "C" {static PyObject *meth_QsciLexerBatch_defaultColor(PyObject *, PyObject *);}
static PyObject *meth_QsciLexerBatch_defaultColor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        int a0;
        const QsciLexerBatch *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QsciLexerBatch, &sipCpp, &a0))
        {
            QColor*sipRes;

            sipRes = new QColor((sipSelfWasArg ? sipCpp->QsciLexerBatch::defaultColor(a0) : sipCpp->defaultColor(a0)));

            return sipConvertFromNewType(sipRes,sipType_QColor,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QsciLexerBatch, sipName_defaultColor, doc_QsciLexerBatch_defaultColor);

    return NULL;
}


PyDoc_STRVAR(doc_QsciLexerBatch_defaultEolFill, "QsciLexerBatch.defaultEolFill(int) -> bool");

extern "C" {static PyObject *meth_QsciLexerBatch_defaultEolFill(PyObject *, PyObject *);}
static PyObject *meth_QsciLexerBatch_defaultEolFill(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        int a0;
        const QsciLexerBatch *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QsciLexerBatch, &sipCpp, &a0))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QsciLexerBatch::defaultEolFill(a0) : sipCpp->defaultEolFill(a0));

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QsciLexerBatch, sipName_defaultEolFill, doc_QsciLexerBatch_defaultEolFill);

    return NULL;
}


PyDoc_STRVAR(doc_QsciLexerBatch_defaultFont, "QsciLexerBatch.defaultFont(int) -> QFont");

extern "C" {static PyObject *meth_QsciLexerBatch_defaultFont(PyObject *, PyObject *);}
static PyObject *meth_QsciLexerBatch_defaultFont(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        int a0;
        const QsciLexerBatch *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QsciLexerBatch, &sipCpp, &a0))
        {
            QFont*sipRes;

            sipRes = new QFont((sipSelfWasArg ? sipCpp->QsciLexerBatch::defaultFont(a0) : sipCpp->defaultFont(a0)));

            return sipConvertFromNewType(sipRes,sipType_QFont,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QsciLexerBatch, sipName_defaultFont, doc_QsciLexerBatch_defaultFont);

    return NULL;
}


PyDoc_STRVAR(doc_QsciLexerBatch_defaultPaper, "QsciLexerBatch.defaultPaper(int) -> QColor");

extern "C" {static PyObject *meth_QsciLexerBatch_defaultPaper(PyObject *, PyObject *);}
static PyObject *meth_QsciLexerBatch_defaultPaper(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        int a0;
        const QsciLexerBatch *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QsciLexerBatch, &sipCpp, &a0))
        {
            QColor*sipRes;

            sipRes = new QColor((sipSelfWasArg ? sipCpp->QsciLexerBatch::defaultPaper(a0) : sipCpp->defaultPaper(a0)));

            return sipConvertFromNewType(sipRes,sipType_QColor,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QsciLexerBatch, sipName_defaultPaper, doc_QsciLexerBatch_defaultPaper);

    return NULL;
}


PyDoc_STRVAR(doc_QsciLexerBatch_keywords, "QsciLexerBatch.keywords(int) -> str");

extern "C" {static PyObject *meth_QsciLexerBatch_keywords(PyObject *, PyObject *);}
static PyObject *meth_QsciLexerBatch_keywords(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        int a0;
        const QsciLexerBatch *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QsciLexerBatch, &sipCpp, &a0))
        {
            const char*sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QsciLexerBatch::keywords(a0) : sipCpp->keywords(a0));

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return SIPBytes_FromString(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QsciLexerBatch, sipName_keywords, doc_QsciLexerBatch_keywords);

    return NULL;
}


PyDoc_STRVAR(doc_QsciLexerBatch_description, "QsciLexerBatch.description(int) -> QString");

extern "C" {static PyObject *meth_QsciLexerBatch_description(PyObject *, PyObject *);}
static PyObject *meth_QsciLexerBatch_description(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        int a0;
        const QsciLexerBatch *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QsciLexerBatch, &sipCpp, &a0))
        {
            QString*sipRes;

            sipRes = new QString((sipSelfWasArg ? sipCpp->QsciLexerBatch::description(a0) : sipCpp->description(a0)));

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QsciLexerBatch, sipName_description, doc_QsciLexerBatch_description);

    return NULL;
}


PyDoc_STRVAR(doc_QsciLexerBatch_wordCharacters, "QsciLexerBatch.wordCharacters() -> str");

extern "C" {static PyObject *meth_QsciLexerBatch_wordCharacters(PyObject *, PyObject *);}
static PyObject *meth_QsciLexerBatch_wordCharacters(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QsciLexerBatch *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QsciLexerBatch, &sipCpp))
        {
            const char*sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QsciLexerBatch::wordCharacters() : sipCpp->wordCharacters());

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return SIPBytes_FromString(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QsciLexerBatch, sipName_wordCharacters, doc_QsciLexerBatch_wordCharacters);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QsciLexerBatch(void *, const sipTypeDef *);}
static void *cast_QsciLexerBatch(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QsciLexerBatch)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QsciLexer)->ctd_cast((QsciLexer *)(QsciLexerBatch *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QsciLexerBatch(void *, int);}
static void release_QsciLexerBatch(void *sipCppV,int)
{
    QsciLexerBatch *sipCpp = reinterpret_cast<QsciLexerBatch *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QsciLexerBatch(sipSimpleWrapper *);}
static void dealloc_QsciLexerBatch(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQsciLexerBatch *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QsciLexerBatch(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QsciLexerBatch(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QsciLexerBatch(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQsciLexerBatch *sipCpp = 0;

    {
        QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            sipCpp = new sipQsciLexerBatch(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QsciLexerBatch[] = {{8, 255, 1}};


static PyMethodDef methods_QsciLexerBatch[] = {
    {SIP_MLNAME_CAST(sipName_defaultColor), meth_QsciLexerBatch_defaultColor, METH_VARARGS, SIP_MLDOC_CAST(doc_QsciLexerBatch_defaultColor)},
    {SIP_MLNAME_CAST(sipName_defaultEolFill), meth_QsciLexerBatch_defaultEolFill, METH_VARARGS, SIP_MLDOC_CAST(doc_QsciLexerBatch_defaultEolFill)},
    {SIP_MLNAME_CAST(sipName_defaultFont), meth_QsciLexerBatch_defaultFont, METH_VARARGS, SIP_MLDOC_CAST(doc_QsciLexerBatch_defaultFont)},
    {SIP_MLNAME_CAST(sipName_defaultPaper), meth_QsciLexerBatch_defaultPaper, METH_VARARGS, SIP_MLDOC_CAST(doc_QsciLexerBatch_defaultPaper)},
    {SIP_MLNAME_CAST(sipName_description), meth_QsciLexerBatch_description, METH_VARARGS, SIP_MLDOC_CAST(doc_QsciLexerBatch_description)},
    {SIP_MLNAME_CAST(sipName_keywords), meth_QsciLexerBatch_keywords, METH_VARARGS, SIP_MLDOC_CAST(doc_QsciLexerBatch_keywords)},
    {SIP_MLNAME_CAST(sipName_language), meth_QsciLexerBatch_language, METH_VARARGS, SIP_MLDOC_CAST(doc_QsciLexerBatch_language)},
    {SIP_MLNAME_CAST(sipName_lexer), meth_QsciLexerBatch_lexer, METH_VARARGS, SIP_MLDOC_CAST(doc_QsciLexerBatch_lexer)},
    {SIP_MLNAME_CAST(sipName_wordCharacters), meth_QsciLexerBatch_wordCharacters, METH_VARARGS, SIP_MLDOC_CAST(doc_QsciLexerBatch_wordCharacters)}
};

static sipEnumMemberDef enummembers_QsciLexerBatch[] = {
    {sipName_Comment, static_cast<int>(QsciLexerBatch::Comment), -1},
    {sipName_Default, static_cast<int>(QsciLexerBatch::Default), -1},
    {sipName_ExternalCommand, static_cast<int>(QsciLexerBatch::ExternalCommand), -1},
    {sipName_HideCommandChar, static_cast<int>(QsciLexerBatch::HideCommandChar), -1},
    {sipName_Keyword, static_cast<int>(QsciLexerBatch::Keyword), -1},
    {sipName_Label, static_cast<int>(QsciLexerBatch::Label), -1},
    {sipName_Operator, static_cast<int>(QsciLexerBatch::Operator), -1},
    {sipName_Variable, static_cast<int>(QsciLexerBatch::Variable), -1},
};

PyDoc_STRVAR(doc_QsciLexerBatch, "\1QsciLexerBatch(QObject parent=None)");


pyqt4ClassTypeDef sipTypeDef_Qsci_QsciLexerBatch = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QsciLexerBatch,
        {0}
    },
    {
        sipNameNr_QsciLexerBatch,
        {0, 0, 1},
        9, methods_QsciLexerBatch,
        8, enummembers_QsciLexerBatch,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QsciLexerBatch,
    -1,
    -1,
    supers_QsciLexerBatch,
    0,
    init_type_QsciLexerBatch,
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
    dealloc_QsciLexerBatch,
    0,
    0,
    0,
    release_QsciLexerBatch,
    cast_QsciLexerBatch,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QsciLexerBatch::staticMetaObject,
    0,
    0
};