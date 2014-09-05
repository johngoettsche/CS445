extern char *yytext;
extern int line_num;

typedef struct Token Token;
struct Token{
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

extern Token *yytoken;
extern int tcode;
extern char *fname;