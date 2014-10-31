TEMPLATE = lib
CONFIG += release
CONFIG += plugin
CONFIG += qscintilla2
CONFIG -= android_install

win32 {
    PY_MODULE = Qsci.pyd
    target.files = Qsci.pyd
    LIBS += -L/opt/local/Library/Frameworks/Python.framework/Versions/2.7/lib
} else {
    PY_MODULE = Qsci.so
    target.files = Qsci.so
}

target.CONFIG = no_check_exist

target.path = /opt/local/Library/Frameworks/Python.framework/Versions/2.7/lib/python2.7/site-packages/PyQt4
INSTALLS += target

api.path = /opt/local/share/qt4/qsci/api/python
api.files = QScintilla2.api
INSTALLS += api

sip.path = /opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/Qsci
sip.files = \
    sip/qsciabstractapis.sip \
    sip/qsciapis.sip \
    sip/qscicommand.sip \
    sip/qscicommandset.sip \
    sip/qscidocument.sip \
    sip/qscilexer.sip \
    sip/qscilexeravs.sip \
    sip/qscilexerbash.sip \
    sip/qscilexerbatch.sip \
    sip/qscilexercmake.sip \
    sip/qscilexercoffeescript.sip \
    sip/qscilexercpp.sip \
    sip/qscilexercsharp.sip \
    sip/qscilexercss.sip \
    sip/qscilexercustom.sip \
    sip/qscilexerd.sip \
    sip/qscilexerdiff.sip \
    sip/qscilexerfortran.sip \
    sip/qscilexerfortran77.sip \
    sip/qscilexerhtml.sip \
    sip/qscilexeridl.sip \
    sip/qscilexerjava.sip \
    sip/qscilexerjavascript.sip \
    sip/qscilexerlua.sip \
    sip/qscilexermakefile.sip \
    sip/qscilexermatlab.sip \
    sip/qscilexeroctave.sip \
    sip/qscilexerpascal.sip \
    sip/qscilexerperl.sip \
    sip/qscilexerpo.sip \
    sip/qscilexerpostscript.sip \
    sip/qscilexerpov.sip \
    sip/qscilexerproperties.sip \
    sip/qscilexerpython.sip \
    sip/qscilexerruby.sip \
    sip/qscilexerspice.sip \
    sip/qscilexersql.sip \
    sip/qscilexertcl.sip \
    sip/qscilexertex.sip \
    sip/qscilexerverilog.sip \
    sip/qscilexervhdl.sip \
    sip/qscilexerxml.sip \
    sip/qscilexeryaml.sip \
    sip/qscimacro.sip \
    sip/qscimod3.sip \
    sip/qscimod4.sip \
    sip/qscimod5.sip \
    sip/qscimodcommon.sip \
    sip/qsciprinter.sip \
    sip/qsciscintilla.sip \
    sip/qsciscintillabase3.sip \
    sip/qsciscintillabase4.sip \
    sip/qscistyle.sip \
    sip/qscistyledtext.sip
INSTALLS += sip

QMAKE_CXXFLAGS += -fno-exceptions
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += /opt/local/Library/Frameworks/Python.framework/Versions/2.7/include/python2.7

win32 {
    QMAKE_POST_LINK = $(COPY_FILE) $(DESTDIR_TARGET) $$PY_MODULE
} else {
    QMAKE_POST_LINK = $(COPY_FILE) $(TARGET) $$PY_MODULE
}

macx {
    QMAKE_LFLAGS += "-undefined dynamic_lookup"
    greaterThan(QT_MAJOR_VERSION, 4) {
        QMAKE_LFLAGS += "-install_name $$absolute_path($$PY_MODULE, $$target.path)"
    }

    QMAKE_POST_LINK = $$QMAKE_POST_LINK$$escape_expand(\\n\\t)$$quote(install_name_tool -change libqscintilla2.11.dylib /opt/local/lib/libqscintilla2.11.dylib $$PY_MODULE)
}

TARGET = Qsci
HEADERS = sipAPIQsci.h
SOURCES = \
    sipQscicmodule.cpp \
    sipQsciQList0100QsciStyledText.cpp \
    sipQsciQList0101QsciCommand.cpp \
    sipQsciQsciAbstractAPIs.cpp \
    sipQsciQsciAPIs.cpp \
    sipQsciQsciCommand.cpp \
    sipQsciQsciCommandSet.cpp \
    sipQsciQsciDocument.cpp \
    sipQsciQsciLexer.cpp \
    sipQsciQsciLexerAVS.cpp \
    sipQsciQsciLexerBash.cpp \
    sipQsciQsciLexerBatch.cpp \
    sipQsciQsciLexerCMake.cpp \
    sipQsciQsciLexerCoffeeScript.cpp \
    sipQsciQsciLexerCPP.cpp \
    sipQsciQsciLexerCSharp.cpp \
    sipQsciQsciLexerCSS.cpp \
    sipQsciQsciLexerCustom.cpp \
    sipQsciQsciLexerD.cpp \
    sipQsciQsciLexerDiff.cpp \
    sipQsciQsciLexerFortran.cpp \
    sipQsciQsciLexerFortran77.cpp \
    sipQsciQsciLexerHTML.cpp \
    sipQsciQsciLexerIDL.cpp \
    sipQsciQsciLexerJava.cpp \
    sipQsciQsciLexerJavaScript.cpp \
    sipQsciQsciLexerLua.cpp \
    sipQsciQsciLexerMakefile.cpp \
    sipQsciQsciLexerMatlab.cpp \
    sipQsciQsciLexerOctave.cpp \
    sipQsciQsciLexerPascal.cpp \
    sipQsciQsciLexerPerl.cpp \
    sipQsciQsciLexerPO.cpp \
    sipQsciQsciLexerPostScript.cpp \
    sipQsciQsciLexerPOV.cpp \
    sipQsciQsciLexerProperties.cpp \
    sipQsciQsciLexerPython.cpp \
    sipQsciQsciLexerRuby.cpp \
    sipQsciQsciLexerSpice.cpp \
    sipQsciQsciLexerSQL.cpp \
    sipQsciQsciLexerTCL.cpp \
    sipQsciQsciLexerTeX.cpp \
    sipQsciQsciLexerVerilog.cpp \
    sipQsciQsciLexerVHDL.cpp \
    sipQsciQsciLexerXML.cpp \
    sipQsciQsciLexerYAML.cpp \
    sipQsciQsciMacro.cpp \
    sipQsciQsciPrinter.cpp \
    sipQsciQsciScintilla.cpp \
    sipQsciQsciScintillaBase.cpp \
    sipQsciQsciStyle.cpp \
    sipQsciQsciStyledText.cpp
