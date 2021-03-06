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

#line 29 "sip/qscilexeroctave.sip"
#include <Qsci/qscilexeroctave.h>
#line 34 "./sipQsciQsciLexerOctave.cpp"

#line 34 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtCore/qobject.sip"
#include <qobject.h>
#line 38 "./sipQsciQsciLexerOctave.cpp"
#line 36 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtCore/qstring.sip"
#include <qstring.h>
#line 41 "./sipQsciQsciLexerOctave.cpp"
#line 35 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtGui/qfont.sip"
#include <qfont.h>
#line 44 "./sipQsciQsciLexerOctave.cpp"
#line 35 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtGui/qcolor.sip"
#include <qcolor.h>
#line 47 "./sipQsciQsciLexerOctave.cpp"
#line 31 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtCore/qsettings.sip"
#include <qsettings.h>
#line 50 "./sipQsciQsciLexerOctave.cpp"
#line 29 "sip/qsciabstractapis.sip"
#include <Qsci/qsciabstractapis.h>
#line 53 "./sipQsciQsciLexerOctave.cpp"
#line 29 "sip/qsciscintilla.sip"
#include <Qsci/qsciscintilla.h>
#line 56 "./sipQsciQsciLexerOctave.cpp"
#line 31 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 59 "./sipQsciQsciLexerOctave.cpp"
#line 355 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 62 "./sipQsciQsciLexerOctave.cpp"
#line 338 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 65 "./sipQsciQsciLexerOctave.cpp"
#line 274 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtCore/qvariant.sip"
#include <qvariant.h>
#line 68 "./sipQsciQsciLexerOctave.cpp"
#line 33 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtCore/qlist.sip"
#include <qlist.h>
#line 71 "./sipQsciQsciLexerOctave.cpp"
#line 37 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 74 "./sipQsciQsciLexerOctave.cpp"
#line 35 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 77 "./sipQsciQsciLexerOctave.cpp"
#line 120 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtCore/qlist.sip"
#include <qlist.h>
#line 80 "./sipQsciQsciLexerOctave.cpp"
#line 31 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtCore/qthread.sip"
#include <qthread.h>
#line 83 "./sipQsciQsciLexerOctave.cpp"
#line 35 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtCore/qregexp.sip"
#include <qregexp.h>
#line 86 "./sipQsciQsciLexerOctave.cpp"
#line 31 "/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 89 "./sipQsciQsciLexerOctave.cpp"


class sipQsciLexerOctave : public QsciLexerOctave
{
public:
    sipQsciLexerOctave(QObject*);
    virtual ~sipQsciLexerOctave();

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
    sipQsciLexerOctave(const sipQsciLexerOctave &);
    sipQsciLexerOctave &operator = (const sipQsciLexerOctave &);

    char sipPyMethods[30];
};

sipQsciLexerOctave::sipQsciLexerOctave(QObject*a0): QsciLexerOctave(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQsciLexerOctave::~sipQsciLexerOctave()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQsciLexerOctave::metaObject() const
{
    return sip_Qsci_qt_metaobject(sipPySelf,sipType_QsciLexerOctave);
}

int sipQsciLexerOctave::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QsciLexerOctave::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_Qsci_qt_metacall(sipPySelf,sipType_QsciLexerOctave,_c,_id,_a);

    return _id;
}

void *sipQsciLexerOctave::qt_metacast(const char *_clname)
{
    return (sip_Qsci_qt_metacast(sipPySelf, sipType_QsciLexerOctave, _clname)) ? this : QsciLexerOctave::qt_metacast(_clname);
}

void sipQsciLexerOctave::disconnectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QsciLexerOctave::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    ((sipVH_QtCore_24)(sipModuleAPI_Qsci_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQsciLexerOctave::connectNotify(const char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QsciLexerOctave::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*);

    ((sipVH_QtCore_24)(sipModuleAPI_Qsci_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQsciLexerOctave::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QsciLexerOctave::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_17)(sipModuleAPI_Qsci_QtCore->em_virthandlers[17]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQsciLexerOctave::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QsciLexerOctave::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_Qsci_QtCore->em_virthandlers[25]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQsciLexerOctave::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QsciLexerOctave::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_Qsci_QtCore->em_virthandlers[9]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQsciLexerOctave::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QsciLexerOctave::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_18)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_18)(sipModuleAPI_Qsci_QtCore->em_virthandlers[18]))(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQsciLexerOctave::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QsciLexerOctave::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_Qsci_QtCore->em_virthandlers[5]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQsciLexerOctave::writeProperties(QSettings& a0,const QString& a1) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[7]),sipPySelf,NULL,sipName_writeProperties);

    if (!sipMeth)
        return QsciLexerOctave::writeProperties(a0,a1);

    extern bool sipVH_Qsci_7(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QSettings&,const QString&);

    return sipVH_Qsci_7(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQsciLexerOctave::readProperties(QSettings& a0,const QString& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipName_readProperties);

    if (!sipMeth)
        return QsciLexerOctave::readProperties(a0,a1);

    extern bool sipVH_Qsci_7(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QSettings&,const QString&);

    return sipVH_Qsci_7(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

void sipQsciLexerOctave::setPaper(const QColor& a0,int a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,NULL,sipName_setPaper);

    if (!sipMeth)
    {
        QsciLexerOctave::setPaper(a0,a1);
        return;
    }

    extern void sipVH_Qsci_8(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QColor&,int);

    sipVH_Qsci_8(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

void sipQsciLexerOctave::setFont(const QFont& a0,int a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[10],sipPySelf,NULL,sipName_setFont);

    if (!sipMeth)
    {
        QsciLexerOctave::setFont(a0,a1);
        return;
    }

    extern void sipVH_Qsci_9(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QFont&,int);

    sipVH_Qsci_9(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

void sipQsciLexerOctave::setEolFill(bool a0,int a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[11],sipPySelf,NULL,sipName_setEolFill);

    if (!sipMeth)
    {
        QsciLexerOctave::setEolFill(a0,a1);
        return;
    }

    extern void sipVH_Qsci_10(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, bool,int);

    sipVH_Qsci_10(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

void sipQsciLexerOctave::setColor(const QColor& a0,int a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[12],sipPySelf,NULL,sipName_setColor);

    if (!sipMeth)
    {
        QsciLexerOctave::setColor(a0,a1);
        return;
    }

    extern void sipVH_Qsci_8(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QColor&,int);

    sipVH_Qsci_8(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

void sipQsciLexerOctave::setAutoIndentStyle(int a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[13],sipPySelf,NULL,sipName_setAutoIndentStyle);

    if (!sipMeth)
    {
        QsciLexerOctave::setAutoIndentStyle(a0);
        return;
    }

    typedef void (*sipVH_QtCore_4)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    ((sipVH_QtCore_4)(sipModuleAPI_Qsci_QtCore->em_virthandlers[4]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

const char* sipQsciLexerOctave::wordCharacters() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[14]),sipPySelf,NULL,sipName_wordCharacters);

    if (!sipMeth)
        return QsciLexerOctave::wordCharacters();

    extern const char* sipVH_Qsci_11(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH_Qsci_11(sipGILState, 0, sipPySelf, sipMeth, -66);
}

int sipQsciLexerOctave::styleBitsNeeded() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[15]),sipPySelf,NULL,sipName_styleBitsNeeded);

    if (!sipMeth)
        return QsciLexerOctave::styleBitsNeeded();

    typedef int (*sipVH_QtCore_6)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_6)(sipModuleAPI_Qsci_QtCore->em_virthandlers[6]))(sipGILState, 0, sipPySelf, sipMeth);
}

void sipQsciLexerOctave::refreshProperties()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[16],sipPySelf,NULL,sipName_refreshProperties);

    if (!sipMeth)
    {
        QsciLexerOctave::refreshProperties();
        return;
    }

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_Qsci_QtCore->em_virthandlers[11]))(sipGILState, 0, sipPySelf, sipMeth);
}

QColor sipQsciLexerOctave::defaultPaper(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[17]),sipPySelf,NULL,sipName_defaultPaper);

    if (!sipMeth)
        return QsciLexerOctave::defaultPaper(a0);

    extern QColor sipVH_Qsci_12(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH_Qsci_12(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QFont sipQsciLexerOctave::defaultFont(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[18]),sipPySelf,NULL,sipName_defaultFont);

    if (!sipMeth)
        return QsciLexerOctave::defaultFont(a0);

    extern QFont sipVH_Qsci_13(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH_Qsci_13(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQsciLexerOctave::defaultEolFill(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[19]),sipPySelf,NULL,sipName_defaultEolFill);

    if (!sipMeth)
        return QsciLexerOctave::defaultEolFill(a0);

    typedef bool (*sipVH_QtCore_23)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtCore_23)(sipModuleAPI_Qsci_QtCore->em_virthandlers[23]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QColor sipQsciLexerOctave::defaultColor(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[20]),sipPySelf,NULL,sipName_defaultColor);

    if (!sipMeth)
        return QsciLexerOctave::defaultColor(a0);

    extern QColor sipVH_Qsci_12(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH_Qsci_12(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QColor sipQsciLexerOctave::paper(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[21]),sipPySelf,NULL,sipName_paper);

    if (!sipMeth)
        return QsciLexerOctave::paper(a0);

    extern QColor sipVH_Qsci_12(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH_Qsci_12(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QString sipQsciLexerOctave::description(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[22]),sipPySelf,NULL,sipName_description);

    if (!sipMeth)
        return QsciLexerOctave::description(a0);

    typedef QString (*sipVH_QtGui_111)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtGui_111)(sipModuleAPI_Qsci_QtGui->em_virthandlers[111]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

const char* sipQsciLexerOctave::keywords(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[23]),sipPySelf,NULL,sipName_keywords);

    if (!sipMeth)
        return QsciLexerOctave::keywords(a0);

    typedef const char* (*sipVH_QtGui_150)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int, int);

    return ((sipVH_QtGui_150)(sipModuleAPI_Qsci_QtGui->em_virthandlers[150]))(sipGILState, 0, sipPySelf, sipMeth, a0, -67);
}

QFont sipQsciLexerOctave::font(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[24]),sipPySelf,NULL,sipName_font);

    if (!sipMeth)
        return QsciLexerOctave::font(a0);

    extern QFont sipVH_Qsci_13(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH_Qsci_13(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQsciLexerOctave::eolFill(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[25]),sipPySelf,NULL,sipName_eolFill);

    if (!sipMeth)
        return QsciLexerOctave::eolFill(a0);

    typedef bool (*sipVH_QtCore_23)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return ((sipVH_QtCore_23)(sipModuleAPI_Qsci_QtCore->em_virthandlers[23]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QColor sipQsciLexerOctave::color(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[26]),sipPySelf,NULL,sipName_color);

    if (!sipMeth)
        return QsciLexerOctave::color(a0);

    extern QColor sipVH_Qsci_12(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH_Qsci_12(sipGILState, 0, sipPySelf, sipMeth, a0);
}

int sipQsciLexerOctave::lexerId() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[27]),sipPySelf,NULL,sipName_lexerId);

    if (!sipMeth)
        return QsciLexerOctave::lexerId();

    typedef int (*sipVH_QtCore_6)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_6)(sipModuleAPI_Qsci_QtCore->em_virthandlers[6]))(sipGILState, 0, sipPySelf, sipMeth);
}

const char* sipQsciLexerOctave::lexer() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[28]),sipPySelf,NULL,sipName_lexer);

    if (!sipMeth)
        return QsciLexerOctave::lexer();

    extern const char* sipVH_Qsci_11(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH_Qsci_11(sipGILState, 0, sipPySelf, sipMeth, -68);
}

const char* sipQsciLexerOctave::language() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[29]),sipPySelf,NULL,sipName_language);

    if (!sipMeth)
        return QsciLexerOctave::language();

    extern const char* sipVH_Qsci_11(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH_Qsci_11(sipGILState, 0, sipPySelf, sipMeth, -69);
}


PyDoc_STRVAR(doc_QsciLexerOctave_language, "QsciLexerOctave.language() -> str");

extern "C" {static PyObject *meth_QsciLexerOctave_language(PyObject *, PyObject *);}
static PyObject *meth_QsciLexerOctave_language(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QsciLexerOctave *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QsciLexerOctave, &sipCpp))
        {
            const char*sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QsciLexerOctave::language() : sipCpp->language());

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return SIPBytes_FromString(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QsciLexerOctave, sipName_language, doc_QsciLexerOctave_language);

    return NULL;
}


PyDoc_STRVAR(doc_QsciLexerOctave_lexer, "QsciLexerOctave.lexer() -> str");

extern "C" {static PyObject *meth_QsciLexerOctave_lexer(PyObject *, PyObject *);}
static PyObject *meth_QsciLexerOctave_lexer(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QsciLexerOctave *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QsciLexerOctave, &sipCpp))
        {
            const char*sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QsciLexerOctave::lexer() : sipCpp->lexer());

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return SIPBytes_FromString(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QsciLexerOctave, sipName_lexer, doc_QsciLexerOctave_lexer);

    return NULL;
}


PyDoc_STRVAR(doc_QsciLexerOctave_keywords, "QsciLexerOctave.keywords(int) -> str");

extern "C" {static PyObject *meth_QsciLexerOctave_keywords(PyObject *, PyObject *);}
static PyObject *meth_QsciLexerOctave_keywords(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        int a0;
        const QsciLexerOctave *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QsciLexerOctave, &sipCpp, &a0))
        {
            const char*sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QsciLexerOctave::keywords(a0) : sipCpp->keywords(a0));

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

            return SIPBytes_FromString(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QsciLexerOctave, sipName_keywords, doc_QsciLexerOctave_keywords);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QsciLexerOctave(void *, const sipTypeDef *);}
static void *cast_QsciLexerOctave(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QsciLexerOctave)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QsciLexerMatlab)->ctd_cast((QsciLexerMatlab *)(QsciLexerOctave *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QsciLexerOctave(void *, int);}
static void release_QsciLexerOctave(void *sipCppV,int)
{
    QsciLexerOctave *sipCpp = reinterpret_cast<QsciLexerOctave *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QsciLexerOctave(sipSimpleWrapper *);}
static void dealloc_QsciLexerOctave(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQsciLexerOctave *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QsciLexerOctave(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QsciLexerOctave(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QsciLexerOctave(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQsciLexerOctave *sipCpp = 0;

    {
        QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            sipCpp = new sipQsciLexerOctave(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QsciLexerOctave[] = {{28, 255, 1}};


static PyMethodDef methods_QsciLexerOctave[] = {
    {SIP_MLNAME_CAST(sipName_keywords), meth_QsciLexerOctave_keywords, METH_VARARGS, SIP_MLDOC_CAST(doc_QsciLexerOctave_keywords)},
    {SIP_MLNAME_CAST(sipName_language), meth_QsciLexerOctave_language, METH_VARARGS, SIP_MLDOC_CAST(doc_QsciLexerOctave_language)},
    {SIP_MLNAME_CAST(sipName_lexer), meth_QsciLexerOctave_lexer, METH_VARARGS, SIP_MLDOC_CAST(doc_QsciLexerOctave_lexer)}
};

PyDoc_STRVAR(doc_QsciLexerOctave, "\1QsciLexerOctave(QObject parent=None)");


pyqt4ClassTypeDef sipTypeDef_Qsci_QsciLexerOctave = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QsciLexerOctave,
        {0}
    },
    {
        sipNameNr_QsciLexerOctave,
        {0, 0, 1},
        3, methods_QsciLexerOctave,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QsciLexerOctave,
    -1,
    -1,
    supers_QsciLexerOctave,
    0,
    init_type_QsciLexerOctave,
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
    dealloc_QsciLexerOctave,
    0,
    0,
    0,
    release_QsciLexerOctave,
    cast_QsciLexerOctave,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QsciLexerOctave::staticMetaObject,
    0,
    0
};
