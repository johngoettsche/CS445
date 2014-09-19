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
//#include "ytab.h"
#include "parser.tab.h"
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

void handle_include();
void pushFileStack();
void popFileStack();

int included_iostream = 0;
int included_cstdlib = 0;
int included_ctime = 0; 
int included_string = 0;
int included_fstream = 0;
int included_stdio = 0; 
int included_stdlib = 0;

/* #define DEBUG */

/* define globals */
Token *yytoken;
ErrorMessage *e_message;
int line_num = 1;
int com_line_num = 0;
int StructKeywordSeen = 0;
int errors = 0;
char *fname;
int tcode;
FILE *saved_yyin;
%}

%x COMMENT 
%x SCOMMENT
%%
"/*"                    { com_line_num = line_num;
                          BEGIN(COMMENT); }
<COMMENT,SCOMMENT>[^*\n]*        { }
<COMMENT,SCOMMENT>"*"+[^*/\n]    { }
<SCOMMENT>"*"+          { }
<COMMENT>\n             { line_num++; }
<SCOMMENT>\n            { line_num++; BEGIN(0); }
<COMMENT>"*"+"/"        { BEGIN(0); }
"//"                    { BEGIN(SCOMMENT); } 
<COMMENT><<EOF>>        { line_num = com_line_num;
                          getErrorMessage(COM_CLOSE);
                          lexerr(NULL);
								  BEGIN(0);
                          popFileStack();
     			              yypop_buffer_state();
                          if ( !YY_CURRENT_BUFFER ) {
                             yyterminate();
                          }
                        }

\n                      { line_num++; }
[ \t\f]+                { }

"bool"                  { return createToken(BOOL); }
"break"                 { return createToken(BREAK); }
"case"                  { return createToken(CASE); }
"char"                  { return createToken(CHAR); }
"class"						{ return createToken(CLASS); }
"const"                 { return createToken(CONST); }
"continue"              { return createToken(CONTINUE); }
"default"               { return createToken(DEFAULT); }
"delete"                { return createToken(DELETE); }
"do"                    { return createToken(DO); }
"double"                { return createToken(DOUBLE); }
"else"                  { return createToken(ELSE); }
"enum"                  { return createToken(ENUM); }
"extern"                { return createToken(EXTERN); }
"float"                 { return createToken(FLOAT); }
"for"                   { return createToken(FOR); }
"goto"                  { return createToken(GOTO); }
"if"                    { return createToken(IF); }
"int"                   { return createToken(INT); }
"long"                  { return createToken(LONG); }
"new"                   { return createToken(NEW); }
"private"					{ return createToken(PRIVATE); }
"public"						{ return createToken(PUBLIC); }
"register"              { return createToken(REGISTER); }
"return"                { return createToken(RETURN); }
"short"                 { return createToken(SHORT); }
"signed"                { return createToken(SIGNED); }
"sizeof"                { return createToken(SIZEOF); }
"static"                { return createToken(STATIC); }
"struct"                { StructKeywordSeen = 1; return createToken(STRUCT); }
"switch"                { return createToken(SWITCH); }
"typedef"               { return createToken(TYPEDEF); }
"union"                 { return createToken(UNION); }
"unsigned"              { return createToken(UNSIGNED); }
"void"                  { return createToken(VOID); }
"volatile"              { return createToken(VOLATILE); }
"while"                 { return createToken(WHILE); }

"using"                 { return createToken(USING); }
"namespace"             { return createToken(NAMESPACE); }

"true"						{ return createToken(TRUE); }
"false"						{ return createToken(FALSE); }

"and"                   {return createToken(ANDAND); }
"or"                    {return createToken(OROR); }
"not"                   {return createToken(BANG); }

{L}({L}|{D})*           { return createToken(IDENT); }

{D}+{IS}?               { return createToken(ICON); }

"(\\.|[^\\'])+"         { return createToken(CCON); }
'(\\.|[^\\'])'          { return createToken(CCON); }
'(\\.|[^\\'])(\\.|[^\\'])+'          { getErrorMessage(MALF_CHAR);
                                       lexerr(yytext); }

{D}+{FS}?               { return createToken(FCON); }
{D}*"."{D}+{FS}?        { return createToken(FCON); }
{D}+"."{D}*{FS}?        { return createToken(FCON); }

{LIT}                   { return createToken(STRING); }
\"(\\.|[^\\"])*         { getErrorMessage(STRING_CLOSE);
                          lexerr(NULL); }

"#include"[ ]*\"[^\\"]+\"  { handle_include(); }

"#include <iostream>"   { included_iostream = 1; }
"#include <cstdlib>"    { included_cstdlib = 1; }
"#include <ctime>"      { included_ctime = 1; }
"#include <string>"     { included_string = 1; }
"#include <string.h>"     { included_string = 1; }
"#include <fstream>"    { included_fstream = 1; }
"#include <stdio.h>"    { included_stdio = 1; }
"#include <stdlib.h>"   { included_stdlib = 1; }
"#define"               { return createToken(PDEFINE); }

"::"                    { return createToken(COLONCOLON); }
"+="                    { return createToken(PLASN); }
"-="                    { return createToken(MIASN); }
"*="                    { return createToken(MUASN); }
"/="                    { return createToken(DIASN); }
"%="                    { return createToken(MOASN); }
"&="                    { return createToken(ANASN); }
"^="                    { return createToken(ERASN); }
"|="                    { return createToken(ORASN); }
">>"                    { return createToken(SHR); }
"<<"                    { return createToken(SHL); }
"++"                    { return createToken(INCOP); }
"--"                    { return createToken(DECOP); }
"->"                    { return createToken(FOLLOW); }
"&&"                    { return createToken(ANDAND); }
"||"                    { return createToken(OROR); }
"<="                    { return createToken(LE); }
">="                    { return createToken(GE); }
"=="                    { return createToken(EQ); }
"!="                    { return createToken(NE); }
";"                     { return createToken(SM); }
"{"                     { return createToken(LC); }
"}"                     { return createToken(RC); }
","                     { return createToken(CM); }
":"                     { return createToken(COLON); }
"="                     { return createToken(ASN); }
"("                     { return createToken(LP); }
")"                     { return createToken(RP); }
"["                     { return createToken(LB); }
"]"                     { return createToken(RB); }
"."                     { return createToken(DOT); }
"&"                     { return createToken(AND); }
"!"                     { return createToken(BANG); }
"~"                     { return createToken(NOT); }
"-"                     { return createToken(MINUS); }
"+"                     { return createToken(PLUS); }
"*"                     { return createToken(MUL); }
"/"                     { return createToken(DIV); }
"%"                     { return createToken(MOD); }
"<"                     { return createToken(LT); }
">"                     { return createToken(GT); }
"^"                     { return createToken(ER); }
"|"                     { return createToken(OR); }
"?"                     { return createToken(QUEST); }
.                       { getErrorMessage(UNREC_TOKEN);
                          lexerr(yytext); }

<<EOF>>                 { popFileStack();
     			              yypop_buffer_state();
                          if ( !YY_CURRENT_BUFFER ) {
                             yyterminate();
                          }
                        }

%%

//extern int yychar;

int yywrap()
{
   return 1;
}

void pushFileStack(){
	FileStack *fileStack = (FileStack *)calloc(1, sizeof(FileStack));
	if(fileStack == NULL) memoryError();
	char *filename = (char *)calloc(strlen(fname) + 1, sizeof(char));
	if(filename == NULL) memoryError();
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
