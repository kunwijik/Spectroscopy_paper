TARGET = QtXmlPatterns.so
OFILES = sipQtXmlPatternscmodule.o sipQtXmlPatternsQVector0100QXmlNodeModelIndex.o sipQtXmlPatternsQVector0100QXmlName.o sipQtXmlPatternsQXmlSchemaValidator.o sipQtXmlPatternsQXmlSchema.o sipQtXmlPatternsQXmlResultItems.o sipQtXmlPatternsQXmlQuery.o sipQtXmlPatternsQXmlNamePool.o sipQtXmlPatternsQXmlName.o sipQtXmlPatternsQXmlFormatter.o sipQtXmlPatternsQXmlSerializer.o sipQtXmlPatternsQSourceLocation.o sipQtXmlPatternsQSimpleXmlNodeModel.o sipQtXmlPatternsQAbstractXmlReceiver.o sipQtXmlPatternsQXmlItem.o sipQtXmlPatternsQAbstractXmlNodeModel.o sipQtXmlPatternsQXmlNodeModelIndex.o sipQtXmlPatternsQAbstractUriResolver.o sipQtXmlPatternsQAbstractMessageHandler.o
HFILES = sipAPIQtXmlPatterns.h 

CC = /usr/bin/clang
CXX = /usr/bin/clang++
LINK = /usr/bin/clang++
CPPFLAGS = -DNDEBUG -DSIP_PROTECTED_IS_PUBLIC -Dprotected=public -DQT_NO_DEBUG -DQT_XMLPATTERNS_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB -I. -I/opt/local/Library/Frameworks/Python.framework/Versions/2.7/include/python2.7 -I/opt/local/mkspecs/macx-g++ -I/opt/local/include/QtXmlPatterns -I/opt/local/include/QtNetwork -I/opt/local/include/QtCore -I/opt/local/include
CFLAGS = -pipe -fPIC -arch x86_64 -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk -O2 -Wall -W
CXXFLAGS = -pipe -fPIC -arch x86_64 -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk -O2 -Wall -W
LFLAGS =  -headerpad_max_install_names -bundle -undefined dynamic_lookup -arch x86_64 -Wl,-syslibroot,/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk
LIBS = -L/opt/local/lib -lQtXmlPatterns -L/opt/local/lib -lQtNetwork -lQtCore -lQtNetwork -L/opt/local/lib -lQtCore -lQtCore
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
	@test -d $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtXmlPatterns || mkdir -p $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtXmlPatterns
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtXmlPatterns/qabstractmessagehandler.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtXmlPatterns/qabstractmessagehandler.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtXmlPatterns/qabstracturiresolver.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtXmlPatterns/qabstracturiresolver.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtXmlPatterns/qabstractxmlnodemodel.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtXmlPatterns/qabstractxmlnodemodel.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtXmlPatterns/qabstractxmlreceiver.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtXmlPatterns/qabstractxmlreceiver.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtXmlPatterns/qsimplexmlnodemodel.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtXmlPatterns/qsimplexmlnodemodel.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtXmlPatterns/qsourcelocation.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtXmlPatterns/qsourcelocation.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtXmlPatterns/QtXmlPatternsmod.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtXmlPatterns/QtXmlPatternsmod.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtXmlPatterns/qxmlformatter.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtXmlPatterns/qxmlformatter.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtXmlPatterns/qxmlname.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtXmlPatterns/qxmlname.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtXmlPatterns/qxmlnamepool.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtXmlPatterns/qxmlnamepool.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtXmlPatterns/qxmlquery.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtXmlPatterns/qxmlquery.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtXmlPatterns/qxmlresultitems.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtXmlPatterns/qxmlresultitems.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtXmlPatterns/qxmlschema.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtXmlPatterns/qxmlschema.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtXmlPatterns/qxmlschemavalidator.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtXmlPatterns/qxmlschemavalidator.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtXmlPatterns/qxmlserializer.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtXmlPatterns/qxmlserializer.sip

clean:
	-rm -f $(TARGET)
	-rm -f sipQtXmlPatternscmodule.o
	-rm -f sipQtXmlPatternsQVector0100QXmlNodeModelIndex.o
	-rm -f sipQtXmlPatternsQVector0100QXmlName.o
	-rm -f sipQtXmlPatternsQXmlSchemaValidator.o
	-rm -f sipQtXmlPatternsQXmlSchema.o
	-rm -f sipQtXmlPatternsQXmlResultItems.o
	-rm -f sipQtXmlPatternsQXmlQuery.o
	-rm -f sipQtXmlPatternsQXmlNamePool.o
	-rm -f sipQtXmlPatternsQXmlName.o
	-rm -f sipQtXmlPatternsQXmlFormatter.o
	-rm -f sipQtXmlPatternsQXmlSerializer.o
	-rm -f sipQtXmlPatternsQSourceLocation.o
	-rm -f sipQtXmlPatternsQSimpleXmlNodeModel.o
	-rm -f sipQtXmlPatternsQAbstractXmlReceiver.o
	-rm -f sipQtXmlPatternsQXmlItem.o
	-rm -f sipQtXmlPatternsQAbstractXmlNodeModel.o
	-rm -f sipQtXmlPatternsQXmlNodeModelIndex.o
	-rm -f sipQtXmlPatternsQAbstractUriResolver.o
	-rm -f sipQtXmlPatternsQAbstractMessageHandler.o
