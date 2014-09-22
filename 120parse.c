#include "120parse.h"

int main(int argc, char **argv){
/*
	yytoken = (Token *)calloc(1, sizeof(Token));
	//create token list
	TokenList *head = (TokenList *)calloc(1, sizeof(TokenList));
	if(head == NULL) memoryError();
	TokenList *current = head;
	current->t = NULL;
	current->next = NULL;
		
   if(argc > 1) { 
		int f;
		//read each file in arguments
		for(f = 1; f < argc; f++) {
			fname = argv[f];
			FILE *infile = fopen(fname, "r");
			yyin = infile;
			line_num = 1;
			if(!yyin){
				printf("Error reading file %s\n", argv[f]);
				exit(1);
			}
			//create all tokens in file
			while(yytoken = (Token *)yylex()){
				if(current->t == NULL)current->t = yytoken;
				else{
					TokenList *item = (TokenList *)calloc(1, sizeof(TokenList));
					if(item == NULL) memoryError();
					item->t = yytoken;
					item->next = NULL;
   
					current->next = item;
					current = current->next;
				}
			}
			close(infile);
			yyrestart();
		}
	} else { //no files in arguments
		printf("Missing file name.\n");
		exit(1);
	}
	
   printAllTokens(head);*/
	printf("begin parse");
	yyparse();
	printf("done!");
   return 0;
}

TokenStackNode *createTokenStack(){
	TokenStackNode *top = (TokenStackNode *)calloc(1, sizeof(TokenStackNode));
	if(top == NULL) memoryError();
	return top;
}

TokenStackNode *pushTokenStack(TokenStackNode *top, Token *token){
	TokenStackNode *newNode = (TokenStackNode *)calloc(1, sizeof(TokenStackNode));
	if(newNode == NULL) memoryError();
	newNode->t = token;
	newNode->next = top;
	top = newNode;
	return top;
}

TokenStackNode *popTokenStack(TokenStackNode *top){
	top = top->next;
	return top;
}

TokenStackNode *topTokenStack(TokenStackNode *top){
	return top;
}