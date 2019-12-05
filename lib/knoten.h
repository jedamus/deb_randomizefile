/* -*- C -*- */
/* knoten.h */
/* erzeugt Donnerstag, 07. November 2019 11:14 (C) 2019 von Leander Jedamus */
/* modifiziert Donnerstag, 07. November 2019 11:17 von Leander Jedamus */

#ifndef KNOTEN_H
#define KNOTEN_H 1

typedef struct Liste *Listenptr;
typedef struct Liste {
  char      *zeile;
  Listenptr naechster;
} Listenknoten;

Listenptr Listenalloc(void);

#endif /* KNOTEN_H */

/* vim:set cindent ai sw=2 */

