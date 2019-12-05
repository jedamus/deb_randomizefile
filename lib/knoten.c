/* -*- C -*- */
/* knoten.c */
/* erzeugt Montag, 28. Oktober 2019 13:27 (C) 2019 von Leander Jedamus */
/* modifiziert Donnerstag, 07. November 2019 11:16 von Leander Jedamus */
/* modifiziert Montag, 28. Oktober 2019 17:07 von Leander Jedamus */

#include <stdio.h>
#include <stdlib.h>
#include "knoten.h"

Listenptr Listenalloc(void) { 
  return (Listenptr) malloc(sizeof(Listenknoten));
}

/* vim:set cindent ai sw=2: */

