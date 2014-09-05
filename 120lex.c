#include "120lex.h"

int main(int argc, char **argv)
{
   if(argc > 1) yyin = fopen(argv[1], "r");
	else {
		printf("Missing file name.\n");
		exit(1);
	}
   if(!yyin){
		printf("Error reading file %s\n", argv[1]);
		exit(1);
	}
   TokenList *head = (TokenList *)calloc(1, sizeof(TokenList));
   TokenList *current = head;
   current->t = NULL;
   current->next = NULL;
	fname = argv[1];
   while(tcode = yylex()){
      yytoken = (Token *)calloc(1, sizeof(Token));
		int er = define_token();
      if(current->t == NULL)current->t = yytoken;
      else{
         TokenList *item = (TokenList *)calloc(1, sizeof(TokenList));
         item->t = yytoken;
         item->next = NULL;
   
         current->next = item;
         current = current->next;
    }
  }   
  printAllTokens(head);
  return 0;
}
