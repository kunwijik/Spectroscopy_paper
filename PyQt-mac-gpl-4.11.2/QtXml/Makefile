TARGET = QtXml.so
OFILES = sipQtXmlcmodule.o sipQtXmlQXmlDefaultHandler.o sipQtXmlQXmlDeclHandler.o sipQtXmlQXmlLexicalHandler.o sipQtXmlQXmlEntityResolver.o sipQtXmlQXmlDTDHandler.o sipQtXmlQXmlErrorHandler.o sipQtXmlQXmlContentHandler.o sipQtXmlQXmlLocator.o sipQtXmlQXmlSimpleReader.o sipQtXmlQXmlReader.o sipQtXmlQXmlParseException.o sipQtXmlQXmlInputSource.o sipQtXmlQXmlAttributes.o sipQtXmlQXmlNamespaceSupport.o sipQtXmlQDomProcessingInstruction.o sipQtXmlQDomEntityReference.o sipQtXmlQDomEntity.o sipQtXmlQDomNotation.o sipQtXmlQDomCDATASection.o sipQtXmlQDomComment.o sipQtXmlQDomText.o sipQtXmlQDomElement.o sipQtXmlQDomAttr.o sipQtXmlQDomCharacterData.o sipQtXmlQDomDocumentFragment.o sipQtXmlQDomNamedNodeMap.o sipQtXmlQDomDocument.o sipQtXmlQDomDocumentType.o sipQtXmlQDomNodeList.o sipQtXmlQDomNode.o sipQtXmlQDomImplementation.o
HFILES = sipAPIQtXml.h 

CC = /usr/bin/clang
CXX = /usr/bin/clang++
LINK = /usr/bin/clang++
CPPFLAGS = -DNDEBUG -DSIP_PROTECTED_IS_PUBLIC -Dprotected=public -DQT_NO_DEBUG -DQT_XML_LIB -DQT_CORE_LIB -I. -I/opt/local/Library/Frameworks/Python.framework/Versions/2.7/include/python2.7 -I/opt/local/mkspecs/macx-g++ -I/opt/local/include/QtXml -I/opt/local/include/QtCore -I/opt/local/include
CFLAGS = -pipe -fPIC -arch x86_64 -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk -O2 -Wall -W
CXXFLAGS = -pipe -fPIC -arch x86_64 -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk -O2 -Wall -W
LFLAGS =  -headerpad_max_install_names -bundle -undefined dynamic_lookup -arch x86_64 -Wl,-syslibroot,/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk
LIBS = -L/opt/local/lib -lQtXml -L/opt/local/lib -lQtCore -lQtCore
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
	@test -d $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtXml || mkdir -p $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtXml
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtXml/qdom.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtXml/qdom.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtXml/QtXmlmod.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtXml/QtXmlmod.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtXml/qxml.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtXml/qxml.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtXml/qxmlstream.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtXml/qxmlstream.sip

clean:
	-rm -f $(TARGET)
	-rm -f sipQtXmlcmodule.o
	-rm -f sipQtXmlQXmlDefaultHandler.o
	-rm -f sipQtXmlQXmlDeclHandler.o
	-rm -f sipQtXmlQXmlLexicalHandler.o
	-rm -f sipQtXmlQXmlEntityResolver.o
	-rm -f sipQtXmlQXmlDTDHandler.o
	-rm -f sipQtXmlQXmlErrorHandler.o
	-rm -f sipQtXmlQXmlContentHandler.o
	-rm -f sipQtXmlQXmlLocator.o
	-rm -f sipQtXmlQXmlSimpleReader.o
	-rm -f sipQtXmlQXmlReader.o
	-rm -f sipQtXmlQXmlParseException.o
	-rm -f sipQtXmlQXmlInputSource.o
	-rm -f sipQtXmlQXmlAttributes.o
	-rm -f sipQtXmlQXmlNamespaceSupport.o
	-rm -f sipQtXmlQDomProcessingInstruction.o
	-rm -f sipQtXmlQDomEntityReference.o
	-rm -f sipQtXmlQDomEntity.o
	-rm -f sipQtXmlQDomNotation.o
	-rm -f sipQtXmlQDomCDATASection.o
	-rm -f sipQtXmlQDomComment.o
	-rm -f sipQtXmlQDomText.o
	-rm -f sipQtXmlQDomElement.o
	-rm -f sipQtXmlQDomAttr.o
	-rm -f sipQtXmlQDomCharacterData.o
	-rm -f sipQtXmlQDomDocumentFragment.o
	-rm -f sipQtXmlQDomNamedNodeMap.o
	-rm -f sipQtXmlQDomDocument.o
	-rm -f sipQtXmlQDomDocumentType.o
	-rm -f sipQtXmlQDomNodeList.o
	-rm -f sipQtXmlQDomNode.o
	-rm -f sipQtXmlQDomImplementation.o
