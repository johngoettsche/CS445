/* A Bison parser, made by GNU Bison 2.4.2.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 34 "parser.y"

#include <stdio.h>
#include "errors.h"
#include "token.h"

extern int line_num;

//static void yyerror(char *s);


/* Line 189 of yacc.c  */
#line 83 "parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 225 "parser.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  108
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5266

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  103
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  124
/* YYNRULES -- Number of rules.  */
#define YYNRULES  381
/* YYNRULES -- Number of states.  */
#define YYNSTATES  646

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   355

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   101,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,   102,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      39,    41,    43,    45,    46,    48,    50,    53,    57,    59,
      61,    63,    66,    68,    72,    75,    77,    79,    81,    86,
      91,    95,   100,   104,   108,   112,   115,   118,   120,   124,
     131,   137,   143,   148,   153,   157,   161,   164,   166,   169,
     172,   175,   178,   183,   185,   187,   189,   191,   193,   195,
     197,   199,   205,   210,   215,   219,   224,   228,   232,   235,
     243,   250,   257,   263,   270,   276,   282,   287,   291,   294,
     296,   299,   301,   303,   307,   312,   316,   319,   323,   326,
     332,   337,   339,   344,   346,   348,   352,   356,   360,   362,
     366,   370,   372,   376,   380,   382,   386,   390,   394,   398,
     400,   404,   408,   410,   414,   416,   420,   422,   426,   428,
     432,   434,   438,   440,   446,   448,   452,   454,   456,   458,
     460,   462,   464,   466,   468,   470,   474,   476,   478,   480,
     482,   484,   486,   488,   490,   494,   499,   503,   506,   508,
     514,   516,   519,   525,   533,   539,   541,   546,   552,   560,
     569,   577,   585,   592,   594,   596,   599,   602,   606,   609,
     613,   615,   617,   620,   622,   624,   626,   628,   630,   632,
     634,   636,   640,   643,   646,   648,   650,   652,   654,   657,
     659,   661,   663,   665,   667,   669,   671,   673,   675,   677,
     679,   683,   686,   689,   691,   693,   695,   697,   699,   701,
     703,   705,   707,   709,   711,   713,   715,   717,   722,   726,
     730,   733,   738,   742,   746,   749,   751,   757,   762,   767,
     771,   773,   777,   779,   783,   785,   787,   789,   791,   793,
     795,   797,   799,   805,   811,   816,   817,   819,   821,   827,
     831,   834,   837,   839,   844,   851,   857,   863,   868,   874,
     879,   883,   885,   889,   892,   894,   896,   899,   901,   906,
     910,   914,   917,   919,   921,   926,   930,   934,   937,   940,
     942,   944,   946,   949,   951,   955,   958,   961,   963,   966,
     968,   971,   973,   976,   978,   980,   985,   989,   993,   996,
    1000,  1005,  1009,  1013,  1016,  1018,  1021,  1025,  1027,  1032,
    1036,  1039,  1041,  1045,  1047,  1049,  1054,  1058,  1062,  1065,
    1068,  1073,  1077,  1079,  1081,  1083,  1085,  1088,  1090,  1094,
    1097,  1101,  1104,  1107,  1109,  1112,  1114,  1116,  1118,  1122,
    1125,  1128,  1130,  1134,  1137,  1140,  1143,  1146,  1148,  1152,
    1156,  1159,  1162,  1164,  1166,  1168,  1171,  1173,  1177,  1182,
    1186,  1190,  1193,  1196,  1198,  1200,  1205,  1207,  1209,  1213,
    1215,  1217
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     118,     0,    -1,     8,    -1,   106,    -1,   107,    -1,     9,
      -1,     9,    -1,    10,    -1,   224,    -1,    11,    -1,    12,
      -1,     3,    -1,   113,    -1,   114,    -1,   115,    -1,   116,
      -1,   117,    -1,     4,    -1,     6,    -1,     5,    -1,     7,
      -1,    67,    -1,    48,    -1,    -1,   164,    -1,   112,    -1,
      14,   111,    -1,    82,   151,    83,    -1,   120,    -1,   121,
      -1,   111,    -1,    89,   108,    -1,   224,    -1,   123,    14,
     122,    -1,   123,    14,    -1,   108,    -1,   105,    -1,   119,
      -1,   124,    84,   151,    85,    -1,   124,    82,   125,    83,
      -1,   124,    82,    83,    -1,   172,    82,   125,    83,    -1,
     172,    82,    83,    -1,   124,    86,   126,    -1,   124,    32,
     126,    -1,   124,    30,    -1,   124,    31,    -1,   149,    -1,
     125,    79,   149,    -1,    14,   122,   173,    14,    89,   173,
      -1,    14,   173,    14,    89,   173,    -1,   122,   173,    14,
      89,   173,    -1,   173,    14,    89,   173,    -1,    14,   122,
      89,   173,    -1,    14,    89,   173,    -1,   122,    89,   173,
      -1,    89,   173,    -1,   124,    -1,    30,   136,    -1,    31,
     136,    -1,   128,   136,    -1,    63,   127,    -1,    63,    82,
     198,    83,    -1,   129,    -1,   135,    -1,    92,    -1,    99,
      -1,    91,    -1,    90,    -1,    88,    -1,    89,    -1,    14,
      56,   130,   131,   134,    -1,    56,   130,   131,   134,    -1,
      14,    56,   131,   134,    -1,    56,   131,   134,    -1,    14,
      56,   130,   131,    -1,    56,   130,   131,    -1,    14,    56,
     131,    -1,    56,   131,    -1,    14,    56,   130,    82,   198,
      83,   134,    -1,    56,   130,    82,   198,    83,   134,    -1,
      14,    56,    82,   198,    83,   134,    -1,    56,    82,   198,
      83,   134,    -1,    14,    56,   130,    82,   198,    83,    -1,
      56,   130,    82,   198,    83,    -1,    14,    56,    82,   198,
      83,    -1,    56,    82,   198,    83,    -1,    82,   125,    83,
      -1,   199,   132,    -1,   199,    -1,   194,   132,    -1,   194,
      -1,   133,    -1,    84,   151,    85,    -1,   133,    84,   152,
      85,    -1,    82,   125,    83,    -1,    82,    83,    -1,    14,
      42,   136,    -1,    42,   136,    -1,    14,    42,    84,    85,
     136,    -1,    42,    84,    85,   136,    -1,   127,    -1,    82,
     198,    83,   136,    -1,   136,    -1,   137,    -1,   138,    92,
     137,    -1,   138,    93,   137,    -1,   138,    94,   137,    -1,
     138,    -1,   139,    91,   138,    -1,   139,    90,   138,    -1,
     139,    -1,   140,    22,   139,    -1,   140,    23,   139,    -1,
     140,    -1,   141,    95,   140,    -1,   141,    96,   140,    -1,
     141,    26,   140,    -1,   141,    27,   140,    -1,   141,    -1,
     142,    24,   141,    -1,   142,    25,   141,    -1,   142,    -1,
     143,    99,   142,    -1,   143,    -1,   144,    97,   143,    -1,
     144,    -1,   145,    98,   144,    -1,   145,    -1,   146,    28,
     145,    -1,   146,    -1,   147,    29,   146,    -1,   147,    -1,
     147,    99,   151,    80,   149,    -1,   148,    -1,   147,   150,
     149,    -1,    81,    -1,    17,    -1,    18,    -1,    19,    -1,
      15,    -1,    16,    -1,    20,    -1,    21,    -1,   149,    -1,
     151,    79,   149,    -1,   148,    -1,   154,    -1,   155,    -1,
     156,    -1,   158,    -1,   160,    -1,   162,    -1,   163,    -1,
     111,    80,   153,    -1,    36,   152,    80,   153,    -1,    41,
      80,   153,    -1,   151,    76,    -1,    76,    -1,    77,   157,
      78,    77,    78,    -1,   153,    -1,   157,   153,    -1,    52,
      82,   159,    83,   153,    -1,    52,    82,   159,    83,   153,
      45,   153,    -1,    66,    82,   159,    83,   153,    -1,   151,
      -1,   199,   192,    81,   149,    -1,    74,    82,   159,    83,
     153,    -1,    43,   153,    74,    82,   151,    83,    76,    -1,
      50,    82,   161,   159,    76,   151,    83,   153,    -1,    50,
      82,   161,   159,    76,    83,   153,    -1,    50,    82,   161,
      76,   151,    83,   153,    -1,    50,    82,   161,    76,    83,
     153,    -1,   155,    -1,   167,    -1,    35,    76,    -1,    40,
      76,    -1,    60,   151,    76,    -1,    60,    76,    -1,    51,
     111,    76,    -1,   166,    -1,   165,    -1,   164,   165,    -1,
     166,    -1,   202,    -1,   189,    -1,   179,    -1,   167,    -1,
     185,    -1,   187,    -1,   188,    -1,   169,   190,    76,    -1,
     190,    76,    -1,   169,    76,    -1,    76,    -1,   170,    -1,
     171,    -1,    68,    -1,   169,   168,    -1,   168,    -1,    33,
      -1,    59,    -1,    64,    -1,    47,    -1,   111,    -1,   172,
      -1,   207,    -1,   175,    -1,   174,    -1,   196,    -1,    14,
     122,   173,    -1,    14,   173,    -1,   122,   173,    -1,   173,
      -1,    37,    -1,    34,    -1,    61,    -1,    53,    -1,    54,
      -1,    62,    -1,    70,    -1,    49,    -1,    44,    -1,    72,
      -1,   108,    -1,   109,    -1,   104,    -1,   209,    14,   122,
     111,    -1,   209,    14,   111,    -1,   209,   122,   111,    -1,
     209,   111,    -1,    46,    14,   122,   111,    -1,    46,    14,
     111,    -1,    46,   122,   111,    -1,    46,   111,    -1,   111,
      -1,    46,   111,    77,   176,    78,    -1,    46,    77,   176,
      78,    -1,    46,   111,    77,    78,    -1,    46,    77,    78,
      -1,   177,    -1,   176,    79,   177,    -1,   178,    -1,   178,
      81,   152,    -1,   111,    -1,   106,    -1,   107,    -1,   111,
      -1,   180,    -1,   183,    -1,   181,    -1,   182,    -1,    55,
     111,    77,   184,    78,    -1,    55,   106,    77,   184,    78,
      -1,    55,    77,   184,    78,    -1,    -1,   164,    -1,   111,
      -1,    55,   111,    81,   186,    76,    -1,    14,   122,   105,
      -1,    14,   105,    -1,   122,   105,    -1,   105,    -1,    71,
      14,   121,    76,    -1,    71,    55,    14,   122,   105,    76,
      -1,    71,    55,    14,   105,    76,    -1,    71,    55,   122,
     105,    76,    -1,    71,    55,   105,    76,    -1,    47,   116,
      77,   164,    78,    -1,    47,   116,    77,    78,    -1,    47,
     116,   165,    -1,   191,    -1,   190,    79,   191,    -1,   192,
     204,    -1,   192,    -1,   193,    -1,   194,   192,    -1,   197,
      -1,   193,    84,   152,    85,    -1,   193,    84,    85,    -1,
      82,   192,    83,    -1,    92,   195,    -1,    92,    -1,    99,
      -1,    14,   122,    92,   195,    -1,   122,    92,   195,    -1,
      14,   122,    92,    -1,   122,    92,    -1,   196,   195,    -1,
     196,    -1,    39,    -1,    73,    -1,    14,   120,    -1,   120,
      -1,    14,   122,   173,    -1,    14,   173,    -1,   122,   173,
      -1,   173,    -1,   199,   200,    -1,   199,    -1,   171,   199,
      -1,   171,    -1,   194,   200,    -1,   194,    -1,   201,    -1,
     201,    84,   152,    85,    -1,   201,    84,    85,    -1,    84,
     152,    85,    -1,    84,    85,    -1,    82,   200,    83,    -1,
     169,   192,   220,   203,    -1,   192,   220,   203,    -1,   169,
     192,   203,    -1,   192,   203,    -1,   156,    -1,    81,   205,
      -1,    82,   125,    83,    -1,   149,    -1,    77,   206,    79,
      78,    -1,    77,   206,    78,    -1,    77,    78,    -1,   205,
      -1,   206,    79,   205,    -1,   111,    -1,   224,    -1,   208,
      77,   210,    78,    -1,   208,    77,    78,    -1,   209,   111,
     216,    -1,   209,   111,    -1,   209,   216,    -1,   209,   122,
     111,   216,    -1,   209,   122,   111,    -1,   209,    -1,    38,
      -1,    65,    -1,    69,    -1,   211,   210,    -1,   211,    -1,
     219,    80,   210,    -1,   219,    80,    -1,   169,   212,    76,
      -1,   212,    76,    -1,   169,    76,    -1,    76,    -1,   202,
      76,    -1,   202,    -1,   187,    -1,   213,    -1,   212,    79,
     213,    -1,   192,   214,    -1,   192,   215,    -1,   192,    -1,
     111,    80,   152,    -1,    80,   152,    -1,    81,   101,    -1,
      81,   152,    -1,    80,   217,    -1,   218,    -1,   217,    79,
     218,    -1,    14,   122,   108,    -1,    14,   108,    -1,   122,
     108,    -1,   108,    -1,    57,    -1,    58,    -1,    80,   221,
      -1,   222,    -1,   222,    79,   221,    -1,   223,    82,   125,
      83,    -1,   223,    82,    83,    -1,    14,   122,   108,    -1,
      14,   108,    -1,   122,   108,    -1,   108,    -1,   111,    -1,
     110,    95,   225,    96,    -1,   111,    -1,   226,    -1,   225,
      79,   226,    -1,   149,    -1,   198,    -1,   110,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    77,    77,    81,    82,    87,    92,    97,    98,   103,
     108,   116,   120,   121,   122,   123,   124,   128,   132,   136,
     140,   144,   145,   152,   154,   162,   164,   167,   168,   172,
     177,   180,   181,   189,   190,   194,   195,   199,   200,   201,
     202,   203,   204,   207,   208,   209,   210,   220,   221,   225,
     226,   227,   228,   229,   230,   231,   232,   236,   237,   238,
     239,   240,   241,   242,   243,   247,   248,   249,   250,   251,
     252,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   275,   279,   280,
     284,   285,   286,   290,   291,   295,   296,   300,   301,   302,
     303,   307,   308,   312,   318,   319,   320,   321,   325,   326,
     327,   331,   332,   333,   337,   338,   339,   340,   341,   345,
     346,   347,   351,   352,   356,   357,   361,   362,   366,   367,
     371,   372,   376,   377,   381,   382,   387,   388,   389,   390,
     391,   392,   395,   397,   401,   402,   406,   414,   415,   416,
     417,   418,   419,   420,   425,   426,   427,   431,   432,   436,
     441,   442,   446,   447,   448,   452,   453,   457,   458,   459,
     460,   461,   462,   466,   467,   471,   472,   473,   474,   475,
     479,   487,   488,   492,   493,   497,   498,   502,   504,   505,
     506,   510,   511,   512,   513,   517,   518,   521,   525,   526,
     530,   531,   532,   533,   546,   551,   552,   553,   554,   555,
     559,   560,   561,   562,   563,   565,   566,   567,   568,   569,
     570,   571,   572,   573,   577,   578,   579,   583,   584,   585,
     586,   587,   588,   589,   590,   597,   602,   603,   604,   605,
     609,   610,   614,   615,   619,   624,   625,   629,   633,   634,
     638,   639,   643,   647,   651,   654,   656,   661,   666,   670,
     671,   672,   673,   679,   683,   684,   685,   686,   694,   695,
     696,   704,   705,   709,   710,   714,   715,   719,   721,   722,
     723,   727,   728,   729,   730,   731,   732,   733,   737,   738,
     742,   743,   747,   748,   749,   750,   751,   752,   756,   757,
     761,   762,   766,   767,   768,   774,   775,   776,   777,   778,
     803,   804,   805,   806,   811,   815,   816,   820,   821,   822,
     823,   827,   828,   837,   838,   842,   843,   847,   848,   849,
     850,   851,   852,   856,   857,   858,   862,   863,   864,   865,
     869,   870,   871,   872,   873,   874,   876,   881,   882,   886,
     887,   888,   889,   890,   899,   903,   911,   915,   916,   920,
     921,   922,   923,   929,   931,   953,   957,   958,   962,   963,
     967,   968,   969,   970,   971,  1057,  1062,  1066,  1067,  1071,
    1072,  1073
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENT", "ICON", "FCON", "CCON",
  "STRING", "TYPEDEF_NAME", "NAMESPACE_NAME", "CLASS_NAME", "ENUM_NAME",
  "TEMPLATE_NAME", "ELIPSIS", "COLONCOLON", "PLASN", "MIASN", "MUASN",
  "DIASN", "MOASN", "ANASN", "ORASN", "SHL", "SHR", "EQ", "NE", "LE", "GE",
  "ANDAND", "OROR", "INCOP", "DECOP", "FOLLOW", "AUTO", "BOOL", "BREAK",
  "CASE", "CHAR", "CLASS", "CONST", "CONTINUE", "DEFAULT", "DELETE", "DO",
  "DOUBLE", "ELSE", "ENUM", "EXTERN", "FALSE", "FLOAT", "FOR", "GOTO",
  "IF", "INT", "LONG", "NAMESPACE", "NEW", "PRIVATE", "PUBLIC", "REGISTER",
  "RETURN", "SHORT", "SIGNED", "SIZEOF", "STATIC", "STRUCT", "SWITCH",
  "TRUE", "TYPEDEF", "UNION", "UNSIGNED", "USING", "VOID", "VOLATILE",
  "WHILE", "ERASN", "SM", "LC", "RC", "CM", "COLON", "ASN", "LP", "RP",
  "LB", "RB", "DOT", "AND", "BANG", "NOT", "MINUS", "PLUS", "MUL", "DIV",
  "MOD", "LT", "GT", "ER", "OR", "QUEST", "PDEFINE", "'0'", "'_'",
  "$accept", "typedef_name", "namespace_name", "original_namespace_name",
  "namespace_alias", "class_name", "enum_name", "template_name",
  "identifier", "literal", "integer_literal", "character_literal",
  "floating_literal", "string_literal", "boolean_literal",
  "translation_unit", "primary_expression", "id_expression",
  "unqualified_id", "nested_name_specifier", "class_or_namespace_name",
  "postfix_expression", "expression_list", "pseudo_destructor_name",
  "unary_expression", "unary_operator", "new_expression", "new_placement",
  "new_type_id", "new_declarator", "direct_new_declarator",
  "new_initializer", "delete_expression", "cast_expression",
  "pm_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "statement", "labeled_statement",
  "expression_statement", "compound_statement", "statement_seq",
  "selection_statement", "condition", "iteration_statement",
  "for_init_statement", "jump_statement", "declaration_statement",
  "declaration_seq", "declaration", "block_declaration",
  "simple_declaration", "decl_specifier", "decl_specifier_seq",
  "storage_class_specifier", "type_specifier", "simple_type_specifier",
  "type_name", "elaborated_type_specifier", "enum_specifier",
  "enumerator_list", "enumerator_definition", "enumerator",
  "namespace_definition", "named_namespace_definition",
  "original_namespace_definition", "extension_namespace_definition",
  "unnamed_namespace_definition", "namespace_body",
  "namespace_alias_definition", "qualified_namespace_specifier",
  "using_declaration", "using_directive", "linkage_specification",
  "init_declarator_list", "init_declarator", "declarator",
  "direct_declarator", "ptr_operator", "cv_qualifier_seq", "cv_qualifier",
  "declarator_id", "type_id", "type_specifier_seq", "abstract_declarator",
  "direct_abstract_declarator", "function_definition", "function_body",
  "initializer", "initializer_clause", "initializer_list",
  "class_specifier", "class_head", "class_key", "member_specification",
  "member_declaration", "member_declarator_list", "member_declarator",
  "pure_specifier", "constant_initializer", "base_clause",
  "base_specifier_list", "base_specifier", "access_specifier",
  "ctor_initializer", "mem_initializer_list", "mem_initializer",
  "mem_initializer_id", "template_id", "template_argument_list",
  "template_argument", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,    48,    95
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   103,   104,   105,   105,   106,   107,   108,   108,   109,
     110,   111,   112,   112,   112,   112,   112,   113,   114,   115,
     116,   117,   117,   118,   118,   119,   119,   119,   119,   120,
     121,   121,   121,   122,   122,   123,   123,   124,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   125,   125,   126,
     126,   126,   126,   126,   126,   126,   126,   127,   127,   127,
     127,   127,   127,   127,   127,   128,   128,   128,   128,   128,
     128,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   130,   131,   131,
     132,   132,   132,   133,   133,   134,   134,   135,   135,   135,
     135,   136,   136,   137,   138,   138,   138,   138,   139,   139,
     139,   140,   140,   140,   141,   141,   141,   141,   141,   142,
     142,   142,   143,   143,   144,   144,   145,   145,   146,   146,
     147,   147,   148,   148,   149,   149,   150,   150,   150,   150,
     150,   150,   150,   150,   151,   151,   152,   153,   153,   153,
     153,   153,   153,   153,   154,   154,   154,   155,   155,   156,
     157,   157,   158,   158,   158,   159,   159,   160,   160,   160,
     160,   160,   160,   161,   161,   162,   162,   162,   162,   162,
     163,   164,   164,   165,   165,   165,   165,   166,   166,   166,
     166,   167,   167,   167,   167,   168,   168,   168,   169,   169,
     170,   170,   170,   170,   104,   171,   171,   171,   171,   171,
     172,   172,   172,   172,   172,   172,   172,   172,   172,   172,
     172,   172,   172,   172,   173,   173,   173,   174,   174,   174,
     174,   174,   174,   174,   174,   109,   175,   175,   175,   175,
     176,   176,   177,   177,   178,   105,   105,   106,   179,   179,
     180,   180,   181,   182,   183,   184,   184,   107,   185,   186,
     186,   186,   186,   187,   188,   188,   188,   188,   189,   189,
     189,   190,   190,   191,   191,   192,   192,   193,   193,   193,
     193,   194,   194,   194,   194,   194,   194,   194,   195,   195,
     196,   196,   197,   197,   197,   197,   197,   197,   198,   198,
     199,   199,   200,   200,   200,   201,   201,   201,   201,   201,
     202,   202,   202,   202,   203,   204,   204,   205,   205,   205,
     205,   206,   206,   108,   108,   207,   207,   208,   208,   208,
     208,   208,   208,   209,   209,   209,   210,   210,   210,   210,
     211,   211,   211,   211,   211,   211,   211,   212,   212,   213,
     213,   213,   213,   213,   214,   215,   216,   217,   217,   218,
     218,   218,   218,   219,   219,   220,   221,   221,   222,   222,
     223,   223,   223,   223,   223,   224,   110,   225,   225,   226,
     226,   226
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     1,     2,     3,     1,     1,
       1,     2,     1,     3,     2,     1,     1,     1,     4,     4,
       3,     4,     3,     3,     3,     2,     2,     1,     3,     6,
       5,     5,     4,     4,     3,     3,     2,     1,     2,     2,
       2,     2,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     4,     4,     3,     4,     3,     3,     2,     7,
       6,     6,     5,     6,     5,     5,     4,     3,     2,     1,
       2,     1,     1,     3,     4,     3,     2,     3,     2,     5,
       4,     1,     4,     1,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     5,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     4,     3,     2,     1,     5,
       1,     2,     5,     7,     5,     1,     4,     5,     7,     8,
       7,     7,     6,     1,     1,     2,     2,     3,     2,     3,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     2,     1,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     3,     3,
       2,     4,     3,     3,     2,     1,     5,     4,     4,     3,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     5,     4,     0,     1,     1,     5,     3,
       2,     2,     1,     4,     6,     5,     5,     4,     5,     4,
       3,     1,     3,     2,     1,     1,     2,     1,     4,     3,
       3,     2,     1,     1,     4,     3,     3,     2,     2,     1,
       1,     1,     2,     1,     3,     2,     2,     1,     2,     1,
       2,     1,     2,     1,     1,     4,     3,     3,     2,     3,
       4,     3,     3,     2,     1,     2,     3,     1,     4,     3,
       2,     1,     3,     1,     1,     4,     3,     3,     2,     2,
       4,     3,     1,     1,     1,     1,     2,     1,     3,     2,
       3,     2,     2,     1,     2,     1,     1,     1,     3,     2,
       2,     1,     3,     2,     2,     2,     2,     1,     3,     3,
       2,     2,     1,     1,     1,     2,     1,     3,     4,     3,
       3,     2,     2,     1,     1,     4,     1,     1,     3,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      23,    11,     2,     5,     7,     9,    10,     0,   200,   215,
     214,   333,   290,   222,     0,   203,   221,   217,   218,     0,
     201,   216,   219,   202,   334,   197,   335,   220,     0,   223,
     291,   194,     0,     0,   282,   283,   226,    36,     3,     4,
     224,   225,     0,    30,     0,   293,    29,     0,     0,    24,
     181,   183,   187,   199,     0,   195,   196,   205,   213,   208,
     207,   186,   248,   250,   251,   249,   188,   189,   190,   185,
       0,   271,   274,   275,     0,   209,   277,   184,   206,     0,
     332,     8,   292,     0,   211,     0,     0,    35,   234,     0,
       8,    20,     0,     5,   255,     0,     0,     0,     0,     0,
       0,   297,     0,    31,   323,   281,   289,     0,     1,   287,
     224,   204,   212,    34,   182,   203,   193,   198,     0,   274,
     192,     0,     0,     0,     0,     0,   314,   313,   273,     0,
       0,   276,     0,     0,     0,   230,     0,   329,   286,   210,
     232,     0,   239,   244,     0,   240,   242,     0,   233,     0,
     270,   256,     0,   255,   255,     0,    30,     0,    32,     0,
      36,   323,     0,     0,   295,   296,   280,   288,    17,    19,
      18,     0,     0,     0,     0,    22,     0,     0,    21,     0,
      69,    70,    68,    67,    65,    66,   381,    25,    12,    13,
      14,    15,    16,    37,    28,     0,    57,   101,     0,    63,
      64,   103,   104,   108,   111,   114,   119,   122,   124,   126,
     128,   130,   132,   134,   379,   301,   205,   213,   380,   299,
       0,   377,   285,    33,   191,   312,     0,   272,   274,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   158,     0,    65,    66,    30,    28,   144,     0,
     160,   147,   148,   149,     0,   150,   151,   152,   153,   180,
       0,     0,    35,   247,     0,   365,   366,     0,     0,   317,
       0,   315,     0,    47,   311,   279,   132,   146,     0,   363,
     364,     0,   343,   326,     0,   204,     0,   346,   351,   345,
       0,   337,     0,   347,     0,   228,     0,     0,   362,     0,
     356,   357,   327,   229,   284,   231,   237,     0,     0,   238,
       0,   269,     0,   254,     0,     0,     0,    36,     0,     0,
     263,    36,     0,   267,     0,   247,   294,     0,     0,    26,
       0,   211,    58,    59,     0,    98,     0,     0,   204,     0,
      78,    89,     0,    61,     0,     0,   212,    45,    46,     0,
       0,     0,     0,    60,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   140,   141,   137,   138,   139,   142,   143,     0,   136,
       0,     0,   300,     0,     0,     0,     0,     0,   303,   298,
     304,     0,   375,   310,    26,   175,     0,   176,     0,     0,
       0,     0,     0,     0,   178,     0,     0,     0,     0,   157,
       0,     0,   161,    35,     0,   372,     0,     0,   320,   321,
       0,     0,   316,   278,   353,     0,   342,   351,     0,     0,
     349,   350,   344,   325,   336,   341,     0,   339,   227,   360,
       0,   361,     0,   330,   241,   243,   236,   268,   253,   252,
      36,     0,   261,   258,   265,     0,   266,     0,    97,     0,
       0,    77,   210,     0,     0,     0,     0,    76,     0,    74,
       0,    88,    92,    91,     0,    27,     0,     0,     0,     0,
      44,     0,    40,     0,     0,    43,   105,   106,   107,   110,
     109,   112,   113,   117,   118,   115,   116,   120,   121,   123,
     125,   127,   129,   131,     0,   135,    42,     0,     0,     0,
     308,     0,   302,     0,   378,     0,   156,     0,   173,     0,
     174,   179,   165,     0,     0,   177,     0,     0,   154,   145,
       0,   370,   367,   369,     0,   319,     0,    48,   352,   340,
     354,   355,   351,   348,   338,   359,   358,   259,   264,     0,
       0,     0,    75,    73,   100,    87,    86,     0,    72,    96,
       0,     0,     0,    90,    62,   102,     0,     0,     0,    56,
       0,     0,     0,    39,    38,     0,    41,   309,   307,   306,
       0,   155,     0,     0,     0,     0,     0,     0,     0,   159,
     368,   318,   322,    99,    85,     0,    71,    82,    84,    95,
      93,     0,    54,     0,     0,     0,    55,     0,     0,   133,
     305,     0,     0,     0,     0,   162,     0,   164,   167,    81,
      83,    80,    94,    53,     0,     0,     0,    52,     0,   172,
       0,     0,     0,     0,   166,    79,     0,    50,    51,   168,
     171,   170,     0,   163,    49,   169
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    36,    37,    38,    39,    40,    41,    42,    43,   187,
     188,   189,   190,   191,   192,    44,   193,   194,    46,   195,
      48,   196,   464,   480,   197,   198,   199,   339,   340,   471,
     472,   469,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   248,   381,   249,   278,
     250,   251,   252,   253,   254,   255,   523,   256,   519,   257,
     258,   151,    50,   259,    52,    53,   260,    55,    56,   270,
     217,    59,    60,   144,   145,   146,    61,    62,    63,    64,
      65,   152,    66,   319,    67,    68,    69,    70,    71,   228,
      73,    74,   105,    75,    76,   218,   219,   389,   390,    77,
     127,   128,   271,   420,    78,    79,    80,   290,   291,   292,
     293,   430,   431,   137,   300,   301,   294,   129,   265,   266,
     267,    81,   220,   221
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -418
static const yytype_int16 yypact[] =
{
    4364,  -418,  -418,  -418,  -418,  -418,  -418,   626,  -418,  -418,
    -418,  -418,  -418,  -418,   211,    36,  -418,  -418,  -418,    31,
    -418,  -418,  -418,  -418,  -418,  -418,  -418,  -418,    24,  -418,
    -418,  -418,   421,    90,   -34,  -418,  -418,  -418,  -418,  -418,
       8,  -418,   -50,  4875,    47,  -418,  -418,   336,    57,  4364,
    -418,  -418,  -418,  -418,  4726,  -418,  -418,  -418,    69,  -418,
    -418,  -418,  -418,  -418,  -418,  -418,  -418,  -418,  -418,  -418,
      50,  -418,   290,   -11,   421,  -418,  -418,  -418,  -418,    13,
     710,  4950,  -418,   379,    99,   195,    49,  -418,    27,   116,
    -418,  -418,  2827,  -418,  4364,    54,   119,    25,   453,   626,
     336,  -418,    41,  -418,  -418,  -418,   -34,  2260,  -418,   -34,
    -418,  -418,   174,   195,  -418,  -418,  -418,  -418,   103,   290,
    -418,   421,  2066,   718,  2924,  4461,  -418,  -418,  -418,    59,
    3021,  -418,  2449,   195,   835,   113,   116,  -418,   -34,   200,
    -418,   116,  -418,  -418,     3,  -418,    64,    52,  -418,  3113,
    -418,  4364,    74,  4364,  4364,   845,    70,   109,  -418,   195,
     137,    21,    63,   379,  -418,  -418,  -418,  -418,  -418,  -418,
    -418,   763,  4461,  4461,  3210,  -418,  1179,  4558,  -418,  2260,
    -418,    90,  -418,  -418,  -418,  -418,   -50,  -418,  -418,  -418,
    -418,  -418,  -418,  -418,  -418,   515,    56,  -418,  4461,  -418,
    -418,  -418,  -418,   302,   142,   248,   281,   393,    96,   118,
     147,   198,   679,  -418,  -418,  5193,   176,  -418,  -418,   466,
     -37,  -418,  -418,  -418,  -418,  -418,    59,  -418,   340,   583,
     225,  4461,   298,   207,  2066,   214,   116,   242,   116,  3307,
     331,   337,  -418,  2357,   -34,  -418,  4802,  -418,  -418,   189,
    -418,  -418,  -418,  -418,  1909,  -418,  -418,  -418,  -418,  -418,
    4726,   195,   341,    -4,    90,  -418,   347,   352,  2546,  -418,
     176,  -418,   129,  -418,  -418,  -418,    -3,  -418,   353,  -418,
    -418,   429,  -418,  -418,  4461,   274,  4650,  -418,   160,   371,
     381,  2638,   264,  -418,   386,  -418,   116,   195,     8,    90,
     378,  -418,  -418,   285,  -418,  -418,  -418,   116,  4461,  -418,
     362,  -418,  3399,  -418,   383,   394,   195,   412,    63,   431,
    -418,   435,    63,  -418,   438,  -418,  -418,  3496,  4949,   865,
     515,  -418,  -418,  -418,   436,  -418,   878,  2260,  -418,  5043,
     434,   525,  2260,  -418,   148,   446,  -418,  -418,  -418,   646,
    3593,  4461,   646,  -418,  4461,  4461,  4461,  4461,  4461,  4461,
    4461,  4461,  4461,  4461,  4461,  4461,  4461,  4461,  4461,  4461,
    4461,  -418,  -418,  -418,  -418,  -418,  -418,  -418,  4461,  -418,
    4461,  4461,  -418,  3690,   195,   466,  3787,   457,   466,  -418,
     454,  2260,  -418,  -418,  4875,  -418,   471,  -418,  2066,   478,
    1627,   477,  2260,   473,  -418,   304,  2260,  2260,  2066,  -418,
    4461,   483,  -418,   482,    90,  -418,   718,  3884,  -418,  -418,
     376,  4461,  -418,  -418,  -418,  4461,  -418,   160,   325,  1760,
    -418,  -418,  -418,  -418,  -418,  -418,   481,  2638,  -418,     8,
      90,  -418,   835,  -418,  -418,  -418,  -418,  -418,  -418,  -418,
     479,    63,  -418,  -418,  -418,   491,  -418,   484,  -418,  2260,
    5118,   434,  -418,  4461,   206,   485,  5193,   434,  3981,  -418,
    4461,  -418,   487,   525,   489,  -418,  4461,   666,   515,   494,
    -418,   561,  -418,   215,    -9,  -418,  -418,  -418,  -418,   302,
     302,   142,   142,   248,   248,   248,   248,   281,   281,   393,
      96,   118,   147,   198,   403,  -418,  -418,   220,   490,   506,
    -418,   492,  -418,  4078,  -418,  2066,  -418,   508,  -418,  2163,
    -418,  -418,   517,   514,   421,  -418,   516,   519,  -418,  -418,
     522,  -418,  -418,  -418,   243,  -418,  2735,  -418,  -418,  -418,
    -418,  -418,   530,  -418,  -418,  -418,  -418,  -418,  -418,  4461,
     531,  5193,   434,  -418,  -418,  -418,   434,   532,  -418,  -418,
     250,    26,  4461,  -418,  -418,  -418,   515,   595,   602,  -418,
     515,   605,   533,  -418,  -418,  4461,  -418,  -418,  -418,  -418,
     536,  -418,  4461,  4175,   547,  2066,   545,  2066,  2066,  -418,
    -418,  -418,  -418,  -418,   434,   544,  -418,  -418,   434,  -418,
    -418,   543,  -418,   515,   618,   552,  -418,   554,   515,  -418,
    -418,   251,  2066,   277,  4272,   599,  4461,  -418,  -418,  -418,
     434,  -418,  -418,  -418,   556,   515,   515,  -418,   574,  -418,
    2066,  2066,   314,  2066,  -418,  -418,   515,  -418,  -418,  -418,
    -418,  -418,  2066,  -418,  -418,  -418
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -418,  -418,   -94,   632,  -418,  1459,  -418,  -101,   938,  -418,
    -418,  -418,  -418,   638,  -418,  -418,  -418,   707,   564,     0,
    -418,  -418,  -100,   310,   486,  -418,  -418,   338,  -277,   191,
    -418,  -417,  -418,  -171,    55,   128,   140,   180,   143,   300,
     297,   301,   311,   293,  -114,  -111,    77,  -418,  -133,  -147,
     158,  -418,   280,   -52,  -418,  -418,  -376,  -418,  -418,  -418,
    -418,    23,   -36,    95,   282,   -30,    15,  -418,   405,   425,
     210,  -418,  -418,   539,   384,  -418,  -418,  -418,  -418,  -418,
    -418,   377,  -418,  -418,  -124,  -418,  -418,   -44,   562,     9,
    -418,  -150,   -49,    19,  -418,  -131,  -140,    18,  -418,   -99,
    -108,  -418,  -256,  -418,  -418,  -418,  -418,  -262,  -418,   404,
     256,  -418,  -418,  -117,  -418,   259,  -418,  -102,   286,  -418,
    -418,  1268,  -418,   312
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -377
static const yytype_int16 yytable[] =
{
      47,   332,   333,   335,   160,    12,   186,    83,   287,    72,
     118,   225,   419,   114,    89,    54,   276,   226,   302,   277,
     126,   274,   -35,    49,   117,   272,   378,   353,     1,   434,
     526,   527,   100,   289,     1,  -247,   341,     6,    97,    30,
      93,   102,   391,    91,   553,   107,   344,   108,   345,    47,
     558,   461,     1,   106,    47,     1,   150,   167,    72,   392,
     222,   317,   467,   119,    54,   321,     1,   126,   324,   388,
     410,   113,     3,   130,   100,   382,   574,   126,  -323,    98,
     136,   306,   307,   131,   396,   141,   347,   348,   349,   304,
     132,  -376,    47,     1,    47,    51,   380,  -247,   162,   163,
       4,    72,     6,    72,   147,   410,   405,    54,    94,    54,
     344,   600,   345,   223,    33,   114,  -376,   276,   393,     1,
     277,   100,    47,   264,   166,   106,   120,   142,   106,   121,
     309,   153,    47,   296,   299,   596,   122,   424,   350,   597,
     351,   288,   352,   584,    51,   308,  -297,   286,  -297,    47,
    -297,    47,   313,    47,    47,   318,   458,   106,    72,   322,
      72,   445,    72,    72,    54,  -376,    54,   287,    54,    54,
     276,   330,   312,   277,   126,   544,  -295,   619,  -295,   224,
    -295,   621,   121,   552,   214,   320,   443,    51,   341,    51,
    -328,   473,   289,   134,   276,   367,   154,   277,     1,   341,
     155,   269,   273,   635,     3,     4,   465,     6,   421,   344,
      58,   474,   422,   323,     1,   368,   118,    84,   484,   387,
       3,     4,   450,     6,   452,    85,   370,   410,   455,    83,
     117,   475,   357,   358,    47,   388,   126,   122,   388,   511,
     123,   429,   101,    47,    51,   369,    51,   504,    51,    51,
     483,  -296,   102,  -296,    47,  -296,   117,   112,   383,    58,
      47,   414,   524,   106,    58,   409,   524,   524,   410,   522,
     359,   360,   276,   522,   522,   277,   114,  -294,   538,  -294,
     592,  -294,   541,   507,   101,   421,    47,   398,    86,   555,
     186,    47,   554,   139,   421,   427,   400,   440,   573,   421,
     288,   395,    58,   576,    58,   565,   286,   361,   362,   164,
     165,   276,    47,   287,   277,   276,   451,   534,   277,   225,
     341,    72,   421,   473,   402,   226,   590,    54,   550,   421,
     410,   101,    58,   599,   628,   557,   330,   561,   289,     1,
     435,   387,    58,   436,     2,   269,     4,     5,     6,   479,
     -30,   -30,   479,   -30,   425,   -30,   410,   547,   -30,    58,
     630,    58,  -331,    58,    58,   134,   580,   122,   560,  -376,
     123,   124,   125,   326,   397,   126,   363,   364,   593,   524,
     525,   331,     1,   410,   508,   387,   522,     2,   387,     4,
       5,     6,   399,   410,   354,   355,   356,   642,    47,   276,
      47,   539,   277,   509,   436,   346,   512,    51,    47,   486,
     487,   488,   412,   406,   273,   601,   264,   365,   366,   407,
     595,   124,   125,  -373,     1,    57,   416,   273,   109,     2,
       3,     4,     5,     6,   417,    99,   100,    47,   423,    84,
     446,   307,   299,    97,    58,   542,   288,   432,   276,   611,
     613,   277,   286,    58,   535,   536,     1,   442,   505,   433,
     273,   448,     3,     4,    58,     6,   437,   159,   214,     1,
      58,   138,   449,   387,    57,     3,     4,   567,     6,    57,
     384,   632,   410,   575,     1,   489,   490,   529,  -262,     2,
       3,     4,     5,     6,   273,    99,    58,     1,   537,   491,
     492,    58,     2,    32,     4,     5,     6,   453,   497,   498,
      33,   454,   215,    34,   456,    47,   468,    57,     1,    57,
      35,   463,    58,     2,   100,     4,     5,     6,     1,   476,
     314,   315,   216,   586,     3,     4,   273,     6,   513,   384,
     462,   493,   494,   495,   496,   273,   331,   216,   385,   109,
     386,   515,   517,   521,   155,  -260,   516,    57,    34,   481,
     530,   284,   481,    32,  -371,    35,   528,   548,   556,   549,
      33,   562,   564,    34,    57,   572,    57,   578,    57,    57,
      35,   215,   138,   570,   215,    47,     1,    47,    47,   577,
     582,     2,     3,     4,     5,     6,   410,   585,     1,   587,
     589,    57,   588,     2,   216,     4,     5,     6,    58,   470,
      58,   429,    47,   269,   594,   598,   605,    34,    58,   607,
     215,   610,   608,   614,    35,   327,   616,   620,   622,     1,
      47,    47,   624,    47,     2,     3,     4,     5,     6,   328,
      57,   625,    47,   626,   633,   636,   101,    58,   215,     1,
     639,    95,   609,    92,     2,     3,     4,     5,     6,   216,
     477,   157,   485,   343,   563,   500,   460,   499,   216,     1,
     501,   503,    33,   581,     2,     3,     4,     5,     6,   216,
     518,   502,   520,   227,   603,    57,   310,   568,   569,   571,
     428,   444,   543,   634,   371,   372,   373,   374,   375,   376,
     377,   546,   532,   514,     0,     0,     0,    45,   378,     0,
       0,    57,     0,     1,    82,    33,    57,     0,     0,     3,
       4,     1,     6,     0,   133,    58,     0,     3,     4,     0,
       6,     0,   261,   215,   101,   478,     0,    57,     0,    45,
       0,     0,   215,   615,   215,   617,   618,   215,     0,     0,
       0,     0,     0,    57,     0,   566,    45,     0,     0,     0,
     379,    45,   216,     0,    57,     0,     1,   216,     0,     0,
     629,     2,     3,     4,     5,     6,   602,   604,   380,     0,
     606,    45,     0,     0,     0,     0,     0,     0,   640,   641,
     134,   643,     0,     0,     0,    58,   215,    58,    58,    45,
     645,    45,     0,     0,     0,   327,    82,   215,     0,     0,
       0,   215,   215,   623,     0,     0,   216,     0,   627,   328,
       0,     0,    58,   216,     0,   216,     0,   216,    45,   247,
       0,   216,   216,   216,     0,   637,   638,     0,     1,    45,
      58,    58,     0,    58,     3,     4,   644,     6,     1,   297,
       0,     0,    58,     0,     3,     4,    45,     6,    45,   316,
      45,    45,    57,     0,   215,   215,     0,     0,  -204,     0,
       0,   215,     0,  -204,  -204,  -204,  -204,  -204,     0,  -204,
       0,     1,     0,     0,   216,    57,     2,     3,     4,     5,
       6,    57,     0,     0,     0,     0,     0,     0,     0,  -204,
       0,     0,  -204,  -204,  -204,     0,     0,     0,     0,  -204,
       0,  -204,     0,     0,  -204,     0,     0,     0,  -204,  -204,
       0,     0,     0,     0,   215,     0,  -204,  -204,     0,     0,
    -204,     0,     0,     0,  -204,  -204,    82,  -204,  -204,     0,
     216,   247,     0,     0,   216,     0,     0,     0,     0,     0,
     247,     0,    88,     0,  -204,     0,   215,    96,     0,     0,
       0,   247,     0,     0,     0,     0,     0,    45,     0,     0,
       0,   104,     0,     0,     0,     0,    57,     0,     0,     0,
       0,     0,     0,     0,     0,   111,     0,     0,     0,     0,
       0,     0,     0,    45,     0,     0,     0,     0,    45,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     216,     0,   216,   216,     0,     0,     0,     0,   135,    45,
       0,   111,     0,   140,   143,     0,     0,   148,     0,     0,
       0,     0,     0,     0,     0,   156,   161,   216,   111,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   161,     0,     0,     0,   216,   216,     0,   216,     0,
     246,   263,     0,     0,     0,     0,     0,   216,     0,     0,
     285,   295,   161,     0,   303,     0,     0,     0,     0,   305,
       0,     0,     0,     0,     0,   143,     0,     0,     0,     0,
       0,     0,     0,   161,     0,     0,     0,   161,     0,     0,
     325,   111,     0,     0,     0,   247,     0,   247,     0,   329,
       0,     0,     0,     0,   338,   247,     0,     0,     0,   104,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   111,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    45,    45,     0,     0,     0,     0,     0,
       0,     0,     0,   338,     0,     0,     0,   161,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   394,     0,     0,
       0,     0,   246,     0,   401,     0,   403,     0,     0,     0,
       0,     0,     1,     0,     0,     0,     0,     2,     3,     4,
       5,     6,   246,   336,     0,     0,     0,     0,     0,   161,
       0,     0,   104,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     9,     0,     0,    10,    11,    12,     0,
       0,     0,   247,    13,   285,    14,     0,     0,    16,   285,
       0,    45,    17,    18,   438,   161,     0,   104,     0,     0,
      21,    22,     0,     0,    24,   143,     0,     0,    26,    27,
       0,    29,    30,     0,   161,     0,   325,     0,     0,     0,
     325,   337,     0,     0,     0,     0,   338,     0,   111,     0,
       0,     0,     0,     0,   338,     0,     0,   338,     0,   161,
       0,     0,    90,     0,     0,     0,     0,   338,     0,     0,
     338,     0,   247,     0,   247,   247,     0,     0,     0,     0,
       0,    90,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    90,     0,     0,     0,   247,
       0,     0,   161,   161,     0,     0,   161,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   246,   247,   247,     0,
     247,     0,     0,     0,     0,     0,   246,     0,    90,   247,
       0,    90,   104,    90,   263,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   158,    90,     0,    90,     0,
       0,     0,     0,     0,   285,   285,     0,     0,   104,     0,
     161,    90,     0,     0,     0,     0,     0,     0,     0,   325,
       0,    90,     0,     0,     0,     0,     0,     0,   338,     0,
       0,    90,    90,     0,   338,     0,     0,     0,     0,     0,
       0,   161,     0,     0,     0,   338,   111,   111,     0,     0,
       0,     0,     0,    90,     0,     0,     0,    90,     0,     0,
       0,    90,     0,     0,     0,     0,     0,     0,     0,    90,
       0,     0,     0,     0,    90,     0,     0,     0,     0,    90,
       0,     0,     0,   246,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    90,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    90,     0,     0,     0,    90,     0,   338,
       0,     0,   103,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   111,   111,   110,     0,   111,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   246,     0,   246,   246,     0,     0,    90,
       0,     0,    90,     0,     0,     0,     0,     0,     0,    87,
       0,   111,   110,     0,    87,     0,   111,     0,     0,     0,
     246,     0,     0,     0,     0,     0,     0,    87,     0,   110,
       0,     0,     0,   111,   111,    90,     0,    90,   246,   246,
       0,   246,    87,     0,   111,     0,     0,     0,     0,     0,
     246,     0,   262,     0,    90,     0,     0,     0,     0,     0,
       0,     0,    87,   298,     0,     0,    90,     0,    90,     0,
       0,     0,     0,     0,    90,     0,     0,    90,     0,    90,
       0,     0,     0,     0,    87,     0,     0,    90,    87,     0,
      90,     0,   110,     0,     0,     0,     0,     0,     0,     0,
       1,   168,   169,   170,    91,     2,     3,     4,     5,     6,
     103,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    90,    90,   110,     0,    90,   172,   173,     0,
       8,     9,     0,     0,    10,    11,    12,     0,     0,   174,
       0,    13,     0,    14,   115,   175,    16,     0,    87,     0,
      17,    18,    90,   176,    90,     0,    20,     0,    21,    22,
     177,    23,    24,     0,   178,    25,    26,    27,     0,    29,
      30,     0,     0,   242,     0,     0,     0,     0,    90,   243,
      90,     0,     0,     0,     0,   180,   181,   182,   183,   244,
     413,     0,     0,   415,     0,     0,   245,     0,    90,     0,
       0,     0,     0,     0,    90,     0,     0,     0,     0,     0,
       0,    90,     0,     0,     0,    90,    90,    90,     0,     0,
       0,     0,     0,     0,     0,     0,   439,     0,   441,     0,
       0,     0,     0,     1,   168,   169,   170,    91,     2,     3,
       4,     5,     6,     0,   171,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   110,
     172,   173,     0,     0,     9,     0,     0,    10,     0,     0,
      87,     0,   174,     0,    13,     0,     0,     0,   175,    16,
       0,     0,     0,    17,    18,     0,   176,     0,     0,    90,
       0,    21,    22,   177,     0,     0,     0,   178,     0,     0,
      27,     0,    29,     0,    90,    90,     0,     0,    90,     0,
       0,     0,   179,    87,    87,     0,     0,    87,   180,   181,
     182,   183,   184,     0,     0,     0,     0,     0,     0,   185,
       0,   540,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    90,     0,   531,     0,   262,    90,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    90,    90,     0,     0,     0,     0,   545,
       0,   298,     0,     0,    90,     0,     0,     0,     0,     0,
       0,     0,     1,   168,   169,   170,    91,     2,     3,     4,
       5,     6,     0,   229,     0,     0,     0,     0,     0,     0,
       0,     0,    87,     0,     0,     0,     0,   110,   110,   172,
     173,     0,     8,     9,   230,   231,    10,    11,    12,   232,
     233,   174,   234,    13,     0,    14,   115,   175,    16,   235,
     236,   237,    17,    18,   238,   176,     0,     0,    20,   239,
      21,    22,   177,    23,    24,   240,   178,    25,    26,    27,
      28,    29,    30,   241,     0,   242,   122,   411,     0,     0,
       0,   243,     0,     0,     0,     0,     0,   180,   181,   182,
     183,   244,     0,     0,     0,     0,     0,     0,   245,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   110,   110,     0,     0,   110,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   110,     0,     0,     0,     0,   110,     0,     1,
     168,   169,   170,    91,     2,     3,     4,     5,     6,     0,
     229,     0,     0,     0,   110,   110,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   110,   172,   173,     0,     8,
       9,   230,   231,    10,    11,    12,   232,   233,   174,   234,
      13,     0,    14,   115,   175,    16,   235,   236,   237,    17,
      18,   238,   176,     0,     0,    20,   239,    21,    22,   177,
      23,    24,   240,   178,    25,    26,    27,    28,    29,    30,
     241,     0,   242,   122,     0,     0,     0,     0,   243,     0,
       0,     0,     0,     0,   180,   181,   182,   183,   244,     0,
       0,     0,     0,     0,     0,   245,     1,   168,   169,   170,
      91,     2,     3,     4,     5,     6,     0,   171,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   172,   173,     0,     0,     9,     0,     0,
      10,    11,    12,     0,     0,   174,     0,    13,     0,    14,
       0,   175,    16,     0,     0,     0,    17,    18,     0,   176,
       0,     0,     0,     0,    21,    22,   177,     0,    24,     0,
     178,     0,    26,    27,     0,    29,    30,     0,     0,   583,
       0,     0,     0,     0,     0,   179,     0,     0,     0,     0,
       0,   180,   181,   182,   183,   184,     0,     0,     0,     0,
       0,     0,   185,     1,   168,   169,   170,    91,     2,     3,
       4,     5,     6,     0,   171,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     172,   173,     0,     0,     9,     0,     0,    10,    11,    12,
       0,     0,   174,     0,    13,     0,    14,     0,   175,    16,
       0,     0,     0,    17,    18,     0,   176,     0,     0,     0,
       0,    21,    22,   177,     0,    24,     0,   178,     0,    26,
      27,     0,    29,    30,     0,     0,     0,     0,     0,     0,
       0,     0,   179,     0,     0,     0,     0,     0,   180,   181,
     182,   183,   184,     0,     0,     0,     0,     0,     0,   185,
       1,   168,   169,   170,    91,     2,     3,     4,     5,     6,
       0,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   172,   173,     0,
       0,     9,     0,     0,    10,    11,    12,     0,     0,   174,
       0,    13,     0,    14,     0,   175,    16,     0,     0,     0,
      17,    18,     0,   176,     0,     0,     0,     0,    21,    22,
     177,     0,    24,     0,   178,     0,    26,    27,     0,    29,
      30,     0,     0,     0,     0,     0,     0,     0,     0,   243,
       0,     0,     0,     0,     0,   180,   181,   182,   183,   244,
       0,     0,     1,     0,     0,     0,   245,     2,     3,     4,
       5,     6,     0,     7,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     8,     9,     0,     0,    10,    11,    12,     0,
       0,     0,     0,    13,     0,    14,   115,     0,    16,     0,
       0,     0,    17,    18,     0,     0,   279,   280,    20,     0,
      21,    22,     0,    23,    24,     0,     0,    25,    26,    27,
     281,    29,    30,     0,     0,   282,     0,   283,     0,   284,
       0,    32,     0,     0,     0,     0,     0,     0,    33,     0,
       0,    34,     0,     0,     0,     0,     0,     0,    35,     1,
     168,   169,   170,    91,     2,     3,     4,     5,     6,     0,
     171,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   172,   173,     0,     0,
       9,     0,     0,    10,     0,     0,     0,     0,   174,     0,
      13,     0,     0,     0,   175,    16,     0,     0,     0,    17,
      18,     0,   176,     0,     0,     0,     0,    21,    22,   177,
       0,     0,     0,   178,     0,     0,    27,     0,    29,     0,
       0,     0,     0,   268,   418,     0,     0,     0,   179,     0,
       0,     0,     0,     0,   180,   181,   182,   183,   184,     0,
       0,     1,     0,     0,     0,   185,     2,     3,     4,     5,
       6,     0,     7,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     8,     9,     0,     0,    10,    11,    12,     0,     0,
       0,     0,    13,     0,    14,   115,     0,    16,     0,     0,
       0,    17,    18,     0,     0,   279,   280,    20,     0,    21,
      22,     0,    23,    24,     0,     0,    25,    26,    27,   281,
      29,    30,     0,     0,   282,     0,     0,     0,   284,     0,
      32,     0,     0,     0,     0,     0,     0,    33,     0,     0,
      34,     0,     0,     0,     0,     0,     0,    35,     1,   168,
     169,   170,    91,     2,     3,     4,     5,     6,     0,   171,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   172,   173,     0,     0,     9,
       0,     0,    10,     0,     0,     0,     0,   174,     0,    13,
       0,     0,     0,   175,    16,     0,     0,     0,    17,    18,
       0,   176,     0,     0,     0,     0,    21,    22,   177,     0,
       0,     0,   178,     0,     0,    27,     0,    29,     0,     0,
       0,     0,   268,   591,     0,     0,     0,   179,     0,     0,
       0,     0,     0,   180,   181,   182,   183,   184,     0,     0,
       1,     0,     0,     0,   185,     2,     3,     4,     5,     6,
       0,     7,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       8,     9,     0,     0,    10,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,     0,    16,     0,     0,     0,
      17,    18,    19,     0,     0,     0,    20,     0,    21,    22,
       0,    23,    24,     0,     0,    25,    26,    27,    28,    29,
      30,     0,     0,    31,   149,     0,     0,     0,     0,    32,
       0,     0,     0,     0,     0,     0,    33,     0,     0,    34,
       0,     0,     0,     0,     0,     0,    35,     1,   168,   169,
     170,    91,     2,     3,     4,     5,     6,     0,   171,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   172,   173,     0,     0,     9,     0,
       0,    10,     0,     0,     0,     0,   174,     0,    13,     0,
       0,     0,   175,    16,     0,     0,     0,    17,    18,     0,
     176,     0,     0,     0,     0,    21,    22,   177,     0,     0,
       0,   178,     0,     0,    27,     0,    29,     0,     0,     0,
       0,   268,     0,     0,     0,     0,   179,     0,     0,     0,
       0,     0,   180,   181,   182,   183,   184,     0,     0,     0,
       0,     0,     0,   185,     1,   168,   169,   170,    91,     2,
       3,     4,     5,     6,     0,   171,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   172,   173,     0,     0,     9,     0,     0,    10,     0,
       0,     0,     0,   174,     0,    13,     0,     0,     0,   175,
      16,     0,     0,     0,    17,    18,     0,   176,     0,     0,
       0,     0,    21,    22,   177,     0,     0,     0,   178,     0,
       0,    27,     0,    29,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   179,     0,     0,   275,     0,     0,   180,
     181,   182,   183,   184,     0,     0,     1,     0,     0,     0,
     185,     2,     3,     4,     5,     6,     0,     7,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     8,     9,     0,     0,
      10,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,     0,    16,     0,     0,     0,    17,    18,    19,     0,
       0,     0,    20,     0,    21,    22,     0,    23,    24,     0,
       0,    25,    26,    27,    28,    29,    30,     0,     0,    31,
       0,   311,     0,     0,     0,    32,     0,     0,     0,     0,
       0,     0,    33,     0,     0,    34,     0,     0,     0,     0,
       0,     0,    35,     1,   168,   169,   170,    91,     2,     3,
       4,     5,     6,     0,   171,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     172,   173,     0,     0,     9,     0,     0,    10,     0,     0,
       0,     0,   174,     0,    13,     0,     0,     0,   175,    16,
       0,     0,     0,    17,    18,     0,   176,     0,     0,     0,
       0,    21,    22,   177,     0,     0,     0,   178,     0,     0,
      27,     0,    29,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   179,     0,   334,     0,     0,     0,   180,   181,
     182,   183,   184,     0,     0,     0,     0,     0,     0,   185,
       1,   168,   169,   170,    91,     2,     3,     4,     5,     6,
       0,   171,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   172,   173,     0,
       0,     9,     0,     0,    10,     0,     0,     0,     0,   174,
       0,    13,     0,     0,     0,   175,    16,     0,     0,     0,
      17,    18,     0,   176,     0,     0,     0,     0,    21,    22,
     177,     0,     0,     0,   178,     0,     0,    27,     0,    29,
       0,     0,     0,   404,     0,     0,     0,     0,     0,   179,
       0,     0,     0,     0,     0,   180,   181,   182,   183,   184,
       0,     0,     1,     0,     0,     0,   185,     2,     3,     4,
       5,     6,     0,     7,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     8,     9,     0,     0,    10,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,     0,    16,     0,
       0,     0,    17,    18,    19,     0,     0,     0,    20,     0,
      21,    22,     0,    23,    24,     0,     0,    25,    26,    27,
      28,    29,    30,     0,     0,    31,     0,   447,     0,     0,
       0,    32,     0,     0,     0,     0,     0,     0,    33,     0,
       0,    34,     0,     0,     0,     0,     0,     0,    35,     1,
     168,   169,   170,    91,     2,     3,     4,     5,     6,     0,
     171,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   172,   173,     0,     0,
       9,     0,     0,    10,     0,     0,     0,     0,   174,     0,
      13,     0,     0,     0,   175,    16,     0,     0,     0,    17,
      18,     0,   176,     0,     0,     0,     0,    21,    22,   177,
       0,     0,     0,   178,     0,     0,    27,     0,    29,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   179,     0,
     457,     0,     0,     0,   180,   181,   182,   183,   184,     0,
       0,     0,     0,     0,     0,   185,     1,   168,   169,   170,
      91,     2,     3,     4,     5,     6,     0,   171,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   172,   173,     0,     0,     9,     0,     0,
      10,     0,     0,     0,     0,   174,     0,    13,     0,     0,
       0,   175,    16,     0,     0,     0,    17,    18,     0,   176,
       0,     0,     0,     0,    21,    22,   177,     0,     0,     0,
     178,     0,     0,    27,     0,    29,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   179,   482,     0,     0,     0,
       0,   180,   181,   182,   183,   184,     0,     0,     0,     0,
       0,     0,   185,     1,   168,   169,   170,    91,     2,     3,
       4,     5,     6,     0,   171,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     172,   173,     0,     0,     9,     0,     0,    10,     0,     0,
       0,     0,   174,     0,    13,     0,     0,     0,   175,    16,
       0,     0,     0,    17,    18,     0,   176,     0,     0,     0,
       0,    21,    22,   177,     0,     0,     0,   178,     0,     0,
      27,     0,    29,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   179,   506,     0,     0,     0,     0,   180,   181,
     182,   183,   184,     0,     0,     0,     0,     0,     0,   185,
       1,   168,   169,   170,    91,     2,     3,     4,     5,     6,
       0,   171,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   172,   173,     0,
       0,     9,     0,     0,    10,     0,     0,     0,     0,   174,
       0,    13,     0,     0,     0,   175,    16,     0,     0,     0,
      17,    18,     0,   176,     0,     0,     0,     0,    21,    22,
     177,     0,     0,     0,   178,     0,     0,    27,     0,    29,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   179,
       0,     0,   510,     0,     0,   180,   181,   182,   183,   184,
       0,     0,     0,     0,     0,     0,   185,     1,   168,   169,
     170,    91,     2,     3,     4,     5,     6,     0,   171,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   172,   173,     0,     0,     9,     0,
       0,    10,     0,     0,     0,     0,   174,     0,    13,     0,
       0,     0,   175,    16,     0,     0,     0,    17,    18,     0,
     176,     0,     0,     0,     0,    21,    22,   177,     0,     0,
       0,   178,     0,     0,    27,     0,    29,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   179,   533,     0,     0,
       0,     0,   180,   181,   182,   183,   184,     0,     0,     0,
       0,     0,     0,   185,     1,   168,   169,   170,    91,     2,
       3,     4,     5,     6,     0,   171,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   172,   173,     0,     0,     9,     0,     0,    10,     0,
       0,     0,     0,   174,     0,    13,     0,     0,     0,   175,
      16,     0,     0,     0,    17,    18,     0,   176,     0,     0,
       0,     0,    21,    22,   177,     0,     0,     0,   178,     0,
       0,    27,     0,    29,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   179,   559,     0,     0,     0,     0,   180,
     181,   182,   183,   184,     0,     0,     0,     0,     0,     0,
     185,     1,   168,   169,   170,    91,     2,     3,     4,     5,
       6,     0,   171,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   172,   173,
       0,     0,     9,     0,     0,    10,     0,     0,     0,     0,
     174,     0,    13,     0,     0,     0,   175,    16,     0,     0,
       0,    17,    18,     0,   176,     0,     0,     0,     0,    21,
      22,   177,     0,     0,     0,   178,     0,     0,    27,     0,
      29,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     179,     0,     0,   579,     0,     0,   180,   181,   182,   183,
     184,     0,     0,     0,     0,     0,     0,   185,     1,   168,
     169,   170,    91,     2,     3,     4,     5,     6,     0,   171,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   172,   173,     0,     0,     9,
       0,     0,    10,     0,     0,     0,     0,   174,     0,    13,
       0,     0,     0,   175,    16,     0,     0,     0,    17,    18,
       0,   176,     0,     0,     0,     0,    21,    22,   177,     0,
       0,     0,   178,     0,     0,    27,     0,    29,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   179,   612,     0,
       0,     0,     0,   180,   181,   182,   183,   184,     0,     0,
       0,     0,     0,     0,   185,     1,   168,   169,   170,    91,
       2,     3,     4,     5,     6,     0,   171,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   172,   173,     0,     0,     9,     0,     0,    10,
       0,     0,     0,     0,   174,     0,    13,     0,     0,     0,
     175,    16,     0,     0,     0,    17,    18,     0,   176,     0,
       0,     0,     0,    21,    22,   177,     0,     0,     0,   178,
       0,     0,    27,     0,    29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   179,   631,     0,     0,     0,     0,
     180,   181,   182,   183,   184,     0,     0,     1,     0,     0,
       0,   185,     2,     3,     4,     5,     6,     0,     7,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     8,     9,     0,
       0,    10,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,     0,    16,     0,     0,     0,    17,    18,    19,
       0,     0,     0,    20,     0,    21,    22,     0,    23,    24,
       0,     0,    25,    26,    27,    28,    29,    30,     0,     0,
      31,     0,     0,     0,     0,     0,    32,     0,     0,     0,
       0,     0,     0,    33,     0,     0,    34,     0,     0,     0,
       0,     0,     0,    35,     1,   168,   169,   170,    91,     2,
       3,     4,     5,     6,     0,   171,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   172,   173,     0,     0,     9,     0,     0,    10,     0,
       0,     0,     0,   174,     0,    13,     0,     0,     0,   175,
      16,     0,     0,     0,    17,    18,     0,   176,     0,     0,
       0,     0,    21,    22,   177,     0,     0,     0,   178,     0,
       0,    27,     0,    29,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   179,     0,     0,     0,     0,     0,   180,
     181,   182,   183,   184,     0,     0,     0,     0,     0,     0,
     185,     1,   168,   169,   170,    91,     2,     3,     4,     5,
       6,     0,   171,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   172,   173,
       0,     0,     9,     0,     0,    10,     0,     0,     0,     0,
     174,     0,    13,     0,     0,     0,   175,    16,     0,     0,
       0,    17,    18,     0,   176,     0,     0,     0,     0,    21,
      22,   177,     0,     0,     0,   178,     0,     0,    27,     0,
      29,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     342,     0,     0,     0,     0,     0,   180,   181,   182,   183,
     184,     0,     0,     1,     0,     0,     0,   185,     2,     3,
       4,     5,     6,     0,     7,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     8,     9,     0,     0,    10,    11,    12,
       0,     0,     0,     0,    13,     0,    14,   115,     0,    16,
       0,     0,     0,    17,    18,     0,     0,     0,     0,    20,
       0,    21,    22,     0,    23,    24,     0,     0,    25,    26,
      27,     0,    29,    30,     0,     0,   426,     0,     0,     1,
     284,     0,    32,     0,     2,     3,     4,     5,     6,    33,
       7,     0,    34,     0,     0,     0,     0,     0,     0,    35,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     8,
       9,     0,     0,    10,    11,    12,     0,     0,     0,     0,
      13,     0,    14,   115,     0,    16,     0,     0,     0,    17,
      18,     0,     0,     0,     0,    20,     0,    21,    22,     0,
      23,    24,     0,     0,    25,    26,    27,     0,    29,    30,
       0,     0,   116,     0,     0,  -204,     0,     0,    32,     0,
    -204,  -204,  -204,  -204,  -204,    33,  -204,     0,    34,     0,
       0,     0,     0,     0,     0,    35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -204,  -204,     0,     0,  -204,
    -204,  -204,     0,     0,     0,     0,  -204,     0,  -204,  -204,
       0,  -204,     0,     0,     0,  -204,  -204,     0,     0,     0,
       0,  -204,     0,  -204,  -204,     0,  -204,  -204,     0,     0,
    -204,  -204,  -204,     0,  -204,  -204,     0,     0,  -204,     0,
       0,     0,   408,  -204,  -204,  -204,  -204,  -204,     0,  -204,
       0,  -204,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -204,  -204,
       0,     0,  -204,  -204,  -204,     0,     0,     0,     0,  -204,
       0,  -204,  -204,     0,  -204,     0,     0,     0,  -204,  -204,
       0,     0,     0,     0,  -204,     0,  -204,  -204,     0,  -204,
    -204,     0,     0,  -204,  -204,  -204,     0,  -204,  -204,     0,
       0,     0,     1,     0,     0,     0,     0,     2,     3,     4,
       5,     6,     0,   336,  -204,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,     9,     0,     0,    10,    11,    12,     0,
       0,     0,     0,    13,     0,    14,     0,     0,    16,     0,
       0,     0,    17,    18,     0,     0,     0,     0,     0,     0,
      21,    22,     0,     0,    24,     0,     0,     0,    26,    27,
       0,    29,    30,     0,     0,     0,     0,     0,   -32,     0,
       0,   459,     0,     0,     0,   -32,   -32,     0,     0,     0,
     -32,   -32,     0,   -32,   -32,   -32,     1,   -32,   -32,     0,
       0,     2,     3,     4,     5,     6,     0,   336,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     9,     0,     0,
      10,    11,    12,     0,     0,     0,     0,    13,     0,    14,
       0,     0,    16,     0,     0,     0,    17,    18,     0,     0,
       0,     0,     0,     0,    21,    22,     0,     0,    24,     0,
       0,     0,    26,    27,     0,    29,    30,     0,     0,     0,
       0,     1,     0,     0,     0,   466,     2,     3,     4,     5,
       6,     0,   336,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     9,     0,     0,    10,    11,    12,     0,     0,
       0,     0,    13,     0,    14,     0,     0,    16,     0,     0,
       0,    17,    18,     0,     0,     0,     0,     0,     0,    21,
      22,     0,     0,    24,     0,     0,     0,    26,    27,     0,
      29,    30,     0,     0,     0,     0,     1,     0,     0,     0,
     551,     2,     3,     4,     5,     6,     0,   336,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     9,     0,     0,
      10,    11,    12,     0,     0,     0,     0,    13,     0,    14,
       0,     0,    16,     0,     0,     0,    17,    18,     0,     0,
       0,     0,     0,     0,    21,    22,     0,     0,    24,     0,
       0,     0,    26,    27,     0,    29,    30
};

static const yytype_int16 yycheck[] =
{
       0,   172,   173,   174,    98,    39,   107,     7,   132,     0,
      54,   119,   268,    49,    14,     0,   130,   119,   135,   130,
      72,   129,    14,     0,    54,   125,    29,   198,     3,   291,
     406,   407,    32,   132,     3,    14,   176,    12,    14,    73,
       9,    32,    79,     7,   461,    95,   179,     0,   179,    49,
     467,   328,     3,    34,    54,     3,    92,   106,    49,    96,
     109,   155,   339,    54,    49,   159,     3,   119,   162,   219,
      79,    14,     9,    84,    74,   215,    85,   129,    82,    55,
      80,    78,    79,    74,   231,    85,    30,    31,    32,   138,
      77,    95,    92,     3,    94,     0,    99,    76,    98,    99,
      10,    92,    12,    94,    77,    79,   239,    92,    77,    94,
     243,    85,   243,   113,    89,   151,    95,   231,   226,     3,
     231,   121,   122,   123,    83,   106,    76,    78,   109,    79,
      78,    77,   132,   133,   134,   552,    77,   284,    82,   556,
      84,   132,    86,   519,    49,    81,    77,   132,    79,   149,
      81,   151,    78,   153,   154,   155,   327,   138,   149,   159,
     151,   308,   153,   154,   149,    95,   151,   291,   153,   154,
     284,   171,   149,   284,   226,   437,    77,   594,    79,    76,
      81,   598,    79,   460,   107,    76,   303,    92,   328,    94,
      77,   341,   291,    80,   308,    99,    77,   308,     3,   339,
      81,   124,   125,   620,     9,    10,   337,    12,    79,   342,
       0,   342,    83,    76,     3,    97,   260,     7,   351,   219,
       9,    10,   316,    12,   318,    14,    28,    79,   322,   229,
     260,    83,    90,    91,   234,   385,   288,    77,   388,   386,
      80,    81,    32,   243,   149,    98,   151,   380,   153,   154,
     350,    77,   243,    79,   254,    81,   286,    47,    82,    49,
     260,   261,   402,   244,    54,    76,   406,   407,    79,   402,
      22,    23,   386,   406,   407,   386,   312,    77,   425,    79,
     536,    81,   429,   383,    74,    79,   286,    80,    77,    83,
     391,   291,   463,    83,    79,   286,    82,   297,    83,    79,
     291,    76,    92,    83,    94,   476,   291,    26,    27,    99,
     100,   425,   312,   437,   425,   429,   316,   417,   429,   427,
     460,   312,    79,   473,    82,   427,    83,   312,   459,    79,
      79,   121,   122,    83,    83,   466,   336,   470,   437,     3,
      76,   341,   132,    79,     8,   268,    10,    11,    12,   349,
      76,    77,   352,    79,    80,    81,    79,   451,    84,   149,
      83,   151,    77,   153,   154,    80,   513,    77,   468,    95,
      80,    81,    82,   163,    76,   427,    95,    96,   549,   519,
      76,   171,     3,    79,   384,   385,   519,     8,   388,    10,
      11,    12,   234,    79,    92,    93,    94,    83,   398,   513,
     400,    76,   513,   385,    79,   195,   388,   312,   408,   354,
     355,   356,   254,    82,   337,   562,   416,    24,    25,    82,
     551,    81,    82,    82,     3,     0,    79,   350,    92,     8,
       9,    10,    11,    12,    82,    14,   436,   437,    85,   229,
      78,    79,   442,    14,   234,   436,   437,    76,   562,   582,
     583,   562,   437,   243,    78,    79,     3,    79,   381,    78,
     383,    78,     9,    10,   254,    12,    80,    14,   391,     3,
     260,    92,    78,   473,    49,     9,    10,   477,    12,    54,
      14,   614,    79,    80,     3,   357,   358,   410,    76,     8,
       9,    10,    11,    12,   417,    14,   286,     3,   421,   359,
     360,   291,     8,    82,    10,    11,    12,    76,   365,   366,
      89,    76,   107,    92,    76,   515,    82,    92,     3,    94,
      99,    85,   312,     8,   524,    10,    11,    12,     3,    83,
     153,   154,   107,   524,     9,    10,   459,    12,    84,    14,
     330,   361,   362,   363,   364,   468,   336,   122,    82,    92,
      84,    80,    74,    76,    81,    76,   398,   132,    92,   349,
      77,    80,   352,    82,    82,    99,   408,    76,    83,    85,
      89,    84,    83,    92,   149,    14,   151,    85,   153,   154,
      99,   176,    92,    89,   179,   585,     3,   587,   588,    83,
      82,     8,     9,    10,    11,    12,    79,    83,     3,    83,
      78,   176,    83,     8,   179,    10,    11,    12,   398,    84,
     400,    81,   612,   536,    83,    83,    14,    92,   408,    14,
     215,    85,    89,    76,    99,    42,    81,    83,    85,     3,
     630,   631,    14,   633,     8,     9,    10,    11,    12,    56,
     215,    89,   642,    89,    45,    89,   436,   437,   243,     3,
      76,    19,   575,    15,     8,     9,    10,    11,    12,   234,
      14,    97,   352,   177,   473,   368,   328,   367,   243,     3,
     369,   378,    89,   515,     8,     9,    10,    11,    12,   254,
     400,   370,   400,   121,    89,   260,   147,   477,   478,   479,
     286,   307,   436,   616,    15,    16,    17,    18,    19,    20,
      21,   442,   416,   391,    -1,    -1,    -1,     0,    29,    -1,
      -1,   286,    -1,     3,     7,    89,   291,    -1,    -1,     9,
      10,     3,    12,    -1,    14,   515,    -1,     9,    10,    -1,
      12,    -1,    14,   328,   524,    89,    -1,   312,    -1,    32,
      -1,    -1,   337,   585,   339,   587,   588,   342,    -1,    -1,
      -1,    -1,    -1,   328,    -1,    89,    49,    -1,    -1,    -1,
      81,    54,   337,    -1,   339,    -1,     3,   342,    -1,    -1,
     612,     8,     9,    10,    11,    12,   566,   567,    99,    -1,
     570,    74,    -1,    -1,    -1,    -1,    -1,    -1,   630,   631,
      80,   633,    -1,    -1,    -1,   585,   391,   587,   588,    92,
     642,    94,    -1,    -1,    -1,    42,    99,   402,    -1,    -1,
      -1,   406,   407,   603,    -1,    -1,   391,    -1,   608,    56,
      -1,    -1,   612,   398,    -1,   400,    -1,   402,   121,   122,
      -1,   406,   407,   408,    -1,   625,   626,    -1,     3,   132,
     630,   631,    -1,   633,     9,    10,   636,    12,     3,    14,
      -1,    -1,   642,    -1,     9,    10,   149,    12,   151,    14,
     153,   154,   437,    -1,   459,   460,    -1,    -1,     3,    -1,
      -1,   466,    -1,     8,     9,    10,    11,    12,    -1,    14,
      -1,     3,    -1,    -1,   459,   460,     8,     9,    10,    11,
      12,   466,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    37,    38,    39,    -1,    -1,    -1,    -1,    44,
      -1,    46,    -1,    -1,    49,    -1,    -1,    -1,    53,    54,
      -1,    -1,    -1,    -1,   519,    -1,    61,    62,    -1,    -1,
      65,    -1,    -1,    -1,    69,    70,   229,    72,    73,    -1,
     515,   234,    -1,    -1,   519,    -1,    -1,    -1,    -1,    -1,
     243,    -1,    14,    -1,    89,    -1,   551,    19,    -1,    -1,
      -1,   254,    -1,    -1,    -1,    -1,    -1,   260,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,   551,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   286,    -1,    -1,    -1,    -1,   291,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     585,    -1,   587,   588,    -1,    -1,    -1,    -1,    80,   312,
      -1,    83,    -1,    85,    86,    -1,    -1,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    97,    98,   612,   100,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,    -1,    -1,    -1,   630,   631,    -1,   633,    -1,
     122,   123,    -1,    -1,    -1,    -1,    -1,   642,    -1,    -1,
     132,   133,   134,    -1,   136,    -1,    -1,    -1,    -1,   141,
      -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   155,    -1,    -1,    -1,   159,    -1,    -1,
     162,   163,    -1,    -1,    -1,   398,    -1,   400,    -1,   171,
      -1,    -1,    -1,    -1,   176,   408,    -1,    -1,    -1,   181,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   436,   437,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   215,    -1,    -1,    -1,   219,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   229,    -1,    -1,
      -1,    -1,   234,    -1,   236,    -1,   238,    -1,    -1,    -1,
      -1,    -1,     3,    -1,    -1,    -1,    -1,     8,     9,    10,
      11,    12,   254,    14,    -1,    -1,    -1,    -1,    -1,   261,
      -1,    -1,   264,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    37,    38,    39,    -1,
      -1,    -1,   515,    44,   286,    46,    -1,    -1,    49,   291,
      -1,   524,    53,    54,   296,   297,    -1,   299,    -1,    -1,
      61,    62,    -1,    -1,    65,   307,    -1,    -1,    69,    70,
      -1,    72,    73,    -1,   316,    -1,   318,    -1,    -1,    -1,
     322,    82,    -1,    -1,    -1,    -1,   328,    -1,   330,    -1,
      -1,    -1,    -1,    -1,   336,    -1,    -1,   339,    -1,   341,
      -1,    -1,    14,    -1,    -1,    -1,    -1,   349,    -1,    -1,
     352,    -1,   585,    -1,   587,   588,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,   612,
      -1,    -1,   384,   385,    -1,    -1,   388,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   398,   630,   631,    -1,
     633,    -1,    -1,    -1,    -1,    -1,   408,    -1,    80,   642,
      -1,    83,   414,    85,   416,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    97,    98,    -1,   100,    -1,
      -1,    -1,    -1,    -1,   436,   437,    -1,    -1,   440,    -1,
     442,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   451,
      -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,   460,    -1,
      -1,   133,   134,    -1,   466,    -1,    -1,    -1,    -1,    -1,
      -1,   473,    -1,    -1,    -1,   477,   478,   479,    -1,    -1,
      -1,    -1,    -1,   155,    -1,    -1,    -1,   159,    -1,    -1,
      -1,   163,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   171,
      -1,    -1,    -1,    -1,   176,    -1,    -1,    -1,    -1,   181,
      -1,    -1,    -1,   515,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   195,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   215,    -1,    -1,    -1,   219,    -1,   551,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   566,   567,    47,    -1,   570,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   585,    -1,   587,   588,    -1,    -1,   261,
      -1,    -1,   264,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      -1,   603,    83,    -1,    85,    -1,   608,    -1,    -1,    -1,
     612,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,   100,
      -1,    -1,    -1,   625,   626,   297,    -1,   299,   630,   631,
      -1,   633,   113,    -1,   636,    -1,    -1,    -1,    -1,    -1,
     642,    -1,   123,    -1,   316,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   133,   134,    -1,    -1,   328,    -1,   330,    -1,
      -1,    -1,    -1,    -1,   336,    -1,    -1,   339,    -1,   341,
      -1,    -1,    -1,    -1,   155,    -1,    -1,   349,   159,    -1,
     352,    -1,   163,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
     181,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   384,   385,   195,    -1,   388,    30,    31,    -1,
      33,    34,    -1,    -1,    37,    38,    39,    -1,    -1,    42,
      -1,    44,    -1,    46,    47,    48,    49,    -1,   219,    -1,
      53,    54,   414,    56,   416,    -1,    59,    -1,    61,    62,
      63,    64,    65,    -1,    67,    68,    69,    70,    -1,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    -1,   440,    82,
     442,    -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,
     261,    -1,    -1,   264,    -1,    -1,    99,    -1,   460,    -1,
      -1,    -1,    -1,    -1,   466,    -1,    -1,    -1,    -1,    -1,
      -1,   473,    -1,    -1,    -1,   477,   478,   479,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   297,    -1,   299,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    -1,    14,   316,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   330,
      30,    31,    -1,    -1,    34,    -1,    -1,    37,    -1,    -1,
     341,    -1,    42,    -1,    44,    -1,    -1,    -1,    48,    49,
      -1,    -1,    -1,    53,    54,    -1,    56,    -1,    -1,   551,
      -1,    61,    62,    63,    -1,    -1,    -1,    67,    -1,    -1,
      70,    -1,    72,    -1,   566,   567,    -1,    -1,   570,    -1,
      -1,    -1,    82,   384,   385,    -1,    -1,   388,    88,    89,
      90,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    99,
      -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   603,    -1,   414,    -1,   416,   608,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   625,   626,    -1,    -1,    -1,    -1,   440,
      -1,   442,    -1,    -1,   636,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   473,    -1,    -1,    -1,    -1,   478,   479,    30,
      31,    -1,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    -1,    -1,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    -1,    76,    77,    78,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,
      91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   566,   567,    -1,    -1,   570,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   603,    -1,    -1,    -1,    -1,   608,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    -1,
      14,    -1,    -1,    -1,   625,   626,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   636,    30,    31,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    -1,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    -1,    76,    77,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    -1,
      -1,    -1,    -1,    -1,    -1,    99,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    -1,    -1,    34,    -1,    -1,
      37,    38,    39,    -1,    -1,    42,    -1,    44,    -1,    46,
      -1,    48,    49,    -1,    -1,    -1,    53,    54,    -1,    56,
      -1,    -1,    -1,    -1,    61,    62,    63,    -1,    65,    -1,
      67,    -1,    69,    70,    -1,    72,    73,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      -1,    88,    89,    90,    91,    92,    -1,    -1,    -1,    -1,
      -1,    -1,    99,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    -1,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    -1,    -1,    34,    -1,    -1,    37,    38,    39,
      -1,    -1,    42,    -1,    44,    -1,    46,    -1,    48,    49,
      -1,    -1,    -1,    53,    54,    -1,    56,    -1,    -1,    -1,
      -1,    61,    62,    63,    -1,    65,    -1,    67,    -1,    69,
      70,    -1,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    88,    89,
      90,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    99,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,
      -1,    34,    -1,    -1,    37,    38,    39,    -1,    -1,    42,
      -1,    44,    -1,    46,    -1,    48,    49,    -1,    -1,    -1,
      53,    54,    -1,    56,    -1,    -1,    -1,    -1,    61,    62,
      63,    -1,    65,    -1,    67,    -1,    69,    70,    -1,    72,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,
      -1,    -1,     3,    -1,    -1,    -1,    99,     8,     9,    10,
      11,    12,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    -1,    -1,    37,    38,    39,    -1,
      -1,    -1,    -1,    44,    -1,    46,    47,    -1,    49,    -1,
      -1,    -1,    53,    54,    -1,    -1,    57,    58,    59,    -1,
      61,    62,    -1,    64,    65,    -1,    -1,    68,    69,    70,
      71,    72,    73,    -1,    -1,    76,    -1,    78,    -1,    80,
      -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,    99,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,
      34,    -1,    -1,    37,    -1,    -1,    -1,    -1,    42,    -1,
      44,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    53,
      54,    -1,    56,    -1,    -1,    -1,    -1,    61,    62,    63,
      -1,    -1,    -1,    67,    -1,    -1,    70,    -1,    72,    -1,
      -1,    -1,    -1,    77,    78,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,    -1,
      -1,     3,    -1,    -1,    -1,    99,     8,     9,    10,    11,
      12,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    34,    -1,    -1,    37,    38,    39,    -1,    -1,
      -1,    -1,    44,    -1,    46,    47,    -1,    49,    -1,    -1,
      -1,    53,    54,    -1,    -1,    57,    58,    59,    -1,    61,
      62,    -1,    64,    65,    -1,    -1,    68,    69,    70,    71,
      72,    73,    -1,    -1,    76,    -1,    -1,    -1,    80,    -1,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    99,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    34,
      -1,    -1,    37,    -1,    -1,    -1,    -1,    42,    -1,    44,
      -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    53,    54,
      -1,    56,    -1,    -1,    -1,    -1,    61,    62,    63,    -1,
      -1,    -1,    67,    -1,    -1,    70,    -1,    72,    -1,    -1,
      -1,    -1,    77,    78,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    88,    89,    90,    91,    92,    -1,    -1,
       3,    -1,    -1,    -1,    99,     8,     9,    10,    11,    12,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    -1,    -1,    37,    38,    39,    -1,    -1,    -1,
      -1,    44,    -1,    46,    47,    -1,    49,    -1,    -1,    -1,
      53,    54,    55,    -1,    -1,    -1,    59,    -1,    61,    62,
      -1,    64,    65,    -1,    -1,    68,    69,    70,    71,    72,
      73,    -1,    -1,    76,    77,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    92,
      -1,    -1,    -1,    -1,    -1,    -1,    99,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    34,    -1,
      -1,    37,    -1,    -1,    -1,    -1,    42,    -1,    44,    -1,
      -1,    -1,    48,    49,    -1,    -1,    -1,    53,    54,    -1,
      56,    -1,    -1,    -1,    -1,    61,    62,    63,    -1,    -1,
      -1,    67,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    -1,    88,    89,    90,    91,    92,    -1,    -1,    -1,
      -1,    -1,    -1,    99,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    -1,    -1,    34,    -1,    -1,    37,    -1,
      -1,    -1,    -1,    42,    -1,    44,    -1,    -1,    -1,    48,
      49,    -1,    -1,    -1,    53,    54,    -1,    56,    -1,    -1,
      -1,    -1,    61,    62,    63,    -1,    -1,    -1,    67,    -1,
      -1,    70,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    85,    -1,    -1,    88,
      89,    90,    91,    92,    -1,    -1,     3,    -1,    -1,    -1,
      99,     8,     9,    10,    11,    12,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    -1,    -1,
      37,    38,    39,    -1,    -1,    -1,    -1,    44,    -1,    46,
      47,    -1,    49,    -1,    -1,    -1,    53,    54,    55,    -1,
      -1,    -1,    59,    -1,    61,    62,    -1,    64,    65,    -1,
      -1,    68,    69,    70,    71,    72,    73,    -1,    -1,    76,
      -1,    78,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    -1,    -1,    92,    -1,    -1,    -1,    -1,
      -1,    -1,    99,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    -1,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    -1,    -1,    34,    -1,    -1,    37,    -1,    -1,
      -1,    -1,    42,    -1,    44,    -1,    -1,    -1,    48,    49,
      -1,    -1,    -1,    53,    54,    -1,    56,    -1,    -1,    -1,
      -1,    61,    62,    63,    -1,    -1,    -1,    67,    -1,    -1,
      70,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    84,    -1,    -1,    -1,    88,    89,
      90,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    99,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,
      -1,    34,    -1,    -1,    37,    -1,    -1,    -1,    -1,    42,
      -1,    44,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,
      53,    54,    -1,    56,    -1,    -1,    -1,    -1,    61,    62,
      63,    -1,    -1,    -1,    67,    -1,    -1,    70,    -1,    72,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,    92,
      -1,    -1,     3,    -1,    -1,    -1,    99,     8,     9,    10,
      11,    12,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    -1,    -1,    37,    38,    39,    -1,
      -1,    -1,    -1,    44,    -1,    46,    47,    -1,    49,    -1,
      -1,    -1,    53,    54,    55,    -1,    -1,    -1,    59,    -1,
      61,    62,    -1,    64,    65,    -1,    -1,    68,    69,    70,
      71,    72,    73,    -1,    -1,    76,    -1,    78,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,    99,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,
      34,    -1,    -1,    37,    -1,    -1,    -1,    -1,    42,    -1,
      44,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    53,
      54,    -1,    56,    -1,    -1,    -1,    -1,    61,    62,    63,
      -1,    -1,    -1,    67,    -1,    -1,    70,    -1,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      84,    -1,    -1,    -1,    88,    89,    90,    91,    92,    -1,
      -1,    -1,    -1,    -1,    -1,    99,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    -1,    -1,    34,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    42,    -1,    44,    -1,    -1,
      -1,    48,    49,    -1,    -1,    -1,    53,    54,    -1,    56,
      -1,    -1,    -1,    -1,    61,    62,    63,    -1,    -1,    -1,
      67,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    83,    -1,    -1,    -1,
      -1,    88,    89,    90,    91,    92,    -1,    -1,    -1,    -1,
      -1,    -1,    99,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    -1,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    -1,    -1,    34,    -1,    -1,    37,    -1,    -1,
      -1,    -1,    42,    -1,    44,    -1,    -1,    -1,    48,    49,
      -1,    -1,    -1,    53,    54,    -1,    56,    -1,    -1,    -1,
      -1,    61,    62,    63,    -1,    -1,    -1,    67,    -1,    -1,
      70,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    83,    -1,    -1,    -1,    -1,    88,    89,
      90,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    99,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,
      -1,    34,    -1,    -1,    37,    -1,    -1,    -1,    -1,    42,
      -1,    44,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,
      53,    54,    -1,    56,    -1,    -1,    -1,    -1,    61,    62,
      63,    -1,    -1,    -1,    67,    -1,    -1,    70,    -1,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    85,    -1,    -1,    88,    89,    90,    91,    92,
      -1,    -1,    -1,    -1,    -1,    -1,    99,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    34,    -1,
      -1,    37,    -1,    -1,    -1,    -1,    42,    -1,    44,    -1,
      -1,    -1,    48,    49,    -1,    -1,    -1,    53,    54,    -1,
      56,    -1,    -1,    -1,    -1,    61,    62,    63,    -1,    -1,
      -1,    67,    -1,    -1,    70,    -1,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    83,    -1,    -1,
      -1,    -1,    88,    89,    90,    91,    92,    -1,    -1,    -1,
      -1,    -1,    -1,    99,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    -1,    -1,    34,    -1,    -1,    37,    -1,
      -1,    -1,    -1,    42,    -1,    44,    -1,    -1,    -1,    48,
      49,    -1,    -1,    -1,    53,    54,    -1,    56,    -1,    -1,
      -1,    -1,    61,    62,    63,    -1,    -1,    -1,    67,    -1,
      -1,    70,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    83,    -1,    -1,    -1,    -1,    88,
      89,    90,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,
      99,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    -1,    34,    -1,    -1,    37,    -1,    -1,    -1,    -1,
      42,    -1,    44,    -1,    -1,    -1,    48,    49,    -1,    -1,
      -1,    53,    54,    -1,    56,    -1,    -1,    -1,    -1,    61,
      62,    63,    -1,    -1,    -1,    67,    -1,    -1,    70,    -1,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    85,    -1,    -1,    88,    89,    90,    91,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    99,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    34,
      -1,    -1,    37,    -1,    -1,    -1,    -1,    42,    -1,    44,
      -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    53,    54,
      -1,    56,    -1,    -1,    -1,    -1,    61,    62,    63,    -1,
      -1,    -1,    67,    -1,    -1,    70,    -1,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,    -1,
      -1,    -1,    -1,    88,    89,    90,    91,    92,    -1,    -1,
      -1,    -1,    -1,    -1,    99,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    -1,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    -1,    -1,    34,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    42,    -1,    44,    -1,    -1,    -1,
      48,    49,    -1,    -1,    -1,    53,    54,    -1,    56,    -1,
      -1,    -1,    -1,    61,    62,    63,    -1,    -1,    -1,    67,
      -1,    -1,    70,    -1,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    83,    -1,    -1,    -1,    -1,
      88,    89,    90,    91,    92,    -1,    -1,     3,    -1,    -1,
      -1,    99,     8,     9,    10,    11,    12,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    -1,
      -1,    37,    38,    39,    -1,    -1,    -1,    -1,    44,    -1,
      46,    47,    -1,    49,    -1,    -1,    -1,    53,    54,    55,
      -1,    -1,    -1,    59,    -1,    61,    62,    -1,    64,    65,
      -1,    -1,    68,    69,    70,    71,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    -1,    -1,    99,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    -1,    -1,    34,    -1,    -1,    37,    -1,
      -1,    -1,    -1,    42,    -1,    44,    -1,    -1,    -1,    48,
      49,    -1,    -1,    -1,    53,    54,    -1,    56,    -1,    -1,
      -1,    -1,    61,    62,    63,    -1,    -1,    -1,    67,    -1,
      -1,    70,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    88,
      89,    90,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,
      99,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    -1,    34,    -1,    -1,    37,    -1,    -1,    -1,    -1,
      42,    -1,    44,    -1,    -1,    -1,    48,    49,    -1,    -1,
      -1,    53,    54,    -1,    56,    -1,    -1,    -1,    -1,    61,
      62,    63,    -1,    -1,    -1,    67,    -1,    -1,    70,    -1,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,
      92,    -1,    -1,     3,    -1,    -1,    -1,    99,     8,     9,
      10,    11,    12,    -1,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    34,    -1,    -1,    37,    38,    39,
      -1,    -1,    -1,    -1,    44,    -1,    46,    47,    -1,    49,
      -1,    -1,    -1,    53,    54,    -1,    -1,    -1,    -1,    59,
      -1,    61,    62,    -1,    64,    65,    -1,    -1,    68,    69,
      70,    -1,    72,    73,    -1,    -1,    76,    -1,    -1,     3,
      80,    -1,    82,    -1,     8,     9,    10,    11,    12,    89,
      14,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,    99,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      34,    -1,    -1,    37,    38,    39,    -1,    -1,    -1,    -1,
      44,    -1,    46,    47,    -1,    49,    -1,    -1,    -1,    53,
      54,    -1,    -1,    -1,    -1,    59,    -1,    61,    62,    -1,
      64,    65,    -1,    -1,    68,    69,    70,    -1,    72,    73,
      -1,    -1,    76,    -1,    -1,     3,    -1,    -1,    82,    -1,
       8,     9,    10,    11,    12,    89,    14,    -1,    92,    -1,
      -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    -1,    -1,    37,
      38,    39,    -1,    -1,    -1,    -1,    44,    -1,    46,    47,
      -1,    49,    -1,    -1,    -1,    53,    54,    -1,    -1,    -1,
      -1,    59,    -1,    61,    62,    -1,    64,    65,    -1,    -1,
      68,    69,    70,    -1,    72,    73,    -1,    -1,     3,    -1,
      -1,    -1,    80,     8,     9,    10,    11,    12,    -1,    14,
      -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      -1,    -1,    37,    38,    39,    -1,    -1,    -1,    -1,    44,
      -1,    46,    47,    -1,    49,    -1,    -1,    -1,    53,    54,
      -1,    -1,    -1,    -1,    59,    -1,    61,    62,    -1,    64,
      65,    -1,    -1,    68,    69,    70,    -1,    72,    73,    -1,
      -1,    -1,     3,    -1,    -1,    -1,    -1,     8,     9,    10,
      11,    12,    -1,    14,    89,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    34,    -1,    -1,    37,    38,    39,    -1,
      -1,    -1,    -1,    44,    -1,    46,    -1,    -1,    49,    -1,
      -1,    -1,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    -1,    -1,    65,    -1,    -1,    -1,    69,    70,
      -1,    72,    73,    -1,    -1,    -1,    -1,    -1,    78,    -1,
      -1,    82,    -1,    -1,    -1,    85,    86,    -1,    -1,    -1,
      90,    91,    -1,    93,    94,    95,     3,    97,    98,    -1,
      -1,     8,     9,    10,    11,    12,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      37,    38,    39,    -1,    -1,    -1,    -1,    44,    -1,    46,
      -1,    -1,    49,    -1,    -1,    -1,    53,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    65,    -1,
      -1,    -1,    69,    70,    -1,    72,    73,    -1,    -1,    -1,
      -1,     3,    -1,    -1,    -1,    82,     8,     9,    10,    11,
      12,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    -1,    -1,    37,    38,    39,    -1,    -1,
      -1,    -1,    44,    -1,    46,    -1,    -1,    49,    -1,    -1,
      -1,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    -1,    -1,    65,    -1,    -1,    -1,    69,    70,    -1,
      72,    73,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,
      82,     8,     9,    10,    11,    12,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      37,    38,    39,    -1,    -1,    -1,    -1,    44,    -1,    46,
      -1,    -1,    49,    -1,    -1,    -1,    53,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    65,    -1,
      -1,    -1,    69,    70,    -1,    72,    73
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     8,     9,    10,    11,    12,    14,    33,    34,
      37,    38,    39,    44,    46,    47,    49,    53,    54,    55,
      59,    61,    62,    64,    65,    68,    69,    70,    71,    72,
      73,    76,    82,    89,    92,    99,   104,   105,   106,   107,
     108,   109,   110,   111,   118,   120,   121,   122,   123,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   179,   180,   181,   182,   183,   185,   187,   188,   189,
     190,   191,   192,   193,   194,   196,   197,   202,   207,   208,
     209,   224,   120,   122,   173,    14,    77,   108,   111,   122,
     224,     7,   116,     9,    77,   106,   111,    14,    55,    14,
     122,   173,   192,   108,   111,   195,   196,    95,     0,    92,
     108,   111,   173,    14,   165,    47,    76,   168,   190,   192,
      76,    79,    77,    80,    81,    82,   156,   203,   204,   220,
      84,   192,    77,    14,    80,   111,   122,   216,    92,   173,
     111,   122,    78,   111,   176,   177,   178,    77,   111,    77,
     165,   164,   184,    77,    77,    81,   111,   121,   224,    14,
     105,   111,   122,   122,   173,   173,    83,   195,     4,     5,
       6,    14,    30,    31,    42,    48,    56,    63,    67,    82,
      88,    89,    90,    91,    92,    99,   110,   112,   113,   114,
     115,   116,   117,   119,   120,   122,   124,   127,   128,   129,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   171,   172,   173,   198,   199,
     225,   226,   195,   122,    76,   203,   220,   191,   192,    14,
      35,    36,    40,    41,    43,    50,    51,    52,    55,    60,
      66,    74,    76,    82,    92,    99,   111,   120,   149,   151,
     153,   154,   155,   156,   157,   158,   160,   162,   163,   166,
     169,    14,   108,   111,   122,   221,   222,   223,    77,   149,
     172,   205,   125,   149,   203,    85,   147,   148,   152,    57,
      58,    71,    76,    78,    80,   111,   169,   187,   192,   202,
     210,   211,   212,   213,   219,   111,   122,    14,   108,   122,
     217,   218,   216,   111,   195,   111,    78,    79,    81,    78,
     176,    78,   164,    78,   184,   184,    14,   105,   122,   186,
      76,   105,   122,    76,   105,   111,   173,    42,    56,   111,
     122,   173,   136,   136,    84,   136,    14,    82,   111,   130,
     131,   199,    82,   127,   151,   198,   173,    30,    31,    32,
      82,    84,    86,   136,    92,    93,    94,    90,    91,    22,
      23,    26,    27,    95,    96,    24,    25,    99,    97,    98,
      28,    15,    16,    17,    18,    19,    20,    21,    29,    81,
      99,   150,   199,    82,    14,    82,    84,   122,   194,   200,
     201,    79,    96,   203,   111,    76,   152,    76,    80,   153,
      82,   111,    82,   111,    76,   151,    82,    82,    80,    76,
      79,    78,   153,   108,   122,   108,    79,    82,    78,   205,
     206,    79,    83,    85,   152,    80,    76,   192,   212,    81,
     214,   215,    76,    78,   210,    76,    79,    80,   111,   108,
     122,   108,    79,   216,   177,   152,    78,    78,    78,    78,
     105,   122,   105,    76,    76,   105,    76,    84,   136,    82,
     130,   131,   173,    85,   125,   198,    82,   131,    82,   134,
      84,   132,   133,   194,   198,    83,    83,    14,    89,   122,
     126,   173,    83,   125,   151,   126,   137,   137,   137,   138,
     138,   139,   139,   140,   140,   140,   140,   141,   141,   142,
     143,   144,   145,   146,   151,   149,    83,   125,   122,   200,
      85,   152,   200,    84,   226,    80,   153,    74,   155,   161,
     167,    76,   151,   159,   199,    76,   159,   159,   153,   149,
      77,   108,   221,    83,   125,    78,    79,   149,   152,    76,
     101,   152,   192,   213,   210,   108,   218,   105,    76,    85,
     198,    82,   131,   134,   136,    83,    83,   198,   134,    83,
     125,   151,    84,   132,    83,   136,    89,   122,   173,   173,
      89,   173,    14,    83,    85,    80,    83,    83,    85,    85,
     152,   153,    82,    76,   159,    83,   192,    83,    83,    78,
      83,    78,   205,   136,    83,   198,   134,   134,    83,    83,
      85,   152,   173,    89,   173,    14,   173,    14,    89,   149,
      85,   151,    83,   151,    76,   153,    81,   153,   153,   134,
      83,   134,    85,   173,    14,    89,    89,   173,    83,   153,
      83,    83,   151,    45,   149,   134,    89,   173,   173,    76,
     153,   153,    83,   153,   173,   153
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
      

/* Line 1464 of yacc.c  */
#line 3024 "parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1684 of yacc.c  */
#line 1329 "parser.y"

/*
static void
yyerror(char *s)
{
	fprintf(stderr, "%d: %s\n", line_num, s);
}
*/
/*
#ifdef MAIN
/* use yours instead of this *//*
int
main(void)
{
	line_num = 1;
	yyparse();

	return 0;
}
#endif*/
