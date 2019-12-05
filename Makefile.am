SUBDIRS = lib src po
dist_doc_DATA = README
# DIST_SOURCES = run_me_once.sh translate.sh.in
EXTRA_DIST = run_me_once.sh translate.sh.in translate.sh

do_subst = sed -e 's,[@]datadir[@],$(datadir),g' \
               -e 's,[@]PERL[@],$(PERL),g'       \
	       -e 's,[@]PACKAGE[@],$(PACKAGE),g' \
	       -e 's,[@]VERSION[@],$(VERSION),g'

translate.sh: translate.sh.in
	      $(do_subst) < translate.sh.in > translate.sh
	      chmod +x translate.sh

ACLOCAL_AMFLAGS = -I m4
