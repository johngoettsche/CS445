#include <stdio.h>
#include <stdlib.h>

#define HEAD 2;

extern FILE *yyin;
extern char *yytext;
extern int line_num;

typedef struct Token Token;
struct Token{
  int count;
  int category;
  char *text;
  int lineno;
  char *filename;
  int ival;
  int *sval;
};

typedef struct TokenList TokenList;
struct TokenList {
  struct Token *t;
  struct TokenList *next;
};

void printToken(Token *token)
{  
  fprintf(stdout, "%6d  %16s%8d%16s\n", token->category, token->text, token->lineno, token->filename);
  fflush(stdout);
}

void printAllTokens(TokenList *current)
{
  fprintf(stdout, "Category    Text            Lineno  Filename        Ival/Sval\n");
  fprintf(stdout, "-------------------------------------------------------------\n");
  while(current->t != NULL){
    printToken(current->t);
    current = current->next;
  }
}

main(int argc, char **argv)
{
  TokenList *current;
  char *fname;
  int tokenLabel;
  int count = 0;

  if (argc > 0) fname = argv[1];
  yyin = fopen(fname, "r");
  if(yyin == NULL) {
    printf("Error reading file");
    exit(1);
  }
  TokenList *head = (TokenList *)calloc(1, sizeof(TokenList));
  TokenList *list = head;
  list->t = NULL;
  list->next = NULL;

  while(tokenLabel = yylex() != -1){
    int length = yylen + 1;
    char *string = (char *)calloc(length, sizeof(char));
	 stpcpy(string, yytext);
    Token *token = (Token *)calloc(1, sizeof(Token));
    token->category = tokenLabel;
    token->text = string;
    token->lineno = line_num;
    token->filename =fname;
 
    if(list->t == NULL)list->t = token;
    else{
      TokenList *item = (TokenList *)calloc(1, sizeof(TokenList));
      item->t = token;
      item->next = NULL;
   
      list->next = item;
      list = list->next;
    }
  }  
  printAllTokens(head);
  return 0;
}
