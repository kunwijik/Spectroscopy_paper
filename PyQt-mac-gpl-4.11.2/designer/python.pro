CONFIG += x86_64
QMAKE_MAC_SDK = /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk
VPATH = /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/designer
CONFIG      += plugin $QTCONFIG@ warn_on

greaterThan(QT_MAJOR_VERSION, 4) {
    QT += designer

    # Work around QTBUG-39300.
    CONFIG -= android_install
}

lessThan(QT_MAJOR_VERSION, 5) {
    CONFIG += designer
}

TARGET      = pyqt4
TEMPLATE    = lib

INCLUDEPATH += /opt/local/Library/Frameworks/Python.framework/Versions/2.7/include/python2.7
LIBS        += -L/opt/local/Library/Frameworks/Python.framework/Versions/2.7/lib -lpython2.7
DEFINES     += PYTHON_LIB=\\\"Python.framework/Versions/2.7/Python\\\"

SOURCES     = pluginloader.cpp
HEADERS     = pluginloader.h

# Install.
target.path = /opt/local/share/qt4/plugins/designer

python.path = /opt/local/share/qt4/plugins/designer
python.files = python

INSTALLS    += target python
