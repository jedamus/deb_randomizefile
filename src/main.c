/* -*- C -*- */
/* main.c */
/* erzeugt Montag, 28. Oktober 2019 13:27 (C) 2019 von Leander Jedamus */
/* modifiziert Montag, 02. Dezember 2019 05:33 von Leander Jedamus */
/* modifiziert Montag, 25. November 2019 13:39 von Leander Jedamus */
/* modifiziert Donnerstag, 21. November 2019 07:20 von Leander Jedamus */
/* modifiziert Mittwoch, 20. November 2019 13:18 von Leander Jedamus */
/* modifiziert Dienstag, 12. November 2019 11:52 von Leander Jedamus */
/* modifiziert Donnerstag, 07. November 2019 11:17 von Leander Jedamus */
/* modifiziert Montag, 28. Oktober 2019 17:07 von Leander Jedamus */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <config.h>
#include "knoten.h"
#include "sqrt.h"
#include "gettext.h"

#define MAXZEILE 32768

void usage(char * prog_name) {
  printf(_("This is %s in %s.\n"),PACKAGE_STRING,LOCALEDIR);
  printf("%s <quelldatei> <zieldatei> <randomseed>\n",prog_name);
  exit(-1);
};/* usage */

int main(int argc, char * argv[]) {

  FILE * textfile;
  char zeile[MAXZEILE];
  char * zeileptr;
  Listenptr listenptr = NULL;
  Listenptr lptr = NULL;
  Listenptr lptr2 = NULL;
  int randomnumber = 0;
  int zeilen = 0;

  setlocale(LC_ALL, "");
  /* setlocale(LC_CTYPE, "");  */
  /* setlocale(LC_MESSAGES, ""); */

  bindtextdomain(PACKAGE, LOCALEDIR);
  textdomain(PACKAGE);

  if (argc < 4) {
    usage(argv[0]);
  };

  sscanf(argv[3],"%d",&randomnumber);
  srand(randomnumber);
  printf("%.14f\n",get_sqrt(2));

  zeileptr = (char *) zeile;
  /* printf("reading from %s",argv[1]); */
  textfile = fopen(argv[1],"r");
  while (! feof(textfile)) {
    zeileptr = fgets(zeileptr,MAXZEILE,textfile);

    if (zeileptr != NULL) {
      /* printf("%d %s",(int) strlen(zeileptr),zeileptr); */
      if (listenptr == NULL) {
	listenptr = Listenalloc();
	lptr = listenptr;
      } else {
	lptr->naechster = Listenalloc();
	lptr = lptr->naechster;
      };
      lptr->zeile=(char *)malloc(strlen(zeileptr));
      lptr->naechster = NULL;
      strcpy(lptr->zeile,zeileptr);
      zeilen++;
    };
  };
  fclose(textfile);
  lptr->naechster = listenptr;

  lptr = listenptr;
  textfile = fopen(argv[2],"w");
  while (zeilen-- > 0) {
    int i = rand() % 32768;
    while (i-- > 0) {
      lptr = lptr->naechster;
    };
    strcpy(zeile,lptr->naechster->zeile);
    fputs(zeile,textfile);
    free(lptr->naechster->zeile);
    lptr2 = lptr->naechster;
    lptr->naechster = lptr->naechster->naechster;
    free(lptr2);
  };
  fclose(textfile);
};/* main */

/* vim:set cindent ai sw=2: */

