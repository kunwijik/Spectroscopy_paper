TARGET = pylupdate4
OFILES = fetchtr.o merge.o numberh.o sametexth.o main.o metatranslator.o proparser.o translator.o simtexth.o moc_translator.o
HFILES = metatranslator.h proparser.h simtexth.h

CC = /usr/bin/clang
CXX = /usr/bin/clang++
LINK = /usr/bin/clang++
CPPFLAGS = -DNDEBUG -DQT_NO_DEBUG -DQT_CORE_LIB -DQT_XML_LIB -I. -I/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/pylupdate -I/opt/local/mkspecs/macx-g++ -I/opt/local/include/QtCore -I/opt/local/include/QtXml -I/opt/local/include
CFLAGS = -pipe -arch x86_64 -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk -O2 -Wall -W
CXXFLAGS = -pipe -arch x86_64 -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk -O2 -Wall -W
LFLAGS =  -headerpad_max_install_names -arch x86_64 -Wl,-syslibroot,/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk
LIBS = -L/opt/local/lib -lQtCore -lQtXml -L/opt/local/lib -lQtCore
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

moc_translator.cpp: translator.h
	$(MOC) -o moc_translator.cpp translator.h

$(TARGET): $(OFILES)
	$(LINK) $(LFLAGS) -o $(TARGET) $(OFILES) $(LIBS)

install: $(TARGET)
	@test -d $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/bin || mkdir -p $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/bin
	cp -f $(TARGET) $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/bin/$(TARGET)

clean:
	-rm -f $(TARGET)
	-rm -f fetchtr.o
	-rm -f merge.o
	-rm -f numberh.o
	-rm -f sametexth.o
	-rm -f main.o
	-rm -f metatranslator.o
	-rm -f proparser.o
	-rm -f translator.o
	-rm -f simtexth.o
	-rm -f moc_translator.o
	-rm -f moc_translator.cpp
