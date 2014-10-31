TARGET = QtDBus.so
OFILES = sipQtDBuscmodule.o sipQtDBusQDBusReply0100QString.o sipQtDBusQDBusReply0100QStringList.o sipQtDBusQDBusReply0100QDBusConnectionInterfaceRegisterServiceReply.o sipQtDBusQDBusReply1900.o sipQtDBusQDBusReply2600.o sipQtDBusQDBusReply0400.o sipQtDBusQPyDBusReply.o sipQtDBusQPyDBusPendingReply.o sipQtDBusQDBusUnixFileDescriptor.o sipQtDBusQDBusServiceWatcherWatchMode.o sipQtDBusQDBusServiceWatcher.o sipQtDBusQDBusPendingCallWatcher.o sipQtDBusQDBusPendingCall.o sipQtDBusQDBusMessage.o sipQtDBusQDBusInterface.o sipQtDBusQDBusVariant.o sipQtDBusQDBusSignature.o sipQtDBusQDBusObjectPath.o sipQtDBusQDBusError.o sipQtDBusQDBusConnectionInterface.o sipQtDBusQDBusConnectionConnectionCapabilities.o sipQtDBusQDBusConnectionRegisterOptions.o sipQtDBusQDBusConnection.o sipQtDBusQDBus.o sipQtDBusQDBusArgument.o sipQtDBusQDBusAbstractInterface.o sipQtDBusQDBusAbstractAdaptor.o
HFILES = sipAPIQtDBus.h 

CC = /usr/bin/clang
CXX = /usr/bin/clang++
LINK = /usr/bin/clang++
CPPFLAGS = -DNDEBUG -DSIP_PROTECTED_IS_PUBLIC -Dprotected=public -DQT_NO_DEBUG -DQT_CORE_LIB -I. -I/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/qpy/QtDBus -I/opt/local/Library/Frameworks/Python.framework/Versions/2.7/include/python2.7 -I/opt/local/mkspecs/macx-g++ -I/opt/local/include/QtDBus -I/opt/local/include/QtCore -I/opt/local/include
CFLAGS = -pipe -fPIC -arch x86_64 -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk -O2 -Wall -W
CXXFLAGS = -pipe -fPIC -arch x86_64 -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk -O2 -Wall -W
LFLAGS =  -headerpad_max_install_names -bundle -undefined dynamic_lookup -arch x86_64 -Wl,-syslibroot,/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk
LIBS = -L/Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/qpy/QtDBus -L/opt/local/lib -lqpydbus -lQtDBus -L/opt/local/lib -lQtXml -lQtCore -lQtCore
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
	@test -d $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtDBus || mkdir -p $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtDBus
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtDBus/qdbusabstractadaptor.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtDBus/qdbusabstractadaptor.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtDBus/qdbusabstractinterface.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtDBus/qdbusabstractinterface.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtDBus/qdbusargument.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtDBus/qdbusargument.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtDBus/qdbusconnection.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtDBus/qdbusconnection.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtDBus/qdbusconnectioninterface.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtDBus/qdbusconnectioninterface.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtDBus/qdbuserror.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtDBus/qdbuserror.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtDBus/qdbusextratypes.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtDBus/qdbusextratypes.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtDBus/qdbusinterface.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtDBus/qdbusinterface.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtDBus/qdbusmessage.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtDBus/qdbusmessage.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtDBus/qdbuspendingcall.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtDBus/qdbuspendingcall.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtDBus/qdbusservicewatcher.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtDBus/qdbusservicewatcher.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtDBus/qdbusunixfiledescriptor.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtDBus/qdbusunixfiledescriptor.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtDBus/qpydbuspendingreply.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtDBus/qpydbuspendingreply.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtDBus/qpydbusreply.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtDBus/qpydbusreply.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtDBus/QtDBusmod.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtDBus/QtDBusmod.sip

clean:
	-rm -f $(TARGET)
	-rm -f sipQtDBuscmodule.o
	-rm -f sipQtDBusQDBusReply0100QString.o
	-rm -f sipQtDBusQDBusReply0100QStringList.o
	-rm -f sipQtDBusQDBusReply0100QDBusConnectionInterfaceRegisterServiceReply.o
	-rm -f sipQtDBusQDBusReply1900.o
	-rm -f sipQtDBusQDBusReply2600.o
	-rm -f sipQtDBusQDBusReply0400.o
	-rm -f sipQtDBusQPyDBusReply.o
	-rm -f sipQtDBusQPyDBusPendingReply.o
	-rm -f sipQtDBusQDBusUnixFileDescriptor.o
	-rm -f sipQtDBusQDBusServiceWatcherWatchMode.o
	-rm -f sipQtDBusQDBusServiceWatcher.o
	-rm -f sipQtDBusQDBusPendingCallWatcher.o
	-rm -f sipQtDBusQDBusPendingCall.o
	-rm -f sipQtDBusQDBusMessage.o
	-rm -f sipQtDBusQDBusInterface.o
	-rm -f sipQtDBusQDBusVariant.o
	-rm -f sipQtDBusQDBusSignature.o
	-rm -f sipQtDBusQDBusObjectPath.o
	-rm -f sipQtDBusQDBusError.o
	-rm -f sipQtDBusQDBusConnectionInterface.o
	-rm -f sipQtDBusQDBusConnectionConnectionCapabilities.o
	-rm -f sipQtDBusQDBusConnectionRegisterOptions.o
	-rm -f sipQtDBusQDBusConnection.o
	-rm -f sipQtDBusQDBus.o
	-rm -f sipQtDBusQDBusArgument.o
	-rm -f sipQtDBusQDBusAbstractInterface.o
	-rm -f sipQtDBusQDBusAbstractAdaptor.o
