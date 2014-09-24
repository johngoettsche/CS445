/* A Bison parser, made by GNU Bison 2.4.2.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2006, 2009-2010 Free Software
   Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PLUS = 258,
     MINUS = 259,
     MUL = 260,
     DIV = 261,
     MOD = 262,
     ER = 263,
     AND = 264,
     OR = 265,
     NOT = 266,
     BANG = 267,
     LT = 268,
     GT = 269,
     ASN = 270,
     COLON = 271,
     LB = 272,
     RB = 273,
     LC = 274,
     RC = 275,
     LP = 276,
     RP = 277,
     QUEST = 278,
     DOT = 279,
     AT = 280,
     DOLLAR = 281,
     SM = 282,
     CM = 283,
     POUND = 284,
     ARROW = 285,
     ARROW_STAR = 286,
     DEC = 287,
     EQ = 288,
     GE = 289,
     INC = 290,
     LE = 291,
     LOG_AND = 292,
     LOG_OR = 293,
     NE = 294,
     SHL = 295,
     SHR = 296,
     ASS_ADD = 297,
     ASS_AND = 298,
     ASS_DIV = 299,
     ASS_MOD = 300,
     ASS_MUL = 301,
     ASS_OR = 302,
     ASS_SHL = 303,
     ASS_SHR = 304,
     ASS_SUB = 305,
     ASS_XOR = 306,
     DOT_STAR = 307,
     ELLIPSIS = 308,
     SCOPE = 309,
     PRIVATE = 310,
     PROTECTED = 311,
     PUBLIC = 312,
     BOOL = 313,
     CHAR = 314,
     DOUBLE = 315,
     FLOAT = 316,
     INT = 317,
     LONG = 318,
     SHORT = 319,
     SIGNED = 320,
     UNSIGNED = 321,
     VOID = 322,
     WCHAR_T = 323,
     CLASS = 324,
     ENUM = 325,
     NAMESPACE = 326,
     STRUCT = 327,
     TYPENAME = 328,
     UNION = 329,
     CONST = 330,
     VOLATILE = 331,
     AUTO = 332,
     EXPLICIT = 333,
     EXPORT = 334,
     EXTERN = 335,
     FRIEND = 336,
     INLINE = 337,
     MUTABLE = 338,
     REGISTER = 339,
     STATIC = 340,
     TEMPLATE = 341,
     TYPEDEF = 342,
     USING = 343,
     VIRTUAL = 344,
     ASM = 345,
     BREAK = 346,
     CASE = 347,
     CATCH = 348,
     CONST_CAST = 349,
     CONTINUE = 350,
     DEFAULT = 351,
     DELETE = 352,
     DO = 353,
     DYNAMIC_CAST = 354,
     ELSE = 355,
     FALSE = 356,
     FOR = 357,
     GOTO = 358,
     IF = 359,
     NEW = 360,
     OPERATOR = 361,
     REINTERPRET_CAST = 362,
     RETURN = 363,
     SIZEOF = 364,
     STATIC_CAST = 365,
     SWITCH = 366,
     THIS = 367,
     THROW = 368,
     TRUE = 369,
     TRY = 370,
     TYPEID = 371,
     WHILE = 372,
     PDEFINE = 373,
     CCON = 374,
     FCON = 375,
     IDENT = 376,
     ICON = 377,
     STRING = 378,
     SHIFT_THERE = 379,
     REDUCE_HERE_MOSTLY = 380
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1685 of yacc.c  */
#line 36 "cparser.y"

	struct token *t;
	struct node *n;



/* Line 1685 of yacc.c  */
#line 183 "cparser.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


