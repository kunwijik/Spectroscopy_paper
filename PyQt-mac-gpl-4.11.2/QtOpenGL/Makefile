TARGET = QtOpenGL.so
OFILES = sipQtOpenGLcmodule.o sipQtOpenGLQList0101QGLShader.o sipQtOpenGLQGLShaderProgram.o sipQtOpenGLQGLShaderShaderType.o sipQtOpenGLQGLShader.o sipQtOpenGLQGLPixelBuffer.o sipQtOpenGLQGLFramebufferObjectFormat.o sipQtOpenGLQGLFramebufferObject.o sipQtOpenGLQGLColormap.o sipQtOpenGLQGLBuffer.o sipQtOpenGLQGLWidget.o sipQtOpenGLQGLContextBindOptions.o sipQtOpenGLQGLContext.o sipQtOpenGLQGLFormatOpenGLVersionFlags.o sipQtOpenGLQGLFormat.o sipQtOpenGLQGLFormatOptions.o sipQtOpenGLQGL.o
HFILES = sipAPIQtOpenGL.h 

CC = /usr/bin/clang
CXX = /usr/bin/clang++
LINK = /usr/bin/clang++
CPPFLAGS = -DNDEBUG -DSIP_PROTECTED_IS_PUBLIC -Dprotected=public -DQT_NO_DEBUG -DQT_OPENGL_LIB -DQT_GUI_LIB -DQT_CORE_LIB -I. -I/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/qpy/QtOpenGL -I/opt/local/Library/Frameworks/Python.framework/Versions/2.7/include/python2.7 -I/opt/local/mkspecs/macx-g++ -I/opt/local/include/QtOpenGL -I/opt/local/include/QtGui -I/opt/local/include/QtCore -I/opt/local/include -I/System/Library/Frameworks/OpenGL.framework/Headers -I/System/Library/Frameworks/AGL.framework/Headers/
CFLAGS = -pipe -fPIC -arch x86_64 -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk -O2 -Wall -W
CXXFLAGS = -pipe -fPIC -arch x86_64 -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk -O2 -Wall -W
LFLAGS =  -headerpad_max_install_names -bundle -undefined dynamic_lookup -arch x86_64 -Wl,-syslibroot,/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk
LIBS = -L/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/qpy/QtOpenGL -L/opt/local/lib -lqpyopengl -lQtOpenGL -L/opt/local/lib -lQtGui -lQtCore -lQtGui -L/opt/local/lib -lQtCore -lQtCore -framework OpenGL -framework AGL
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
	@test -d $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtOpenGL || mkdir -p $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtOpenGL
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtOpenGL/qgl.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtOpenGL/qgl.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtOpenGL/qglbuffer.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtOpenGL/qglbuffer.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtOpenGL/qglcolormap.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtOpenGL/qglcolormap.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtOpenGL/qglframebufferobject.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtOpenGL/qglframebufferobject.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtOpenGL/qglpixelbuffer.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtOpenGL/qglpixelbuffer.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtOpenGL/qglshaderprogram.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtOpenGL/qglshaderprogram.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtOpenGL/QtOpenGLmod.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtOpenGL/QtOpenGLmod.sip

clean:
	-rm -f $(TARGET)
	-rm -f sipQtOpenGLcmodule.o
	-rm -f sipQtOpenGLQList0101QGLShader.o
	-rm -f sipQtOpenGLQGLShaderProgram.o
	-rm -f sipQtOpenGLQGLShaderShaderType.o
	-rm -f sipQtOpenGLQGLShader.o
	-rm -f sipQtOpenGLQGLPixelBuffer.o
	-rm -f sipQtOpenGLQGLFramebufferObjectFormat.o
	-rm -f sipQtOpenGLQGLFramebufferObject.o
	-rm -f sipQtOpenGLQGLColormap.o
	-rm -f sipQtOpenGLQGLBuffer.o
	-rm -f sipQtOpenGLQGLWidget.o
	-rm -f sipQtOpenGLQGLContextBindOptions.o
	-rm -f sipQtOpenGLQGLContext.o
	-rm -f sipQtOpenGLQGLFormatOpenGLVersionFlags.o
	-rm -f sipQtOpenGLQGLFormat.o
	-rm -f sipQtOpenGLQGLFormatOptions.o
	-rm -f sipQtOpenGLQGL.o
