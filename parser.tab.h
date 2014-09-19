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
     IDENT = 258,
     ICON = 259,
     FCON = 260,
     CCON = 261,
     STRING = 262,
     TYPEDEF_NAME = 263,
     NAMESPACE_NAME = 264,
     CLASS_NAME = 265,
     ENUM_NAME = 266,
     TEMPLATE_NAME = 267,
     ELIPSIS = 268,
     COLONCOLON = 269,
     PLASN = 270,
     MIASN = 271,
     MUASN = 272,
     DIASN = 273,
     MOASN = 274,
     ANASN = 275,
     ORASN = 276,
     SHL = 277,
     SHR = 278,
     EQ = 279,
     NE = 280,
     LE = 281,
     GE = 282,
     ANDAND = 283,
     OROR = 284,
     INCOP = 285,
     DECOP = 286,
     FOLLOW = 287,
     AUTO = 288,
     BOOL = 289,
     BREAK = 290,
     CASE = 291,
     CHAR = 292,
     CLASS = 293,
     CONST = 294,
     CONTINUE = 295,
     DEFAULT = 296,
     DELETE = 297,
     DO = 298,
     DOUBLE = 299,
     ELSE = 300,
     ENUM = 301,
     EXTERN = 302,
     FALSE = 303,
     FLOAT = 304,
     FOR = 305,
     GOTO = 306,
     IF = 307,
     INT = 308,
     LONG = 309,
     NAMESPACE = 310,
     NEW = 311,
     PRIVATE = 312,
     PUBLIC = 313,
     REGISTER = 314,
     RETURN = 315,
     SHORT = 316,
     SIGNED = 317,
     SIZEOF = 318,
     STATIC = 319,
     STRUCT = 320,
     SWITCH = 321,
     TRUE = 322,
     TYPEDEF = 323,
     UNION = 324,
     UNSIGNED = 325,
     USING = 326,
     VOID = 327,
     VOLATILE = 328,
     WHILE = 329,
     ERASN = 330,
     SM = 331,
     LC = 332,
     RC = 333,
     CM = 334,
     COLON = 335,
     ASN = 336,
     LP = 337,
     RP = 338,
     LB = 339,
     RB = 340,
     DOT = 341,
     AND = 342,
     BANG = 343,
     NOT = 344,
     MINUS = 345,
     PLUS = 346,
     MUL = 347,
     DIV = 348,
     MOD = 349,
     LT = 350,
     GT = 351,
     ER = 352,
     OR = 353,
     QUEST = 354,
     PDEFINE = 355
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


