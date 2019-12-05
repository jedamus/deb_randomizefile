#!/usr/bin/env sh

# erzeugt Mittwoch, 20. November 2019 14:15 (C) 2019 von Leander Jedamus
# modifiziert Montag, 02. Dezember 2019 02:53 von Leander Jedamus
# modifiziert Montag, 25. November 2019 10:09 von Leander Jedamus
# modifiziert Donnerstag, 21. November 2019 07:10 von Leander Jedamus
# modifiziert Mittwoch, 20. November 2019 14:16 von Leander Jedamus

autoreconf --install
gettextize -f
mv po/Makevars.template po/Makevars
./configure
make
make translate.sh
./translate.sh
src/am_randomize_file
sleep 10
make distcheck

# vim:ai sw=2

