#!/usr/bin/env sh

# erzeugt Donnerstag, 05. Dezember 2019 22:35 (C) 2019 von Leander Jedamus
# modifiziert Donnerstag, 05. Dezember 2019 22:42 von Leander Jedamus

mkdir debian
dch --create --package randomize_file
echo 9 > debian/compat

# vim:ai sw=2

