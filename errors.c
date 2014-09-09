/*
 * John Goettsche
 * CS445
 *
 * contains 
 */
 
#include "errors.h" 

void getErrorMessage(int ecode){
   int code;
	char *etype;
	char *mes;
	e_message = (ErrorMessage *)calloc(1, sizeof(ErrorMessage));
	ef = fopen("errors.txt", "r");
printf("finding errors\n");
	while(fscanf(ef, "%d %s %s", &code, etype, mes) != EOF){
		printf("%d\n", code);
		if(code == ecode){
			e_message->number = code;
			e_message->errorType = etype;
			e_message->message = mes;
		}
	}
	close(ef);
printf("finished reading file\n");
}
