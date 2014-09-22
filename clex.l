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
#include "cparser.tab.h"
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
                          getErrorMessage(ER_COM_CLOSE);
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

"asm"							{ return createToken(ASM); }
"auto"						{ return createToken(AUTO); }
"bool"                  { return createToken(BOOL); }
"break"                 { return createToken(BREAK); }
"case"                  { return createToken(CASE); }
"catch"						{ return createToken(CATCH); }
"char"                  { return createToken(CHAR); }
"class"						{ return createToken(CLASS); }
"const"                 { return createToken(CONST); }
"const_cast"				{ return createToken(CONST_CAST); }
"continue"              { return createToken(CONTINUE); }
"default"               { return createToken(DEFAULT); }
"delete"                { return createToken(DELETE); }
"do"                    { return createToken(DO); }
"double"                { return createToken(DOUBLE); }
"dynamic_cast"				{ return createToken(DYNAMIC_CAST); }
"else"                  { return createToken(ELSE); }
"enum"                  { return createToken(ENUM); }
"extern"                { return createToken(EXTERN); }
"explicit"					{ return createToken(EXPLICIT); }
"float"                 { return createToken(FLOAT); }
"friend"						{ return createToken(FRIEND); }
"for"                   { return createToken(FOR); }
"goto"                  { return createToken(GOTO); }
"if"                    { return createToken(IF); }
"inline"						{ return createToken(INLINE); }
"int"                   { return createToken(INT); }
"long"                  { return createToken(LONG); }
"mutable"					{ return createToken(MUTABLE); }
"new"                   { return createToken(NEW); }
"operator"					{ return createToken(OPERATOR); }
"private"					{ return createToken(PRIVATE); }
"public"						{ return createToken(PUBLIC); }
"protected"					{ return createToken(PROTECTED); }
"register"              { return createToken(REGISTER); }
"reinterpret_cast"		{ return createToken(REINTERPRET_CAST); }
"return"                { return createToken(RETURN); }
"short"                 { return createToken(SHORT); }
"signed"                { return createToken(SIGNED); }
"sizeof"                { return createToken(SIZEOF); }
"static"                { return createToken(STATIC); }
"static_cast"				{ return createToken(STATIC_CAST); }
"struct"                { StructKeywordSeen = 1; return createToken(STRUCT); }
"switch"                { return createToken(SWITCH); }
"template"					{ return createToken(TEMPLATE); }
"this"						{ return createToken(THIS); }
"throw"						{ return createToken(THROW); }
"try"							{ return createToken(TRY); }
"typedef"               { return createToken(TYPEDEF); }
"typeid"						{ return createToken(TYPEID); }
"typename"					{ return createToken(TYPENAME); }
"union"                 { return createToken(UNION); }
"unsigned"              { return createToken(UNSIGNED); }
"void"                  { return createToken(VOID); }
"volatile"              { return createToken(VOLATILE); }
"while"                 { return createToken(WHILE); }
"wchar_t"					{ return createToken(WCHAR_T); }
"using"                 { return createToken(USING); }
"virtual"					{ return createToken(VIRTUAL); }
"namespace"             { return createToken(NAMESPACE); }

"true"						{ return createToken(TRUE); }
"false"						{ return createToken(FALSE); }

"and"                   {return createToken(LOG_AND); }
"or"                    {return createToken(LOG_OR); }
"not"                   {return createToken(BANG); }

{L}({L}|{D})*           { return createToken(IDENT); }

{D}+{IS}?               { return createToken(ICON); }

"(\\.|[^\\'])+"         { return createToken(CCON); }
'(\\.|[^\\'])'          { return createToken(CCON); }
'(\\.|[^\\'])(\\.|[^\\'])+'          { getErrorMessage(ER_MALF_CHAR);
                                       lexerr(yytext); }

{D}+{FS}?               { return createToken(FCON); }
{D}*"."{D}+{FS}?        { return createToken(FCON); }
{D}+"."{D}*{FS}?        { return createToken(FCON); }

{LIT}                   { return createToken(STRING); }
\"(\\.|[^\\"])*         { getErrorMessage(ER_STRING_CLOSE);
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

"->*"							{ return createToken(ARROW_STAR); }
"..."							{ return createToken(ELLIPSIS); }
"::"                    { return createToken(SCOPE); }
".*"							{ return createToken(DOT_STAR); }
"+="                    { return createToken(ASS_ADD); }
"-="                    { return createToken(ASS_SUB); }
"*="                    { return createToken(ASS_MUL); }
"/="                    { return createToken(ASS_DIV); }
"%="                    { return createToken(ASS_MOD); }
"&="                    { return createToken(ASS_AND); }
"^="                    { return createToken(ASS_XOR); }
"|="                    { return createToken(ASS_OR); }
">>"                    { return createToken(SHR); }
"<<"                    { return createToken(SHL); }
"++"                    { return createToken(INC); }
"--"                    { return createToken(DEC); }
"->"                    { return createToken(ARROW); }
"&&"                    { return createToken(LOG_AND); }
"||"                    { return createToken(LOG_OR); }
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
"@"							{ return createToken(AT); }
"$"							{ return createToken(DOLLAR); }	
"#"							{ return createToken(POUND); }
.                       { getErrorMessage(ER_UNREC_TOKEN);
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
