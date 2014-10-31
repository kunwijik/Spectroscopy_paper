TARGET = QtMultimedia.so
OFILES = sipQtMultimediacmodule.o sipQtMultimediaQList0100QAudioDeviceInfo.o sipQtMultimediaQVideoSurfaceFormat.o sipQtMultimediaQList0100QVideoFramePixelFormat.o sipQtMultimediaQVideoFrame.o sipQtMultimediaQAudioOutput.o sipQtMultimediaQAudioInput.o sipQtMultimediaQList0100QAudioFormatSampleType.o sipQtMultimediaQList0100QAudioFormatEndian.o sipQtMultimediaQAudioFormat.o sipQtMultimediaQAudioDeviceInfo.o sipQtMultimediaQAudio.o sipQtMultimediaQAbstractVideoSurface.o sipQtMultimediaQAbstractVideoBuffer.o
HFILES = sipAPIQtMultimedia.h 

CC = /usr/bin/clang
CXX = /usr/bin/clang++
LINK = /usr/bin/clang++
CPPFLAGS = -DNDEBUG -DSIP_PROTECTED_IS_PUBLIC -Dprotected=public -DQT_NO_DEBUG -DQT_MULTIMEDIA_LIB -DQT_GUI_LIB -DQT_CORE_LIB -I. -I/opt/local/Library/Frameworks/Python.framework/Versions/2.7/include/python2.7 -I/opt/local/mkspecs/macx-g++ -I/opt/local/include/QtMultimedia -I/opt/local/include/QtGui -I/opt/local/include/QtCore -I/opt/local/include
CFLAGS = -pipe -fPIC -arch x86_64 -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk -O2 -Wall -W
CXXFLAGS = -pipe -fPIC -arch x86_64 -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk -O2 -Wall -W
LFLAGS =  -headerpad_max_install_names -bundle -undefined dynamic_lookup -arch x86_64 -Wl,-syslibroot,/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk
LIBS = -L/opt/local/lib -lQtMultimedia -L/opt/local/lib -framework ApplicationServices -framework CoreAudio -framework AudioUnit -framework AudioToolbox -lQtGui -lQtCore -lQtGui -L/opt/local/lib -lQtCore -lQtCore
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
	@test -d $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtMultimedia || mkdir -p $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtMultimedia
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtMultimedia/qabstractvideobuffer.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtMultimedia/qabstractvideobuffer.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtMultimedia/qabstractvideosurface.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtMultimedia/qabstractvideosurface.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtMultimedia/qaudio.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtMultimedia/qaudio.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtMultimedia/qaudiodeviceinfo.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtMultimedia/qaudiodeviceinfo.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtMultimedia/qaudioformat.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtMultimedia/qaudioformat.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtMultimedia/qaudioinput.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtMultimedia/qaudioinput.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtMultimedia/qaudiooutput.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtMultimedia/qaudiooutput.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtMultimedia/QtMultimediamod.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtMultimedia/QtMultimediamod.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtMultimedia/qvideoframe.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtMultimedia/qvideoframe.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtMultimedia/qvideosurfaceformat.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtMultimedia/qvideosurfaceformat.sip

clean:
	-rm -f $(TARGET)
	-rm -f sipQtMultimediacmodule.o
	-rm -f sipQtMultimediaQList0100QAudioDeviceInfo.o
	-rm -f sipQtMultimediaQVideoSurfaceFormat.o
	-rm -f sipQtMultimediaQList0100QVideoFramePixelFormat.o
	-rm -f sipQtMultimediaQVideoFrame.o
	-rm -f sipQtMultimediaQAudioOutput.o
	-rm -f sipQtMultimediaQAudioInput.o
	-rm -f sipQtMultimediaQList0100QAudioFormatSampleType.o
	-rm -f sipQtMultimediaQList0100QAudioFormatEndian.o
	-rm -f sipQtMultimediaQAudioFormat.o
	-rm -f sipQtMultimediaQAudioDeviceInfo.o
	-rm -f sipQtMultimediaQAudio.o
	-rm -f sipQtMultimediaQAbstractVideoSurface.o
	-rm -f sipQtMultimediaQAbstractVideoBuffer.o
