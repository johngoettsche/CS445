/*
 * John Goettsche
 * CS445
 *
 * yylex().
 */

D        [0-9]
L        [a-zA-Z_]
FS       (f|F|l|L)
IS       (u|U|l|L)
W        [ \t\f]*
LIT      \"(\\.|[^\\"])*\"

%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "ytab.h"
#include "token.h"
#include "errors.h"

/*
extern YYSTYPE yylval;
*/

typedef struct FileStack FileStack;
struct FileStack {
   char *filename;
	int lineno;
	FileStack *next;
};
FileStack *topFile = NULL;

void lexerr(char *s);
void handle_include();
void pushFileStack();
void popFileStack();

int included_iostream = 0;
int included_cstdlib = 0;
int included_ctime = 0; 
int included_string = 0;
int included_fstream = 0;

/* #define DEBUG */

/* define globals */
Token *yytoken;
ErrorMessage *e_message;
int line_num = 1;
int StructKeywordSeen = 0;
int errors = 0;
char *fname;
int tcode;
FILE *saved_yyin;
%}

%x COMMENT 
%x SCOMMENT
%%
"/*"                    { BEGIN(COMMENT); }
<COMMENT,SCOMMENT>[^*\n]*        { }
<COMMENT,SCOMMENT>"*"+[^*/\n]    { }
<SCOMMENT>"*"+          { }
<COMMENT>\n             { line_num++; }
<SCOMMENT>\n            { line_num++; BEGIN(0); }
<COMMENT>"*"+"/"        { BEGIN(0); }
"//"                    { BEGIN(SCOMMENT); } 

\n                      { line_num++; }
[ \t\f]+                { }

"bool"                  { return BOOL; }
"break"                 { return BREAK; }
"case"                  { return CASE; }
"char"                  { return CHAR; }
"const"                 { return CONST; }
"continue"              { return CONTINUE; }
"default"               { return DEFAULT; }
"delete"                { return DELETE; }
"do"                    { return DO; }
"double"                { return DOUBLE; }
"else"                  { return ELSE; }
"enum"                  { return ENUM; }
"extern"                { return EXTERN; }
"float"                 { return FLOAT; }
"for"                   { return FOR; }
"goto"                  { return GOTO; }
"if"                    { return IF; }
"int"                   { return INT; }
"long"                  { return LONG; }
"new"                   { return NEW; }
"register"              { return REGISTER; }
"return"                { return RETURN; }
"short"                 { return SHORT; }
"signed"                { return SIGNED; }
"sizeof"                { return SIZEOF; }
"static"                { return STATIC; }
"struct"                { StructKeywordSeen = 1; return STRUCT; }
"switch"                { return SWITCH; }
"typedef"               { return TYPEDEF; }
"union"                 { return UNION; }
"unsigned"              { return UNSIGNED; }
"void"                  { return VOID; }
"volatile"              { return VOLATILE; }
"while"                 { return WHILE; }

"using"                 { return USING; }
"namespace"             { return NAMESPACE; }

"and"                   {return ANDAND; }
"or"                    {return OROR; }
"not"                   {return BANG; }

{L}({L}|{D})*           { return IDENT; }

{D}+{IS}?               { return ICON; }

'(\\.|[^\\'])+'         { return CCON; }

{D}+{FS}?               { return FCON; }
{D}*"."{D}+{FS}?        { return FCON; }
{D}+"."{D}*{FS}?        { return FCON; }

{LIT}                   { return STRING; }

"#include"[ ]*\"[^\\"]+\"  { handle_include(); }

"#include <iostream>"   { included_iostream = 1; }
"#include <cstdlib>"    { included_cstdlib = 1; }
"#include <ctime>"      { included_ctime = 1; }
"#include <string>"     { included_string = 1; }
"#include <fstream>"    { included_fstream = 1; }

"::"                    { return COLONCOLON; }
"+="                    { return PLASN; }
"-="                    { return MIASN; }
"*="                    { return MUASN; }
"/="                    { return DIASN; }
"%="                    { return MOASN; }
"&="                    { return ANASN; }
"^="                    { return ERASN; }
"|="                    { return ORASN; }
">>"                    { return SHR; }
"<<"                    { return SHL; }
"++"                    { return INCOP; }
"--"                    { return DECOP; }
"->"                    { return FOLLOW; }
"&&"                    { return ANDAND; }
"||"                    { return OROR; }
"<="                    { return LE; }
">="                    { return GE; }
"=="                    { return EQ; }
"!="                    { return NE; }
";"                     { return SM; }
"{"                     { return LC; }
"}"                     { return RC; }
","                     { return CM; }
":"                     { return COLON; }
"="                     { return ASN; }
"("                     { return LP; }
")"                     { return RP; }
"["                     { return LB; }
"]"                     { return RB; }
"."                     { return DOT; }
"&"                     { return AND; }
"!"                     { return BANG; }
"~"                     { return NOT; }
"-"                     { return MINUS; }
"+"                     { return PLUS; }
"*"                     { return MUL; }
"/"                     { return DIV; }
"%"                     { return MOD; }
"<"                     { return LT; }
">"                     { return GT; }
"^"                     { return ER; }
"|"                     { return OR; }
"?"                     { return QUEST; }
.                       { getErrorMessage(1);
                          lexerr(yytext); }

<<EOF>>                 { popFileStack();
     			              yypop_buffer_state();
                          if ( !YY_CURRENT_BUFFER ) {
                             yyterminate();
                          }
                        }

%%

extern int yychar;
extern int errors;

void lexerr(char *s)
{
   errors++;
   fprintf(stderr, "error #%d: %s, line: %d ", errors, fname, line_num);
	fprintf(stderr, "%s\t\'%s\' %s\n",e_message->errorType, s, e_message->message);
	fflush(stderr);
}


yyerror(char *s)
{
   errors++;
   fprintf(stderr, "%s: ", s);

   /* to do: add mechanism for reporting file name and line number */

   fprintf(stderr, ", token = \"%s\"\n", yytext);
}

int yywrap()
{
   return 1;
}

void pushFileStack(){
	FileStack *fileStack = (FileStack *)calloc(1, sizeof(FileStack));
	char *filename = (char *)calloc(strlen(fname) + 1, sizeof(char));
	strcpy(filename, fname);
	fileStack->filename = filename;
	fileStack->lineno = line_num;
	if (topFile == NULL){
		topFile = fileStack;
		topFile->next = NULL;
	} else {
		fileStack->next = topFile;
		topFile = fileStack;
	}
}

void popFileStack(){
	if(topFile!=NULL){
		fname = topFile->filename;
		line_num = topFile->lineno;
		topFile=topFile->next;
	}
}

void handle_include()
{
	pushFileStack();
   line_num = 1;
   saved_yyin = yyin;
	
   fname = strchr(yytext, '\"')+1;
   fname[strlen(fname)-1] = '\0';
//fprintf(stdout, "included filename '%s'\n", fname); fflush(stdout);
   yyin = fopen(fname,"r");
   if (yyin == NULL) {
     lexerr("cannot open include file");
     exit(1);
   }
	yypush_buffer_state(yy_create_buffer(yyin, YY_BUF_SIZE));
}