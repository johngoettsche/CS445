#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "token.h"
#include "ytab.h"
//#include "cgram.tab.h"

char *cvnIntString(int length, int *stVal){
  char *st = (char *)calloc(length, sizeof(char));
  int s = 0;  /* 182 */
  int i;
  int escape = 0;
  for(i = 0; i < length; i++){
    if(escape == 0){
      if(stVal[i] != (int)'\"')
        if(stVal[i] == (int)'\\') escape = 1;
        else {
          st[s] = (char)stVal[i];
          s++;
        }
    }else{
      if(stVal[i] == (int)'n'){
        int ch = 10;
        st[s] = (char)ch;
        s++;
      }
      if(stVal[i] == (int)'t'){
        int ch = 9;
        st[s] = (char)ch;
        s++;
      }
      if(stVal[i] == (int)'\'' || stVal[i] == (int)'\"' || stVal[i] == (int)'\\') {
        int ch = 39;
        st[s] = (char)stVal[i];
        s++;
      }
      if(stVal[i] == (int)'0'){
        int ch = 0;
        st[s] = (char)ch;
        s++;
      }
      escape = 0;
    }
  }
  return st;
}

int define_token(){
   Token *token = yytoken;
	int length = strlen(yytext) + 1;
   char *text = (char *)calloc(length, sizeof(char));
   strcpy(text, yytext); 
   token->category = tcode;
   token->text = text;
   token->lineno = line_num;
	char *filename = (char *)calloc(strlen(fname) + 1, sizeof(char));
	strcpy(filename, fname);
   token->filename =filename;
   if(tcode == ICON) token->ival = atoi(token->text);
	else token->ival = NULL;
   if(tcode == STRING){
      token->ival = length;
      int *st = (int *)calloc(length, sizeof(int));
      int i;
      for(i = 0; i < length; i++) st[i] = (int)text[i];
      token->sval = st;
   }
	else token->sval = NULL;
	return 0;
}

void printToken(Token *token)
{ 
   if(token->category > 257) {
		fprintf(stdout, "%4d  %24s%8d%16s", token->category, token->text, token->lineno, token->filename);
		if(token->category == ICON){
			fprintf(stdout, "%24d\n", token->ival);
		}else if(token->category == STRING){
			int length = token->ival;
			char *st = cvnIntString(token->ival, token->sval);
			fprintf(stdout, "%24s\n", st);
			free(st);
		}else fprintf(stdout, "\n");
		fflush(stdout);
	}
}

void printAllTokens(TokenList *current)
{
  fprintf(stdout, "Category                  Text  Lineno        Filename              Ival/Sval\n");
  fprintf(stdout, "-----------------------------------------------------------------------------\n");
  while(current != NULL){
    printToken(current->t);
    current = current->next;
  }
}