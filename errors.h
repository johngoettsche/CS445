/*
 * John Goettsche
 * CS445
 *
 * defines ErrorMessage structure
 */

#include <string.h>
#include <stdlib.h> 
#include <stdio.h>
#include "errortab.h"
 
typedef struct ErrorMessage ErrorMessage;
struct ErrorMessage{
   int number;
	char *errorType;
	char *message;
};

FILE *ef;
extern ErrorMessage *e_message;
extern int errors;
extern char *fname;
extern int line_num;
extern char *yytext;
