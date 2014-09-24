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
#line 20 "cparser.y"

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "errors.h"
#include "token.h"
#include "120parse.h"
#include "parsedef.h"

struct TreeNode * alacnary(int, int, int,...);

extern int line_num;
int suppress_parse_error = 0;



/* Line 189 of yacc.c  */
#line 89 "cparser.tab.c"

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

/* Line 214 of yacc.c  */
#line 36 "cparser.y"

	struct Token *t;
	struct TreeNode *n;



/* Line 214 of yacc.c  */
#line 257 "cparser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 269 "cparser.tab.c"

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4647

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  126
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  210
/* YYNRULES -- Number of rules.  */
#define YYNRULES  559
/* YYNRULES -- Number of states.  */
#define YYNSTATES  894

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   380

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    13,    17,    19,    21,    23,
      26,    29,    31,    34,    36,    39,    42,    45,    47,    49,
      52,    54,    57,    60,    62,    65,    67,    69,    71,    73,
      76,    81,    84,    87,    89,    92,    94,    97,    99,   101,
     103,   105,   107,   109,   111,   113,   115,   117,   119,   121,
     123,   125,   129,   132,   135,   139,   140,   142,   147,   156,
     164,   170,   175,   179,   183,   187,   191,   194,   197,   205,
     213,   221,   229,   232,   233,   235,   237,   241,   243,   246,
     249,   252,   256,   259,   262,   265,   268,   271,   273,   276,
     278,   281,   284,   288,   293,   296,   301,   304,   307,   310,
     313,   315,   319,   324,   325,   329,   331,   334,   336,   340,
     344,   346,   350,   354,   358,   360,   364,   368,   370,   374,
     378,   380,   384,   388,   392,   396,   398,   402,   406,   408,
     412,   414,   418,   420,   424,   426,   430,   432,   436,   438,
     444,   446,   450,   454,   456,   458,   460,   462,   464,   466,
     468,   470,   472,   474,   476,   478,   479,   481,   483,   487,
     489,   491,   495,   499,   503,   505,   509,   513,   515,   519,
     521,   525,   527,   531,   533,   537,   539,   543,   545,   551,
     553,   557,   559,   561,   565,   567,   571,   574,   576,   580,
     583,   585,   587,   589,   591,   593,   595,   597,   599,   603,
     608,   612,   616,   624,   625,   628,   635,   641,   649,   655,
     656,   658,   660,   666,   674,   683,   685,   688,   691,   695,
     699,   701,   706,   716,   717,   721,   729,   732,   734,   738,
     741,   743,   745,   747,   749,   751,   753,   755,   758,   760,
     762,   764,   766,   768,   770,   773,   775,   778,   781,   784,
     786,   789,   792,   794,   797,   799,   801,   804,   806,   809,
     811,   814,   816,   818,   821,   823,   826,   828,   831,   835,
     838,   840,   842,   844,   846,   848,   850,   852,   855,   857,
     859,   861,   863,   865,   867,   869,   871,   873,   875,   877,
     879,   881,   883,   886,   888,   890,   892,   894,   896,   898,
     900,   902,   904,   906,   908,   910,   912,   914,   916,   919,
     922,   926,   929,   932,   936,   941,   943,   947,   949,   953,
     954,   958,   960,   964,   967,   969,   973,   975,   979,   982,
     988,   992,   997,  1002,  1008,  1012,  1016,  1020,  1024,  1026,
    1028,  1031,  1033,  1036,  1038,  1040,  1043,  1045,  1048,  1049,
    1052,  1053,  1056,  1058,  1060,  1063,  1066,  1067,  1070,  1072,
    1073,  1075,  1078,  1082,  1087,  1090,  1094,  1098,  1099,  1101,
    1104,  1106,  1110,  1112,  1116,  1118,  1121,  1125,  1127,  1131,
    1133,  1135,  1137,  1140,  1142,  1144,  1148,  1151,  1153,  1156,
    1160,  1162,  1164,  1167,  1170,  1173,  1176,  1179,  1182,  1184,
    1188,  1192,  1195,  1197,  1199,  1201,  1205,  1210,  1213,  1220,
    1229,  1231,  1235,  1238,  1240,  1244,  1247,  1249,  1252,  1257,
    1263,  1268,  1272,  1275,  1277,  1279,  1281,  1285,  1294,  1295,
    1299,  1307,  1310,  1312,  1316,  1319,  1321,  1323,  1325,  1327,
    1329,  1331,  1334,  1337,  1340,  1343,  1347,  1351,  1355,  1357,
    1359,  1362,  1366,  1369,  1371,  1377,  1379,  1383,  1385,  1389,
    1391,  1394,  1397,  1399,  1401,  1403,  1406,  1409,  1412,  1413,
    1415,  1418,  1423,  1425,  1428,  1431,  1436,  1441,  1443,  1446,
    1448,  1450,  1452,  1454,  1456,  1458,  1460,  1462,  1464,  1466,
    1468,  1470,  1472,  1474,  1476,  1478,  1480,  1482,  1484,  1486,
    1488,  1490,  1492,  1494,  1496,  1498,  1500,  1502,  1504,  1506,
    1508,  1510,  1512,  1514,  1516,  1518,  1520,  1522,  1525,  1528,
    1531,  1534,  1539,  1541,  1545,  1547,  1551,  1553,  1557,  1559,
    1562,  1564,  1566,  1569,  1573,  1579,  1582,  1584,  1588,  1590,
    1595,  1599,  1601,  1604,  1610,  1612,  1614,  1617,  1619,  1622,
    1626,  1631,  1633,  1637,  1639,  1640,  1641,  1642,  1643,  1644
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     146,     0,    -1,   121,    -1,   127,    -1,   127,   129,     3,
     318,    14,    -1,   127,   129,     4,    -1,   317,    -1,    13,
      -1,    54,    -1,    86,   130,    -1,   128,    54,    -1,   128,
      -1,   131,   132,    -1,   132,    -1,   130,   132,    -1,    11,
     128,    -1,    86,   134,    -1,   301,    -1,   309,    -1,    86,
     135,    -1,   135,    -1,   131,   134,    -1,   131,   136,    -1,
     136,    -1,   130,   136,    -1,   133,    -1,   137,    -1,   134,
      -1,   229,    -1,   139,   229,    -1,   139,    54,    11,   139,
      -1,    11,   139,    -1,    86,   140,    -1,   140,    -1,   131,
     141,    -1,   141,    -1,   130,   142,    -1,   123,    -1,   122,
      -1,   119,    -1,   120,    -1,   143,    -1,   145,    -1,   101,
      -1,   114,    -1,   205,    -1,   144,    -1,   112,    -1,   219,
      -1,   148,    -1,   260,    -1,    17,   176,    18,    -1,    86,
     148,    -1,   263,    27,    -1,   149,   263,    27,    -1,    -1,
     147,    -1,   151,   260,   150,     4,    -1,   151,   260,   150,
       3,   149,   331,    19,     1,    -1,   151,   260,   150,     3,
     149,   331,     1,    -1,   151,   260,   150,     3,     1,    -1,
     151,    17,   176,    18,    -1,   151,    24,   138,    -1,   151,
      24,   142,    -1,   151,    30,   138,    -1,   151,    30,   142,
      -1,   151,    35,    -1,   151,    32,    -1,    99,    13,   256,
      14,    21,   177,    22,    -1,   110,    13,   256,    14,    21,
     177,    22,    -1,   107,    13,   256,    14,    21,   177,    22,
      -1,    94,    13,   256,    14,    21,   177,    22,    -1,   116,
     261,    -1,    -1,   153,    -1,   174,    -1,   153,    28,   174,
      -1,   151,    -1,    35,   161,    -1,    32,   161,    -1,   251,
     161,    -1,   220,   249,   161,    -1,     3,   161,    -1,     4,
     161,    -1,    12,   161,    -1,    11,   161,    -1,   109,   154,
      -1,   156,    -1,   130,   156,    -1,   155,    -1,   130,   155,
      -1,    97,   161,    -1,   105,   157,   160,    -1,   105,   261,
     157,   160,    -1,   105,   261,    -1,   105,   261,   261,   160,
      -1,   226,   253,    -1,   226,   158,    -1,   226,   157,    -1,
     251,   158,    -1,   159,    -1,    17,   177,    18,    -1,   159,
      17,   178,    18,    -1,    -1,    21,   152,    22,    -1,   154,
      -1,   148,   161,    -1,   161,    -1,   162,    52,   161,    -1,
     162,    31,   161,    -1,   162,    -1,   163,   249,   162,    -1,
     163,     6,   162,    -1,   163,     7,   162,    -1,   163,    -1,
     164,     3,   163,    -1,   164,     4,   163,    -1,   164,    -1,
     165,    40,   164,    -1,   165,    41,   164,    -1,   165,    -1,
     166,    13,   165,    -1,   166,    14,   165,    -1,   166,    36,
     165,    -1,   166,    34,   165,    -1,   166,    -1,   167,    33,
     166,    -1,   167,    39,   166,    -1,   167,    -1,   168,     9,
     167,    -1,   168,    -1,   169,     8,   168,    -1,   169,    -1,
     170,    10,   169,    -1,   170,    -1,   171,    37,   170,    -1,
     171,    -1,   172,    38,   171,    -1,   172,    -1,   172,    23,
     177,    16,   174,    -1,   173,    -1,   172,   175,   174,    -1,
     172,    15,   278,    -1,   325,    -1,    15,    -1,    42,    -1,
      43,    -1,    44,    -1,    45,    -1,    46,    -1,    47,    -1,
      48,    -1,    49,    -1,    50,    -1,    51,    -1,    -1,   177,
      -1,   174,    -1,   153,    28,   174,    -1,   173,    -1,   165,
      -1,   179,    13,   165,    -1,   179,    36,   165,    -1,   179,
      34,   165,    -1,   179,    -1,   180,    33,   179,    -1,   180,
      39,   179,    -1,   180,    -1,   181,     9,   180,    -1,   181,
      -1,   182,     8,   181,    -1,   182,    -1,   183,    10,   182,
      -1,   183,    -1,   184,    37,   183,    -1,   184,    -1,   185,
      38,   184,    -1,   185,    -1,   185,    23,   188,    16,   187,
      -1,   186,    -1,   185,   175,   187,    -1,   326,    -1,   187,
      -1,   189,    28,   187,    -1,   187,    -1,   189,    28,   187,
      -1,   333,   191,    -1,   192,    -1,   329,     3,   191,    -1,
     329,     4,    -1,   193,    -1,   195,    -1,   203,    -1,   321,
      -1,   194,    -1,   197,    -1,   200,    -1,   202,    -1,   127,
      16,   190,    -1,    92,   178,    16,   190,    -1,    96,    16,
     190,    -1,    19,   196,    20,    -1,    19,   196,   190,    29,
     330,     1,    20,    -1,    -1,   196,   190,    -1,   196,   190,
      29,   330,     1,    27,    -1,   104,    21,   199,    22,   190,
      -1,   104,    21,   199,    22,   190,   100,   190,    -1,   111,
      21,   199,    22,   190,    -1,    -1,   199,    -1,   263,    -1,
     117,    21,   199,    22,   190,    -1,    98,   190,   117,    21,
     177,    22,    27,    -1,   102,    21,   201,   198,    27,   176,
      22,   190,    -1,   212,    -1,    91,    27,    -1,    95,    27,
      -1,   108,   176,    27,    -1,   103,   127,    27,    -1,   210,
      -1,    19,   332,   205,    20,    -1,    19,   332,   205,   335,
     206,    29,   330,     1,    20,    -1,    -1,   205,   335,   206,
      -1,   205,   335,   206,    29,   330,     1,    27,    -1,   334,
     207,    -1,   208,    -1,   329,     3,   207,    -1,   329,     4,
      -1,   210,    -1,   270,    -1,   311,    -1,   320,    -1,   209,
      -1,   246,    -1,   241,    -1,    86,   209,    -1,   212,    -1,
     211,    -1,   245,    -1,   242,    -1,   243,    -1,   244,    -1,
      86,   211,    -1,    27,    -1,   248,    27,    -1,   247,    27,
      -1,   223,   212,    -1,   229,    -1,   213,   229,    -1,   213,
     222,    -1,   213,    -1,    86,   214,    -1,   133,    -1,   227,
      -1,   215,   222,    -1,   215,    -1,   215,   213,    -1,   216,
      -1,   217,   216,    -1,   137,    -1,   217,    -1,   217,   137,
      -1,   214,    -1,   214,   218,    -1,   218,    -1,   217,    54,
      -1,   214,   217,    54,    -1,   214,    54,    -1,   224,    -1,
     225,    -1,    81,    -1,    87,    -1,   255,    -1,   221,    -1,
     221,    -1,    86,   223,    -1,    84,    -1,    85,    -1,    83,
      -1,    80,    -1,    77,    -1,    78,    -1,    82,    -1,    89,
      -1,   228,    -1,   227,    -1,   255,    -1,   286,    -1,   232,
      -1,   230,    -1,    86,   227,    -1,   133,    -1,   229,    -1,
      59,    -1,    68,    -1,    58,    -1,    64,    -1,    62,    -1,
      63,    -1,    65,    -1,    66,    -1,    61,    -1,    60,    -1,
      67,    -1,   283,    -1,   231,    -1,    73,   133,    -1,    70,
     133,    -1,    70,   133,   233,    -1,    70,   233,    -1,    19,
     234,    -1,    19,   238,   234,    -1,    19,   238,    28,   235,
      -1,    20,    -1,   330,     1,    20,    -1,    20,    -1,   330,
       1,    20,    -1,    -1,   330,     1,    28,    -1,   236,    -1,
     238,    28,   236,    -1,   237,   239,    -1,   240,    -1,   240,
      15,   178,    -1,   127,    -1,    71,   133,   204,    -1,    71,
     204,    -1,    71,   133,    15,   133,    27,    -1,    88,   138,
      27,    -1,    88,    73,   138,    27,    -1,    88,    71,   133,
      27,    -1,    90,    21,   143,    22,    27,    -1,    80,   143,
     206,    -1,    80,   143,   204,    -1,   174,    28,   248,    -1,
     247,    28,   248,    -1,   174,    -1,     5,    -1,   249,   255,
      -1,   249,    -1,   131,   250,    -1,     9,    -1,   250,    -1,
     130,   250,    -1,   251,    -1,   251,   252,    -1,    -1,   251,
     253,    -1,    -1,   254,   255,    -1,    75,    -1,    76,    -1,
     226,   257,    -1,   226,   256,    -1,    -1,   251,   257,    -1,
     259,    -1,    -1,   259,    -1,   258,   260,    -1,   258,    17,
      18,    -1,   258,    17,   178,    18,    -1,   261,   254,    -1,
     261,   254,   327,    -1,    21,   262,    22,    -1,    -1,   263,
      -1,   263,    53,    -1,   267,    -1,   263,    28,   267,    -1,
     252,    -1,   163,   249,   253,    -1,   264,    -1,   168,     9,
      -1,   168,     9,   264,    -1,   265,    -1,   265,    15,   174,
      -1,    53,    -1,   174,    -1,   266,    -1,   223,   267,    -1,
     187,    -1,   269,    -1,   269,    15,   187,    -1,   223,   268,
      -1,   264,    -1,   181,     9,    -1,   181,     9,   264,    -1,
     272,    -1,   271,    -1,   174,   274,    -1,   174,   276,    -1,
     223,   271,    -1,   273,   274,    -1,   273,   276,    -1,   223,
     272,    -1,   297,    -1,   273,    28,   174,    -1,   115,   275,
     322,    -1,   303,   276,    -1,   195,    -1,   174,    -1,   278,
      -1,    19,   279,    20,    -1,    19,   279,    28,    20,    -1,
      19,    20,    -1,    19,   280,    29,   330,     1,    20,    -1,
      19,   279,    28,   280,    29,   330,     1,    20,    -1,   280,
      -1,   279,    28,   280,    -1,   333,   281,    -1,   277,    -1,
     329,     3,   281,    -1,   329,     4,    -1,    16,    -1,   285,
     133,    -1,   285,   133,   282,     1,    -1,   285,   133,   282,
     298,    19,    -1,   285,    16,   298,    19,    -1,   285,   133,
      19,    -1,   285,    19,    -1,    69,    -1,    72,    -1,    74,
      -1,   284,   287,    20,    -1,   284,   287,   335,   288,    29,
     330,     1,    20,    -1,    -1,   287,   335,   288,    -1,   287,
     335,   288,    29,   330,     1,    27,    -1,   333,   289,    -1,
     290,    -1,   329,     3,   289,    -1,   329,     4,    -1,   294,
      -1,   291,    -1,   270,    -1,   243,    -1,   311,    -1,    27,
      -1,   174,    27,    -1,   273,    27,    -1,   292,    27,    -1,
     223,   291,    -1,   174,    28,   293,    -1,   273,    28,   297,
      -1,   292,    28,   293,    -1,   174,    -1,   297,    -1,   300,
      16,    -1,   174,    16,   296,    -1,    16,   296,    -1,   172,
      -1,   172,    23,   296,    16,   296,    -1,   295,    -1,   295,
      15,   277,    -1,   299,    -1,   298,    28,   299,    -1,   133,
      -1,   300,   299,    -1,    89,   299,    -1,    55,    -1,    56,
      -1,    57,    -1,   106,   302,    -1,   226,   253,    -1,   226,
     302,    -1,    -1,   304,    -1,    16,   305,    -1,    16,   305,
     330,     1,    -1,   307,    -1,   306,   307,    -1,   305,    28,
      -1,   305,   330,     1,    28,    -1,   308,    21,   152,    22,
      -1,   133,    -1,   106,   310,    -1,   105,    -1,    97,    -1,
       3,    -1,     4,    -1,     5,    -1,     6,    -1,     7,    -1,
       8,    -1,     9,    -1,    10,    -1,    11,    -1,    12,    -1,
      15,    -1,    13,    -1,    14,    -1,    42,    -1,    50,    -1,
      46,    -1,    44,    -1,    45,    -1,    51,    -1,    43,    -1,
      47,    -1,    40,    -1,    41,    -1,    49,    -1,    48,    -1,
      33,    -1,    39,    -1,    36,    -1,    34,    -1,    37,    -1,
      38,    -1,    35,    -1,    32,    -1,    28,    -1,    31,    -1,
      30,    -1,    21,    22,    -1,    17,    18,    -1,   312,   208,
      -1,    79,   311,    -1,    86,    13,   313,    14,    -1,   314,
      -1,   313,    28,   314,    -1,   315,    -1,   315,    15,   256,
      -1,   316,    -1,   316,    15,   127,    -1,   268,    -1,   330,
       1,    -1,    69,    -1,    73,    -1,   312,    69,    -1,   312,
      69,   127,    -1,    86,   127,    13,   318,    14,    -1,    86,
     317,    -1,   319,    -1,   318,    28,   319,    -1,   268,    -1,
      86,    13,    14,   208,    -1,   115,   195,   322,    -1,   323,
      -1,   323,   322,    -1,    93,    21,   324,    22,   195,    -1,
     267,    -1,   113,    -1,   113,   174,    -1,   113,    -1,   113,
     187,    -1,   113,    21,    22,    -1,   113,    21,   328,    22,
      -1,   256,    -1,   328,    28,   256,    -1,     1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   294,   294,   297,   298,   299,   300,   303,   306,   307,
     310,   317,   318,   321,   322,   330,   331,   334,   335,   336,
     339,   340,   341,   344,   345,   349,   350,   351,   359,   360,
     363,   364,   365,   368,   369,   372,   373,   385,   388,   389,
     390,   391,   392,   395,   396,   402,   435,   436,   437,   441,
     449,   450,   451,   459,   460,   463,   466,   468,   470,   472,
     474,   476,   480,   482,   483,   485,   486,   487,   488,   489,
     490,   491,   492,   497,   498,   501,   502,   505,   506,   507,
     508,   513,   516,   517,   518,   519,   520,   522,   523,   524,
     525,   530,   533,   534,   535,   537,   543,   544,   545,   548,
     549,   552,   553,   556,   557,   563,   564,   568,   569,   570,
     573,   574,   575,   576,   579,   580,   581,   584,   585,   586,
     589,   590,   591,   592,   593,   596,   597,   598,   601,   602,
     605,   606,   609,   610,   613,   614,   617,   618,   621,   622,
     629,   630,   632,   633,   636,   637,   638,   639,   640,   641,
     642,   643,   644,   645,   646,   652,   653,   656,   657,   660,
     665,   666,   667,   668,   671,   672,   674,   678,   679,   682,
     683,   687,   688,   692,   693,   697,   698,   702,   703,   707,
     708,   710,   713,   714,   718,   719,   728,   731,   732,   733,
     736,   738,   739,   740,   743,   744,   745,   746,   749,   750,
     751,   757,   758,   760,   762,   763,   769,   770,   771,   773,
     775,   778,   783,   784,   785,   788,   792,   793,   794,   795,
     797,   802,   803,   805,   806,   807,   808,   809,   810,   811,
     812,   813,   814,   816,   817,   818,   819,   820,   821,   822,
     823,   824,   825,   826,   827,   828,   829,   830,   831,   846,
     847,   848,   849,   850,   851,   852,   853,   854,   855,   856,
     857,   858,   859,   860,   861,   862,   863,   864,   865,   866,
     868,   869,   870,   871,   872,   874,   876,   877,   879,   879,
     879,   880,   881,   883,   884,   885,   887,   888,   889,   891,
     892,   893,   894,   895,   896,   897,   897,   897,   897,   897,
     897,   897,   897,   897,   897,   897,   908,   909,   910,   912,
     913,   914,   915,   916,   917,   918,   919,   920,   921,   922,
     923,   924,   925,   926,   927,   928,   929,   931,   932,   933,
     935,   936,   938,   939,   940,   941,   947,   948,   949,   956,
     957,   958,   959,   960,   961,   962,   963,   964,   966,   967,
     969,   970,   971,   971,   974,   975,   978,   979,   980,   981,
     982,   983,   984,   985,   988,   989,   990,   992,   993,   994,
     995,   996,  1004,  1005,  1006,  1007,  1008,  1009,  1010,  1011,
    1012,  1013,  1014,  1018,  1019,  1020,  1022,  1023,  1024,  1025,
    1031,  1032,  1033,  1034,  1035,  1036,  1037,  1038,  1039,  1040,
    1041,  1042,  1043,  1051,  1052,  1053,  1054,  1055,  1056,  1057,
    1059,  1060,  1061,  1062,  1063,  1064,  1079,  1080,  1081,  1082,
    1083,  1084,  1085,  1086,  1086,  1086,  1087,  1088,  1090,  1091,
    1092,  1094,  1095,  1096,  1097,  1098,  1099,  1100,  1103,  1104,
    1111,  1112,  1113,  1114,  1115,  1116,  1117,  1118,  1119,  1122,
    1123,  1124,  1125,  1126,  1128,  1129,  1130,  1136,  1137,  1138,
    1139,  1140,  1141,  1141,  1141,  1146,  1147,  1148,  1156,  1157,
    1158,  1159,  1160,  1161,  1162,  1163,  1164,  1165,  1170,  1180,
    1181,  1186,  1187,  1188,  1189,  1190,  1191,  1192,  1193,  1194,
    1195,  1196,  1197,  1198,  1199,  1200,  1201,  1202,  1203,  1204,
    1205,  1206,  1207,  1208,  1209,  1210,  1211,  1212,  1213,  1214,
    1215,  1216,  1217,  1218,  1219,  1220,  1221,  1222,  1223,  1228,
    1229,  1230,  1231,  1232,  1233,  1234,  1235,  1236,  1237,  1238,
    1239,  1241,  1243,  1244,  1245,  1246,  1250,  1251,  1252,  1262,
    1267,  1269,  1270,  1271,  1272,  1274,  1275,  1276,  1277,  1278,
    1279,  1280,  1281,  1286,  1287,  1288,  1289,  1290,  1291,  1292
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PLUS", "MINUS", "MUL", "DIV", "MOD",
  "ER", "AND", "OR", "NOT", "BANG", "LT", "GT", "ASN", "COLON", "LB", "RB",
  "LC", "RC", "LP", "RP", "QUEST", "DOT", "AT", "DOLLAR", "SM", "CM",
  "POUND", "ARROW", "ARROW_STAR", "DEC", "EQ", "GE", "INC", "LE",
  "LOG_AND", "LOG_OR", "NE", "SHL", "SHR", "ASS_ADD", "ASS_AND", "ASS_DIV",
  "ASS_MOD", "ASS_MUL", "ASS_OR", "ASS_SHL", "ASS_SHR", "ASS_SUB",
  "ASS_XOR", "DOT_STAR", "ELLIPSIS", "SCOPE", "PRIVATE", "PROTECTED",
  "PUBLIC", "BOOL", "CHAR", "DOUBLE", "FLOAT", "INT", "LONG", "SHORT",
  "SIGNED", "UNSIGNED", "VOID", "WCHAR_T", "CLASS", "ENUM", "NAMESPACE",
  "STRUCT", "TYPENAME", "UNION", "CONST", "VOLATILE", "AUTO", "EXPLICIT",
  "EXPORT", "EXTERN", "FRIEND", "INLINE", "MUTABLE", "REGISTER", "STATIC",
  "TEMPLATE", "TYPEDEF", "USING", "VIRTUAL", "ASM", "BREAK", "CASE",
  "CATCH", "CONST_CAST", "CONTINUE", "DEFAULT", "DELETE", "DO",
  "DYNAMIC_CAST", "ELSE", "FALSE", "FOR", "GOTO", "IF", "NEW", "OPERATOR",
  "REINTERPRET_CAST", "RETURN", "SIZEOF", "STATIC_CAST", "SWITCH", "THIS",
  "THROW", "TRUE", "TRY", "TYPEID", "WHILE", "PDEFINE", "CCON", "FCON",
  "IDENT", "ICON", "STRING", "SHIFT_THERE", "REDUCE_HERE_MOSTLY",
  "$accept", "identifier", "id", "template_test", "global_scope",
  "id_scope", "nested_id", "scoped_id", "destructor_id",
  "special_function_id", "nested_special_function_id",
  "scoped_special_function_id", "declarator_id", "built_in_type_id",
  "pseudo_destructor_id", "nested_pseudo_destructor_id",
  "scoped_pseudo_destructor_id", "string", "literal", "boolean_literal",
  "translation_unit", "primary_expression", "abstract_expression",
  "type1_parameters", "mark_type1", "postfix_expression",
  "expression_list.opt", "expression_list", "unary_expression",
  "delete_expression", "new_expression", "new_type_id", "new_declarator",
  "direct_new_declarator", "new_initializer.opt", "cast_expression",
  "pm_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression.opt", "expression", "constant_expression",
  "templated_relational_expression", "templated_equality_expression",
  "templated_and_expression", "templated_exclusive_or_expression",
  "templated_inclusive_or_expression", "templated_logical_and_expression",
  "templated_logical_or_expression", "templated_conditional_expression",
  "templated_assignment_expression", "templated_expression",
  "templated_expression_list", "looping_statement", "looped_statement",
  "statement", "control_statement", "labeled_statement",
  "compound_statement", "statement_seq.opt", "selection_statement",
  "condition.opt", "condition", "iteration_statement",
  "for_init_statement", "jump_statement", "declaration_statement",
  "compound_declaration", "declaration_seq.opt", "looping_declaration",
  "looped_declaration", "declaration", "specialised_declaration",
  "block_declaration", "specialised_block_declaration",
  "simple_declaration", "suffix_built_in_decl_specifier.raw",
  "suffix_built_in_decl_specifier", "suffix_named_decl_specifier",
  "suffix_named_decl_specifier.bi", "suffix_named_decl_specifiers",
  "suffix_named_decl_specifiers.sf", "suffix_decl_specified_ids",
  "suffix_decl_specified_scope", "decl_specifier_affix",
  "decl_specifier_suffix", "decl_specifier_prefix",
  "storage_class_specifier", "function_specifier", "type_specifier",
  "elaborate_type_specifier", "simple_type_specifier",
  "built_in_type_specifier", "elaborated_type_specifier",
  "elaborated_enum_specifier", "enum_specifier", "enumerator_clause",
  "enumerator_list_ecarb", "enumerator_definition_ecarb",
  "enumerator_definition_filler", "enumerator_list_head",
  "enumerator_list", "enumerator_definition", "enumerator",
  "namespace_definition", "namespace_alias_definition",
  "using_declaration", "using_directive", "asm_definition",
  "linkage_specification", "init_declarations", "init_declaration",
  "star_ptr_operator", "nested_ptr_operator", "ptr_operator",
  "ptr_operator_seq", "ptr_operator_seq.opt", "cv_qualifier_seq.opt",
  "cv_qualifier", "type_id", "abstract_declarator.opt",
  "direct_abstract_declarator.opt", "direct_abstract_declarator",
  "parenthesis_clause", "parameters_clause",
  "parameter_declaration_clause", "parameter_declaration_list",
  "abstract_pointer_declaration", "abstract_parameter_declaration",
  "special_parameter_declaration", "parameter_declaration",
  "templated_parameter_declaration", "templated_abstract_declaration",
  "function_definition", "func_definition", "ctor_definition",
  "constructor_head", "function_try_block", "function_block",
  "function_body", "initializer_clause", "braced_initializer",
  "initializer_list", "looping_initializer_clause",
  "looped_initializer_clause", "colon_mark", "elaborated_class_specifier",
  "class_specifier_head", "class_key", "class_specifier",
  "member_specification.opt", "looping_member_declaration",
  "looped_member_declaration", "member_declaration",
  "simple_member_declaration", "member_init_declarations",
  "member_init_declaration", "accessibility_specifier",
  "bit_field_declaration", "bit_field_width", "bit_field_init_declaration",
  "base_specifier_list", "base_specifier", "access_specifier",
  "conversion_function_id", "conversion_type_id", "ctor_initializer.opt",
  "ctor_initializer", "mem_initializer_list", "mem_initializer_list_head",
  "mem_initializer", "mem_initializer_id", "operator_function_id",
  "operator", "template_declaration", "template_parameter_clause",
  "template_parameter_list", "template_parameter", "simple_type_parameter",
  "templated_type_parameter", "template_id", "template_argument_list",
  "template_argument", "explicit_specialization", "try_block",
  "handler_seq", "handler", "exception_declaration", "throw_expression",
  "templated_throw_expression", "exception_specification", "type_id_list",
  "advance_search", "bang", "mark", "nest", "start_search",
  "start_search1", "util", 0
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
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   126,   127,   128,   128,   128,   128,   129,   130,   130,
     131,   132,   132,   133,   133,   134,   134,   135,   135,   135,
     136,   136,   136,   137,   137,   138,   138,   138,   139,   139,
     140,   140,   140,   141,   141,   142,   142,   143,   144,   144,
     144,   144,   144,   145,   145,   146,   147,   147,   147,   147,
     148,   148,   148,   149,   149,   150,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   152,   152,   153,   153,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   155,   156,   156,   156,   156,   157,   157,   157,   158,
     158,   159,   159,   160,   160,   161,   161,   162,   162,   162,
     163,   163,   163,   163,   164,   164,   164,   165,   165,   165,
     166,   166,   166,   166,   166,   167,   167,   167,   168,   168,
     169,   169,   170,   170,   171,   171,   172,   172,   173,   173,
     174,   174,   174,   174,   175,   175,   175,   175,   175,   175,
     175,   175,   175,   175,   175,   176,   176,   177,   177,   178,
     179,   179,   179,   179,   180,   180,   180,   181,   181,   182,
     182,   183,   183,   184,   184,   185,   185,   186,   186,   187,
     187,   187,   188,   188,   189,   189,   190,   191,   191,   191,
     192,   192,   192,   192,   193,   193,   193,   193,   194,   194,
     194,   195,   195,   196,   196,   196,   197,   197,   197,   198,
     198,   199,   200,   200,   200,   201,   202,   202,   202,   202,
     203,   204,   204,   205,   205,   205,   206,   207,   207,   207,
     208,   208,   208,   208,   208,   209,   209,   209,   210,   210,
     211,   211,   211,   211,   211,   212,   212,   212,   212,   213,
     213,   213,   214,   214,   215,   215,   215,   216,   216,   217,
     217,   218,   218,   218,   219,   219,   219,   220,   220,   220,
     221,   221,   221,   221,   221,   222,   223,   223,   224,   224,
     224,   224,   224,   225,   225,   225,   226,   226,   226,   227,
     227,   227,   227,   228,   228,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   230,   230,   230,   231,
     232,   232,   233,   233,   233,   234,   234,   235,   235,   236,
     236,   237,   237,   238,   239,   239,   240,   241,   241,   242,
     243,   243,   244,   245,   246,   246,   247,   247,   248,   249,
     249,   250,   250,   251,   251,   251,   252,   252,   253,   253,
     254,   254,   255,   255,   256,   256,   257,   257,   257,   258,
     258,   259,   259,   259,   260,   260,   261,   262,   262,   262,
     263,   263,   264,   264,   265,   265,   265,   266,   266,   266,
     267,   267,   267,   268,   268,   268,   268,   269,   269,   269,
     270,   270,   271,   271,   271,   272,   272,   272,   273,   273,
     274,   275,   276,   277,   277,   278,   278,   278,   278,   278,
     279,   279,   280,   281,   281,   281,   282,   283,   283,   284,
     284,   284,   284,   285,   285,   285,   286,   286,   287,   287,
     287,   288,   289,   289,   289,   290,   290,   290,   290,   290,
     291,   291,   291,   291,   291,   292,   292,   292,   293,   293,
     294,   295,   295,   296,   296,   297,   297,   298,   298,   299,
     299,   299,   300,   300,   300,   301,   302,   302,   303,   303,
     304,   304,   305,   305,   306,   306,   307,   308,   309,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   311,
     311,   312,   313,   313,   314,   314,   314,   314,   314,   314,
     315,   315,   316,   316,   317,   317,   318,   318,   319,   320,
     321,   322,   322,   323,   324,   325,   325,   326,   326,   327,
     327,   328,   328,   329,   330,   331,   332,   333,   334,   335
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     5,     3,     1,     1,     1,     2,
       2,     1,     2,     1,     2,     2,     2,     1,     1,     2,
       1,     2,     2,     1,     2,     1,     1,     1,     1,     2,
       4,     2,     2,     1,     2,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     2,     3,     0,     1,     4,     8,     7,
       5,     4,     3,     3,     3,     3,     2,     2,     7,     7,
       7,     7,     2,     0,     1,     1,     3,     1,     2,     2,
       2,     3,     2,     2,     2,     2,     2,     1,     2,     1,
       2,     2,     3,     4,     2,     4,     2,     2,     2,     2,
       1,     3,     4,     0,     3,     1,     2,     1,     3,     3,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     5,
       1,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     1,     3,     1,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     5,     1,
       3,     1,     1,     3,     1,     3,     2,     1,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     4,
       3,     3,     7,     0,     2,     6,     5,     7,     5,     0,
       1,     1,     5,     7,     8,     1,     2,     2,     3,     3,
       1,     4,     9,     0,     3,     7,     2,     1,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     2,     1,     2,     2,     2,     1,
       2,     2,     1,     2,     1,     1,     2,     1,     2,     1,
       2,     1,     1,     2,     1,     2,     1,     2,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       3,     2,     2,     3,     4,     1,     3,     1,     3,     0,
       3,     1,     3,     2,     1,     3,     1,     3,     2,     5,
       3,     4,     4,     5,     3,     3,     3,     3,     1,     1,
       2,     1,     2,     1,     1,     2,     1,     2,     0,     2,
       0,     2,     1,     1,     2,     2,     0,     2,     1,     0,
       1,     2,     3,     4,     2,     3,     3,     0,     1,     2,
       1,     3,     1,     3,     1,     2,     3,     1,     3,     1,
       1,     1,     2,     1,     1,     3,     2,     1,     2,     3,
       1,     1,     2,     2,     2,     2,     2,     2,     1,     3,
       3,     2,     1,     1,     1,     3,     4,     2,     6,     8,
       1,     3,     2,     1,     3,     2,     1,     2,     4,     5,
       4,     3,     2,     1,     1,     1,     3,     8,     0,     3,
       7,     2,     1,     3,     2,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     3,     3,     3,     1,     1,
       2,     3,     2,     1,     5,     1,     3,     1,     3,     1,
       2,     2,     1,     1,     1,     2,     2,     2,     0,     1,
       2,     4,     1,     2,     2,     4,     4,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     4,     1,     3,     1,     3,     1,     3,     1,     2,
       1,     1,     2,     3,     5,     2,     1,     3,     1,     4,
       3,     1,     2,     5,     1,     1,     2,     1,     2,     3,
       4,     1,     3,     1,     0,     0,     0,     0,     0,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     223,     0,   559,     1,   558,   224,     0,   554,   553,     0,
       0,   339,   343,     0,     0,     0,   155,   367,   245,     0,
       0,     8,   297,   295,   304,   303,   299,   300,   298,   301,
     302,   305,   296,   423,     0,     0,   424,     0,   425,   352,
     353,   282,   283,     0,   281,   272,   284,   280,   278,   279,
       0,   273,     0,   285,     0,     0,     0,     0,    43,     0,
       0,     0,     0,     0,    47,   545,    44,     0,    39,    40,
       2,    38,    37,     3,    11,     0,     0,    13,   254,    20,
      23,   261,    41,    46,    42,    56,    49,    77,   105,    89,
      87,   107,   110,   114,   117,   120,   125,   128,   130,   132,
     134,   136,   138,   140,   338,   226,   227,   234,   230,   239,
     238,   252,   264,   257,   259,   262,   266,    48,     0,   276,
       0,   270,   271,   255,   249,   291,   307,   290,   236,   241,
     242,   243,   240,   235,     0,     0,   341,   344,     0,   274,
      50,   350,   231,   391,   390,     0,   306,   428,     0,   289,
     455,   398,    17,    18,   232,     0,     6,   233,   143,     0,
       0,     0,    82,    83,    85,    84,   453,   452,     0,   157,
       0,   156,   379,   281,     0,   114,   130,   380,     0,   346,
     372,     0,   368,   374,   377,   381,   370,    79,    78,   319,
       0,     0,     0,   309,   311,   556,     0,   328,   308,     0,
     520,   558,   554,     0,     0,     9,    19,    52,   237,   244,
     253,   277,   292,   535,     0,     0,     0,     0,     0,     0,
      25,    27,    26,     0,     0,     0,    91,     0,     0,   293,
     103,   348,   287,   286,   294,   288,    94,   481,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   492,   493,   491,
       0,     0,   514,   516,   515,   513,   506,   509,   512,   508,
     510,   511,   507,   502,   503,   494,   500,   497,   498,   496,
     501,   505,   504,   495,   499,   480,   479,   348,   465,   478,
       0,    49,    86,     0,   546,    72,     7,     0,    10,     0,
      14,    24,    90,    88,   345,     0,    12,    21,    22,   342,
     106,   155,     0,     0,    67,    66,    55,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   144,     0,     0,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,     0,
       0,   203,     0,   468,   402,   392,   393,   275,   251,   250,
       8,     0,   262,   265,   258,   256,     8,   263,   260,     0,
     248,   394,   397,   247,     0,   246,   340,    80,   364,     0,
     395,   396,   559,     0,   422,   417,     0,   519,     0,   229,
       0,     0,     0,    51,   348,   375,   382,   347,   366,     0,
     369,     0,   315,   312,   321,     0,   554,     0,     0,   310,
     223,     0,   327,   554,   335,   334,     0,   423,   531,     0,
     547,   160,   164,   167,   169,   171,   173,   175,   177,   179,
     383,     0,   387,   528,   384,     0,     0,   522,   524,   526,
     181,     0,     0,    15,     0,     0,    16,   330,     0,   356,
       0,     0,    73,    92,     0,     0,     0,    98,    97,   100,
     348,    96,   103,   103,   518,   517,   348,   466,   467,     0,
       0,     0,     5,     0,     0,     0,     0,     0,    62,     0,
      33,    35,    63,    28,    64,    65,     0,   109,   108,   112,
     113,   111,   115,   116,   118,   119,   121,   122,   124,   123,
     126,   127,   129,   131,   133,   135,   557,   142,     0,   137,
     141,   451,   557,   338,   336,     0,     0,     0,   469,     8,
      81,   337,     0,   351,   365,   399,   426,   557,   462,   463,
     464,     0,   459,     0,   457,     0,   416,   421,     0,   403,
     456,   404,   228,   225,     0,   158,   348,   373,   376,   371,
     378,   326,   323,   324,   319,   313,     0,     0,   559,     0,
     539,   169,   548,     0,     0,     0,     0,     0,   388,     0,
       0,     0,   144,     0,     0,     0,   386,     0,   532,   521,
     554,     0,     0,   529,   538,     0,   536,   332,   331,     0,
     356,   355,   354,     0,   358,     0,     0,     0,    74,    75,
       0,     0,     0,     0,     0,    99,   349,    93,    95,     0,
       0,     0,    61,    31,    32,     0,     0,     0,    36,     0,
      34,     0,    29,     0,    57,   407,     0,   410,     0,     0,
     201,   204,     0,   477,   470,     0,   472,     0,     0,   400,
     541,   401,     0,   429,     0,   461,   420,     0,   460,   418,
       0,     0,     0,   317,   314,   322,     0,     0,   316,   320,
     221,   558,   329,     0,   161,   163,   162,   165,   166,   168,
     389,   170,   172,   174,   182,     0,     0,   176,   180,   385,
     533,   523,   525,   527,   534,     0,   333,   357,     0,   361,
       0,     0,   104,     0,   101,   138,   159,     0,     0,     0,
       4,     0,     0,     0,    60,   555,     0,   405,   557,   554,
     413,   412,     0,   139,   554,     0,     0,     0,     0,     0,
       0,   557,     0,     0,     0,   155,     0,     0,     0,     3,
     338,   186,   187,   190,   194,   191,   195,   196,   197,   192,
     220,     0,   193,     0,   474,     0,   473,    73,     0,   542,
     549,   551,     0,   554,   440,     0,     0,     0,   438,   437,
       0,   431,   432,   436,     0,   435,     0,   439,     0,   458,
     419,   454,   325,     0,   224,     0,     0,   537,   362,     0,
       0,     0,    76,   102,     0,     0,     0,    30,     0,     0,
      53,   406,   411,     0,     0,   415,     0,     0,   216,     0,
     217,   557,     0,     0,     0,     0,     0,     0,     0,     0,
     557,     0,   189,   471,     0,   544,     0,   550,     0,     0,
     441,     0,   444,   442,     0,   443,     0,   450,     0,   434,
     318,   554,   178,   183,   363,    71,    68,    70,    69,    54,
      59,     0,   554,     0,   414,     0,   557,   200,     0,   209,
     215,   219,     0,   211,   218,     0,   540,     0,   198,   188,
     475,   476,     0,   552,     0,   448,   445,   449,   399,   446,
     447,   433,     0,    58,     0,   408,   202,   205,   199,     0,
       0,   210,   557,   557,   557,   543,   427,   430,     0,     0,
       0,   155,   206,   208,   212,   222,   409,     0,     0,   557,
     213,   557,   207,   214
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    73,    74,   287,    75,    76,    77,    78,   221,    79,
      80,    81,   223,   469,   470,   471,   608,    82,    83,    84,
       1,    85,    86,   695,   476,    87,   587,   168,    88,    89,
      90,   230,   448,   449,   443,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   169,   339,
     170,   171,   687,   412,   413,   551,   415,   416,   417,   418,
     419,   420,   665,   666,   621,   721,   722,   723,   724,   344,
     502,   726,   870,   842,   727,   839,   728,   729,   197,     2,
       5,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   348,   178,   121,   122,
     439,   123,   233,   124,   125,   126,   127,   194,   393,   644,
     394,   395,   396,   542,   543,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   180,   596,   368,   139,
     440,   582,   583,   584,   140,   141,   181,   843,   183,   184,
     185,   186,   423,   424,   142,   143,   144,   145,   345,   506,
     346,   700,   531,   616,   617,   701,   528,   146,   147,   148,
     149,   372,   633,   751,   752,   753,   754,   856,   755,   150,
     167,   151,   523,   524,   525,   152,   278,   507,   508,   624,
     625,   626,   627,   153,   279,   154,   155,   426,   427,   428,
     429,   156,   575,   576,   157,   732,   629,   630,   806,   158,
     430,   514,   742,   159,   431,   779,   400,   622,     6,     4
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -664
static const yytype_int16 yypact[] =
{
    -664,    99,   158,  -664,  -664,   159,  1760,  -664,  -664,  3821,
    3821,  -664,  -664,  3821,  3821,  3821,  3458,  2490,  -664,  3821,
    3821,  -664,  -664,  -664,  -664,  -664,  -664,  -664,  -664,  -664,
    -664,  -664,  -664,  -664,   258,   377,  -664,    49,  -664,  -664,
    -664,  -664,  -664,   256,    78,  -664,  -664,  -664,  -664,  -664,
    4043,  -664,   820,  -664,   270,   293,  3821,   310,  -664,  4461,
    3942,   325,  3821,   368,  -664,  3458,  -664,   398,  -664,  -664,
    -664,  -664,  -664,   430,   412,   463,    93,  -664,  -664,  -664,
    -664,  -664,  -664,  -664,  -664,  -664,  3821,   688,  -664,  -664,
    -664,  -664,   113,   598,   276,   353,   474,   109,   481,   498,
     506,   482,  1632,  -664,   399,  -664,  -664,  -664,  -664,  -664,
    -664,  4156,   582,  4156,  -664,  1131,  -664,  -664,   519,  -664,
    2248,  -664,  -664,  -664,  -664,  -664,  -664,  -664,  -664,  -664,
    -664,  -664,  -664,  -664,   538,   505,   495,  -664,  3821,  -664,
    -664,  -664,  -664,  -664,  -664,    36,  -664,  -664,   103,  -664,
     520,  -664,  -664,  -664,  -664,  2127,  -664,  -664,  -664,   574,
     539,  4411,  -664,  -664,  -664,  -664,   117,  -664,   515,   530,
     533,  -664,  -664,  -664,  4340,   598,   552,  -664,  2490,  3821,
    -664,   541,    62,  -664,   566,  -664,  -664,  -664,  -664,   272,
      49,     5,     5,   554,  -664,  -664,   443,  -664,  -664,   576,
    -664,   573,  2611,  4192,   593,  -664,  -664,  -664,  -664,  -664,
    -664,  -664,  -664,  -664,     5,    49,   388,   388,   245,   346,
    -664,  -664,  -664,   568,    78,  4526,  -664,  4526,   877,  -664,
     599,  1408,  -664,  -664,  -664,  -664,  4461,  -664,  -664,  -664,
    -664,  -664,  -664,  -664,  -664,  -664,  -664,  -664,  -664,  -664,
     606,   608,  -664,  -664,  -664,  -664,  -664,  -664,  -664,  -664,
    -664,  -664,  -664,  -664,  -664,  -664,  -664,  -664,  -664,  -664,
    -664,  -664,  -664,  -664,  -664,  -664,  -664,  4014,  -664,  -664,
    4526,  -664,  -664,  4526,  -664,  -664,  -664,   605,  -664,   245,
    -664,  -664,  -664,  -664,  -664,   346,  -664,  -664,  -664,  -664,
    -664,  3458,   836,   836,  -664,  -664,  -664,  3821,  3821,  3821,
    3821,  3095,  3821,  3821,  3821,  3821,  3821,  3821,  3821,  3821,
    3821,  3821,  3821,  3821,  3821,  3821,   613,  3458,  3821,  -664,
    -664,  -664,  -664,  -664,  -664,  -664,  -664,  -664,  -664,  3458,
    3821,  -664,  3458,   631,  -664,  -664,  -664,  -664,  -664,  -664,
     664,  1184,  1268,  -664,  4156,  -664,   667,  -664,  -664,  3095,
    -664,  -664,  -664,  -664,  3458,  -664,  -664,  -664,   289,  3458,
    -664,  -664,   658,  1097,  -664,   336,  3216,  -664,  1760,  -664,
     670,  3821,  3458,  -664,  3095,  3821,  -664,  -664,  -664,  2490,
    -664,  3458,  -664,  -664,  -664,   565,   126,   703,     5,  -664,
    -664,    49,  -664,  2853,  -664,  -664,  2127,   467,    49,  4121,
    3579,   353,   111,   381,   698,   702,   707,   682,  1755,  -664,
    -664,  2974,  -664,  -664,   709,   665,    65,  -664,   718,   721,
    -664,   736,  2974,  -664,   712,   713,  -664,  -664,   720,   907,
     730,   731,  3458,  -664,  3458,    57,    57,  -664,  -664,   729,
     211,  -664,   599,   599,  -664,  -664,   285,  -664,  -664,   733,
     735,  2974,  -664,   737,  1440,   836,   984,  1076,  -664,  1013,
    -664,  -664,  -664,  -664,  -664,  -664,   619,  -664,  -664,   113,
     113,   113,   598,   598,   276,   276,   353,   353,   353,   353,
     474,   474,   109,   481,   498,   506,   740,  -664,   746,   482,
    -664,  -664,   743,  -664,  -664,    49,   660,   732,  -664,   751,
    -664,  -664,   745,  -664,  -664,  -664,  -664,  -664,  -664,  -664,
    -664,  1097,  -664,   294,  -664,  1097,  -664,  -664,   228,  -664,
    -664,  -664,  -664,  -664,   753,   742,  3821,  -664,  -664,  -664,
    -664,  -664,  -664,   757,   275,  -664,   772,   317,   755,   750,
    -664,   776,  -664,  3821,  3821,  3821,  3821,  3821,  3821,  3821,
    3821,  3821,  -664,  3579,  3821,  3579,  -664,  3579,   565,  -664,
    2853,  4526,   565,  -664,  -664,   260,  -664,  -664,  -664,   763,
     494,  -664,  -664,   513,   535,   778,   780,   775,   774,  -664,
     789,  3821,   412,    57,    57,  -664,  -664,  -664,  -664,   788,
     790,   302,  -664,  1861,  -664,  1861,   984,  1105,  -664,  1076,
    -664,   802,  -664,  1883,  -664,  -664,   333,   785,  2006,  3458,
    -664,   786,  1513,  -664,    82,    49,  -664,   797,   799,  -664,
     660,  -664,  4490,   792,  1637,  -664,  -664,  1097,  -664,  -664,
     306,  3821,  3821,  -664,  -664,  -664,   821,   809,  -664,  -664,
    -664,  -664,  -664,  3821,   353,   353,   353,   111,   111,   381,
    -664,   776,   702,   707,   804,   818,   807,   682,  -664,  -664,
    -664,  -664,  -664,  -664,  -664,  2974,  -664,  -664,  3700,  -664,
    3458,  3458,  -664,  3458,  -664,   174,  -664,   823,  3458,  3458,
    -664,  1105,  1305,  1861,  -664,  2490,   558,  -664,   825,  -664,
    -664,  -664,   636,  -664,  -664,    49,  4266,   811,  3821,   816,
     832,  -664,   828,   565,   829,  3458,   830,   732,   833,   464,
     827,  -664,  -664,  -664,  -664,  -664,  -664,  -664,  -664,  -664,
    -664,  2732,  -664,   639,  -664,   852,  -664,  3458,  2490,  -664,
    -664,  -664,   479,  -664,  -664,   525,   104,  2369,  -664,  -664,
      89,  -664,  -664,  -664,   622,  -664,   840,  -664,   659,  -664,
    -664,  -664,  -664,   339,   831,  3579,  3579,  -664,  -664,   843,
     841,   844,  -664,  -664,   845,   846,  1305,  1861,   638,   137,
    -664,  -664,   849,   857,  2006,  -664,   869,   860,  -664,   863,
    -664,  -664,   765,  2732,   858,  2490,   859,  2490,   660,  2490,
    -664,  1513,  -664,   879,   866,  -664,   886,  -664,  4526,   908,
    -664,  3337,  -664,  -664,  3337,  -664,  3337,  -664,  1637,  -664,
    -664,  -664,  -664,   882,  -664,  -664,  -664,  -664,  -664,  -664,
    -664,   910,  -664,   893,  -664,   384,  -664,  -664,   894,  2490,
    -664,  -664,   892,   895,  -664,   897,  -664,   899,  -664,  -664,
    -664,  -664,   732,  -664,   417,   909,  -664,  -664,   909,  -664,
    -664,  -664,   926,  -664,   928,  -664,  -664,  -664,  -664,  3458,
     903,  -664,  -664,  -664,  -664,  -664,  -664,  -664,   421,   914,
     913,  3458,   837,  -664,  -664,  -664,  -664,   911,   918,  -664,
    -664,  -664,  -664,  -664
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -664,    61,  -102,  -664,   656,   805,    19,    16,   -37,    52,
      30,   -43,  -134,  -431,  -416,  -420,   372,   -21,  -664,  -664,
    -664,  -664,    -8,  -664,  -664,  -664,   207,  -410,   883,   873,
     880,   146,   502,  -664,   243,    21,  -223,   -11,   386,   891,
     393,  -244,    -3,   632,   635,   650,     3,  -397,    -6,   546,
    -280,  -242,  -569,   172,  -493,   101,   424,   425,   427,  -664,
    -664,  -358,  -664,  -664,  -298,   184,  -664,  -664,  -664,  -584,
    -664,  -664,  -664,  -663,  -664,  -664,  -664,  -664,   322,   594,
    -182,   621,  -135,    63,  -593,   -26,  -117,   887,    24,  -664,
     -89,   889,   890,  -664,  -664,   -68,   896,    51,  -664,  -664,
      69,   248,  -664,   523,  -664,  -664,  -664,   810,   609,  -664,
     462,  -664,  -664,  -664,  -664,  -664,  -664,  -588,  -664,  -664,
    -664,  -664,  -212,   -57,   -48,   -16,   834,  -150,  -664,   -44,
    -183,   431,  -664,  -664,   -70,     4,  -664,   -13,    68,  -664,
    -664,  -171,  -365,  -664,  -576,  -112,  -110,  -597,  -133,  -664,
    -132,   640,   686,  -664,   316,   231,  -664,  -664,  -664,  -664,
    -664,  -664,  -664,   199,  -664,   271,  -664,   203,  -664,  -664,
    -315,  -261,   497,  -441,  -574,  -664,   749,  -664,  -664,  -664,
    -664,   397,  -664,  -664,  -664,   -38,  -180,  -664,   457,  -664,
    -664,   715,   570,   358,  -664,  -664,  -541,  -664,  -664,  -664,
    -664,  -664,  -664,  -497,    -5,  -664,  -664,  -448,  -664,  -302
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -555
static const yytype_int16 yytable[] =
{
     104,   179,   160,   360,   182,   200,   175,   386,   361,   222,
     362,   177,   370,   371,   176,   235,   235,   306,   166,   405,
     377,   463,   425,   201,   209,   501,   358,   294,   299,   730,
     162,   163,   588,   603,   164,   165,   311,   750,   725,   297,
     187,   188,   207,   347,   441,   347,   748,   610,   618,   604,
     193,   196,   552,   198,   281,   341,   566,   120,   749,   284,
     756,   359,    11,   236,   369,   659,   534,   574,   220,   634,
     517,   285,   357,   762,   210,   229,   229,   226,   492,   569,
     635,   451,   435,  -554,   638,   498,   479,   480,   481,   739,
     389,   398,   366,   570,   290,   296,   574,   459,    11,     3,
     460,   211,   206,    21,   214,   291,   298,   300,   341,   769,
     734,   204,   433,   208,   104,   390,   813,   814,   384,   373,
     340,   702,   374,   341,   553,   733,    70,   457,   231,   277,
     504,   810,   811,   798,   845,   190,   847,   758,   830,   789,
     381,   492,   320,   398,   307,   554,   392,   555,   321,   104,
     750,   343,   511,   207,   544,   328,   831,    21,   -45,   367,
     659,   481,   179,   179,   375,   308,   207,   175,   468,   474,
      70,   120,   177,   222,   603,   176,   871,   209,    70,   295,
     436,   235,   297,   235,   397,   210,   179,   235,     7,   190,
     604,   175,   235,   604,   686,   207,   759,   327,   210,    60,
     367,    72,   590,   438,   343,   664,   120,   668,   730,   669,
     290,   296,   328,   206,    70,   450,    11,   725,   539,   343,
      12,   750,   204,   425,    70,   211,   206,   210,   444,   639,
     748,   434,   220,   235,   537,   204,   235,   290,   296,   235,
     453,   229,   749,   229,   756,   686,   651,   229,   291,   298,
     618,   204,   229,   421,   211,   206,   581,   846,   436,   222,
     222,   456,   777,   358,   204,    21,   208,   366,   875,   206,
     422,   550,   610,  -554,   674,   604,  -554,   189,   204,   312,
     313,   686,    21,   518,   519,   520,   347,   702,   675,   204,
      11,   224,   392,   229,    12,   643,   229,   190,   212,   229,
     231,   482,   483,   414,   733,   231,   225,   232,   232,   357,
     574,   686,    21,   636,   190,   366,   690,   521,   220,   220,
     493,   758,   637,   227,   513,   760,   761,   588,   477,   478,
     675,   289,    70,   500,   637,    43,   503,   648,   280,    21,
     366,   206,   199,   166,   190,   649,   277,   206,   592,    70,
     204,    60,   526,   697,   592,   527,   204,   214,   503,   820,
     604,   698,   433,   515,    39,    40,    70,   649,   536,   179,
     529,   190,   104,   179,   175,   631,   535,   447,   175,    70,
     510,   283,   452,   177,   166,   540,   176,   179,   672,   522,
     425,   546,   175,   314,   315,   235,   195,   294,   299,   214,
     104,   207,   512,   206,   866,   179,    70,   822,   823,   212,
     175,   867,   204,   792,   556,   340,   179,   549,   341,    17,
     557,   175,   212,   580,   198,   311,   311,   342,   436,   120,
     297,    21,   295,   210,   450,   796,   589,   876,   770,   771,
     456,   885,    21,   286,   877,   179,   774,   775,   533,   741,
     175,   212,    60,   538,   421,   229,   541,   120,   401,   204,
     211,   206,   195,   190,   290,   296,   288,    70,    11,   764,
     204,   422,   421,   232,   217,   232,   212,   286,   592,   232,
     800,  -530,  -530,   421,   232,   290,   296,   316,   317,   422,
     322,   592,   592,   837,    60,  -530,   291,   298,    70,    11,
     422,   807,   848,    12,   414,   592,   323,   808,   318,    70,
     319,  -359,   421,   679,   343,  -359,   324,   206,   402,   325,
     536,   623,   414,   404,    11,   232,   204,   235,   232,   422,
     678,   232,   365,   414,    17,   376,   214,   522,   868,   646,
     380,   522,   179,   382,   522,   294,   299,   175,    21,   289,
     857,   383,  -360,   859,   179,   857,  -360,   367,   -75,   175,
      56,   385,   414,   388,   580,   363,   364,   805,    59,    60,
      39,    40,   436,   189,   882,   883,   884,   378,   379,    21,
     190,   391,   234,   234,    70,   780,   389,   229,   235,   403,
     592,   892,   195,   893,   685,   437,   757,   179,   216,   212,
     696,   888,   175,    11,   309,   310,   432,   177,   461,   462,
     176,   217,   529,   703,   360,    70,   720,   370,   371,   735,
     442,   421,   613,   614,   454,   853,   660,   880,   746,   670,
     455,    60,   496,   673,   349,   361,   350,   362,   422,   784,
     785,   623,   801,   802,   166,   685,    70,   505,   229,   815,
     816,    33,    34,   522,    36,    37,    38,   212,   206,   179,
     661,   206,   818,   819,   175,   829,   389,   204,   351,  -269,
     204,   414,  -267,   731,   472,   475,   840,   772,   516,   179,
     209,   685,   778,   719,   175,   747,    70,   232,    60,   177,
     191,   191,   176,   191,   783,   597,   598,   533,   207,   786,
     484,   485,   222,    70,   547,   301,   205,   558,   218,    17,
     559,   685,   302,   490,   491,   191,   191,   560,   303,   561,
     304,   787,   179,   305,   567,   720,   421,   175,   657,   658,
     210,   589,   177,   571,   568,   176,   572,   573,   809,   577,
     578,   746,   579,   422,   585,   586,   591,   599,   234,   600,
     234,   341,   204,   628,   234,   602,  -268,   211,   206,   234,
     615,   220,   619,   620,   235,   213,   632,   204,   218,   641,
     -76,   218,   642,   647,   794,   650,   414,   652,   529,   179,
     757,   179,   731,   179,   175,   653,   175,   720,   175,   177,
     676,   177,   176,   177,   176,   720,   176,   682,   747,   680,
     234,   681,   683,   234,   191,   855,   234,   684,   858,   688,
     855,   689,   746,   693,   699,   704,   862,   205,   737,   232,
     738,   743,   763,   179,   229,   473,   473,   864,   175,   648,
     205,   214,  -184,   177,   765,   766,   176,   204,   788,   192,
     192,   773,   192,   790,   731,   781,   205,   464,   791,   793,
     795,   797,   731,   803,   799,   342,   817,   219,   833,   205,
     821,   824,   719,   825,   192,   192,   826,   827,   828,   747,
     835,   191,   218,   205,    21,   401,   213,   349,   832,   836,
     232,   191,   838,   191,   205,   841,   844,   445,   851,   213,
      21,   215,   191,   216,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   213,   217,   850,   852,   854,
    -185,   863,    11,   865,   872,   869,    12,   219,   213,   873,
     219,   874,   465,   389,  -359,   340,    60,   878,  -359,   879,
     881,    21,   213,   445,   886,   887,   191,   889,   890,   191,
     891,    70,    60,   213,   804,   282,    33,    34,   292,    36,
      37,    38,   595,   192,   212,   293,   494,    70,   466,   466,
     495,    21,   234,   228,   565,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,   499,    36,
      37,    38,    39,    40,   662,   849,   663,   473,   473,   473,
     473,   667,   612,   228,   548,   605,   192,   192,    70,   532,
     354,   352,   353,   399,   213,   545,   645,   205,   218,   355,
     213,   677,   497,   387,   782,   834,   530,   861,   812,   860,
     192,   219,   736,   219,   219,   640,   458,   671,    70,   191,
     192,   601,   192,   767,     0,     0,   446,     0,    21,     0,
       0,   192,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,     0,     0,     0,   232,   191,     0,     0,
       0,     0,     0,     0,   191,   205,   213,   611,     0,     0,
     606,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   446,     0,     0,   192,     0,   464,   192,     0,
      60,     0,     0,   411,   234,   445,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    70,   593,   467,   467,     0,
       0,     0,   593,   213,     0,     0,   605,     0,     0,     0,
       0,   205,   607,     0,   213,     0,   612,     0,   473,   473,
     473,     0,   473,     0,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,     0,     0,     0,     0,     0,
       0,    21,   518,   519,   520,   234,     0,   219,     0,    21,
       0,   191,   609,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,     0,     0,     0,   191,   192,     0,
     213,   191,    60,   190,   191,   356,   521,     0,     0,     0,
       0,   691,     0,     0,     0,     0,     0,    70,     0,     0,
      33,    34,     0,    36,    37,    38,   192,   486,   487,   488,
     489,     0,     0,   192,   473,   473,   473,   351,    70,     0,
       0,     0,     0,     0,     0,     0,    70,   191,     0,     0,
       0,     0,     0,     0,     0,     0,   593,    60,    21,     0,
       0,     0,     0,     0,   446,     0,     0,     0,     0,     0,
     446,   446,    70,    33,    34,   594,    36,    37,    38,     0,
       0,   594,   205,   607,     0,     0,     0,     0,     0,     0,
     351,   467,   467,     0,     0,     0,     0,     0,     0,     0,
       0,   191,     0,     0,     0,     0,     0,     0,   191,     0,
      60,     0,     0,   191,   411,     0,     0,     0,     0,   473,
     612,   411,     0,     0,     0,    70,     0,     0,     0,     0,
     192,     0,   411,     0,     0,     0,   605,     0,     0,     0,
       0,   213,   509,   411,   213,     0,   192,     0,     0,     0,
     192,   234,     0,   192,     0,     0,     0,    33,    34,     0,
      36,    37,    38,     0,     0,     0,     0,   205,     0,     0,
       0,     0,   411,     0,   351,     0,     0,     0,     0,     0,
       0,   191,   205,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    60,     0,   192,     0,     0,     0,
       0,     0,     0,     0,     0,   594,     0,     0,     0,    70,
       0,   776,     0,     0,     0,     0,     0,     0,   594,   594,
       0,   218,     0,     0,     0,     0,   213,     0,     0,     0,
       0,     0,   692,    11,     0,     0,     0,    12,     0,     0,
       0,   213,     0,     0,     0,   444,    70,     0,     0,     0,
     192,     0,     0,     0,     0,     0,     0,   192,     0,     0,
       0,     0,   192,     0,   654,   655,   656,   411,   411,   411,
     411,   411,   411,     0,   411,   411,   411,     0,   411,     0,
       0,   411,    21,     0,   191,     0,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,     0,
      36,    37,    38,    39,    40,     0,     0,     0,     0,     0,
       0,   213,     0,     0,   228,     0,     0,   692,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,     0,
     192,     0,     0,     0,     8,     0,     9,    10,    11,     0,
       0,     0,    12,     0,    13,    14,   398,     0,     0,    70,
      16,     0,   341,     0,    17,     0,     0,     0,     0,     0,
      18,     0,     0,     0,   411,    19,     0,     0,    20,     0,
     219,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    70,     0,     0,     0,     0,   411,    21,     0,     0,
       0,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,   705,    36,    37,    38,    39,    40,
      41,    42,     0,   173,    45,    46,    47,    48,    49,   706,
      51,    52,    53,    54,   707,   708,     0,    55,   709,   710,
      56,   711,    57,   192,    58,   712,   713,   714,    59,    60,
      61,   715,    62,    63,   716,    64,    65,    66,   717,    67,
     718,     0,    68,    69,    70,    71,    72,     0,     8,     0,
       9,    10,    11,     0,     0,     0,    12,   326,    13,    14,
       0,     0,     0,    15,    16,   327,   411,   411,    17,     0,
       0,     0,     0,     0,   744,     0,     0,     0,     0,    19,
     328,     0,    20,     0,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,     0,     0,     0,     0,     0,     0,
       0,    21,   518,   519,   520,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,     0,    36,
      37,    38,    39,    40,    41,    42,    43,   173,    45,    46,
      47,    48,    49,   409,    51,   745,    53,     0,     0,     0,
       0,    55,     0,     0,    56,     0,    57,     0,    58,     0,
       0,     0,    59,    60,    61,     0,    62,    63,     0,    64,
      65,    66,     0,    67,     0,     0,    68,    69,    70,    71,
      72,     8,     0,     9,    10,    11,     0,     0,     0,    12,
     562,    13,    14,     0,     0,     0,    15,    16,   563,     0,
       0,    17,     0,     0,     0,     0,     0,    18,     0,     0,
       0,     0,    19,   564,     0,    20,     0,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,     0,     0,     0,
       0,     0,     0,     0,    21,     0,     0,     0,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,     0,     0,     0,    55,     0,     0,    56,     0,    57,
       0,    58,     0,     0,     0,    59,    60,    61,     0,    62,
      63,     0,    64,    65,    66,     0,    67,     0,     0,    68,
      69,    70,    71,    72,   694,     0,     9,    10,    11,     0,
       0,     0,    12,     0,    13,    14,     0,     0,     0,     0,
      16,     0,     0,     0,    17,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    19,     0,     0,    20,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
       0,     0,     0,     0,     0,     0,   172,    21,     0,     0,
       0,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,     0,    36,    37,    38,    39,    40,
      41,    42,     0,   173,    45,    46,    47,    48,    49,   174,
      51,     0,    53,     0,     0,     0,     0,    55,     0,     0,
      56,     0,    57,     0,    58,     0,     0,     0,    59,    60,
      61,     0,    62,    63,     0,    64,    65,    66,     0,    67,
       0,     0,    68,    69,    70,    71,    72,     8,     0,     9,
      10,    11,     0,     0,     0,    12,     0,    13,    14,     0,
       0,     0,     0,    16,     0,   496,     0,    17,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    19,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      21,     0,     0,     0,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,     0,    36,    37,
      38,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   161,     0,     0,     0,     0,     0,     0,     0,
      55,     0,     0,    56,     0,    57,     0,    58,     0,     0,
       0,    59,    60,    61,     0,    62,    63,     0,    64,    65,
      66,     0,    67,     0,     0,    68,    69,    70,    71,    72,
       9,    10,    11,     0,     0,     0,    12,     0,    13,    14,
       0,     0,     0,    15,    16,     0,     0,     0,    17,     0,
       0,     0,     0,     0,    18,     0,     0,     0,     0,    19,
       0,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    21,     0,     0,     0,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,     0,     0,
       0,    55,     0,     0,    56,     0,    57,     0,    58,     0,
       0,     0,    59,    60,    61,     0,    62,    63,     0,    64,
      65,    66,     0,    67,     0,     0,    68,    69,    70,    71,
      72,     9,    10,    11,     0,     0,     0,    12,     0,    13,
      14,     0,     0,     0,    15,    16,     0,     0,     0,    17,
       0,     0,     0,     0,     0,    18,     0,     0,     0,     0,
      19,     0,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    21,     0,     0,     0,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,     0,
      36,    37,    38,    39,    40,    41,    42,     0,   173,    45,
      46,    47,    48,    49,   174,    51,     0,    53,     0,     0,
       0,     0,    55,     0,     0,    56,     0,    57,     0,    58,
       0,     0,     0,    59,    60,    61,     0,    62,    63,     0,
      64,    65,    66,     0,    67,     0,     0,    68,    69,    70,
      71,    72,     9,    10,    11,     0,     0,     0,    12,     0,
      13,    14,     0,     0,     0,    15,    16,     0,     0,     0,
      17,     0,     0,     0,     0,     0,   744,     0,     0,     0,
       0,    19,     0,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    21,     0,     0,     0,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
       0,    36,    37,    38,    39,    40,    41,    42,     0,   173,
      45,    46,    47,    48,    49,   174,    51,     0,    53,     0,
       0,     0,     0,    55,     0,     0,    56,     0,    57,     0,
      58,     0,     0,     0,    59,    60,    61,     0,    62,    63,
       0,    64,    65,    66,     0,    67,     0,     0,    68,    69,
      70,    71,    72,     9,    10,    11,     0,     0,     0,    12,
       0,    13,    14,     0,     0,     0,     0,    16,     0,     0,
       0,    17,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    19,     0,     0,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   172,    21,     0,     0,     0,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,     0,    36,    37,    38,    39,    40,    41,    42,     0,
     173,    45,    46,    47,    48,    49,   174,    51,     0,    53,
       0,     0,     0,     0,    55,     0,     0,    56,     0,    57,
       0,    58,     0,     0,     0,    59,    60,    61,     0,    62,
      63,     0,    64,    65,    66,     0,    67,     0,     0,    68,
      69,    70,    71,    72,     9,    10,    11,     0,     0,     0,
      12,     0,    13,    14,     0,   406,     0,     0,    16,     0,
       0,     0,    17,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    19,     0,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    21,     0,     0,     0,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
     407,    34,     0,    36,   408,    38,    39,    40,    41,    42,
       0,   173,    45,    46,    47,    48,    49,   409,    51,     0,
      53,     0,     0,     0,     0,    55,     0,     0,    56,     0,
      57,     0,    58,     0,     0,     0,    59,    60,    61,     0,
      62,    63,     0,    64,   410,    66,     0,    67,     0,     0,
      68,    69,    70,    71,    72,     9,    10,    11,     0,     0,
       0,    12,     0,    13,    14,     0,     0,     0,     0,    16,
       0,     0,     0,    17,     0,     0,     0,     0,     0,    18,
       0,     0,     0,     0,    19,     0,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    21,     0,     0,     0,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,     0,    36,    37,    38,    39,    40,    41,
      42,     0,   173,    45,    46,    47,    48,    49,   174,    51,
       0,    53,     0,     0,     0,     0,    55,     0,     0,    56,
       0,    57,     0,    58,     0,     0,     0,    59,    60,    61,
       0,    62,    63,     0,    64,    65,    66,     0,    67,     0,
       0,    68,    69,    70,    71,    72,     9,    10,    11,     0,
       0,     0,    12,     0,    13,    14,     0,     0,     0,     0,
      16,     0,     0,     0,    17,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    19,     0,     0,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    21,     0,     0,
       0,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,   407,    34,     0,    36,   408,    38,    39,    40,
      41,    42,     0,   173,    45,    46,    47,    48,    49,   409,
      51,     0,    53,     0,     0,     0,     0,    55,     0,     0,
      56,     0,    57,     0,    58,     0,     0,     0,    59,    60,
      61,     0,    62,    63,     0,    64,   410,    66,     0,    67,
       0,     0,    68,    69,    70,    71,    72,     9,    10,    11,
       0,     0,     0,    12,     0,    13,    14,     0,     0,     0,
       0,    16,     0,     0,     0,    17,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    19,     0,     0,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,     0,
       0,     0,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,     0,    36,    37,    38,    39,
      40,    41,    42,     0,   173,    45,    46,    47,    48,    49,
     174,    51,     0,    53,     0,     0,     0,     0,    55,     0,
       0,    56,     0,    57,     0,    58,     0,     0,     0,    59,
      60,    61,     0,    62,    63,     0,    64,   410,    66,     0,
      67,     0,     0,    68,    69,    70,    71,    72,     9,    10,
      11,     0,     0,     0,    12,     0,    13,    14,     0,     0,
       0,     0,    16,     0,     0,     0,    17,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    19,     0,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    21,
       0,     0,     0,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,     0,    36,    37,    38,
      39,    40,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   161,     0,     0,     0,     0,     0,     0,     0,    55,
       0,     0,    56,     0,    57,     0,    58,     0,     0,     0,
      59,    60,    61,     0,    62,    63,     0,    64,     0,    66,
       0,    67,     0,     0,    68,    69,    70,    71,    72,     9,
      10,    11,     0,     0,     0,    12,     0,    13,    14,     0,
       0,     0,     0,    16,     0,   496,     0,    17,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    19,     0,
       0,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      21,     0,     0,     0,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,     0,    36,    37,
      38,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   161,     0,     0,     0,     0,     0,     0,     0,
      55,     0,     0,    56,     0,    57,     0,    58,     0,     0,
       0,    59,    60,    61,     0,    62,    63,     0,    64,    65,
      66,     0,    67,     0,     0,    68,    69,    70,    71,    72,
       9,    10,    11,     0,     0,     0,    12,     0,    13,    14,
       0,     0,     0,    15,    16,     0,     0,     0,    17,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    19,
       0,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    21,     0,     0,     0,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,     0,    36,
      37,    38,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   161,     0,     0,     0,     0,     0,     0,
       0,    55,     0,     0,    56,     0,    57,     0,    58,     0,
       0,     0,    59,    60,    61,     0,    62,    63,     0,    64,
      65,    66,     0,    67,     0,     0,    68,    69,    70,    71,
      72,     9,    10,    11,     0,     0,     0,    12,     0,    13,
      14,     0,     0,     0,     0,    16,     0,     0,     0,    17,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      19,     0,     0,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    21,     0,     0,     0,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,     0,
      36,    37,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   161,     0,     0,     0,     0,     0,
       0,     0,    55,     0,     0,    56,     0,    57,     0,    58,
       0,     0,     0,    59,    60,    61,     0,    62,    63,     0,
      64,    65,    66,     0,    67,     0,     0,    68,    69,    70,
      71,    72,     9,    10,    11,     0,     0,     0,    12,     0,
      13,    14,     0,     0,     0,     0,    16,     0,     0,     0,
      17,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    19,     0,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    21,     0,     0,     0,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
       0,    36,    37,    38,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   161,     0,     0,     0,     0,
       0,     0,     0,    55,     0,     0,    56,     0,    57,     0,
      58,     0,     0,     0,    59,    60,    61,     0,    62,    63,
       0,    64,   410,    66,     0,    67,     0,     0,    68,    69,
      70,    71,    72,     9,    10,    11,     0,     0,     0,    12,
       0,    13,    14,     0,     0,     0,     0,    16,   768,     0,
       0,    17,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    19,     0,     0,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    21,     0,     0,     0,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,     0,    36,    37,    38,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   161,     0,     0,     0,
       0,     0,     0,     0,    55,     0,     0,    56,     0,    57,
       0,    58,     0,     0,     0,    59,    60,    61,     0,    62,
      63,     0,    64,     0,    66,     0,    67,     0,     0,    68,
      69,    70,    71,    72,     9,    10,    11,     0,     0,     0,
      12,     0,    13,    14,     0,     0,     0,     0,    16,     0,
       0,     0,    17,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    19,     0,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    21,     0,     0,     0,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,     0,    36,    37,    38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   161,     0,     0,
       0,     0,     0,     0,     0,    55,     0,     0,    56,     0,
      57,     0,    58,     0,     0,     0,    59,    60,    61,     0,
      62,    63,     0,    64,     0,    66,     0,    67,     0,     0,
      68,    69,    70,    71,    72,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,     0,   250,
       0,     0,     0,   251,     0,     0,     0,     0,     0,     0,
     252,     0,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,     0,     0,    21,     0,     0,     0,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,     0,    36,    37,    38,    39,    40,    11,
       0,     0,     0,    12,     0,     0,     0,     0,   228,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   275,
       0,     0,     0,     0,     0,     0,     0,   276,     0,     0,
       0,     0,     0,     0,     0,     0,   202,     0,     0,     0,
      16,     0,     0,    70,    17,     0,     0,     0,    21,     0,
       0,     0,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,     0,    36,    37,    38,    39,
      40,     0,     0,     0,     0,     0,     0,    21,     0,     0,
     228,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,     0,    44,    45,    46,    47,    48,    49,   203,
      51,    52,    53,    54,   403,    70,     0,     0,    16,     0,
       0,     0,    17,     0,     0,     0,     0,     0,     0,    60,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    70,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    21,     0,     0,     0,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,     0,    36,    37,    38,    39,    40,    41,    42,
       0,   173,    45,    46,    47,    48,    49,   174,    51,    16,
      53,     0,     0,    17,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,     0,     0,    60,     0,     0,
       0,    39,    40,    41,    42,     0,   173,    45,    46,    47,
      48,    49,    70,    51,     0,    53,    21,     0,     0,     0,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,     0,    44,    45,    46,    47,    48,    49,   203,    51,
      52,    53,    54,    16,     0,     0,     0,    17,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    60,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    70,     0,     0,     0,     0,     0,     0,
      21,     0,     0,     0,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   705,    36,    37,
      38,    39,    40,    41,    42,     0,   173,    45,    46,    47,
      48,    49,   706,    51,    52,    53,    54,    16,     0,     0,
       0,    17,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    60,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    70,     0,     0,
       0,     0,     0,     0,    21,     0,     0,     0,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,     0,    36,    37,    38,    39,    40,    41,    42,     0,
     173,    45,    46,    47,    48,    49,   174,    51,    16,    53,
       0,     0,    17,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    60,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    70,     0,     0,     0,    21,     0,     0,     0,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    17,    36,    37,    38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   161,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   740,     0,     0,    21,     0,    60,     0,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    70,    36,    37,    38,    39,    40,     0,     0,
       0,     0,     0,     0,    21,     0,     0,   228,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,     0,    36,    37,    38,    39,    40,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   228,     0,     0,     0,
      21,     0,    70,     0,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,     0,    36,    37,
      38,    39,    40,     0,     0,     0,     0,     0,     0,     0,
       0,    70,   228,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    70
};

static const yytype_int16 yycheck[] =
{
       6,    17,     7,   120,    17,    43,    17,   178,   120,    52,
     120,    17,   145,   145,    17,    59,    60,    87,    15,   201,
     155,   301,   202,    44,    50,   340,   115,    75,    76,   622,
       9,    10,   442,   464,    13,    14,    93,   634,   622,    76,
      19,    20,    50,   111,   227,   113,   634,   467,   496,   465,
      34,    35,   410,    37,    62,    19,   421,     6,   634,    65,
     634,   118,     5,    59,    28,   558,   381,   432,    52,   517,
     372,    67,   115,   642,    50,    59,    60,    56,   322,    14,
     521,   231,   216,     1,   525,   327,   309,   310,   311,   630,
      28,    86,   136,    28,    75,    76,   461,   280,     5,     0,
     283,    50,    50,    54,    11,    75,    76,    86,    19,   678,
      28,    50,   214,    50,   120,    53,    27,    28,   175,    16,
      16,   618,    19,    19,    13,   622,   121,   277,    59,    60,
     342,    27,    28,   717,   797,    86,   799,   634,     1,   708,
      23,   385,    33,    86,    31,    34,    20,    36,    39,   155,
     747,   115,   364,   161,    28,    38,    19,    54,     0,   138,
     653,   384,   178,   179,   148,    52,   174,   178,   302,   303,
     121,   120,   178,   216,   605,   178,   839,   203,   121,    86,
     217,   225,   219,   227,   189,   161,   202,   231,    29,    86,
     606,   202,   236,   609,   591,   203,   637,    23,   174,   106,
     179,   123,   444,   224,   115,   563,   155,   565,   801,   567,
     191,   192,    38,   161,   121,   231,     5,   801,   389,   115,
       9,   818,   161,   403,   121,   174,   174,   203,    17,     1,
     818,   215,   216,   277,   384,   174,   280,   218,   219,   283,
     236,   225,   818,   227,   818,   642,   548,   231,   218,   219,
     698,   190,   236,   202,   203,   203,   439,   798,   295,   302,
     303,   277,   693,   352,   203,    54,   203,   311,   852,   217,
     202,   406,   692,     1,    14,   691,     1,    19,   217,     3,
       4,   678,    54,    55,    56,    57,   354,   784,    28,   228,
       5,    21,    20,   277,     9,    20,   280,    86,    50,   283,
     231,   312,   313,   202,   801,   236,    13,    59,    60,   352,
     675,   708,    54,    19,    86,   359,    14,    89,   302,   303,
     323,   818,    28,    13,   368,    19,   641,   737,   307,   308,
      28,    86,   121,   339,    28,    79,   342,    20,    13,    54,
     384,   289,    86,   340,    86,    28,   277,   295,   450,   121,
     289,   106,    16,    20,   456,    19,   295,    11,   364,    20,
     776,    28,   464,   369,    75,    76,   121,    28,   384,   385,
     376,    86,   378,   389,   385,   507,   382,   231,   389,   121,
     359,    13,   236,   389,   381,   391,   389,   403,   571,   373,
     570,   396,   403,    40,    41,   439,    19,   445,   446,    11,
     406,   409,   113,   351,    20,   421,   121,   765,   766,   161,
     421,    27,   351,   711,    33,    16,   432,   401,    19,    21,
      39,   432,   174,   439,   408,   482,   483,    28,   465,   378,
     467,    54,    86,   409,   450,   715,   442,    20,   680,   681,
     456,    20,    54,    13,    27,   461,   688,   689,    27,   632,
     461,   203,   106,   385,   403,   439,   395,   406,    15,   398,
     409,   409,    19,    86,   445,   446,    54,   121,     5,   651,
     409,   403,   421,   225,    86,   227,   228,    13,   580,   231,
      16,    14,    15,   432,   236,   466,   467,    13,    14,   421,
       9,   593,   594,   791,   106,    28,   466,   467,   121,     5,
     432,    22,   800,     9,   403,   607,     8,    28,    34,   121,
      36,    17,   461,   583,   115,    21,    10,   465,   196,    37,
     536,   505,   421,   201,     5,   277,   465,   571,   280,   461,
      17,   283,    27,   432,    21,    15,    11,   521,   836,   544,
       1,   525,   558,    28,   528,   593,   594,   558,    54,    86,
     811,    18,    17,   814,   570,   816,    21,   536,    28,   570,
      97,     9,   461,    22,   580,    27,    28,   738,   105,   106,
      75,    76,   609,    19,   872,   873,   874,     3,     4,    54,
      86,    15,    59,    60,   121,    27,    28,   571,   632,    13,
     692,   889,    19,   891,   591,    27,   634,   613,    73,   351,
     613,   881,   613,     5,     6,     7,    13,   613,     3,     4,
     613,    86,   618,   619,   731,   121,   622,   750,   750,   624,
      21,   570,     3,     4,    18,   808,   558,   869,   634,   568,
      22,   106,    19,   572,   111,   747,    54,   747,   570,     3,
       4,   625,     3,     4,   641,   642,   121,    16,   632,    27,
      28,    69,    70,   637,    72,    73,    74,   409,   606,   675,
     559,   609,     3,     4,   675,    27,    28,   606,    86,     5,
     609,   570,     5,   622,   302,   303,   793,   683,    20,   695,
     706,   678,   695,   622,   695,   634,   121,   439,   106,   695,
      34,    35,   695,    37,   699,   452,   453,    27,   706,   704,
     314,   315,   745,   121,     1,    17,    50,     9,    52,    21,
       8,   708,    24,   320,   321,    59,    60,    10,    30,    37,
      32,   705,   738,    35,    15,   731,   675,   738,   556,   557,
     706,   737,   738,    15,    69,   738,    15,     1,   743,    27,
      27,   747,    22,   675,    14,    14,    17,    14,   225,    14,
     227,    19,   691,    93,   231,    18,     5,   706,   706,   236,
      20,   745,    16,    20,   808,    50,    21,   706,   112,    16,
      28,   115,    15,     1,   713,    20,   675,    27,   784,   795,
     818,   797,   731,   799,   795,     9,   797,   793,   799,   795,
      27,   797,   795,   799,   797,   801,   799,    22,   747,    21,
     277,    21,    28,   280,   148,   811,   283,    18,   814,    21,
     816,    21,   818,    11,    29,    29,   821,   161,    21,   571,
      21,    29,     1,   839,   808,   302,   303,   832,   839,    20,
     174,    11,    28,   839,    16,    28,   839,   776,    27,    34,
      35,    18,    37,    27,   793,    20,   190,    11,    16,    21,
      21,    21,   801,     1,    21,    28,    16,    52,     1,   203,
      29,    18,   801,    22,    59,    60,    22,    22,    22,   818,
       1,   215,   216,   217,    54,    15,   161,   354,    29,    16,
     632,   225,   117,   227,   228,    27,    27,   231,    22,   174,
      54,    71,   236,    73,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,   190,    86,    28,    22,     1,
      28,     1,     5,    20,    22,    21,     9,   112,   203,    22,
     115,    22,    86,    28,    17,    16,   106,     1,    21,     1,
      27,    54,   217,   277,    20,    22,   280,   100,    27,   283,
      22,   121,   106,   228,   737,    62,    69,    70,    75,    72,
      73,    74,   450,   148,   706,    75,   324,   121,   302,   303,
     325,    54,   439,    86,   418,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,   328,    72,
      73,    74,    75,    76,   560,   801,   561,   464,   465,   466,
     467,   564,   469,    86,   400,    11,   191,   192,   121,   378,
     113,   112,   112,   193,   289,   396,   544,   351,   352,   113,
     295,   580,   326,   179,   698,   784,   376,   818,   747,   816,
     215,   216,   625,   218,   219,   528,   277,   570,   121,   373,
     225,   461,   227,   675,    -1,    -1,   231,    -1,    54,    -1,
      -1,   236,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    -1,    -1,    -1,   808,   401,    -1,    -1,
      -1,    -1,    -1,    -1,   408,   409,   351,    54,    -1,    -1,
      86,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,   277,    -1,    -1,   280,    -1,    11,   283,    -1,
     106,    -1,    -1,   202,   571,   439,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   121,   450,   302,   303,    -1,
      -1,    -1,   456,   398,    -1,    -1,    11,    -1,    -1,    -1,
      -1,   465,   466,    -1,   409,    -1,   603,    -1,   605,   606,
     607,    -1,   609,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    55,    56,    57,   632,    -1,   352,    -1,    54,
      -1,   505,    86,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    -1,    -1,    -1,   521,   373,    -1,
     465,   525,   106,    86,   528,    54,    89,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    -1,   121,    -1,    -1,
      69,    70,    -1,    72,    73,    74,   401,   316,   317,   318,
     319,    -1,    -1,   408,   691,   692,   693,    86,   121,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   121,   571,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   580,   106,    54,    -1,
      -1,    -1,    -1,    -1,   439,    -1,    -1,    -1,    -1,    -1,
     445,   446,   121,    69,    70,   450,    72,    73,    74,    -1,
      -1,   456,   606,   607,    -1,    -1,    -1,    -1,    -1,    -1,
      86,   466,   467,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   625,    -1,    -1,    -1,    -1,    -1,    -1,   632,    -1,
     106,    -1,    -1,   637,   403,    -1,    -1,    -1,    -1,   776,
     777,   410,    -1,    -1,    -1,   121,    -1,    -1,    -1,    -1,
     505,    -1,   421,    -1,    -1,    -1,    11,    -1,    -1,    -1,
      -1,   606,    54,   432,   609,    -1,   521,    -1,    -1,    -1,
     525,   808,    -1,   528,    -1,    -1,    -1,    69,    70,    -1,
      72,    73,    74,    -1,    -1,    -1,    -1,   691,    -1,    -1,
      -1,    -1,   461,    -1,    86,    -1,    -1,    -1,    -1,    -1,
      -1,   705,   706,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,   106,    -1,   571,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   580,    -1,    -1,    -1,   121,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,   593,   594,
      -1,   745,    -1,    -1,    -1,    -1,   691,    -1,    -1,    -1,
      -1,    -1,   607,     5,    -1,    -1,    -1,     9,    -1,    -1,
      -1,   706,    -1,    -1,    -1,    17,   121,    -1,    -1,    -1,
     625,    -1,    -1,    -1,    -1,    -1,    -1,   632,    -1,    -1,
      -1,    -1,   637,    -1,   553,   554,   555,   556,   557,   558,
     559,   560,   561,    -1,   563,   564,   565,    -1,   567,    -1,
      -1,   570,    54,    -1,   808,    -1,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    -1,
      72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,    -1,
      -1,   776,    -1,    -1,    86,    -1,    -1,   692,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    -1,
     705,    -1,    -1,    -1,     1,    -1,     3,     4,     5,    -1,
      -1,    -1,     9,    -1,    11,    12,    86,    -1,    -1,   121,
      17,    -1,    19,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      27,    -1,    -1,    -1,   653,    32,    -1,    -1,    35,    -1,
     745,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   121,    -1,    -1,    -1,    -1,   675,    54,    -1,    -1,
      -1,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    -1,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    -1,    94,    95,    96,
      97,    98,    99,   808,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,    -1,   119,   120,   121,   122,   123,    -1,     1,    -1,
       3,     4,     5,    -1,    -1,    -1,     9,    15,    11,    12,
      -1,    -1,    -1,    16,    17,    23,   765,   766,    21,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    32,
      38,    -1,    35,    -1,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    -1,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    -1,    -1,    -1,
      -1,    94,    -1,    -1,    97,    -1,    99,    -1,   101,    -1,
      -1,    -1,   105,   106,   107,    -1,   109,   110,    -1,   112,
     113,   114,    -1,   116,    -1,    -1,   119,   120,   121,   122,
     123,     1,    -1,     3,     4,     5,    -1,    -1,    -1,     9,
      15,    11,    12,    -1,    -1,    -1,    16,    17,    23,    -1,
      -1,    21,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    32,    38,    -1,    35,    -1,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    -1,    -1,    -1,    94,    -1,    -1,    97,    -1,    99,
      -1,   101,    -1,    -1,    -1,   105,   106,   107,    -1,   109,
     110,    -1,   112,   113,   114,    -1,   116,    -1,    -1,   119,
     120,   121,   122,   123,     1,    -1,     3,     4,     5,    -1,
      -1,    -1,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      17,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    -1,    -1,
      -1,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    -1,    72,    73,    74,    75,    76,
      77,    78,    -1,    80,    81,    82,    83,    84,    85,    86,
      87,    -1,    89,    -1,    -1,    -1,    -1,    94,    -1,    -1,
      97,    -1,    99,    -1,   101,    -1,    -1,    -1,   105,   106,
     107,    -1,   109,   110,    -1,   112,   113,   114,    -1,   116,
      -1,    -1,   119,   120,   121,   122,   123,     1,    -1,     3,
       4,     5,    -1,    -1,    -1,     9,    -1,    11,    12,    -1,
      -1,    -1,    -1,    17,    -1,    19,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    -1,    -1,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,    72,    73,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    -1,    -1,    97,    -1,    99,    -1,   101,    -1,    -1,
      -1,   105,   106,   107,    -1,   109,   110,    -1,   112,   113,
     114,    -1,   116,    -1,    -1,   119,   120,   121,   122,   123,
       3,     4,     5,    -1,    -1,    -1,     9,    -1,    11,    12,
      -1,    -1,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    -1,    -1,    -1,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    -1,    -1,
      -1,    94,    -1,    -1,    97,    -1,    99,    -1,   101,    -1,
      -1,    -1,   105,   106,   107,    -1,   109,   110,    -1,   112,
     113,   114,    -1,   116,    -1,    -1,   119,   120,   121,   122,
     123,     3,     4,     5,    -1,    -1,    -1,     9,    -1,    11,
      12,    -1,    -1,    -1,    16,    17,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    -1,    -1,    -1,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    -1,
      72,    73,    74,    75,    76,    77,    78,    -1,    80,    81,
      82,    83,    84,    85,    86,    87,    -1,    89,    -1,    -1,
      -1,    -1,    94,    -1,    -1,    97,    -1,    99,    -1,   101,
      -1,    -1,    -1,   105,   106,   107,    -1,   109,   110,    -1,
     112,   113,   114,    -1,   116,    -1,    -1,   119,   120,   121,
     122,   123,     3,     4,     5,    -1,    -1,    -1,     9,    -1,
      11,    12,    -1,    -1,    -1,    16,    17,    -1,    -1,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    -1,    -1,    -1,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      -1,    72,    73,    74,    75,    76,    77,    78,    -1,    80,
      81,    82,    83,    84,    85,    86,    87,    -1,    89,    -1,
      -1,    -1,    -1,    94,    -1,    -1,    97,    -1,    99,    -1,
     101,    -1,    -1,    -1,   105,   106,   107,    -1,   109,   110,
      -1,   112,   113,   114,    -1,   116,    -1,    -1,   119,   120,
     121,   122,   123,     3,     4,     5,    -1,    -1,    -1,     9,
      -1,    11,    12,    -1,    -1,    -1,    -1,    17,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    54,    -1,    -1,    -1,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    -1,    72,    73,    74,    75,    76,    77,    78,    -1,
      80,    81,    82,    83,    84,    85,    86,    87,    -1,    89,
      -1,    -1,    -1,    -1,    94,    -1,    -1,    97,    -1,    99,
      -1,   101,    -1,    -1,    -1,   105,   106,   107,    -1,   109,
     110,    -1,   112,   113,   114,    -1,   116,    -1,    -1,   119,
     120,   121,   122,   123,     3,     4,     5,    -1,    -1,    -1,
       9,    -1,    11,    12,    -1,    14,    -1,    -1,    17,    -1,
      -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    -1,    72,    73,    74,    75,    76,    77,    78,
      -1,    80,    81,    82,    83,    84,    85,    86,    87,    -1,
      89,    -1,    -1,    -1,    -1,    94,    -1,    -1,    97,    -1,
      99,    -1,   101,    -1,    -1,    -1,   105,   106,   107,    -1,
     109,   110,    -1,   112,   113,   114,    -1,   116,    -1,    -1,
     119,   120,   121,   122,   123,     3,     4,     5,    -1,    -1,
      -1,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,    17,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    32,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    -1,    72,    73,    74,    75,    76,    77,
      78,    -1,    80,    81,    82,    83,    84,    85,    86,    87,
      -1,    89,    -1,    -1,    -1,    -1,    94,    -1,    -1,    97,
      -1,    99,    -1,   101,    -1,    -1,    -1,   105,   106,   107,
      -1,   109,   110,    -1,   112,   113,   114,    -1,   116,    -1,
      -1,   119,   120,   121,   122,   123,     3,     4,     5,    -1,
      -1,    -1,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      17,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      -1,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    -1,    72,    73,    74,    75,    76,
      77,    78,    -1,    80,    81,    82,    83,    84,    85,    86,
      87,    -1,    89,    -1,    -1,    -1,    -1,    94,    -1,    -1,
      97,    -1,    99,    -1,   101,    -1,    -1,    -1,   105,   106,
     107,    -1,   109,   110,    -1,   112,   113,   114,    -1,   116,
      -1,    -1,   119,   120,   121,   122,   123,     3,     4,     5,
      -1,    -1,    -1,     9,    -1,    11,    12,    -1,    -1,    -1,
      -1,    17,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    -1,    72,    73,    74,    75,
      76,    77,    78,    -1,    80,    81,    82,    83,    84,    85,
      86,    87,    -1,    89,    -1,    -1,    -1,    -1,    94,    -1,
      -1,    97,    -1,    99,    -1,   101,    -1,    -1,    -1,   105,
     106,   107,    -1,   109,   110,    -1,   112,   113,   114,    -1,
     116,    -1,    -1,   119,   120,   121,   122,   123,     3,     4,
       5,    -1,    -1,    -1,     9,    -1,    11,    12,    -1,    -1,
      -1,    -1,    17,    -1,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      -1,    -1,    -1,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    -1,    72,    73,    74,
      75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,
      -1,    -1,    97,    -1,    99,    -1,   101,    -1,    -1,    -1,
     105,   106,   107,    -1,   109,   110,    -1,   112,    -1,   114,
      -1,   116,    -1,    -1,   119,   120,   121,   122,   123,     3,
       4,     5,    -1,    -1,    -1,     9,    -1,    11,    12,    -1,
      -1,    -1,    -1,    17,    -1,    19,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    -1,    -1,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,    72,    73,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      94,    -1,    -1,    97,    -1,    99,    -1,   101,    -1,    -1,
      -1,   105,   106,   107,    -1,   109,   110,    -1,   112,   113,
     114,    -1,   116,    -1,    -1,   119,   120,   121,   122,   123,
       3,     4,     5,    -1,    -1,    -1,     9,    -1,    11,    12,
      -1,    -1,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    -1,    -1,    -1,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    -1,    72,
      73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    94,    -1,    -1,    97,    -1,    99,    -1,   101,    -1,
      -1,    -1,   105,   106,   107,    -1,   109,   110,    -1,   112,
     113,   114,    -1,   116,    -1,    -1,   119,   120,   121,   122,
     123,     3,     4,     5,    -1,    -1,    -1,     9,    -1,    11,
      12,    -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    -1,    -1,    -1,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    -1,
      72,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    -1,    -1,    97,    -1,    99,    -1,   101,
      -1,    -1,    -1,   105,   106,   107,    -1,   109,   110,    -1,
     112,   113,   114,    -1,   116,    -1,    -1,   119,   120,   121,
     122,   123,     3,     4,     5,    -1,    -1,    -1,     9,    -1,
      11,    12,    -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    -1,    -1,    -1,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      -1,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    94,    -1,    -1,    97,    -1,    99,    -1,
     101,    -1,    -1,    -1,   105,   106,   107,    -1,   109,   110,
      -1,   112,   113,   114,    -1,   116,    -1,    -1,   119,   120,
     121,   122,   123,     3,     4,     5,    -1,    -1,    -1,     9,
      -1,    11,    12,    -1,    -1,    -1,    -1,    17,    18,    -1,
      -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    -1,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    94,    -1,    -1,    97,    -1,    99,
      -1,   101,    -1,    -1,    -1,   105,   106,   107,    -1,   109,
     110,    -1,   112,    -1,   114,    -1,   116,    -1,    -1,   119,
     120,   121,   122,   123,     3,     4,     5,    -1,    -1,    -1,
       9,    -1,    11,    12,    -1,    -1,    -1,    -1,    17,    -1,
      -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    -1,    72,    73,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,    97,    -1,
      99,    -1,   101,    -1,    -1,    -1,   105,   106,   107,    -1,
     109,   110,    -1,   112,    -1,   114,    -1,   116,    -1,    -1,
     119,   120,   121,   122,   123,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    -1,    17,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    -1,    -1,    54,    -1,    -1,    -1,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    -1,    72,    73,    74,    75,    76,     5,
      -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,    -1,
      17,    -1,    -1,   121,    21,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    -1,    72,    73,    74,    75,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      86,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    -1,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    13,   121,    -1,    -1,    17,    -1,
      -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,   106,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   121,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    -1,    72,    73,    74,    75,    76,    77,    78,
      -1,    80,    81,    82,    83,    84,    85,    86,    87,    17,
      89,    -1,    -1,    21,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    -1,    -1,   106,    -1,    -1,
      -1,    75,    76,    77,    78,    -1,    80,    81,    82,    83,
      84,    85,   121,    87,    -1,    89,    54,    -1,    -1,    -1,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    -1,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    17,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   121,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    -1,    -1,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    -1,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    17,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    -1,    72,    73,    74,    75,    76,    77,    78,    -1,
      80,    81,    82,    83,    84,    85,    86,    87,    17,    89,
      -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   121,    -1,    -1,    -1,    54,    -1,    -1,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    21,    72,    73,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    -1,    -1,    54,    -1,   106,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,   121,    72,    73,    74,    75,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    86,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    -1,    72,    73,    74,    75,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      54,    -1,   121,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,    72,    73,
      74,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   121,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   121
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   146,   205,     0,   335,   206,   334,    29,     1,     3,
       4,     5,     9,    11,    12,    16,    17,    21,    27,    32,
      35,    54,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    94,    97,    99,   101,   105,
     106,   107,   109,   110,   112,   113,   114,   116,   119,   120,
     121,   122,   123,   127,   128,   130,   131,   132,   133,   135,
     136,   137,   143,   144,   145,   147,   148,   151,   154,   155,
     156,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     223,   224,   225,   227,   229,   230,   231,   232,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   255,
     260,   261,   270,   271,   272,   273,   283,   284,   285,   286,
     295,   297,   301,   309,   311,   312,   317,   320,   325,   329,
     330,    86,   161,   161,   161,   161,   172,   296,   153,   174,
     176,   177,    53,    80,    86,   163,   168,   174,   223,   251,
     252,   262,   263,   264,   265,   266,   267,   161,   161,    19,
      86,   130,   131,   133,   233,    19,   133,   204,   133,    86,
     311,   143,    13,    86,   127,   130,   135,   148,   209,   211,
     214,   223,   227,   317,    11,    71,    73,    86,   130,   131,
     133,   134,   137,   138,    21,    13,   161,    13,    86,   133,
     157,   226,   227,   228,   229,   255,   261,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      17,    21,    28,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    97,   105,   226,   302,   310,
      13,   148,   154,    13,   174,   261,    13,   129,    54,    86,
     132,   136,   155,   156,   250,    86,   132,   134,   136,   250,
     161,    17,    24,    30,    32,    35,   260,    31,    52,     6,
       7,   249,     3,     4,    40,    41,    13,    14,    34,    36,
      33,    39,     9,     8,    10,    37,    15,    23,    38,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,   175,
      16,    19,    28,   115,   195,   274,   276,   221,   222,   229,
      54,    86,   217,   218,   213,   222,    54,   137,   216,   249,
     212,   271,   272,    27,    28,    27,   255,   161,   254,    28,
     274,   276,   287,    16,    19,   133,    15,   208,     3,     4,
       1,    23,    28,    18,   249,     9,   267,   252,    22,    28,
      53,    15,    20,   234,   236,   237,   238,   330,    86,   233,
     332,    15,   204,    13,   204,   206,    14,    69,    73,    86,
     113,   165,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   223,   264,   268,   269,   312,   313,   314,   315,   316,
     326,   330,    13,   128,   133,   138,   134,    27,   143,   226,
     256,   256,    21,   160,    17,   130,   131,   157,   158,   159,
     251,   253,   157,   261,    18,    22,   251,   253,   302,   256,
     256,     3,     4,   176,    11,    86,   130,   131,   138,   139,
     140,   141,   142,   229,   138,   142,   150,   161,   161,   162,
     162,   162,   163,   163,   164,   164,   165,   165,   165,   165,
     166,   166,   167,   168,   169,   170,    19,   278,   177,   171,
     174,   296,   196,   174,   248,    16,   275,   303,   304,    54,
     161,   248,   113,   255,   327,   174,    20,   335,    55,    56,
      57,    89,   133,   298,   299,   300,    16,    19,   282,   174,
     277,   278,   207,    27,   296,   174,   251,   253,   264,   267,
     174,   127,   239,   240,    28,   234,   330,     1,   205,   133,
     208,   181,   187,    13,    34,    36,    33,    39,     9,     8,
      10,    37,    15,    23,    38,   175,   268,    15,    69,    14,
      28,    15,    15,     1,   268,   318,   319,    27,    27,    22,
     251,   256,   257,   258,   259,    14,    14,   152,   153,   174,
     177,    17,   128,   130,   131,   158,   253,   160,   160,    14,
      14,   318,    18,   139,   140,    11,    86,   130,   142,    86,
     141,    54,   229,     3,     4,    20,   279,   280,   333,    16,
      20,   190,   333,   133,   305,   306,   307,   308,    93,   322,
     323,   276,    21,   288,   333,   299,    19,    28,   299,     1,
     298,    16,    15,    20,   235,   236,   330,     1,    20,    28,
      20,   335,    27,     9,   165,   165,   165,   179,   179,   180,
     264,   181,   182,   183,   187,   188,   189,   184,   187,   187,
     127,   314,   256,   127,    14,    28,    27,   257,    17,   260,
      21,    21,    22,    28,    18,   172,   173,   178,    21,    21,
      14,    86,   131,    11,     1,   149,   263,    20,    28,    29,
     277,   281,   329,   174,    29,    71,    86,    91,    92,    95,
      96,    98,   102,   103,   104,   108,   111,   115,   117,   127,
     174,   191,   192,   193,   194,   195,   197,   200,   202,   203,
     210,   223,   321,   329,    28,   330,   307,    21,    21,   322,
      22,   256,   328,    29,    27,    88,   174,   223,   243,   270,
     273,   289,   290,   291,   292,   294,   300,   311,   329,   299,
      19,   296,   178,     1,   206,    16,    28,   319,    18,   178,
     177,   177,   174,    18,   177,   177,    86,   139,   263,   331,
      27,    20,   280,   330,     3,     4,   330,   133,    27,   178,
      27,    16,   190,    21,   127,    21,   176,    21,   195,    21,
      16,     3,     4,     1,   152,   267,   324,    22,    28,   330,
      27,    28,   291,    27,    28,    27,    28,    16,     3,     4,
      20,    29,   187,   187,    18,    22,    22,    22,    22,    27,
       1,    19,    29,     1,   281,     1,    16,   190,   117,   201,
     212,    27,   199,   263,    27,   199,   322,   199,   190,   191,
      28,    22,    22,   256,     1,   174,   293,   297,   174,   297,
     293,   289,   330,     1,   330,    20,    20,    27,   190,    21,
     198,   199,    22,    22,    22,   195,    20,    27,     1,     1,
     177,    27,   190,   190,   190,    20,    20,    22,   176,   100,
      27,    22,   190,   190
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
        case 2:

/* Line 1464 of yacc.c  */
#line 294 "cparser.y"
    { (yyval.n) = alacnary(S_IDENTIFIER, IDENTIFIERr1, 0, (yyvsp[(1) - (1)].t)); ;}
    break;

  case 3:

/* Line 1464 of yacc.c  */
#line 297 "cparser.y"
    { (yyval.n) = alacnary(S_ID, IDr1, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 4:

/* Line 1464 of yacc.c  */
#line 298 "cparser.y"
    { (yyval.n) = alacnary(S_ID, IDr2, 5, (yyvsp[(1) - (5)].n), (yyvsp[(2) - (5)].n), (yyvsp[(3) - (5)].t), (yyvsp[(4) - (5)].n), (yyvsp[(5) - (5)].t)); ;}
    break;

  case 5:

/* Line 1464 of yacc.c  */
#line 299 "cparser.y"
    { (yyval.n) = alacnary(S_ID, IDr3, 3, (yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].n), (yyvsp[(3) - (3)].t)); ;}
    break;

  case 6:

/* Line 1464 of yacc.c  */
#line 300 "cparser.y"
    { (yyval.n) = alacnary(S_ID, IDr4, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 7:

/* Line 1464 of yacc.c  */
#line 303 "cparser.y"
    { /*template_test();*/ ;}
    break;

  case 8:

/* Line 1464 of yacc.c  */
#line 306 "cparser.y"
    { (yyval.n) = alacnary(S_GLOBAL_SCOPE, GLOBAL_SCOPEr1, 1, (yyvsp[(1) - (1)].t)); ;}
    break;

  case 9:

/* Line 1464 of yacc.c  */
#line 307 "cparser.y"
    { (yyval.n) = alacnary(S_GLOBAL_SCOPE, GLOBAL_SCOPEr2, 2, (yyvsp[(1) - (2)].t), (yyvsp[(2) - (2)].n)); ;}
    break;

  case 10:

/* Line 1464 of yacc.c  */
#line 310 "cparser.y"
    { (yyval.n) = alacnary(S_ID_SCOPE, ID_SCOPEr1, 2, (yyvsp[(1) - (2)].n), (yyvsp[(2) - (2)].t)); ;}
    break;

  case 11:

/* Line 1464 of yacc.c  */
#line 317 "cparser.y"
    { (yyval.n) = alacnary(S_NESTED_ID, NESTED_IDr1, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 12:

/* Line 1464 of yacc.c  */
#line 318 "cparser.y"
    { (yyval.n) = alacnary(S_NESTED_ID, NESTED_IDr2, 2, (yyvsp[(1) - (2)].n), (yyvsp[(2) - (2)].n)); ;}
    break;

  case 13:

/* Line 1464 of yacc.c  */
#line 321 "cparser.y"
    { (yyval.n) = alacnary(S_SCOPED_ID, SCOPED_IDr1, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 14:

/* Line 1464 of yacc.c  */
#line 322 "cparser.y"
    { (yyval.n) = alacnary(S_SCOPED_ID, SCOPED_IDr2, 2, (yyvsp[(1) - (2)].n), (yyvsp[(2) - (2)].n)); ;}
    break;

  case 15:

/* Line 1464 of yacc.c  */
#line 330 "cparser.y"
    { (yyval.n) = alacnary(S_DESTRUCTOR_ID, DESTRUCTOR_IDr1, 2, (yyvsp[(1) - (2)].t), (yyvsp[(2) - (2)].n)); ;}
    break;

  case 16:

/* Line 1464 of yacc.c  */
#line 331 "cparser.y"
    { (yyval.n) = alacnary(S_DESTRUCTOR_ID, DESTRUCTOR_IDr2, 2, (yyvsp[(1) - (2)].t), (yyvsp[(2) - (2)].n)); ;}
    break;

  case 17:

/* Line 1464 of yacc.c  */
#line 334 "cparser.y"
    { (yyval.n) = alacnary(S_SPECIAL_FUNCTION_ID, SPECIAL_FUNCTION_IDr1, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 18:

/* Line 1464 of yacc.c  */
#line 335 "cparser.y"
    { (yyval.n) = alacnary(S_SPECIAL_FUNCTION_ID, SPECIAL_FUNCTION_IDr2, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 19:

/* Line 1464 of yacc.c  */
#line 336 "cparser.y"
    { (yyval.n) = alacnary(S_SPECIAL_FUNCTION_ID, SPECIAL_FUNCTION_IDr3, 2, (yyvsp[(1) - (2)].t), (yyvsp[(2) - (2)].n)); ;}
    break;

  case 20:

/* Line 1464 of yacc.c  */
#line 339 "cparser.y"
    { (yyval.n) = alacnary(S_NESTED_SPECIAL_FUNCTION_ID, NESTED_SPECIAL_FUNCTION_IDr1, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 21:

/* Line 1464 of yacc.c  */
#line 340 "cparser.y"
    { (yyval.n) = alacnary(S_NESTED_SPECIAL_FUNCTION_ID, NESTED_SPECIAL_FUNCTION_IDr2, 2, (yyvsp[(1) - (2)].n), (yyvsp[(2) - (2)].n)); ;}
    break;

  case 22:

/* Line 1464 of yacc.c  */
#line 341 "cparser.y"
    { (yyval.n) = alacnary(S_NESTED_SPECIAL_FUNCTION_ID, NESTED_SPECIAL_FUNCTION_IDr3, 2, (yyvsp[(1) - (2)].n), (yyvsp[(2) - (2)].n)); ;}
    break;

  case 23:

/* Line 1464 of yacc.c  */
#line 344 "cparser.y"
    { (yyval.n) = alacnary(S_SCOPED_SPECIAL_FUNCTION_ID, SCOPED_SPECIAL_FUNCTION_IDr1, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 24:

/* Line 1464 of yacc.c  */
#line 345 "cparser.y"
    { (yyval.n) = alacnary(S_SCOPED_SPECIAL_FUNCTION_ID, SCOPED_SPECIAL_FUNCTION_IDr2, 2, (yyvsp[(1) - (2)].n), (yyvsp[(2) - (2)].n)); ;}
    break;

  case 25:

/* Line 1464 of yacc.c  */
#line 349 "cparser.y"
    { (yyval.n) = alacnary(S_DECLARATOR_ID, DECLARATOR_IDr1, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 26:

/* Line 1464 of yacc.c  */
#line 350 "cparser.y"
    { (yyval.n) = alacnary(S_DECLARATOR_ID, DECLARATOR_IDr2, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 27:

/* Line 1464 of yacc.c  */
#line 351 "cparser.y"
    { (yyval.n) = alacnary(S_DECLARATOR_ID, DECLARATOR_IDr3, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 28:

/* Line 1464 of yacc.c  */
#line 359 "cparser.y"
    { (yyval.n) = alacnary(S_BUILT_IN_TYPE_ID, BUILT_IN_TYPE_IDr1, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 29:

/* Line 1464 of yacc.c  */
#line 360 "cparser.y"
    { (yyval.n) = alacnary(S_BUILT_IN_TYPE_ID, BUILT_IN_TYPE_IDr2, 2, (yyvsp[(1) - (2)].n), (yyvsp[(2) - (2)].n)); ;}
    break;

  case 30:

/* Line 1464 of yacc.c  */
#line 363 "cparser.y"
    { (yyval.n) = alacnary(S_PSEUDO_DESTRUCTOR_ID, PSEUDO_DESTRUCTOR_IDr1, 4, (yyvsp[(1) - (4)].n), (yyvsp[(2) - (4)].t), (yyvsp[(3) - (4)].t), (yyvsp[(4) - (4)].n)); ;}
    break;

  case 31:

/* Line 1464 of yacc.c  */
#line 364 "cparser.y"
    { (yyval.n) = alacnary(S_PSEUDO_DESTRUCTOR_ID, PSEUDO_DESTRUCTOR_IDr2, 2, (yyvsp[(1) - (2)].t), (yyvsp[(2) - (2)].n)); ;}
    break;

  case 32:

/* Line 1464 of yacc.c  */
#line 365 "cparser.y"
    { (yyval.n) = alacnary(S_PSEUDO_DESTRUCTOR_ID, PSEUDO_DESTRUCTOR_IDr3, 2, (yyvsp[(1) - (2)].t), (yyvsp[(2) - (2)].n)); ;}
    break;

  case 33:

/* Line 1464 of yacc.c  */
#line 368 "cparser.y"
    { (yyval.n) = alacnary(S_NESTED_PSEUDO_DESTRUCTOR_ID, NESTED_PSEUDO_DESTRUCTOR_IDr1, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 34:

/* Line 1464 of yacc.c  */
#line 369 "cparser.y"
    { (yyval.n) = alacnary(S_NESTED_PSEUDO_DESTRUCTOR_ID, NESTED_PSEUDO_DESTRUCTOR_IDr2, 2, (yyvsp[(1) - (2)].n), (yyvsp[(2) - (2)].n)); ;}
    break;

  case 35:

/* Line 1464 of yacc.c  */
#line 372 "cparser.y"
    { (yyval.n) = alacnary(S_SCOPED_PSEUDO_DESTRUCTOR_ID, SCOPED_PSEUDO_DESTRUCTOR_IDr1, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 36:

/* Line 1464 of yacc.c  */
#line 373 "cparser.y"
    { (yyval.n) = alacnary(S_SCOPED_PSEUDO_DESTRUCTOR_ID, SCOPED_PSEUDO_DESTRUCTOR_IDr2, 2, (yyvsp[(1) - (2)].n), (yyvsp[(2) - (2)].n)); ;}
    break;

  case 37:

/* Line 1464 of yacc.c  */
#line 385 "cparser.y"
    { (yyval.n) = alacnary(S_STRING, STRINGr1, 1, (yyvsp[(1) - (1)].t)); ;}
    break;

  case 38:

/* Line 1464 of yacc.c  */
#line 388 "cparser.y"
    { (yyval.n) = alacnary(S_LITERAL, LITERALr1, 1, (yyvsp[(1) - (1)].t)); ;}
    break;

  case 39:

/* Line 1464 of yacc.c  */
#line 389 "cparser.y"
    { (yyval.n) = alacnary(S_LITERAL, LITERALr2, 1, (yyvsp[(1) - (1)].t)); ;}
    break;

  case 40:

/* Line 1464 of yacc.c  */
#line 390 "cparser.y"
    { (yyval.n) = alacnary(S_LITERAL, LITERALr3, 1, (yyvsp[(1) - (1)].t)); ;}
    break;

  case 41:

/* Line 1464 of yacc.c  */
#line 391 "cparser.y"
    { (yyval.n) = alacnary(S_LITERAL, LITERALr4, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 42:

/* Line 1464 of yacc.c  */
#line 392 "cparser.y"
    { (yyval.n) = alacnary(S_LITERAL, LITERALr5, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 43:

/* Line 1464 of yacc.c  */
#line 395 "cparser.y"
    { (yyval.n) = alacnary(S_BOOLEAN_LITERAL, BOOLEAN_LITERALr1, 1, (yyvsp[(1) - (1)].t)); ;}
    break;

  case 44:

/* Line 1464 of yacc.c  */
#line 396 "cparser.y"
    { (yyval.n) = alacnary(S_BOOLEAN_LITERAL, BOOLEAN_LITERALr2, 1, (yyvsp[(1) - (1)].t)); ;}
    break;

  case 45:

/* Line 1464 of yacc.c  */
#line 402 "cparser.y"
    { (yyval.n) = alacnary(S_TRANSLATION_UNIT, TRANSLATION_UNITr1, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 46:

/* Line 1464 of yacc.c  */
#line 435 "cparser.y"
    { (yyval.n) = alacnary(S_PRIMARY_EXPRESSION, PRIMARY_EXPRESSIONr1, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 47:

/* Line 1464 of yacc.c  */
#line 436 "cparser.y"
    { (yyval.n) = alacnary(S_PRIMARY_EXPRESSION, PRIMARY_EXPRESSIONr2, 1, (yyvsp[(1) - (1)].t)); ;}
    break;

  case 48:

/* Line 1464 of yacc.c  */
#line 437 "cparser.y"
    { (yyval.n) = alacnary(S_PRIMARY_EXPRESSION, PRIMARY_EXPRESSIONr3, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 49:

/* Line 1464 of yacc.c  */
#line 441 "cparser.y"
    { (yyval.n) = alacnary(S_PRIMARY_EXPRESSION, PRIMARY_EXPRESSIONr4, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 50:

/* Line 1464 of yacc.c  */
#line 449 "cparser.y"
    { (yyval.n) = alacnary(S_ABSTRACT_EXPRESSION, ABSTRACT_EXPRESSIONr1, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 51:

/* Line 1464 of yacc.c  */
#line 450 "cparser.y"
    { (yyval.n) = alacnary(S_ABSTRACT_EXPRESSION, ABSTRACT_EXPRESSIONr2, 3, (yyvsp[(1) - (3)].t), (yyvsp[(2) - (3)].n), (yyvsp[(3) - (3)].t)); ;}
    break;

  case 52:

/* Line 1464 of yacc.c  */
#line 451 "cparser.y"
    { (yyval.n) = alacnary(S_ABSTRACT_EXPRESSION, ABSTRACT_EXPRESSIONr3, 2, (yyvsp[(1) - (2)].t), (yyvsp[(2) - (2)].n)); ;}
    break;

  case 53:

/* Line 1464 of yacc.c  */
#line 459 "cparser.y"
    { (yyval.n) = alacnary(S_TYPE1_PARAMETERS, TYPE1_PARAMETERSr1, 2, (yyvsp[(1) - (2)].n), (yyvsp[(2) - (2)].t)); ;}
    break;

  case 54:

/* Line 1464 of yacc.c  */
#line 460 "cparser.y"
    { (yyval.n) = alacnary(S_TYPE1_PARAMETERS, TYPE1_PARAMETERSr2, 3, (yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].n), (yyvsp[(3) - (3)].t)); ;}
    break;

  case 55:

/* Line 1464 of yacc.c  */
#line 463 "cparser.y"
    { /*mark_type1(); yyclearin;*/ ;}
    break;

  case 57:

/* Line 1464 of yacc.c  */
#line 469 "cparser.y"
    { (yyval.n) = alacnary(S_POSTFIX_EXPRESSION, POSTFIX_EXPRESSIONr1, 4, (yyvsp[(1) - (4)].n), (yyvsp[(2) - (4)].n), (yyvsp[(3) - (4)].n), (yyvsp[(4) - (4)].t)); ;}
    break;

  case 58:

/* Line 1464 of yacc.c  */
#line 471 "cparser.y"
    { /*yyerrok; yyclearin; remark_type1(); unmark(); unmark(); */;}
    break;

  case 59:

/* Line 1464 of yacc.c  */
#line 473 "cparser.y"
    { /*yyerrok; yyclearin; remark_type1(); unmark(); unmark();*/;}
    break;

  case 60:

/* Line 1464 of yacc.c  */
#line 475 "cparser.y"
    { /*yyerrok; yyclearin; remark_type1(); unmark(); */;}
    break;

  case 61:

/* Line 1464 of yacc.c  */
#line 476 "cparser.y"
    { (yyval.n) = alacnary(S_POSTFIX_EXPRESSION, POSTFIX_EXPRESSIONr2, 4, (yyvsp[(1) - (4)].n), (yyvsp[(2) - (4)].t), (yyvsp[(3) - (4)].n), (yyvsp[(4) - (4)].t)); ;}
    break;

  case 62:

/* Line 1464 of yacc.c  */
#line 480 "cparser.y"
    { (yyval.n) = alacnary(S_POSTFIX_EXPRESSION, POSTFIX_EXPRESSIONr3, 3, (yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].t), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 63:

/* Line 1464 of yacc.c  */
#line 482 "cparser.y"
    { (yyval.n) = alacnary(S_POSTFIX_EXPRESSION, POSTFIX_EXPRESSIONr4, 3, (yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].t), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 64:

/* Line 1464 of yacc.c  */
#line 483 "cparser.y"
    { (yyval.n) = alacnary(S_POSTFIX_EXPRESSION, POSTFIX_EXPRESSIONr5, 3, (yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].t), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 65:

/* Line 1464 of yacc.c  */
#line 485 "cparser.y"
    { (yyval.n) = alacnary(S_POSTFIX_EXPRESSION, POSTFIX_EXPRESSIONr6, 3, (yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].t), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 66:

/* Line 1464 of yacc.c  */
#line 486 "cparser.y"
    { (yyval.n) = alacnary(S_POSTFIX_EXPRESSION, POSTFIX_EXPRESSIONr7, 2, (yyvsp[(1) - (2)].n), (yyvsp[(2) - (2)].t)); ;}
    break;

  case 67:

/* Line 1464 of yacc.c  */
#line 487 "cparser.y"
    { (yyval.n) = alacnary(S_POSTFIX_EXPRESSION, POSTFIX_EXPRESSIONr8, 2, (yyvsp[(1) - (2)].n), (yyvsp[(2) - (2)].t)); ;}
    break;

  case 68:

/* Line 1464 of yacc.c  */
#line 488 "cparser.y"
    { (yyval.n) = alacnary(S_POSTFIX_EXPRESSION, POSTFIX_EXPRESSIONr9, 7, (yyvsp[(1) - (7)].t), (yyvsp[(2) - (7)].t), (yyvsp[(3) - (7)].n), (yyvsp[(4) - (7)].t), (yyvsp[(5) - (7)].t), (yyvsp[(6) - (7)].n), (yyvsp[(7) - (7)].t)); ;}
    break;

  case 69:

/* Line 1464 of yacc.c  */
#line 489 "cparser.y"
    { (yyval.n) = alacnary(S_POSTFIX_EXPRESSION, POSTFIX_EXPRESSIONr10, 7, (yyvsp[(1) - (7)].t), (yyvsp[(2) - (7)].t), (yyvsp[(3) - (7)].n), (yyvsp[(4) - (7)].t), (yyvsp[(5) - (7)].t), (yyvsp[(6) - (7)].n), (yyvsp[(7) - (7)].t)); ;}
    break;

  case 70:

/* Line 1464 of yacc.c  */
#line 490 "cparser.y"
    { (yyval.n) = alacnary(S_POSTFIX_EXPRESSION, POSTFIX_EXPRESSIONr11, 7, (yyvsp[(1) - (7)].t), (yyvsp[(2) - (7)].t), (yyvsp[(3) - (7)].n), (yyvsp[(4) - (7)].t), (yyvsp[(5) - (7)].t), (yyvsp[(6) - (7)].n), (yyvsp[(7) - (7)].t)); ;}
    break;

  case 71:

/* Line 1464 of yacc.c  */
#line 491 "cparser.y"
    { (yyval.n) = alacnary(S_POSTFIX_EXPRESSION, POSTFIX_EXPRESSIONr12, 7, (yyvsp[(1) - (7)].t), (yyvsp[(2) - (7)].t), (yyvsp[(3) - (7)].n), (yyvsp[(4) - (7)].t), (yyvsp[(5) - (7)].t), (yyvsp[(6) - (7)].n), (yyvsp[(7) - (7)].t)); ;}
    break;

  case 72:

/* Line 1464 of yacc.c  */
#line 492 "cparser.y"
    { (yyval.n) = alacnary(S_POSTFIX_EXPRESSION, POSTFIX_EXPRESSIONr13, 2, (yyvsp[(1) - (2)].t), (yyvsp[(2) - (2)].n)); ;}
    break;

  case 73:

/* Line 1464 of yacc.c  */
#line 497 "cparser.y"
    {  ;}
    break;

  case 74:

/* Line 1464 of yacc.c  */
#line 498 "cparser.y"
    { (yyval.n) = alacnary(S_EXPRESSION_LIST_OPT, EXPRESSION_LIST_OPTr1, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 75:

/* Line 1464 of yacc.c  */
#line 501 "cparser.y"
    { (yyval.n) = alacnary(S_EXPRESSION_LIST, EXPRESSION_LISTr1, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 76:

/* Line 1464 of yacc.c  */
#line 502 "cparser.y"
    { (yyval.n) = alacnary(S_EXPRESSION_LIST, EXPRESSION_LISTr2, 3, (yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].t), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 77:

/* Line 1464 of yacc.c  */
#line 505 "cparser.y"
    { (yyval.n) = alacnary(S_UNARY_EXPRESSION, UNARY_EXPRESSIONr1, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 78:

/* Line 1464 of yacc.c  */
#line 506 "cparser.y"
    { (yyval.n) = alacnary(S_UNARY_EXPRESSION, UNARY_EXPRESSIONr2, 2, (yyvsp[(1) - (2)].t), (yyvsp[(2) - (2)].n)); ;}
    break;

  case 79:

/* Line 1464 of yacc.c  */
#line 507 "cparser.y"
    { (yyval.n) = alacnary(S_UNARY_EXPRESSION, UNARY_EXPRESSIONr3, 2, (yyvsp[(1) - (2)].t), (yyvsp[(2) - (2)].n)); ;}
    break;

  case 80:

/* Line 1464 of yacc.c  */
#line 508 "cparser.y"
    { (yyval.n) = alacnary(S_UNARY_EXPRESSION, UNARY_EXPRESSIONr4, 2, (yyvsp[(1) - (2)].n), (yyvsp[(2) - (2)].n)); ;}
    break;

  case 81:

/* Line 1464 of yacc.c  */
#line 514 "cparser.y"
    { (yyval.n) = alacnary(S_UNARY_EXPRESSION, UNARY_EXPRESSIONr5, 3, (yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].n), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 82:

/* Line 1464 of yacc.c  */
#line 516 "cparser.y"
    { (yyval.n) = alacnary(S_UNARY_EXPRESSION, UNARY_EXPRESSIONr6, 2, (yyvsp[(1) - (2)].t), (yyvsp[(2) - (2)].n)); ;}
    break;

  case 83:

/* Line 1464 of yacc.c  */
#line 517 "cparser.y"
    { (yyval.n) = alacnary(S_UNARY_EXPRESSION, UNARY_EXPRESSIONr7, 2, (yyvsp[(1) - (2)].t), (yyvsp[(2) - (2)].n)); ;}
    break;

  case 84:

/* Line 1464 of yacc.c  */
#line 518 "cparser.y"
    { (yyval.n) = alacnary(S_UNARY_EXPRESSION, UNARY_EXPRESSIONr8, 2, (yyvsp[(1) - (2)].t), (yyvsp[(2) - (2)].n)); ;}
    break;

  case 85:

/* Line 1464 of yacc.c  */
#line 519 "cparser.y"
    { (yyval.n) = alacnary(S_UNARY_EXPRESSION, UNARY_EXPRESSIONr9, 2, (yyvsp[(1) - (2)].t), (yyvsp[(2) - (2)].n)); ;}
    break;

  case 86:

/* Line 1464 of yacc.c  */
#line 520 "cparser.y"
    { (yyval.n) = alacnary(S_UNARY_EXPRESSION, UNARY_EXPRESSIONr10, 2, (yyvsp[(1) - (2)].t), (yyvsp[(2) - (2)].n)); ;}
    break;

  case 87:

/* Line 1464 of yacc.c  */
#line 522 "cparser.y"
    { (yyval.n) = alacnary(S_UNARY_EXPRESSION, UNARY_EXPRESSIONr11, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 88:

/* Line 1464 of yacc.c  */
#line 523 "cparser.y"
    { (yyval.n) = alacnary(S_UNARY_EXPRESSION, UNARY_EXPRESSIONr12, 2, (yyvsp[(1) - (2)].n), (yyvsp[(2) - (2)].n)); ;}
    break;

  case 89:

/* Line 1464 of yacc.c  */
#line 524 "cparser.y"
    { (yyval.n) = alacnary(S_UNARY_EXPRESSION, UNARY_EXPRESSIONr13, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 90:

/* Line 1464 of yacc.c  */
#line 525 "cparser.y"
    { (yyval.n) = alacnary(S_UNARY_EXPRESSION, UNARY_EXPRESSIONr14, 2, (yyvsp[(1) - (2)].n), (yyvsp[(2) - (2)].n)); ;}
    break;

  case 91:

/* Line 1464 of yacc.c  */
#line 530 "cparser.y"
    { (yyval.n) = alacnary(S_DELETE_EXPRESSION, DELETE_EXPRESSIONr1, 1, (yyvsp[(1) - (2)].t)); ;}
    break;

  case 92:

/* Line 1464 of yacc.c  */
#line 533 "cparser.y"
    { (yyval.n) = alacnary(S_NEW_EXPRESSION, NEW_EXPRESSIONr1, 3, (yyvsp[(1) - (3)].t), (yyvsp[(2) - (3)].n), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 93:

/* Line 1464 of yacc.c  */
#line 534 "cparser.y"
    { (yyval.n) = alacnary(S_NEW_EXPRESSION, NEW_EXPRESSIONr2, 4, (yyvsp[(1) - (4)].t), (yyvsp[(2) - (4)].n), (yyvsp[(3) - (4)].n), (yyvsp[(4) - (4)].n)); ;}
    break;

  case 94:

/* Line 1464 of yacc.c  */
#line 535 "cparser.y"
    { (yyval.n) = alacnary(S_NEW_EXPRESSION, NEW_EXPRESSIONr3, 2, (yyvsp[(1) - (2)].t), (yyvsp[(2) - (2)].n)); ;}
    break;

  case 95:

/* Line 1464 of yacc.c  */
#line 537 "cparser.y"
    { (yyval.n) = alacnary(S_NEW_EXPRESSION, NEW_EXPRESSIONr4, 4, (yyvsp[(1) - (4)].t), (yyvsp[(2) - (4)].n), (yyvsp[(3) - (4)].n), (yyvsp[(4) - (4)].n)); ;}
    break;

  case 96:

/* Line 1464 of yacc.c  */
#line 543 "cparser.y"
    { (yyval.n) = alacnary(S_NEW_TYPE_ID, NEW_TYPE_IDr1, 2, (yyvsp[(1) - (2)].n), (yyvsp[(2) - (2)].n)); ;}
    break;

  case 97:

/* Line 1464 of yacc.c  */
#line 544 "cparser.y"
    { (yyval.n) = alacnary(S_NEW_TYPE_ID, NEW_TYPE_IDr2, 2, (yyvsp[(1) - (2)].n), (yyvsp[(2) - (2)].n)); ;}
    break;

  case 98:

/* Line 1464 of yacc.c  */
#line 545 "cparser.y"
    { (yyval.n) = alacnary(S_NEW_TYPE_ID, NEW_TYPE_IDr3, 2, (yyvsp[(1) - (2)].n), (yyvsp[(2) - (2)].n)); ;}
    break;

  case 99:

/* Line 1464 of yacc.c  */
#line 548 "cparser.y"
    { (yyval.n) = alacnary(S_NEW_DECLARATOR, NEW_DECLARATORr1, 2, (yyvsp[(1) - (2)].n), (yyvsp[(2) - (2)].n)); ;}
    break;

  case 100:

/* Line 1464 of yacc.c  */
#line 549 "cparser.y"
    { (yyval.n) = alacnary(S_NEW_DECLARATOR, NEW_DECLARATORr2, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 101:

/* Line 1464 of yacc.c  */
#line 552 "cparser.y"
    { (yyval.n) = alacnary(S_DIRECT_NEW_DECLARATOR, DIRECT_NEW_DECLARATORr1, 3, (yyvsp[(1) - (3)].t), (yyvsp[(2) - (3)].n), (yyvsp[(3) - (3)].t)); ;}
    break;

  case 102:

/* Line 1464 of yacc.c  */
#line 553 "cparser.y"
    { (yyval.n) = alacnary(S_DIRECT_NEW_DECLARATOR, DIRECT_NEW_DECLARATORr2, 4, (yyvsp[(1) - (4)].n), (yyvsp[(2) - (4)].t), (yyvsp[(3) - (4)].n), (yyvsp[(4) - (4)].t)); ;}
    break;

  case 103:

/* Line 1464 of yacc.c  */
#line 556 "cparser.y"
    {  ;}
    break;

  case 104:

/* Line 1464 of yacc.c  */
#line 557 "cparser.y"
    { (yyval.n) = alacnary(S_NEW_INIIALIZER_OPT, NEW_INIIALIZER_OPTr1, 3, (yyvsp[(1) - (3)].t), (yyvsp[(2) - (3)].n), (yyvsp[(3) - (3)].t)); ;}
    break;

  case 105:

/* Line 1464 of yacc.c  */
#line 563 "cparser.y"
    { (yyval.n) = alacnary(S_CAST_EXPRESSION, CAST_EXPRESSIONr1, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 106:

/* Line 1464 of yacc.c  */
#line 564 "cparser.y"
    { (yyval.n) = alacnary(S_CAST_EXPRESSION, CAST_EXPRESSIONr2, 2, (yyvsp[(1) - (2)].n), (yyvsp[(2) - (2)].n)); ;}
    break;

  case 107:

/* Line 1464 of yacc.c  */
#line 568 "cparser.y"
    { (yyval.n) = alacnary(S_PM_EXPRESSION, PM_EXPRESSIONr1, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 108:

/* Line 1464 of yacc.c  */
#line 569 "cparser.y"
    { (yyval.n) = alacnary(S_PM_EXPRESSION, PM_EXPRESSIONr2, 3, (yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].t), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 109:

/* Line 1464 of yacc.c  */
#line 570 "cparser.y"
    { (yyval.n) = alacnary(S_PM_EXPRESSION, PM_EXPRESSIONr3, 3, (yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].t), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 110:

/* Line 1464 of yacc.c  */
#line 573 "cparser.y"
    { (yyval.n) = alacnary(S_MULTIPLICATIVE_EXPRESSION, MULTIPLICATIVE_EXPRESSIONr1, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 111:

/* Line 1464 of yacc.c  */
#line 574 "cparser.y"
    { (yyval.n) = alacnary(S_MULTIPLICATIVE_EXPRESSION, MULTIPLICATIVE_EXPRESSIONr2, 3, (yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].n), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 112:

/* Line 1464 of yacc.c  */
#line 575 "cparser.y"
    { (yyval.n) = alacnary(S_MULTIPLICATIVE_EXPRESSION, MULTIPLICATIVE_EXPRESSIONr3, 3, (yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].t), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 113:

/* Line 1464 of yacc.c  */
#line 576 "cparser.y"
    { (yyval.n) = alacnary(S_MULTIPLICATIVE_EXPRESSION, MULTIPLICATIVE_EXPRESSIONr4, 3, (yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].t), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 114:

/* Line 1464 of yacc.c  */
#line 579 "cparser.y"
    { (yyval.n) = alacnary(S_ADDITIVE_EXPRESSION, ADDITIVE_EXPRESSIONr1, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 115:

/* Line 1464 of yacc.c  */
#line 580 "cparser.y"
    { (yyval.n) = alacnary(S_ADDITIVE_EXPRESSION, ADDITIVE_EXPRESSIONr2, 3, (yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].t), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 116:

/* Line 1464 of yacc.c  */
#line 581 "cparser.y"
    { (yyval.n) = alacnary(S_ADDITIVE_EXPRESSION, ADDITIVE_EXPRESSIONr3, 3, (yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].t), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 117:

/* Line 1464 of yacc.c  */
#line 584 "cparser.y"
    { (yyval.n) = alacnary(S_SHIFT_EXPRESSION, SHIFT_EXPRESSIONr1, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 118:

/* Line 1464 of yacc.c  */
#line 585 "cparser.y"
    { (yyval.n) = alacnary(S_SHIFT_EXPRESSION, SHIFT_EXPRESSIONr2, 3, (yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].t), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 119:

/* Line 1464 of yacc.c  */
#line 586 "cparser.y"
    { (yyval.n) = alacnary(S_SHIFT_EXPRESSION, SHIFT_EXPRESSIONr3, 3, (yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].t), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 120:

/* Line 1464 of yacc.c  */
#line 589 "cparser.y"
    { (yyval.n) = alacnary(S_RELATIONAL_EXPRESSION, RELATIONAL_EXPRESSIONr1, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 121:

/* Line 1464 of yacc.c  */
#line 590 "cparser.y"
    { (yyval.n) = alacnary(S_RELATIONAL_EXPRESSION, RELATIONAL_EXPRESSIONr2, 3, (yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].t), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 122:

/* Line 1464 of yacc.c  */
#line 591 "cparser.y"
    { (yyval.n) = alacnary(S_RELATIONAL_EXPRESSION, RELATIONAL_EXPRESSIONr3, 3, (yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].t), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 123:

/* Line 1464 of yacc.c  */
#line 592 "cparser.y"
    { (yyval.n) = alacnary(S_RELATIONAL_EXPRESSION, RELATIONAL_EXPRESSIONr4, 3, (yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].t), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 124:

/* Line 1464 of yacc.c  */
#line 593 "cparser.y"
    { (yyval.n) = alacnary(S_RELATIONAL_EXPRESSION, RELATIONAL_EXPRESSIONr5, 3, (yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].t), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 125:

/* Line 1464 of yacc.c  */
#line 596 "cparser.y"
    { (yyval.n) = alacnary(S_EQUALITY_EXPRESSION, EQUALITY_EXPRESSIONr1, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 126:

/* Line 1464 of yacc.c  */
#line 597 "cparser.y"
    { (yyval.n) = alacnary(S_EQUALITY_EXPRESSION, EQUALITY_EXPRESSIONr2, 3, (yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].t), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 127:

/* Line 1464 of yacc.c  */
#line 598 "cparser.y"
    { (yyval.n) = alacnary(S_EQUALITY_EXPRESSION, EQUALITY_EXPRESSIONr3, 3, (yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].t), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 128:

/* Line 1464 of yacc.c  */
#line 601 "cparser.y"
    { (yyval.n) = alacnary(S_AND_EXPRESSION, AND_EXPRESSIONr1, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 129:

/* Line 1464 of yacc.c  */
#line 602 "cparser.y"
    { (yyval.n) = alacnary(S_AND_EXPRESSION, AND_EXPRESSIONr2, 3, (yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].t), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 130:

/* Line 1464 of yacc.c  */
#line 605 "cparser.y"
    { (yyval.n) = alacnary(S_EXCLUSIVE_OR_EXPRESSION, EXCLUSIVE_OR_EXPRESSIONr1, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 131:

/* Line 1464 of yacc.c  */
#line 606 "cparser.y"
    { (yyval.n) = alacnary(S_EXCLUSIVE_OR_EXPRESSION, EXCLUSIVE_OR_EXPRESSIONr2, 3, (yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].t), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 132:

/* Line 1464 of yacc.c  */
#line 609 "cparser.y"
    { (yyval.n) = alacnary(S_INCLUSIVE_OR_EXPRESSION, INCLUSIVE_OR_EXPRESSIONr1, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 133:

/* Line 1464 of yacc.c  */
#line 610 "cparser.y"
    { (yyval.n) = alacnary(S_INCLUSIVE_OR_EXPRESSION, INCLUSIVE_OR_EXPRESSIONr2, 3, (yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].t), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 134:

/* Line 1464 of yacc.c  */
#line 613 "cparser.y"
    { (yyval.n) = alacnary(S_LOGICAL_AND_EXPRESSION, LOGICAL_AND_EXPRESSIONr1, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 135:

/* Line 1464 of yacc.c  */
#line 614 "cparser.y"
    { (yyval.n) = alacnary(S_LOGICAL_AND_EXPRESSION, LOGICAL_AND_EXPRESSIONr2, 3, (yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].t), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 136:

/* Line 1464 of yacc.c  */
#line 617 "cparser.y"
    { (yyval.n) = alacnary(S_LOGICAL_OR_EXPRESSION, LOGICAL_OR_EXPRESSIONr1, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 137:

/* Line 1464 of yacc.c  */
#line 618 "cparser.y"
    { (yyval.n) = alacnary(S_LOGICAL_OR_EXPRESSION, LOGICAL_OR_EXPRESSIONr2, 3, (yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].t), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 138:

/* Line 1464 of yacc.c  */
#line 621 "cparser.y"
    { (yyval.n) = alacnary(S_CONDITIONAL_EXPRESSION, CONDITIONAL_EXPRESSIONr1, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 139:

/* Line 1464 of yacc.c  */
#line 623 "cparser.y"
    { (yyval.n) = alacnary(S_CONDITIONAL_EXPRESSION, CONDITIONAL_EXPRESSIONr2, 5, (yyvsp[(1) - (5)].n), (yyvsp[(2) - (5)].t), (yyvsp[(3) - (5)].n), (yyvsp[(4) - (5)].t), (yyvsp[(5) - (5)].n)); ;}
    break;

  case 140:

/* Line 1464 of yacc.c  */
#line 629 "cparser.y"
    { (yyval.n) = alacnary(S_ASSIGNMENT_EXPRESSION, ASSIGNMENT_EXPRESSIONr1, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 141:

/* Line 1464 of yacc.c  */
#line 631 "cparser.y"
    { (yyval.n) = alacnary(S_ASSIGNMENT_EXPRESSION, ASSIGNMENT_EXPRESSIONr2, 3, (yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].n), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 142:

/* Line 1464 of yacc.c  */
#line 632 "cparser.y"
    { (yyval.n) = alacnary(S_ASSIGNMENT_EXPRESSION, ASSIGNMENT_EXPRESSIONr3, 3, (yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].t), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 143:

/* Line 1464 of yacc.c  */
#line 633 "cparser.y"
    { (yyval.n) = alacnary(S_ASSIGNMENT_EXPRESSION, ASSIGNMENT_EXPRESSIONr4, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 144:

/* Line 1464 of yacc.c  */
#line 636 "cparser.y"
    { (yyval.n) = alacnary(S_ASSIGNMENT_OPERATOR, ASSIGNMENT_OPERATORr1, 1, (yyvsp[(1) - (1)].t)); ;}
    break;

  case 145:

/* Line 1464 of yacc.c  */
#line 637 "cparser.y"
    { (yyval.n) = alacnary(S_ASSIGNMENT_OPERATOR, ASSIGNMENT_OPERATORr2, 1, (yyvsp[(1) - (1)].t)); ;}
    break;

  case 146:

/* Line 1464 of yacc.c  */
#line 638 "cparser.y"
    { (yyval.n) = alacnary(S_ASSIGNMENT_OPERATOR, ASSIGNMENT_OPERATORr3, 1, (yyvsp[(1) - (1)].t)); ;}
    break;

  case 147:

/* Line 1464 of yacc.c  */
#line 639 "cparser.y"
    { (yyval.n) = alacnary(S_ASSIGNMENT_OPERATOR, ASSIGNMENT_OPERATORr4, 1, (yyvsp[(1) - (1)].t)); ;}
    break;

  case 148:

/* Line 1464 of yacc.c  */
#line 640 "cparser.y"
    { (yyval.n) = alacnary(S_ASSIGNMENT_OPERATOR, ASSIGNMENT_OPERATORr5, 1, (yyvsp[(1) - (1)].t)); ;}
    break;

  case 149:

/* Line 1464 of yacc.c  */
#line 641 "cparser.y"
    { (yyval.n) = alacnary(S_ASSIGNMENT_OPERATOR, ASSIGNMENT_OPERATORr6, 1, (yyvsp[(1) - (1)].t)); ;}
    break;

  case 150:

/* Line 1464 of yacc.c  */
#line 642 "cparser.y"
    { (yyval.n) = alacnary(S_ASSIGNMENT_OPERATOR, ASSIGNMENT_OPERATORr7, 1, (yyvsp[(1) - (1)].t)); ;}
    break;

  case 151:

/* Line 1464 of yacc.c  */
#line 643 "cparser.y"
    { (yyval.n) = alacnary(S_ASSIGNMENT_OPERATOR, ASSIGNMENT_OPERATORr8, 1, (yyvsp[(1) - (1)].t)); ;}
    break;

  case 152:

/* Line 1464 of yacc.c  */
#line 644 "cparser.y"
    { (yyval.n) = alacnary(S_ASSIGNMENT_OPERATOR, ASSIGNMENT_OPERATORr9, 1, (yyvsp[(1) - (1)].t)); ;}
    break;

  case 153:

/* Line 1464 of yacc.c  */
#line 645 "cparser.y"
    { (yyval.n) = alacnary(S_ASSIGNMENT_OPERATOR, ASSIGNMENT_OPERATORr10, 1, (yyvsp[(1) - (1)].t)); ;}
    break;

  case 154:

/* Line 1464 of yacc.c  */
#line 646 "cparser.y"
    { (yyval.n) = alacnary(S_ASSIGNMENT_OPERATOR, ASSIGNMENT_OPERATORr11, 1, (yyvsp[(1) - (1)].t)); ;}
    break;

  case 155:

/* Line 1464 of yacc.c  */
#line 652 "cparser.y"
    {  ;}
    break;

  case 156:

/* Line 1464 of yacc.c  */
#line 653 "cparser.y"
    { (yyval.n) = alacnary(S_EXPRESSION_OPT, EXPRESSION_OPTr1, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 157:

/* Line 1464 of yacc.c  */
#line 656 "cparser.y"
    { (yyval.n) = alacnary(S_EXPRESSION, EXPRESSIONr1, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 158:

/* Line 1464 of yacc.c  */
#line 657 "cparser.y"
    { (yyval.n) = alacnary(S_EXPRESSION, EXPRESSIONr2, 3, (yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].t), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 159:

/* Line 1464 of yacc.c  */
#line 660 "cparser.y"
    { (yyval.n) = alacnary(S_CONSTANT_EXPRESSION, CONSTANT_EXPRESSIONr1, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 160:

/* Line 1464 of yacc.c  */
#line 665 "cparser.y"
    { (yyval.n) = alacnary(S_TEMPLATED_RELATIONAL_EXPRESSION, TEMPLATED_RELATIONAL_EXPRESSIONr1, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 161:

/* Line 1464 of yacc.c  */
#line 666 "cparser.y"
    { (yyval.n) = alacnary(S_TEMPLATED_RELATIONAL_EXPRESSION, TEMPLATED_RELATIONAL_EXPRESSIONr2, 3, (yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].t), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 162:

/* Line 1464 of yacc.c  */
#line 667 "cparser.y"
    { (yyval.n) = alacnary(S_TEMPLATED_RELATIONAL_EXPRESSION, TEMPLATED_RELATIONAL_EXPRESSIONr3, 3, (yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].t), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 163:

/* Line 1464 of yacc.c  */
#line 668 "cparser.y"
    { (yyval.n) = alacnary(S_TEMPLATED_RELATIONAL_EXPRESSION, TEMPLATED_RELATIONAL_EXPRESSIONr4, 3, (yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].t), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 164:

/* Line 1464 of yacc.c  */
#line 671 "cparser.y"
    { (yyval.n) = alacnary(S_TEMPLATED_EQUALITY_EXPRESSION, TEMPLATED_EQUALITY_EXPRESSIONr1, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 165:

/* Line 1464 of yacc.c  */
#line 673 "cparser.y"
    { (yyval.n) = alacnary(S_TEMPLATED_EQUALITY_EXPRESSION, TEMPLATED_EQUALITY_EXPRESSIONr2, 3, (yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].t), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 166:

/* Line 1464 of yacc.c  */
#line 675 "cparser.y"
    { (yyval.n) = alacnary(S_TEMPLATED_EQUALITY_EXPRESSION, TEMPLATED_EQUALITY_EXPRESSIONr3, 3, (yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].t), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 167:

/* Line 1464 of yacc.c  */
#line 678 "cparser.y"
    { (yyval.n) = alacnary(S_TEMPLATED_AND_EXPRESSION, TEMPLATED_AND_EXPRESSIONr1, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 168:

/* Line 1464 of yacc.c  */
#line 679 "cparser.y"
    { (yyval.n) = alacnary(S_TEMPLATED_AND_EXPRESSION, TEMPLATED_AND_EXPRESSIONr2, 3, (yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].t), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 169:

/* Line 1464 of yacc.c  */
#line 682 "cparser.y"
    { (yyval.n) = alacnary(S_TEMPLATED_EXLUSIVE_OR_EXPRESSION, TEMPLATED_EXLUSIVE_OR_EXPRESSIONr1, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 170:

/* Line 1464 of yacc.c  */
#line 684 "cparser.y"
    { (yyval.n) = alacnary(S_TEMPLATED_EXLUSIVE_OR_EXPRESSION, TEMPLATED_EXLUSIVE_OR_EXPRESSIONr2, 3, (yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].t), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 171:

/* Line 1464 of yacc.c  */
#line 687 "cparser.y"
    { (yyval.n) = alacnary(S_TEMPLATED_INCLUSIVE_OR_EXPRESSION, TEMPLATED_INCLUSIVE_OR_EXPRESSIONr1, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 172:

/* Line 1464 of yacc.c  */
#line 689 "cparser.y"
    { (yyval.n) = alacnary(S_TEMPLATED_INCLUSIVE_OR_EXPRESSION, TEMPLATED_INCLUSIVE_OR_EXPRESSIONr2, 3, (yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].t), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 173:

/* Line 1464 of yacc.c  */
#line 692 "cparser.y"
    { (yyval.n) = alacnary(S_TEMPLATED_LOGICAL_AND_EXPRESSION, TEMPLATED_LOGICAL_AND_EXPRESSIONr1, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 174:

/* Line 1464 of yacc.c  */
#line 694 "cparser.y"
    { (yyval.n) = alacnary(S_TEMPLATED_LOGICAL_AND_EXPRESSION, TEMPLATED_LOGICAL_AND_EXPRESSIONr2, 3, (yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].t), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 175:

/* Line 1464 of yacc.c  */
#line 697 "cparser.y"
    { (yyval.n) = alacnary(S_TEMPLATED_LOGICAL_OR_EXPRESSION, TEMPLATED_LOGICAL_OR_EXPRESSIONr1, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 176:

/* Line 1464 of yacc.c  */
#line 699 "cparser.y"
    { (yyval.n) = alacnary(S_TEMPLATED_LOGICAL_OR_EXPRESSION, TEMPLATED_LOGICAL_OR_EXPRESSIONr2, 3, (yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].t), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 177:

/* Line 1464 of yacc.c  */
#line 702 "cparser.y"
    { (yyval.n) = alacnary(S_TEMPLATED_CONDITIONAL_EXPRESSION, TEMPLATED_CONDITIONAL_EXPRESSIONr1, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 178:

/* Line 1464 of yacc.c  */
#line 704 "cparser.y"
    { (yyval.n) = alacnary(S_TEMPLATED_CONDITIONAL_EXPRESSION, TEMPLATED_CONDITIONAL_EXPRESSIONr2, 5, (yyvsp[(1) - (5)].n), (yyvsp[(2) - (5)].t), (yyvsp[(3) - (5)].n), (yyvsp[(4) - (5)].t), (yyvsp[(5) - (5)].n)); ;}
    break;

  case 179:

/* Line 1464 of yacc.c  */
#line 707 "cparser.y"
    { (yyval.n) = alacnary(S_TEMPLATED_ASSIGNMENT_EXPRESSION, TEMPLATED_ASSIGNMENT_EXPRESSIONr1, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 180:

/* Line 1464 of yacc.c  */
#line 709 "cparser.y"
    { (yyval.n) = alacnary(S_TEMPLATED_ASSIGNMENT_EXPRESSION, TEMPLATED_ASSIGNMENT_EXPRESSIONr2, 3, (yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].n), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 181:

/* Line 1464 of yacc.c  */
#line 710 "cparser.y"
    { (yyval.n) = alacnary(S_TEMPLATED_ASSIGNMENT_EXPRESSION, TEMPLATED_ASSIGNMENT_EXPRESSIONr3, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 182:

/* Line 1464 of yacc.c  */
#line 713 "cparser.y"
    { (yyval.n) = alacnary(S_TEMPLATED_EXPRESSION, TEMPLATED_EXPRESSIONr1, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 183:

/* Line 1464 of yacc.c  */
#line 715 "cparser.y"
    { (yyval.n) = alacnary(S_TEMPLATED_EXPRESSION, TEMPLATED_EXPRESSIONr2, 3, (yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].t), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 184:

/* Line 1464 of yacc.c  */
#line 718 "cparser.y"
    { (yyval.n) = alacnary(S_TEMPLATED_EXPRESSION_LIST, TEMPLATED_EXPRESSION_LISTr1, 1, (yyvsp[(1) - (1)].n)); ;}
    break;

  case 185:

/* Line 1464 of yacc.c  */
#line 720 "cparser.y"
    { (yyval.n) = alacnary(S_TEMPLATED_EXPRESSION_LIST, TEMPLATED_EXPRESSION_LISTr2, 3, (yyvsp[(1) - (3)].n), (yyvsp[(2) - (3)].t), (yyvsp[(3) - (3)].n)); ;}
    break;

  case 186:

/* Line 1464 of yacc.c  */
#line 728 "cparser.y"
    { /*end_search(); */;}
    break;

  case 202:

/* Line 1464 of yacc.c  */
#line 758 "cparser.y"
    { /*UNBANG("Bad statement-seq."); */;}
    break;

  case 205:

/* Line 1464 of yacc.c  */
#line 763 "cparser.y"
    { /*UNBANG("Bad statement.");*/ ;}
    break;

  case 221:

/* Line 1464 of yacc.c  */
#line 802 "cparser.y"
    {/* unnest(); */;}
    break;

  case 222:

/* Line 1464 of yacc.c  */
#line 804 "cparser.y"
    { /*unnest(); UNBANG("Bad declaration-seq.");*/ ;}
    break;

  case 225:

/* Line 1464 of yacc.c  */
#line 807 "cparser.y"
    { /*UNBANG("Bad declaration."); */;}
    break;

  case 226:

/* Line 1464 of yacc.c  */
#line 808 "cparser.y"
    { /*end_search(); */;}
    break;

  case 316:

/* Line 1464 of yacc.c  */
#line 919 "cparser.y"
    {/* UNBANG("Bad enumerator-list.");*/ ;}
    break;

  case 318:

/* Line 1464 of yacc.c  */
#line 921 "cparser.y"
    { /*UNBANG("Bad enumerator-definition.");*/ ;}
    break;

  case 320:

/* Line 1464 of yacc.c  */
#line 923 "cparser.y"
    { /*UNBANG("Bad enumerator-definition.");*/ ;}
    break;

  case 408:

/* Line 1464 of yacc.c  */
#line 1056 "cparser.y"
    {/* UNBANG("Bad initializer_clause."); */;}
    break;

  case 409:

/* Line 1464 of yacc.c  */
#line 1058 "cparser.y"
    {/* UNBANG("Bad initializer_clause."); */;}
    break;

  case 412:

/* Line 1464 of yacc.c  */
#line 1061 "cparser.y"
    {/* end_search(); */;}
    break;

  case 416:

/* Line 1464 of yacc.c  */
#line 1079 "cparser.y"
    {/* mark(); */;}
    break;

  case 418:

/* Line 1464 of yacc.c  */
#line 1081 "cparser.y"
    {/* rewind_colon();*/ ;}
    break;

  case 419:

/* Line 1464 of yacc.c  */
#line 1082 "cparser.y"
    { /*unmark();*/ ;}
    break;

  case 427:

/* Line 1464 of yacc.c  */
#line 1089 "cparser.y"
    { /*UNBANG("Bad member_specification.opt."); */;}
    break;

  case 430:

/* Line 1464 of yacc.c  */
#line 1093 "cparser.y"
    { /*UNBANG("Bad member-declaration."); */;}
    break;

  case 431:

/* Line 1464 of yacc.c  */
#line 1094 "cparser.y"
    {/* end_search(); */;}
    break;

  case 471:

/* Line 1464 of yacc.c  */
#line 1159 "cparser.y"
    {/* UNBANG("Bad ctor-initializer."); */;}
    break;

  case 475:

/* Line 1464 of yacc.c  */
#line 1163 "cparser.y"
    {/* UNBANG("Bad mem-initializer.");*/ ;}
    break;

  case 529:

/* Line 1464 of yacc.c  */
#line 1238 "cparser.y"
    {/* UNBANG("Bad template-parameter."); */;}
    break;

  case 553:

/* Line 1464 of yacc.c  */
#line 1286 "cparser.y"
    {/* yyerrok; yyclearin; advance_search(); */;}
    break;

  case 554:

/* Line 1464 of yacc.c  */
#line 1287 "cparser.y"
    {/* suppress_parse_error = 1; */;}
    break;

  case 555:

/* Line 1464 of yacc.c  */
#line 1288 "cparser.y"
    {/* mark(); */;}
    break;

  case 556:

/* Line 1464 of yacc.c  */
#line 1289 "cparser.y"
    {/* nest(); */;}
    break;

  case 557:

/* Line 1464 of yacc.c  */
#line 1290 "cparser.y"
    {/* start_search(false); */;}
    break;

  case 558:

/* Line 1464 of yacc.c  */
#line 1291 "cparser.y"
    {/* start_search(true); */;}
    break;



/* Line 1464 of yacc.c  */
#line 4669 "cparser.tab.c"
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
#line 1294 "cparser.y"


struct TreeNode * alacnary(int symbol, int prodRule, int children,...){
	struct TreeNode * nd;
	nd =  treenode(symbol);
	nd->u.nt.rule = prodRule;
	int c = 0;
	va_list mylist;
	va_start(mylist, children);
	while(c < children){
		nd->u.nt.child[c] = va_arg(mylist, struct node *);
		c++;
	}
	va_end(mylist);
	return nd;
}
