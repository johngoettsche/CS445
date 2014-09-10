/*
 * John Goettsche
 * CS445
 *
 * contains 
 */
 
#include "errors.h" 

void getErrorMessage(int ecode){
   int size = 1024;
   int code;
	char line[size];
	char etype[size];
	char mes[size];
	e_message = (ErrorMessage *)calloc(1, sizeof(ErrorMessage));
	ef = fopen("errors.txt", "r");
	while(fgets(line, size, ef)){
		code = atoi(line);
		fgets(etype, size, ef);
		fgets(mes, size, ef);
		if(code == ecode){
			e_message->number = code;
			e_message->errorType = etype;
			e_message->message = mes;
		}
	}
	close(ef);
}
