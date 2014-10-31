TARGET = QtDeclarative.so
OFILES = sipQtDeclarativecmodule.o sipQtDeclarativeQList0100QDeclarativeError.o sipQtDeclarativeQPyDeclarativePropertyValueSource.o sipQtDeclarativeQDeclarativeListProperty0100QObject.o sipQtDeclarativeQDeclarativeView.o sipQtDeclarativeQDeclarativeScriptString.o sipQtDeclarativeQDeclarativePropertyValueSource.o sipQtDeclarativeQDeclarativePropertyMap.o sipQtDeclarativeQDeclarativeProperty.o sipQtDeclarativeQDeclarativeNetworkAccessManagerFactory.o sipQtDeclarativeQDeclarativeListReference.o sipQtDeclarativeQDeclarativeItem.o sipQtDeclarativeQDeclarativeParserStatus.o sipQtDeclarativeQDeclarativeImageProvider.o sipQtDeclarativeQDeclarativeExtensionPlugin.o sipQtDeclarativeQDeclarativeExpression.o sipQtDeclarativeQDeclarativeError.o sipQtDeclarativeQDeclarativeEngine.o sipQtDeclarativeQDeclarativeContext.o sipQtDeclarativeQDeclarativeComponent.o
HFILES = sipAPIQtDeclarative.h 

CC = /usr/bin/clang
CXX = /usr/bin/clang++
LINK = /usr/bin/clang++
CPPFLAGS = -DNDEBUG -DSIP_PROTECTED_IS_PUBLIC -Dprotected=public -DQT_NO_DEBUG -DQT_DECLARATIVE_LIB -DQT_GUI_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB -I. -I/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/qpy/QtDeclarative -I/opt/local/Library/Frameworks/Python.framework/Versions/2.7/include/python2.7 -I/opt/local/mkspecs/macx-g++ -I/opt/local/include/QtDeclarative -I/opt/local/include/QtGui -I/opt/local/include/QtNetwork -I/opt/local/include/QtCore -I/opt/local/include
CFLAGS = -pipe -fPIC -arch x86_64 -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk -O2 -Wall -W
CXXFLAGS = -pipe -fPIC -arch x86_64 -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk -O2 -Wall -W
LFLAGS =  -headerpad_max_install_names -bundle -undefined dynamic_lookup -arch x86_64 -Wl,-syslibroot,/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk
LIBS = -L/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/qpy/QtDeclarative -L/opt/local/lib -lqpydeclarative -lQtDeclarative -L/opt/local/lib -lQtScript -lQtCore -lQtSvg -lQtGui -lQtSql -lQtXmlPatterns -lQtNetwork -lQtGui -L/opt/local/lib -lQtCore -lQtNetwork -L/opt/local/lib -lQtCore -lQtCore
MOC = /opt/local/bin/moc
.SUFFIXES: .c .o .cpp .cc .cxx .C


.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.C.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.c.o:
	$(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

all: $(TARGET)

$(OFILES): $(HFILES)

$(TARGET): $(OFILES)
	$(LINK) $(LFLAGS) -o $(TARGET) $(OFILES) $(LIBS)

install: $(TARGET)
	@test -d $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/lib/python2.7/site-packages/PyQt4 || mkdir -p $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/lib/python2.7/site-packages/PyQt4
	cp -f $(TARGET) $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/lib/python2.7/site-packages/PyQt4/$(TARGET)
	@test -d $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtDeclarative || mkdir -p $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtDeclarative
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtDeclarative/qdeclarativecomponent.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtDeclarative/qdeclarativecomponent.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtDeclarative/qdeclarativecontext.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtDeclarative/qdeclarativecontext.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtDeclarative/qdeclarativeengine.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtDeclarative/qdeclarativeengine.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtDeclarative/qdeclarativeerror.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtDeclarative/qdeclarativeerror.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtDeclarative/qdeclarativeexpression.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtDeclarative/qdeclarativeexpression.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtDeclarative/qdeclarativeextensionplugin.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtDeclarative/qdeclarativeextensionplugin.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtDeclarative/qdeclarativeimageprovider.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtDeclarative/qdeclarativeimageprovider.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtDeclarative/qdeclarativeitem.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtDeclarative/qdeclarativeitem.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtDeclarative/qdeclarativelist.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtDeclarative/qdeclarativelist.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtDeclarative/qdeclarativenetworkaccessmanagerfactory.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtDeclarative/qdeclarativenetworkaccessmanagerfactory.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtDeclarative/qdeclarativeparserstatus.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtDeclarative/qdeclarativeparserstatus.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtDeclarative/qdeclarativeproperty.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtDeclarative/qdeclarativeproperty.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtDeclarative/qdeclarativepropertymap.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtDeclarative/qdeclarativepropertymap.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtDeclarative/qdeclarativepropertyvaluesource.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtDeclarative/qdeclarativepropertyvaluesource.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtDeclarative/qdeclarativescriptstring.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtDeclarative/qdeclarativescriptstring.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtDeclarative/qdeclarativeview.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtDeclarative/qdeclarativeview.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtDeclarative/qpydeclarativelistproperty.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtDeclarative/qpydeclarativelistproperty.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtDeclarative/qpydeclarativepropertyvaluesource.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtDeclarative/qpydeclarativepropertyvaluesource.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtDeclarative/QtDeclarativemod.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtDeclarative/QtDeclarativemod.sip

clean:
	-rm -f $(TARGET)
	-rm -f sipQtDeclarativecmodule.o
	-rm -f sipQtDeclarativeQList0100QDeclarativeError.o
	-rm -f sipQtDeclarativeQPyDeclarativePropertyValueSource.o
	-rm -f sipQtDeclarativeQDeclarativeListProperty0100QObject.o
	-rm -f sipQtDeclarativeQDeclarativeView.o
	-rm -f sipQtDeclarativeQDeclarativeScriptString.o
	-rm -f sipQtDeclarativeQDeclarativePropertyValueSource.o
	-rm -f sipQtDeclarativeQDeclarativePropertyMap.o
	-rm -f sipQtDeclarativeQDeclarativeProperty.o
	-rm -f sipQtDeclarativeQDeclarativeNetworkAccessManagerFactory.o
	-rm -f sipQtDeclarativeQDeclarativeListReference.o
	-rm -f sipQtDeclarativeQDeclarativeItem.o
	-rm -f sipQtDeclarativeQDeclarativeParserStatus.o
	-rm -f sipQtDeclarativeQDeclarativeImageProvider.o
	-rm -f sipQtDeclarativeQDeclarativeExtensionPlugin.o
	-rm -f sipQtDeclarativeQDeclarativeExpression.o
	-rm -f sipQtDeclarativeQDeclarativeError.o
	-rm -f sipQtDeclarativeQDeclarativeEngine.o
	-rm -f sipQtDeclarativeQDeclarativeContext.o
	-rm -f sipQtDeclarativeQDeclarativeComponent.o
