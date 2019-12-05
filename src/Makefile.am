LDADD = -lknoten -lsqrt -lm
AM_LDFLAGS = -L../lib
AM_CPPFLAGS = -I../lib -I../../../lib

bin_PROGRAMS = am_randomize_file
am_randomize_file_SOURCES = main.c gettext.h
am_randomize_file_CPPFLAGS = -DLOCALEDIR=\"$(localedir)\" -I../lib -I../../../lib
