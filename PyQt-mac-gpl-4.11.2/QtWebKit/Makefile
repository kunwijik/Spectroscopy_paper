TARGET = QtWebKit.so
OFILES = sipQtWebKitcmodule.o sipQtWebKitQList0100QWebDatabase.o sipQtWebKitQList0100QWebSecurityOrigin.o sipQtWebKitQList0100QWebPluginFactoryPlugin.o sipQtWebKitQList0100QWebHistoryItem.o sipQtWebKitQMultiMap0100QString0100QString.o sipQtWebKitQList0101QWebFrame.o sipQtWebKitQList0100QWebElement.o sipQtWebKitQList0100QWebPluginFactoryMimeType.o sipQtWebKitQWebView.o sipQtWebKitQWebSettings.o sipQtWebKitQWebSecurityOrigin.o sipQtWebKitQWebPluginFactoryExtensionReturn.o sipQtWebKitQWebPluginFactoryExtensionOption.o sipQtWebKitQWebPluginFactoryPlugin.o sipQtWebKitQWebPluginFactoryMimeType.o sipQtWebKitQWebPluginFactory.o sipQtWebKitQWebPageViewportAttributes.o sipQtWebKitQWebPageErrorPageExtensionReturn.o sipQtWebKitQWebPageErrorPageExtensionOption.o sipQtWebKitQWebPageChooseMultipleFilesExtensionReturn.o sipQtWebKitQWebPageChooseMultipleFilesExtensionOption.o sipQtWebKitQWebPageExtensionReturn.o sipQtWebKitQWebPageExtensionOption.o sipQtWebKitQWebPageFindFlags.o sipQtWebKitQWebPage.o sipQtWebKitQWebInspector.o sipQtWebKitQWebHistoryInterface.o sipQtWebKitQWebHistory.o sipQtWebKitQWebHistoryItem.o sipQtWebKitQWebFrame.o sipQtWebKitQWebHitTestResult.o sipQtWebKitQWebElementCollection.o sipQtWebKitQWebElement.o sipQtWebKitQWebDatabase.o sipQtWebKitQGraphicsWebView.o
HFILES = sipAPIQtWebKit.h 

CC = /usr/bin/clang
CXX = /usr/bin/clang++
LINK = /usr/bin/clang++
CPPFLAGS = -DNDEBUG -DSIP_PROTECTED_IS_PUBLIC -Dprotected=public -DQT_NO_DEBUG -DQT_WEBKIT_LIB -DQT_GUI_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB -I. -I/opt/local/Library/Frameworks/Python.framework/Versions/2.7/include/python2.7 -I/opt/local/mkspecs/macx-g++ -I/opt/local/include/QtWebKit -I/opt/local/include/QtGui -I/opt/local/include/QtNetwork -I/opt/local/include/QtCore -I/opt/local/include
CFLAGS = -pipe -fPIC -arch x86_64 -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk -O2 -Wall -W
CXXFLAGS = -pipe -fPIC -arch x86_64 -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk -O2 -Wall -W
LFLAGS =  -headerpad_max_install_names -bundle -undefined dynamic_lookup -arch x86_64 -Wl,-syslibroot,/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk
LIBS = -L/opt/local/lib -lQtWebKit -lQtGui -L/opt/local/lib -lQtCore -lQtNetwork -L/opt/local/lib -lQtCore -lQtCore
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
	@test -d $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtWebKit || mkdir -p $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtWebKit
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtWebKit/qgraphicswebview.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtWebKit/qgraphicswebview.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtWebKit/QtWebKitmod.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtWebKit/QtWebKitmod.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtWebKit/qwebdatabase.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtWebKit/qwebdatabase.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtWebKit/qwebelement.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtWebKit/qwebelement.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtWebKit/qwebframe.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtWebKit/qwebframe.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtWebKit/qwebhistory.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtWebKit/qwebhistory.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtWebKit/qwebhistoryinterface.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtWebKit/qwebhistoryinterface.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtWebKit/qwebinspector.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtWebKit/qwebinspector.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtWebKit/qwebkitglobal.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtWebKit/qwebkitglobal.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtWebKit/qwebkitversion.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtWebKit/qwebkitversion.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtWebKit/qwebpage.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtWebKit/qwebpage.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtWebKit/qwebpluginfactory.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtWebKit/qwebpluginfactory.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtWebKit/qwebsecurityorigin.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtWebKit/qwebsecurityorigin.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtWebKit/qwebsettings.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtWebKit/qwebsettings.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtWebKit/qwebview.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtWebKit/qwebview.sip

clean:
	-rm -f $(TARGET)
	-rm -f sipQtWebKitcmodule.o
	-rm -f sipQtWebKitQList0100QWebDatabase.o
	-rm -f sipQtWebKitQList0100QWebSecurityOrigin.o
	-rm -f sipQtWebKitQList0100QWebPluginFactoryPlugin.o
	-rm -f sipQtWebKitQList0100QWebHistoryItem.o
	-rm -f sipQtWebKitQMultiMap0100QString0100QString.o
	-rm -f sipQtWebKitQList0101QWebFrame.o
	-rm -f sipQtWebKitQList0100QWebElement.o
	-rm -f sipQtWebKitQList0100QWebPluginFactoryMimeType.o
	-rm -f sipQtWebKitQWebView.o
	-rm -f sipQtWebKitQWebSettings.o
	-rm -f sipQtWebKitQWebSecurityOrigin.o
	-rm -f sipQtWebKitQWebPluginFactoryExtensionReturn.o
	-rm -f sipQtWebKitQWebPluginFactoryExtensionOption.o
	-rm -f sipQtWebKitQWebPluginFactoryPlugin.o
	-rm -f sipQtWebKitQWebPluginFactoryMimeType.o
	-rm -f sipQtWebKitQWebPluginFactory.o
	-rm -f sipQtWebKitQWebPageViewportAttributes.o
	-rm -f sipQtWebKitQWebPageErrorPageExtensionReturn.o
	-rm -f sipQtWebKitQWebPageErrorPageExtensionOption.o
	-rm -f sipQtWebKitQWebPageChooseMultipleFilesExtensionReturn.o
	-rm -f sipQtWebKitQWebPageChooseMultipleFilesExtensionOption.o
	-rm -f sipQtWebKitQWebPageExtensionReturn.o
	-rm -f sipQtWebKitQWebPageExtensionOption.o
	-rm -f sipQtWebKitQWebPageFindFlags.o
	-rm -f sipQtWebKitQWebPage.o
	-rm -f sipQtWebKitQWebInspector.o
	-rm -f sipQtWebKitQWebHistoryInterface.o
	-rm -f sipQtWebKitQWebHistory.o
	-rm -f sipQtWebKitQWebHistoryItem.o
	-rm -f sipQtWebKitQWebFrame.o
	-rm -f sipQtWebKitQWebHitTestResult.o
	-rm -f sipQtWebKitQWebElementCollection.o
	-rm -f sipQtWebKitQWebElement.o
	-rm -f sipQtWebKitQWebDatabase.o
	-rm -f sipQtWebKitQGraphicsWebView.o
