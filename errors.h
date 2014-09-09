/*
 * John Goettsche
 * CS445
 *
 * defines ErrorMessage structure
 */

#include <stdlib.h> 
#include <stdio.h>

typedef struct ErrorMessage ErrorMessage;
struct ErrorMessage{
   int number;
	char *errorType;
	char *message;
};

FILE *ef;
extern ErrorMessage *e_message;
