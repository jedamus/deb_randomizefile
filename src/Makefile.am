LDADD = -lknoten -lsqrt -lm
AM_LDFLAGS = -L../lib
AM_CPPFLAGS = -I../lib -I../../../lib

bin_PROGRAMS = randomizefile
randomizefile_SOURCES = main.c gettext.h
randomizefile_CPPFLAGS = -DLOCALEDIR=\"$(localedir)\" -I../lib -I../../../lib
