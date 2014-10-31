TARGET = QtSql.so
OFILES = sipQtSqlcmodule.o sipQtSqlQVector0100QVariant.o sipQtSqlQSqlResult.o sipQtSqlQSqlRelationalTableModel.o sipQtSqlQSqlTableModel.o sipQtSqlQSqlRelation.o sipQtSqlQSqlRelationalDelegate.o sipQtSqlQSqlQueryModel.o sipQtSqlQSqlQuery.o sipQtSqlQSqlIndex.o sipQtSqlQSqlRecord.o sipQtSqlQSqlField.o sipQtSqlQSqlError.o sipQtSqlQSqlDriver.o sipQtSqlQSqlDatabase.o sipQtSqlQSqlDriverCreatorBase.o sipQtSqlQSqlParamType.o sipQtSqlQSql.o
HFILES = sipAPIQtSql.h 

CC = /usr/bin/clang
CXX = /usr/bin/clang++
LINK = /usr/bin/clang++
CPPFLAGS = -DNDEBUG -DSIP_PROTECTED_IS_PUBLIC -Dprotected=public -DQT_NO_DEBUG -DQT_SQL_LIB -DQT_GUI_LIB -DQT_CORE_LIB -I. -I/opt/local/Library/Frameworks/Python.framework/Versions/2.7/include/python2.7 -I/opt/local/mkspecs/macx-g++ -I/opt/local/include/QtSql -I/opt/local/include/QtGui -I/opt/local/include/QtCore -I/opt/local/include
CFLAGS = -pipe -fPIC -arch x86_64 -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk -O2 -Wall -W
CXXFLAGS = -pipe -fPIC -arch x86_64 -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk -O2 -Wall -W
LFLAGS =  -headerpad_max_install_names -bundle -undefined dynamic_lookup -arch x86_64 -Wl,-syslibroot,/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX10.9.sdk
LIBS = -L/opt/local/lib -lQtSql -L/opt/local/lib -lQtCore -lQtGui -L/opt/local/lib -lQtCore -lQtCore
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
	@test -d $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtSql || mkdir -p $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtSql
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtSql/qsql.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtSql/qsql.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtSql/qsqldatabase.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtSql/qsqldatabase.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtSql/qsqldriver.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtSql/qsqldriver.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtSql/qsqlerror.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtSql/qsqlerror.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtSql/qsqlfield.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtSql/qsqlfield.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtSql/qsqlindex.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtSql/qsqlindex.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtSql/qsqlquery.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtSql/qsqlquery.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtSql/qsqlquerymodel.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtSql/qsqlquerymodel.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtSql/qsqlrecord.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtSql/qsqlrecord.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtSql/qsqlrelationaldelegate.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtSql/qsqlrelationaldelegate.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtSql/qsqlrelationaltablemodel.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtSql/qsqlrelationaltablemodel.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtSql/qsqlresult.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtSql/qsqlresult.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtSql/qsqltablemodel.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtSql/qsqltablemodel.sip
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/PyQt-mac-gpl-4.11.2/sip/QtSql/QtSqlmod.sip $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/share/sip/PyQt4/QtSql/QtSqlmod.sip

clean:
	-rm -f $(TARGET)
	-rm -f sipQtSqlcmodule.o
	-rm -f sipQtSqlQVector0100QVariant.o
	-rm -f sipQtSqlQSqlResult.o
	-rm -f sipQtSqlQSqlRelationalTableModel.o
	-rm -f sipQtSqlQSqlTableModel.o
	-rm -f sipQtSqlQSqlRelation.o
	-rm -f sipQtSqlQSqlRelationalDelegate.o
	-rm -f sipQtSqlQSqlQueryModel.o
	-rm -f sipQtSqlQSqlQuery.o
	-rm -f sipQtSqlQSqlIndex.o
	-rm -f sipQtSqlQSqlRecord.o
	-rm -f sipQtSqlQSqlField.o
	-rm -f sipQtSqlQSqlError.o
	-rm -f sipQtSqlQSqlDriver.o
	-rm -f sipQtSqlQSqlDatabase.o
	-rm -f sipQtSqlQSqlDriverCreatorBase.o
	-rm -f sipQtSqlQSqlParamType.o
	-rm -f sipQtSqlQSql.o
