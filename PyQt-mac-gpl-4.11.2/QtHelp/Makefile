TARGET = QtHelp.so
OFILES = sipQtHelpcmodule.o sipQtHelpQList0100QHelpSearchQuery.o sipQtHelpQMap0100QString0100QUrl.o sipQtHelpQList0100QStringList.o sipQtHelpQHelpSearchResultWidget.o sipQtHelpQHelpSearchQueryWidget.o sipQtHelpQHelpSearchEngine.o sipQtHelpQHelpSearchQuery.o sipQtHelpQHelpIndexWidget.o sipQtHelpQHelpIndexModel.o sipQtHelpQHelpEngine.o sipQtHelpQHelpEngineCore.o sipQtHelpQHelpContentWidget.o sipQtHelpQHelpContentModel.o sipQtHelpQHelpContentItem.o
HFILES = sipAPIQtHelp.h 

CC = /usr/bin/clang
CXX = /usr/bin/clang++
LINK = /usr/bin/clang++
CPPFLAGS = -DNDEBUG -DSIP_PROTECTED_IS_PUBLIC -Dprotected=public -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_CORE_LIB -I. -I/opt/local/Library/Frameworks/Python.framework/Versions/2.7/include/python2.7 -I/opt/local/mkspecs/macx-g++ -I/opt/local/include/QtHelp -I/opt/local/include/QtGui -I/opt/local/include/QtCore -I/opt/local/include
CFLAGS = -pipe -fPIC -arch x86_64 -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk -O2 -Wall -W
CXXFLAGS = -pipe -fPIC -arch x86_64 -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk -O2 -Wall -W
LFLAGS =  -headerpad_max_install_names -bundle -undefined dynamic_lookup -arch x86_64 -Wl,-syslibroot,/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk
LIBS = -L/opt/local/lib -lQtHelp -L/opt/local/lib -lQtCLucene -lQtCore -lQtSql -lQtGui -lQtNetwork -lQtGui -L/opt/local/lib -lQtCore -lQtCore
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
	@test -d $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtHelp || mkdir -p $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtHelp
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtHelp/qhelpcontentwidget.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtHelp/qhelpcontentwidget.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtHelp/qhelpengine.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtHelp/qhelpengine.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtHelp/qhelpenginecore.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtHelp/qhelpenginecore.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtHelp/qhelpindexwidget.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtHelp/qhelpindexwidget.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtHelp/qhelpsearchengine.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtHelp/qhelpsearchengine.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtHelp/qhelpsearchquerywidget.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtHelp/qhelpsearchquerywidget.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtHelp/qhelpsearchresultwidget.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtHelp/qhelpsearchresultwidget.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtHelp/QtHelpmod.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtHelp/QtHelpmod.sip

clean:
	-rm -f $(TARGET)
	-rm -f sipQtHelpcmodule.o
	-rm -f sipQtHelpQList0100QHelpSearchQuery.o
	-rm -f sipQtHelpQMap0100QString0100QUrl.o
	-rm -f sipQtHelpQList0100QStringList.o
	-rm -f sipQtHelpQHelpSearchResultWidget.o
	-rm -f sipQtHelpQHelpSearchQueryWidget.o
	-rm -f sipQtHelpQHelpSearchEngine.o
	-rm -f sipQtHelpQHelpSearchQuery.o
	-rm -f sipQtHelpQHelpIndexWidget.o
	-rm -f sipQtHelpQHelpIndexModel.o
	-rm -f sipQtHelpQHelpEngine.o
	-rm -f sipQtHelpQHelpEngineCore.o
	-rm -f sipQtHelpQHelpContentWidget.o
	-rm -f sipQtHelpQHelpContentModel.o
	-rm -f sipQtHelpQHelpContentItem.o
