
all:
	@(cd sipgen; $(MAKE))
	@(cd siplib; $(MAKE))

install:
	@(cd sipgen; $(MAKE) install)
	@(cd siplib; $(MAKE) install)
	@test -d $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/lib/python2.7/site-packages || mkdir -p $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/lib/python2.7/site-packages
	cp -f sipconfig.py $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/lib/python2.7/site-packages/sipconfig.py
	cp -f /Users/Kunwiji/Dropbox/Spectroscopy_paper/sip-4.16.3/sipdistutils.py $(DESTDIR)/opt/local/Library/Frameworks/Python.framework/Versions/2.7/lib/python2.7/site-packages/sipdistutils.py

clean:
	@(cd sipgen; $(MAKE) clean)
	@(cd siplib; $(MAKE) clean)
