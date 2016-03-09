
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

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
#line 1 "parser.y"

    #include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <stdbool.h>
	#define YYSTYPE char*
    int yylex(void);
    void yyerror(char *);
	extern FILE *yyin, *yyout;
	extern char* yytext;
	bool mudar = false;
	


/* Line 189 of yacc.c  */
#line 88 "y.tab.c"

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
     WS = 258,
     QUEBRALINHA = 259,
     ABRECHAVE = 260,
     FECHACHAVE = 261,
     ABRECOLCHETE = 262,
     FECHACOLCHETE = 263,
     ABREPARENTESE = 264,
     FECHAPARENTESE = 265,
     PORCENTAGEM = 266,
     CONTRABARRA = 267,
     ASPAS = 268,
     UNDERLINE = 269,
     PONTO = 270,
     DOISPONTOS = 271,
     ASPASIMPLES = 272,
     CIFRAO = 273,
     ECOMERCIAL = 274,
     INTERROGACAO = 275,
     EXCLAMACAO = 276,
     SQRT = 277,
     STRCAT = 278,
     POW = 279,
     TOUPPER = 280,
     AND = 281,
     OR = 282,
     SOMA = 283,
     DIGITO = 284,
     NUMINT = 285,
     NUMREAL = 286,
     IF = 287,
     ELSE = 288,
     DO = 289,
     WHILE = 290,
     FOR = 291,
     RETURN = 292,
     INT = 293,
     FLOAT = 294,
     CHAR = 295,
     BOOL = 296,
     TRUE = 297,
     FALSE = 298,
     VOID = 299,
     SWITCH = 300,
     CASE = 301,
     DEFAULT = 302,
     BREAK = 303,
     MAIN = 304,
     PRINTF = 305,
     SCANF = 306,
     F = 307,
     C = 308,
     I = 309,
     ID = 310,
     MULT = 311,
     RELACIONAL = 312,
     ATRIBUICAO = 313,
     COMENTARIO = 314,
     VIRGULA = 315,
     PONTOEVIRGULA = 316,
     OTHER = 317
   };
#endif
/* Tokens.  */
#define WS 258
#define QUEBRALINHA 259
#define ABRECHAVE 260
#define FECHACHAVE 261
#define ABRECOLCHETE 262
#define FECHACOLCHETE 263
#define ABREPARENTESE 264
#define FECHAPARENTESE 265
#define PORCENTAGEM 266
#define CONTRABARRA 267
#define ASPAS 268
#define UNDERLINE 269
#define PONTO 270
#define DOISPONTOS 271
#define ASPASIMPLES 272
#define CIFRAO 273
#define ECOMERCIAL 274
#define INTERROGACAO 275
#define EXCLAMACAO 276
#define SQRT 277
#define STRCAT 278
#define POW 279
#define TOUPPER 280
#define AND 281
#define OR 282
#define SOMA 283
#define DIGITO 284
#define NUMINT 285
#define NUMREAL 286
#define IF 287
#define ELSE 288
#define DO 289
#define WHILE 290
#define FOR 291
#define RETURN 292
#define INT 293
#define FLOAT 294
#define CHAR 295
#define BOOL 296
#define TRUE 297
#define FALSE 298
#define VOID 299
#define SWITCH 300
#define CASE 301
#define DEFAULT 302
#define BREAK 303
#define MAIN 304
#define PRINTF 305
#define SCANF 306
#define F 307
#define C 308
#define I 309
#define ID 310
#define MULT 311
#define RELACIONAL 312
#define ATRIBUICAO 313
#define COMENTARIO 314
#define VIRGULA 315
#define PONTOEVIRGULA 316
#define OTHER 317




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 254 "y.tab.c"

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
# if YYENABLE_NLS
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
#define YYFINAL  71
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   365

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  8
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNRULES -- Number of states.  */
#define YYNSTATES  309

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   317

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
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    10,    12,    14,    16,    18,
      20,    22,    24,    26,    28,    30,    32,    34,    36,    38,
      40,    42,    44,    46,    48,    50,    52,    54,    56,    58,
      60,    62,    64,    66,    68,    70,    72,    74,    76,    78,
      80,    82,    84,    86,    88,    90,    92,    94,    96,    98,
     100,   102,   104,   106,   108,   110,   112,   114,   116,   118,
     120,   122,   124,   126,   128,   130,   132,   144,   156,   174,
     193,   211,   230,   249,   262,   281,   302,   324,   346,   366,
     382,   384,   394,   404,   414,   427,   440,   453,   465,   477,
     489,   504,   519,   534,   547,   565,   582,   584
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      64,     0,    -1,    64,    65,    -1,    65,    -1,     3,    -1,
       4,    -1,    55,    -1,    69,    -1,     5,    -1,     6,    -1,
       7,    -1,     8,    -1,     9,    -1,    10,    -1,    11,    -1,
      12,    -1,    13,    -1,    14,    -1,    15,    -1,    16,    -1,
      17,    -1,    18,    -1,    19,    -1,    20,    -1,    21,    -1,
      22,    -1,    23,    -1,    24,    -1,    25,    -1,    26,    -1,
      27,    -1,    28,    -1,    70,    -1,    30,    -1,    67,    -1,
      31,    -1,    32,    -1,    33,    -1,    34,    -1,    35,    -1,
      66,    -1,    37,    -1,    38,    -1,    39,    -1,    40,    -1,
      41,    -1,    42,    -1,    43,    -1,    44,    -1,    45,    -1,
      46,    -1,    47,    -1,    48,    -1,    49,    -1,    50,    -1,
      68,    -1,    52,    -1,    53,    -1,    54,    -1,    56,    -1,
      57,    -1,    58,    -1,    59,    -1,    60,    -1,    61,    -1,
      62,    -1,    36,     9,    69,    58,    67,    61,    69,    61,
      67,    10,     5,    -1,    36,     9,    69,    58,    67,    61,
      67,    61,    67,    10,     5,    -1,    36,     3,     9,    69,
      58,    67,     3,    61,     3,    69,     3,    61,     3,    67,
      10,     3,     5,    -1,    36,     3,     9,    69,    58,    67,
       3,    61,     3,    69,    67,     3,    61,     3,    67,    10,
       3,     5,    -1,    36,     3,     9,    69,    58,    67,     3,
      61,     3,    67,     3,    61,     3,    67,    10,     3,     5,
      -1,    36,     3,     9,     3,    69,    58,    67,     3,    61,
       3,    69,     3,    61,     3,    67,    10,     3,     5,    -1,
      36,     3,     9,     3,    69,    58,    67,     3,    61,     3,
      67,     3,    61,     3,    67,    10,     3,     5,    -1,    36,
       9,    69,    58,    69,    67,    61,    67,    61,    67,    10,
       5,    -1,    36,     3,     9,    69,    58,    69,    67,     3,
      61,     3,    67,     3,    61,     3,    67,    10,     3,     5,
      -1,    36,     3,     9,    69,    58,    69,    70,    69,    67,
       3,    61,     3,    69,     3,    61,     3,    67,    10,     3,
       5,    -1,    36,     3,     9,    69,    58,    69,    70,    69,
      70,    67,     3,    61,     3,    69,     3,    61,     3,    67,
      10,     3,     5,    -1,    36,     3,     9,    69,    58,    67,
       3,    61,     3,    69,     3,    28,     3,    67,     3,    61,
       3,    67,    10,     3,     5,    -1,    36,     3,     9,    69,
      58,    69,    67,     3,    61,     3,    69,    67,     3,    61,
       3,    67,    10,     3,     5,    -1,    36,     3,     9,    69,
      58,    67,     3,    61,     3,    67,     3,    61,     3,    67,
      10,    -1,    30,    -1,    51,     9,    13,    53,    13,    60,
      69,    10,    61,    -1,    51,     9,    13,    52,    13,    60,
      69,    10,    61,    -1,    51,     9,    13,    54,    13,    60,
      69,    10,    61,    -1,    51,     9,    13,    53,    13,    60,
      69,     7,    69,     8,    10,    61,    -1,    51,     9,    13,
      52,    13,    60,    69,     7,    69,     8,    10,    61,    -1,
      51,     9,    13,    54,    13,    60,    69,     7,    69,     8,
      10,    61,    -1,    51,     3,     9,    13,    53,    13,    60,
       3,    69,    10,    61,    -1,    51,     3,     9,    13,    52,
      13,    60,     3,    69,    10,    61,    -1,    51,     3,     9,
      13,    54,    13,    60,     3,    69,    10,    61,    -1,    51,
       3,     9,    13,    53,    13,    60,     3,    69,     7,    69,
       8,    10,    61,    -1,    51,     3,     9,    13,    52,    13,
      60,     3,    69,     7,    69,     8,    10,    61,    -1,    51,
       3,     9,    13,    54,    13,    60,     3,    69,     7,    69,
       8,    10,    61,    -1,    51,     3,     9,    13,     3,    53,
      13,    60,     3,    69,    10,    61,    -1,    51,     3,     9,
      13,     3,    53,    13,    60,     3,    69,     7,    69,    60,
      69,     8,    10,    61,    -1,    51,     3,     9,    13,    52,
       3,    52,    13,    60,     3,    69,    60,     3,    69,    10,
      61,    -1,    55,    -1,    28,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    22,    22,    23,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    92,   100,   108,   116,
     124,   132,   140,   148,   156,   164,   172,   180,   188,   196,
     206,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   228,   232
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "WS", "QUEBRALINHA", "ABRECHAVE",
  "FECHACHAVE", "ABRECOLCHETE", "FECHACOLCHETE", "ABREPARENTESE",
  "FECHAPARENTESE", "PORCENTAGEM", "CONTRABARRA", "ASPAS", "UNDERLINE",
  "PONTO", "DOISPONTOS", "ASPASIMPLES", "CIFRAO", "ECOMERCIAL",
  "INTERROGACAO", "EXCLAMACAO", "SQRT", "STRCAT", "POW", "TOUPPER", "AND",
  "OR", "SOMA", "DIGITO", "NUMINT", "NUMREAL", "IF", "ELSE", "DO", "WHILE",
  "FOR", "RETURN", "INT", "FLOAT", "CHAR", "BOOL", "TRUE", "FALSE", "VOID",
  "SWITCH", "CASE", "DEFAULT", "BREAK", "MAIN", "PRINTF", "SCANF", "F",
  "C", "I", "ID", "MULT", "RELACIONAL", "ATRIBUICAO", "COMENTARIO",
  "VIRGULA", "PONTOEVIRGULA", "OTHER", "$accept", "programs", "program",
  "for", "numint", "scanf", "id", "soma", 0
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
     315,   316,   317
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    64,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      67,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    69,    70
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,    11,    11,    17,    18,
      17,    18,    18,    12,    18,    20,    21,    21,    19,    15,
       1,     9,     9,     9,    12,    12,    12,    11,    11,    11,
      14,    14,    14,    12,    17,    16,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     4,     5,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    33,    35,    36,
      37,    38,    39,     0,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,     0,    56,
      57,    58,     6,    59,    60,    61,    62,    63,    64,    65,
       0,     3,    40,    34,    55,     7,    32,     0,     0,     0,
       0,     1,     2,     0,    96,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    80,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    97,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    82,     0,
      81,     0,    83,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    67,    66,     0,     0,     0,     0,     0,    88,
       0,    87,     0,    89,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,     0,    93,
       0,     0,     0,     0,    85,    84,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    90,    92,     0,     0,    79,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      95,     0,     0,    70,     0,    68,     0,     0,     0,     0,
       0,    94,    72,    71,     0,    69,    74,     0,     0,     0,
       0,    78,     0,     0,     0,    75,     0,    77,    76
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    60,    61,    62,    63,    64,    65,    66
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -97
static const yytype_int16 yypact[] =
{
     279,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,     4,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,     7,   -97,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     219,   -97,   -97,   -97,   -97,   -97,   -97,     2,   -41,     6,
      34,   -97,   -97,    -1,   -97,   -31,    39,    -8,   -41,   -30,
     -25,     9,    43,    46,    51,   -17,   -25,   -97,   -19,    37,
      17,     5,    56,    59,    13,    18,    19,    37,    71,    27,
     -25,    20,    62,    24,    30,    31,    32,   -41,   -41,   -41,
      74,    21,   -97,    81,   -41,    35,    36,    37,    38,    80,
      92,    96,    97,    14,    15,    16,    40,    99,    42,    27,
      37,    37,    44,   101,    47,   -41,   -41,   -41,   -41,    45,
     -41,    49,   -41,    50,   105,   -25,   109,   110,    37,   104,
     111,    37,   -41,   116,    22,    28,    29,   115,   -97,   118,
     -97,   119,   -97,   -25,   121,     1,   -25,    67,   126,   125,
     128,   124,    33,   -41,   -41,    70,   -41,    75,   -41,    76,
     129,   130,   131,   132,   135,    83,   -27,   139,   142,    37,
     144,    87,   -97,   -97,   147,   -41,    94,   100,   149,   -97,
     151,   -97,   153,   -97,   103,   108,   112,   113,   117,   162,
     163,   167,   120,   122,   168,   -41,   169,   -97,   127,   -97,
     173,   170,   172,   175,   -97,   -97,   -97,   174,   176,    37,
      37,    37,   183,   185,   133,   186,   -41,   -41,   -41,   137,
     138,   140,    37,    37,   180,   188,   182,    37,    37,   190,
     141,   193,   192,   195,   -97,   -97,   -97,   196,   197,   200,
     148,   205,   201,   202,    37,   210,   154,   204,   159,   218,
     245,   303,   339,   338,   341,   342,   336,    37,   344,   287,
     -97,   345,   346,   -97,    37,   -97,   347,   348,   351,   349,
      37,   -97,   -97,   -97,   350,   -97,   -97,   352,   353,   354,
     355,   -97,   356,   359,   358,   -97,   360,   -97,   -97
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -97,   -97,   289,   -97,   -80,   -97,   -20,   -96
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      88,   210,    78,   114,   186,    87,    98,    67,   103,   101,
      69,    73,    90,    68,    74,    76,    70,   110,   104,   113,
     115,   138,   140,   142,   139,   141,   143,    80,    86,   174,
      74,    87,   175,   148,   211,   176,   178,   132,   177,   179,
     195,    97,   100,   196,    82,    83,    84,    77,    75,   147,
     149,   150,    81,    79,    74,   112,    94,    87,    85,    95,
      89,    91,    92,    93,    96,   164,    99,    87,   168,   105,
     102,   171,   106,   107,   111,   118,   119,   126,   108,   109,
     116,   117,   127,   183,   128,   187,   188,   123,   124,   125,
     120,   121,   122,   134,   129,   135,   130,   131,   133,   136,
     137,   144,   145,   146,   152,   151,   158,   153,   163,   214,
     160,   162,   166,   167,   169,   154,   155,   156,   157,   173,
     159,   170,   161,   180,   185,   165,   181,   182,   190,   191,
     192,   199,   172,   193,   194,   207,   201,   203,   208,   204,
     205,   206,   212,   184,   209,   213,   189,   215,   216,   244,
     245,   246,   217,   197,   198,   219,   200,   221,   202,   222,
     220,   223,   257,   258,   224,   229,   230,   262,   263,   225,
     231,   234,   236,   226,   227,   218,   238,   242,   228,   243,
     239,   232,   240,   233,   276,   241,   247,   237,   248,   250,
     259,   260,   261,   264,   249,   235,   266,   289,   254,   255,
     267,   256,   265,   271,   294,   268,   269,   270,   273,   272,
     299,   274,   275,   277,   279,   278,   251,   252,   253,    71,
     280,   281,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,   282,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,   283,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,   284,   285,   286,   287,   288,   290,   291,    72,
     292,   293,   295,   296,   297,     0,   302,   301,   304,   298,
     300,   305,   306,   307,   303,   308
};

static const yytype_int16 yycheck[] =
{
      80,    28,     3,    99,     3,    30,    86,     3,     3,    89,
       3,     9,     3,     9,    55,     9,     9,    97,    13,    99,
     100,     7,     7,     7,    10,    10,    10,    58,    58,     7,
      55,    30,    10,   129,    61,     7,     7,   117,    10,    10,
       7,    58,    61,    10,    52,    53,    54,    13,    68,   129,
     130,   131,    13,    73,    55,    28,    13,    30,    78,    13,
      80,    52,    53,    54,    13,   145,    86,    30,   148,    13,
      53,   151,    13,    60,     3,    13,    52,     3,    60,    60,
     100,    61,    61,   163,     3,   165,   166,   107,   108,   109,
      60,    60,    60,    13,   114,     3,    61,    61,    60,     3,
       3,    61,     3,    61,     3,    61,    61,    60,     3,   189,
      61,    61,     3,     3,    10,   135,   136,   137,   138,     3,
     140,    10,   142,     8,     3,   145,     8,     8,    61,     3,
       5,    61,   152,     5,    10,     3,    61,    61,     3,    10,
      10,    10,     3,   163,    61,     3,   166,     3,    61,   229,
     230,   231,     5,   173,   174,    61,   176,     8,   178,     8,
      60,     8,   242,   243,    61,     3,     3,   247,   248,    61,
       3,     3,     3,    61,    61,   195,     3,     3,    61,     3,
      10,    61,    10,    61,   264,    10,     3,    60,     3,     3,
      10,     3,    10,     3,    61,   215,     3,   277,    61,    61,
       8,    61,    61,     3,   284,    10,    10,    10,     3,    61,
     290,    10,    10,     3,    10,    61,   236,   237,   238,     0,
      61,     3,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     3,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     5,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,     3,     5,     3,     3,    10,     3,    61,    60,
       5,     5,     5,     5,     3,    -1,     3,     5,     3,    10,
      10,     5,     3,     5,    10,     5
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      64,    65,    66,    67,    68,    69,    70,     3,     9,     3,
       9,     0,    65,     9,    55,    69,     9,    13,     3,    69,
      58,    13,    52,    53,    54,    69,    58,    30,    67,    69,
       3,    52,    53,    54,    13,    13,    13,    58,    67,    69,
      61,    67,    53,     3,    13,    13,    13,    60,    60,    60,
      67,     3,    28,    67,    70,    67,    69,    61,    13,    52,
      60,    60,    60,    69,    69,    69,     3,    61,     3,    69,
      61,    61,    67,    60,    13,     3,     3,     3,     7,    10,
       7,    10,     7,    10,    61,     3,    61,    67,    70,    67,
      67,    61,     3,    60,    69,    69,    69,    69,    61,    69,
      61,    69,    61,     3,    67,    69,     3,     3,    67,    10,
      10,    67,    69,     3,     7,    10,     7,    10,     7,    10,
       8,     8,     8,    67,    69,     3,     3,    67,    67,    69,
      61,     3,     5,     5,    10,     7,    10,    69,    69,    61,
      69,    61,    69,    61,    10,    10,    10,     3,     3,    61,
      28,    61,     3,     3,    67,     3,    61,     5,    69,    61,
      60,     8,     8,     8,    61,    61,    61,    61,    61,     3,
       3,     3,    61,    61,     3,    69,     3,    60,     3,    10,
      10,    10,     3,     3,    67,    67,    67,     3,     3,    61,
       3,    69,    69,    69,    61,    61,    61,    67,    67,    10,
       3,    10,    67,    67,     3,    61,     3,     8,    10,    10,
      10,     3,    61,     3,    10,    10,    67,     3,    61,    10,
      61,     3,     3,     5,     3,     5,     3,     3,    10,    67,
       3,    61,     5,     5,    67,     5,     5,     3,    10,    67,
      10,     5,     3,    10,     3,     5,     3,     5,     5
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
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

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
# if YYLTYPE_IS_TRIVIAL
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
        case 4:

/* Line 1455 of yacc.c  */
#line 27 "parser.y"
    {fprintf(yyout," ");}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 28 "parser.y"
    {fprintf(yyout,"\n");}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 29 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 31 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 32 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 33 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 34 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 35 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 36 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 37 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 38 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 39 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 40 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 41 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 42 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 43 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 44 "parser.y"
    {fprintf(yyout,"$");}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 45 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 46 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 47 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 48 "parser.y"
    {fprintf(yyout,"sqrt");}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 49 "parser.y"
    {fprintf(yyout,"strcat");}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 50 "parser.y"
    {fprintf(yyout,"pow");}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 51 "parser.y"
    {fprintf(yyout,"toupper");}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 52 "parser.y"
    {fprintf(yyout,"&&");}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 53 "parser.y"
    {fprintf(yyout,"||");}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 54 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 56 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 58 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 59 "parser.y"
    {fprintf(yyout,"if");}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 60 "parser.y"
    {fprintf(yyout,"else");}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 61 "parser.y"
    {fprintf(yyout,"do");}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 62 "parser.y"
    {fprintf(yyout,"while");}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 64 "parser.y"
    {fprintf(yyout,"return");}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 65 "parser.y"
    {fprintf(yyout,"int");}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 66 "parser.y"
    {fprintf(yyout,"float");}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 67 "parser.y"
    {fprintf(yyout,"char");}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 68 "parser.y"
    {fprintf(yyout,"bool");}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 69 "parser.y"
    {fprintf(yyout,"true");}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 70 "parser.y"
    {fprintf(yyout,"false");}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 71 "parser.y"
    {fprintf(yyout,"void");}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 72 "parser.y"
    {fprintf(yyout,"switch");}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 73 "parser.y"
    {fprintf(yyout,"case");}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 74 "parser.y"
    {fprintf(yyout,"default");}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 75 "parser.y"
    {fprintf(yyout,"break");}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 76 "parser.y"
    {fprintf(yyout,"main");}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 77 "parser.y"
    {fprintf(yyout,"printf");}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 79 "parser.y"
    {fprintf(yyout,"%%f");}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 80 "parser.y"
    {fprintf(yyout,"%%c");}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 81 "parser.y"
    {fprintf(yyout,"%%d");}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 82 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 83 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 84 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 85 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 86 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 87 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 88 "parser.y"
    {fprintf(yyout,"Invalido. Input -> \"%s\"",yytext); }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 92 "parser.y"
    {
			int temp = atoi((yyvsp[(9) - (11)]));
			if(temp >= 0 ) 
				fprintf(yyout,"for(%s = %s; %s <= %s; %s++){",(yyvsp[(3) - (11)]),(yyvsp[(5) - (11)]),(yyvsp[(3) - (11)]),(yyvsp[(7) - (11)]),(yyvsp[(3) - (11)]));	
			else 
				fprintf(yyout,"for(%s = %s; %s >= %s; %s--){",(yyvsp[(3) - (11)]),(yyvsp[(5) - (11)]),(yyvsp[(3) - (11)]),(yyvsp[(7) - (11)]),(yyvsp[(3) - (11)]));
			}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 100 "parser.y"
    {
			int temp = atoi((yyvsp[(9) - (11)]));
			if(temp >= 0 ) 
				fprintf(yyout,"for(%s = %s; %s <= %s; %s++){",(yyvsp[(3) - (11)]),(yyvsp[(5) - (11)]),(yyvsp[(3) - (11)]),(yyvsp[(7) - (11)]),(yyvsp[(3) - (11)]));	
			else 
				fprintf(yyout,"for(%s = %s; %s >= %s; %s--){",(yyvsp[(3) - (11)]),(yyvsp[(5) - (11)]),(yyvsp[(3) - (11)]),(yyvsp[(7) - (11)]),(yyvsp[(3) - (11)]));
			}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 108 "parser.y"
    {
			int temp = atoi((yyvsp[(14) - (17)]));
			if(temp >= 0 ) 
				fprintf(yyout,"for(%s = %s; %s <= %s; %s++){",(yyvsp[(4) - (17)]),(yyvsp[(6) - (17)]),(yyvsp[(4) - (17)]),(yyvsp[(10) - (17)]),(yyvsp[(4) - (17)]));	
			else 
				fprintf(yyout,"for(%s = %s; %s >= %s; %s--){",(yyvsp[(4) - (17)]),(yyvsp[(6) - (17)]),(yyvsp[(4) - (17)]),(yyvsp[(10) - (17)]),(yyvsp[(4) - (17)]));
			}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 116 "parser.y"
    {
			int temp = atoi((yyvsp[(15) - (18)]));
			if(temp >= 0 ) 
				fprintf(yyout,"for(%s = %s; %s <= %s%s; %s++){",(yyvsp[(4) - (18)]),(yyvsp[(6) - (18)]),(yyvsp[(4) - (18)]),(yyvsp[(10) - (18)]),(yyvsp[(11) - (18)]),(yyvsp[(4) - (18)]));	
			else 
				fprintf(yyout,"for(%s = %s; %s >= %s%s; %s--){",(yyvsp[(4) - (18)]),(yyvsp[(6) - (18)]),(yyvsp[(4) - (18)]),(yyvsp[(10) - (18)]),(yyvsp[(11) - (18)]),(yyvsp[(4) - (18)]));
			}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 124 "parser.y"
    {
			int temp = atoi((yyvsp[(14) - (17)]));
			if(temp >= 0 ) 
				fprintf(yyout,"for(%s = %s; %s <= %s; %s++){",(yyvsp[(4) - (17)]),(yyvsp[(6) - (17)]),(yyvsp[(4) - (17)]),(yyvsp[(10) - (17)]),(yyvsp[(4) - (17)]));	
			else 
				fprintf(yyout,"for(%s = %s; %s >= %s; %s--){",(yyvsp[(4) - (17)]),(yyvsp[(6) - (17)]),(yyvsp[(4) - (17)]),(yyvsp[(10) - (17)]),(yyvsp[(4) - (17)]));
			}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 132 "parser.y"
    {
			int temp = atoi((yyvsp[(15) - (18)]));
			if(temp >= 0 ) 
				fprintf(yyout,"for(%s = %s; %s <= %s; %s++){",(yyvsp[(5) - (18)]),(yyvsp[(7) - (18)]),(yyvsp[(5) - (18)]),(yyvsp[(11) - (18)]),(yyvsp[(5) - (18)]));	
			else 
				fprintf(yyout,"for(%s = %s; %s >= %s; %s--){",(yyvsp[(5) - (18)]),(yyvsp[(7) - (18)]),(yyvsp[(5) - (18)]),(yyvsp[(11) - (18)]),(yyvsp[(5) - (18)]));
			}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 140 "parser.y"
    {
			int temp = atoi((yyvsp[(15) - (18)]));
			if(temp >= 0 ) 
				fprintf(yyout,"for(%s = %s; %s <= %s; %s++){",(yyvsp[(5) - (18)]),(yyvsp[(7) - (18)]),(yyvsp[(5) - (18)]),(yyvsp[(11) - (18)]),(yyvsp[(5) - (18)]));	
			else 
				fprintf(yyout,"for(%s = %s; %s >= %s; %s--){",(yyvsp[(5) - (18)]),(yyvsp[(7) - (18)]),(yyvsp[(5) - (18)]),(yyvsp[(11) - (18)]),(yyvsp[(5) - (18)]));
			}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 148 "parser.y"
    {
			int temp = atoi((yyvsp[(10) - (12)]));
			if(temp >= 0 ) 
				fprintf(yyout,"for(%s = %s%s; %s <= %s; %s++){",(yyvsp[(3) - (12)]),(yyvsp[(5) - (12)]),(yyvsp[(6) - (12)]),(yyvsp[(3) - (12)]),(yyvsp[(8) - (12)]),(yyvsp[(3) - (12)]));	
			else 
				fprintf(yyout,"for(%s = %s%s; %s >= %s; %s--){",(yyvsp[(3) - (12)]),(yyvsp[(5) - (12)]),(yyvsp[(6) - (12)]),(yyvsp[(3) - (12)]),(yyvsp[(8) - (12)]),(yyvsp[(3) - (12)]));
			}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 156 "parser.y"
    {
			int temp = atoi((yyvsp[(15) - (18)]));
			if(temp >= 0 ) 
				fprintf(yyout,"for(%s = %s%s; %s <= %s; %s++){",(yyvsp[(4) - (18)]),(yyvsp[(6) - (18)]),(yyvsp[(7) - (18)]),(yyvsp[(4) - (18)]),(yyvsp[(11) - (18)]),(yyvsp[(4) - (18)]));	
			else 
				fprintf(yyout,"for(%s = %s%s; %s >= %s; %s--){",(yyvsp[(4) - (18)]),(yyvsp[(6) - (18)]),(yyvsp[(7) - (18)]),(yyvsp[(4) - (18)]),(yyvsp[(11) - (18)]),(yyvsp[(4) - (18)]));
			}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 164 "parser.y"
    { 
			int temp = atoi((yyvsp[(17) - (20)]));
			if(temp >= 0 ) 
				fprintf(yyout, "for(%s = %s - %s%s; %s <= %s; %s++){",(yyvsp[(4) - (20)]),(yyvsp[(6) - (20)]),(yyvsp[(8) - (20)]),(yyvsp[(9) - (20)]),(yyvsp[(4) - (20)]),(yyvsp[(6) - (20)]),(yyvsp[(4) - (20)]));	
			else 
				fprintf(yyout, "for(%s = %s - %s%s; %s >= %s; %s--){",(yyvsp[(4) - (20)]),(yyvsp[(6) - (20)]),(yyvsp[(8) - (20)]),(yyvsp[(9) - (20)]),(yyvsp[(4) - (20)]),(yyvsp[(6) - (20)]),(yyvsp[(4) - (20)]));
			}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 172 "parser.y"
    { 																											
			int temp = atoi((yyvsp[(18) - (21)]));
			if(temp >= 0 ) 
				fprintf(yyout, "for(%s = %s - %s%s%s; %s <= %s; %s++){",(yyvsp[(4) - (21)]),(yyvsp[(6) - (21)]),(yyvsp[(8) - (21)]),(yyvsp[(9) - (21)]),(yyvsp[(10) - (21)]),(yyvsp[(4) - (21)]),(yyvsp[(6) - (21)]),(yyvsp[(4) - (21)]));	
			else 
				fprintf(yyout, "for(%s = %s - %s%s%s; %s >= %s; %s--){",(yyvsp[(4) - (21)]),(yyvsp[(6) - (21)]),(yyvsp[(8) - (21)]),(yyvsp[(9) - (21)]),(yyvsp[(10) - (21)]),(yyvsp[(4) - (21)]),(yyvsp[(6) - (21)]),(yyvsp[(4) - (21)]));
			}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 180 "parser.y"
    { 
			int temp = atoi((yyvsp[(18) - (21)]));
			if(temp >= 0 ) 
				fprintf(yyout,"for(%s=%s; %s <= %s - %s; %s++){",(yyvsp[(4) - (21)]),(yyvsp[(6) - (21)]),(yyvsp[(4) - (21)]),(yyvsp[(10) - (21)]),(yyvsp[(14) - (21)]),(yyvsp[(4) - (21)]));	
			else 
				fprintf(yyout,"for(%s=%s; %s >= %s - %s; %s--){",(yyvsp[(4) - (21)]),(yyvsp[(6) - (21)]),(yyvsp[(4) - (21)]),(yyvsp[(10) - (21)]),(yyvsp[(14) - (21)]),(yyvsp[(4) - (21)]));
			}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 188 "parser.y"
    { 
			int temp = atoi((yyvsp[(16) - (19)]));
			if(temp >= 0 ) 
				fprintf(yyout,"for(%s = %s%s; %s <= %s%s; %s++){",(yyvsp[(4) - (19)]),(yyvsp[(6) - (19)]),(yyvsp[(7) - (19)]),(yyvsp[(4) - (19)]),(yyvsp[(11) - (19)]),(yyvsp[(12) - (19)]),(yyvsp[(4) - (19)]));	
			else 
				fprintf(yyout,"for(%s = %s%s; %s >= %s%s; %s--){",(yyvsp[(4) - (19)]),(yyvsp[(6) - (19)]),(yyvsp[(7) - (19)]),(yyvsp[(4) - (19)]),(yyvsp[(11) - (19)]),(yyvsp[(12) - (19)]),(yyvsp[(4) - (19)]));
			}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 196 "parser.y"
    {
			int temp = atoi((yyvsp[(14) - (15)]));
			if(temp >= 0 ) 
				fprintf(yyout,"for(%s=%s; %s <= %s; %s++)",(yyvsp[(4) - (15)]),(yyvsp[(6) - (15)]),(yyvsp[(4) - (15)]),(yyvsp[(10) - (15)]),(yyvsp[(4) - (15)]));	
			else 
				fprintf(yyout,"for(%s=%s; %s >= %s; %s--)",(yyvsp[(4) - (15)]),(yyvsp[(6) - (15)]),(yyvsp[(4) - (15)]),(yyvsp[(10) - (15)]),(yyvsp[(4) - (15)]));
			}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 206 "parser.y"
    {(yyval) = strdup(yytext);
		}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 211 "parser.y"
    {fprintf(yyout,"scanf(\"%%c\",&%s);",(yyvsp[(7) - (9)]));}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 212 "parser.y"
    {fprintf(yyout,"scanf(\"%%f\",&%s);",(yyvsp[(7) - (9)]));}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 213 "parser.y"
    {fprintf(yyout,"scanf(\"%%d\",&%s);",(yyvsp[(7) - (9)]));}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 214 "parser.y"
    {fprintf(yyout,"scanf(\"%%c\",&%s[%s]);",(yyvsp[(7) - (12)]),(yyvsp[(9) - (12)]));}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 215 "parser.y"
    {fprintf(yyout,"scanf(\"%%f\",&%s[%s]);",(yyvsp[(7) - (12)]),(yyvsp[(9) - (12)]));}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 216 "parser.y"
    {fprintf(yyout,"scanf(\"%%d\",&%s[%s]);",(yyvsp[(7) - (12)]),(yyvsp[(9) - (12)]));}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 217 "parser.y"
    {fprintf(yyout,"scanf(\"%%c\",&%s);",(yyvsp[(9) - (11)]));}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 218 "parser.y"
    {fprintf(yyout,"scanf(\"%%f\",&%s);",(yyvsp[(9) - (11)]));}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 219 "parser.y"
    {fprintf(yyout,"scanf(\"%%d\",&%s);",(yyvsp[(9) - (11)]));}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 220 "parser.y"
    {fprintf(yyout,"scanf(\"%%c\",&%s[%s]);",(yyvsp[(9) - (14)]),(yyvsp[(11) - (14)]));}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 221 "parser.y"
    {fprintf(yyout,"scanf(\"%%f\",&%s[%s]);",(yyvsp[(9) - (14)]),(yyvsp[(11) - (14)]));}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 222 "parser.y"
    {fprintf(yyout,"scanf(\"%%d\",&%s[%s]);",(yyvsp[(9) - (14)]),(yyvsp[(11) - (14)]));}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 223 "parser.y"
    {fprintf(yyout,"scanf(\"%%c\",&%s);",(yyvsp[(10) - (12)]));}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 224 "parser.y"
    {fprintf(yyout,"scanf(\" %%c\",&%s[%s,%s]);",(yyvsp[(10) - (17)]),(yyvsp[(12) - (17)]),(yyvsp[(14) - (17)]));}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 225 "parser.y"
    {fprintf(yyout,"scanf(\"%%f %%f\", &%s, &%s);",(yyvsp[(11) - (16)]),(yyvsp[(14) - (16)]));}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 228 "parser.y"
    {(yyval) = strdup(yytext);}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 232 "parser.y"
    {(yyval) = strdup(yytext);}
    break;



/* Line 1455 of yacc.c  */
#line 2416 "y.tab.c"
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



/* Line 1675 of yacc.c  */
#line 235 "parser.y"


void yyerror(char *s) {
    fprintf(stderr, "%s\n", s);
}

int main(int argc, char *argv[]){
	yyout = fopen(argv[2],"w");
	fprintf(yyout,"#include <stdio.h>\n");
	fprintf(yyout,"#include <stdlib.h>\n");
	fprintf(yyout,"#include <stdbool.h>\n");
	fprintf(yyout,"#include <math.h>\n");
	fprintf(yyout,"\n");
	yyin = fopen(argv[1], "r");
	yyparse();
    return 0;
}
