/*
diff.h
----------

Projet diff

R�le : prototypes de la fonction diff en elle-m�me
*/

#ifndef DIFF_H_INCLUDED
#define DIFF_H_INCLUDED

#include "my_lib.h"

#define MAX_LINE_LENGTH	512
#define IGNORE_BLANK 1
#define IGNORE_CASE 2


void diff(FILE *f1, FILE *f2, OPTIONS *op);


#endif // DIFF_H_INCLUDED
