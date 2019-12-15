EXTRA_DIST = LINGUAS POTFILES.in

EXTRA_DIST += @PACKAGE@.po @PACKAGE@.po.old

EXTRA_DIST += @PACKAGE@_de.po @PACKAGE@_de.po.old
EXTRA_DIST += de/LC_MESSAGES/@PACKAGE@.mo

EXTRA_DIST += @PACKAGE@_en.po @PACKAGE@_en.po.old
EXTRA_DIST += en/LC_MESSAGES/@PACKAGE@.mo

localedir = $(datadir)/locale

install-data-local:
		    $(MKDIR_P) $(DESTDIR)$(localedir)/de/LC_MESSAGES
		    chmod u+rwx $(DESTDIR)$(localedir)/de/LC_MESSAGES
		    $(INSTALL) -m 644 $(srcdir)/de/LC_MESSAGES/@PACKAGE@.mo $(DESTDIR)$(localedir)/de/LC_MESSAGES
		    $(MKDIR_P) $(DESTDIR)$(localedir)/en/LC_MESSAGES
		    chmod u+rwx $(DESTDIR)$(localedir)/en/LC_MESSAGES
		    $(INSTALL) -m 644 $(srcdir)/en/LC_MESSAGES/@PACKAGE@.mo $(DESTDIR)$(localedir)/en/LC_MESSAGES

uninstall-local:
		    rm -f $(DESTDIR)$(localedir)/de/LC_MESSAGES/@PACKAGE@.mo
		    rm -f $(DESTDIR)$(localedir)/en/LC_MESSAGES/@PACKAGE@.mo
