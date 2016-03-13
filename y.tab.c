
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
    #include "replace.h"
	#define YYSTYPE char*
    int yylex(void);
    void yyerror(char *);
	extern FILE *yyin, *yyout;
	extern char* yytext;
	


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
     ABRECHAVE = 258,
     FECHACHAVE = 259,
     ABRECOLCHETE = 260,
     FECHACOLCHETE = 261,
     ABREPARENTESE = 262,
     FECHAPARENTESE = 263,
     PORCENTAGEM = 264,
     CONTRABARRA = 265,
     ASPAS = 266,
     UNDERLINE = 267,
     PONTO = 268,
     DOISPONTOS = 269,
     ASPASIMPLES = 270,
     CIFRAO = 271,
     ECOMERCIAL = 272,
     INTERROGACAO = 273,
     EXCLAMACAO = 274,
     RAIZQUADRADA = 275,
     CONCATENA = 276,
     POTENCIA = 277,
     MAIUSCULA = 278,
     E = 279,
     OU = 280,
     SOMASUB = 281,
     DIGITO = 282,
     NUMINT = 283,
     NUMREAL = 284,
     SE = 285,
     SENAO = 286,
     FACA = 287,
     ENQUANTO = 288,
     PARA = 289,
     RETORNE = 290,
     INTEIRO = 291,
     REAL = 292,
     TEXTO = 293,
     LOGICO = 294,
     VERDADEIRO = 295,
     FALSO = 296,
     SEMRETORNO = 297,
     ESCOLHA = 298,
     CASO = 299,
     PADRAO = 300,
     INTERROMPA = 301,
     PRINCIPAL = 302,
     LEIA = 303,
     ESCREVA = 304,
     PORREAL = 305,
     PORTEXTO = 306,
     PORINTEIRO = 307,
     ID = 308,
     MULTDIV = 309,
     RELACIONAL = 310,
     ATRIBUICAO = 311,
     COMENTARIO = 312,
     VIRGULA = 313,
     PONTOEVIRGULA = 314,
     STRING = 315
   };
#endif
/* Tokens.  */
#define ABRECHAVE 258
#define FECHACHAVE 259
#define ABRECOLCHETE 260
#define FECHACOLCHETE 261
#define ABREPARENTESE 262
#define FECHAPARENTESE 263
#define PORCENTAGEM 264
#define CONTRABARRA 265
#define ASPAS 266
#define UNDERLINE 267
#define PONTO 268
#define DOISPONTOS 269
#define ASPASIMPLES 270
#define CIFRAO 271
#define ECOMERCIAL 272
#define INTERROGACAO 273
#define EXCLAMACAO 274
#define RAIZQUADRADA 275
#define CONCATENA 276
#define POTENCIA 277
#define MAIUSCULA 278
#define E 279
#define OU 280
#define SOMASUB 281
#define DIGITO 282
#define NUMINT 283
#define NUMREAL 284
#define SE 285
#define SENAO 286
#define FACA 287
#define ENQUANTO 288
#define PARA 289
#define RETORNE 290
#define INTEIRO 291
#define REAL 292
#define TEXTO 293
#define LOGICO 294
#define VERDADEIRO 295
#define FALSO 296
#define SEMRETORNO 297
#define ESCOLHA 298
#define CASO 299
#define PADRAO 300
#define INTERROMPA 301
#define PRINCIPAL 302
#define LEIA 303
#define ESCREVA 304
#define PORREAL 305
#define PORTEXTO 306
#define PORINTEIRO 307
#define ID 308
#define MULTDIV 309
#define RELACIONAL 310
#define ATRIBUICAO 311
#define COMENTARIO 312
#define VIRGULA 313
#define PONTOEVIRGULA 314
#define STRING 315




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 250 "y.tab.c"

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
#define YYFINAL  80
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   427

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  117
/* YYNRULES -- Number of states.  */
#define YYNSTATES  278

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   315

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
      55,    56,    57,    58,    59,    60
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
     120,   122,   124,   126,   128,   130,   132,   134,   136,   138,
     140,   142,   144,   146,   148,   150,   152,   154,   165,   177,
     190,   202,   216,   220,   226,   236,   243,   252,   260,   274,
     285,   295,   297,   301,   306,   312,   319,   326,   340,   352,
     368,   387,   401,   411,   423,   436,   451,   461,   465,   468,
     471,   476,   481,   488,   497,   501,   511,   518
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      62,     0,    -1,    62,    63,    -1,    63,    -1,     3,    -1,
       4,    -1,     5,    -1,     6,    -1,     7,    -1,     8,    -1,
       9,    -1,    10,    -1,    11,    -1,    12,    -1,    13,    -1,
      14,    -1,    15,    -1,    16,    -1,    17,    -1,    18,    -1,
      19,    -1,    60,    -1,    20,    -1,    21,    -1,    22,    -1,
      23,    -1,    24,    -1,    25,    -1,    26,    -1,    28,    -1,
      29,    -1,    76,    -1,    30,    -1,    31,    -1,    32,    -1,
      33,    -1,    71,    -1,    34,    -1,    35,    -1,    36,    -1,
      37,    -1,    38,    -1,    72,    -1,    39,    -1,    40,    -1,
      41,    -1,    42,    -1,    43,    -1,    77,    -1,    44,    -1,
      45,    -1,    46,    -1,    47,    -1,    48,    -1,    73,    -1,
      74,    -1,    49,    -1,    50,    -1,    51,    -1,    52,    -1,
      53,    -1,    54,    -1,    55,    -1,    70,    -1,    56,    -1,
      57,    -1,    58,    -1,    59,    -1,    53,    -1,    26,    -1,
      28,    -1,    60,    -1,    64,    -1,    66,    -1,     7,    -1,
       8,    -1,    55,    -1,    34,    69,    64,    56,    68,    59,
      68,    59,    68,    69,    -1,    34,    69,    64,    56,    68,
      68,    59,    68,    59,    68,    69,    -1,    34,    69,    64,
      56,    68,    59,    64,    65,    68,    59,    68,    69,    -1,
      34,    69,    64,    56,    68,    59,    64,    68,    59,    68,
      69,    -1,    34,    69,    64,    56,    64,    65,    64,    66,
      59,    68,    59,    68,    69,    -1,    38,    64,    59,    -1,
      38,    64,    58,    64,    59,    -1,    38,    64,     5,    68,
       6,     5,    68,     6,    59,    -1,    38,    64,     5,    68,
       6,    59,    -1,    38,    64,    58,    37,    64,    58,    36,
      64,    -1,    48,     7,    67,    58,    64,     8,    59,    -1,
      48,     7,    67,    58,    64,     5,    64,     6,     5,    64,
       6,     8,    59,    -1,    48,     7,    67,    58,    64,     5,
      64,     6,     8,    59,    -1,    48,     7,    67,    58,    64,
      58,    64,     8,    59,    -1,    75,    -1,    49,     7,    67,
      -1,    30,    69,    64,    69,    -1,    30,    69,    19,    64,
      69,    -1,    30,    69,    64,    70,    66,    69,    -1,    30,
      69,    64,    70,    64,    69,    -1,    30,    69,    69,    64,
       5,    64,     6,     9,    66,    69,    70,    68,    69,    -1,
      30,    69,    23,    69,    64,    69,    70,    15,    64,    15,
      69,    -1,    30,    69,    64,    70,    69,    64,     5,    68,
       6,    65,    15,    66,    15,    69,    69,    -1,    30,    69,
      64,    70,    67,    25,    64,    70,    67,    25,    64,    70,
      67,    25,    64,    70,    67,    69,    -1,    30,    69,    64,
       5,    64,     6,    70,    64,     5,    64,    68,     6,    69,
      -1,    30,    69,    64,     5,    64,     6,    70,    64,    69,
      -1,    30,    69,    64,     9,    64,     5,    64,     6,    70,
      68,    69,    -1,    30,    69,    64,     5,    64,     6,    70,
      64,     5,    64,     6,    69,    -1,    30,    69,    64,     5,
      64,     6,    70,    64,     5,    64,    65,    64,     6,    69,
      -1,    30,    69,    64,    70,    64,     5,    64,     6,    69,
      -1,    44,    78,    79,    -1,    44,    78,    -1,    66,    14,
      -1,    15,    65,    15,    14,    -1,    15,    54,    15,    14,
      -1,    66,    58,    66,    58,    66,    14,    -1,    66,    58,
      66,    58,    66,    58,    66,    14,    -1,    75,     8,    59,
      -1,    64,     7,    64,    58,    64,    58,    64,     8,    59,
      -1,    64,    56,    64,    65,    64,    59,    -1,    64,    56,
      64,    54,    64,    59,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    21,    21,    22,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    45,    46,    47,    48,    49,    50,    51,    53,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    87,    88,    89,    90,    91,    92,    93,    97,   101,
     106,   111,   116,   117,   121,   122,   126,   130,   138,   146,
     154,   162,   175,   179,   181,   184,   186,   194,   203,   212,
     222,   234,   238,   256,   257,   258,   259,   263,   265,   267,
     269,   271,   273,   275,   277,   279,   281,   288,   289,   294,
     295,   296,   297,   298,   303,   304,   306,   307
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ABRECHAVE", "FECHACHAVE",
  "ABRECOLCHETE", "FECHACOLCHETE", "ABREPARENTESE", "FECHAPARENTESE",
  "PORCENTAGEM", "CONTRABARRA", "ASPAS", "UNDERLINE", "PONTO",
  "DOISPONTOS", "ASPASIMPLES", "CIFRAO", "ECOMERCIAL", "INTERROGACAO",
  "EXCLAMACAO", "RAIZQUADRADA", "CONCATENA", "POTENCIA", "MAIUSCULA", "E",
  "OU", "SOMASUB", "DIGITO", "NUMINT", "NUMREAL", "SE", "SENAO", "FACA",
  "ENQUANTO", "PARA", "RETORNE", "INTEIRO", "REAL", "TEXTO", "LOGICO",
  "VERDADEIRO", "FALSO", "SEMRETORNO", "ESCOLHA", "CASO", "PADRAO",
  "INTERROMPA", "PRINCIPAL", "LEIA", "ESCREVA", "PORREAL", "PORTEXTO",
  "PORINTEIRO", "ID", "MULTDIV", "RELACIONAL", "ATRIBUICAO", "COMENTARIO",
  "VIRGULA", "PONTOEVIRGULA", "STRING", "$accept", "programs", "program",
  "id", "somasub", "numint", "string", "expr", "parenteses", "relacional",
  "para", "textostring", "leia", "printf", "escreva", "se", "caso",
  "parametros", "comandos", 0
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
     315
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    62,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    64,    65,
      66,    67,    68,    68,    69,    69,    70,    71,    71,    71,
      71,    71,    72,    72,    72,    72,    72,    73,    73,    73,
      73,    74,    75,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    77,    77,    78,
      78,    78,    78,    78,    79,    79,    79,    79
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
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,    10,    11,    12,
      11,    13,     3,     5,     9,     6,     8,     7,    13,    10,
       9,     1,     3,     4,     5,     6,     6,    13,    11,    15,
      18,    13,     9,    11,    12,    14,     9,     3,     2,     2,
       4,     4,     6,     8,     3,     9,     6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    32,    33,    34,
      35,    37,    38,    39,    40,    41,    43,    44,    45,    46,
      47,    49,    50,    51,    52,    53,    56,    57,    58,    59,
      60,    61,    62,    64,    65,    66,    67,    21,     0,     3,
      63,    36,    42,    54,    55,    91,    31,    48,    74,    75,
       0,     0,    68,     0,     0,    70,     0,   108,     0,     0,
       1,     2,     0,     0,     0,     0,     0,     0,     0,    82,
      69,     0,     0,   109,     0,     0,     0,     0,   107,    71,
       0,    92,     0,     0,     0,     0,    76,    93,     0,     0,
       0,    72,    73,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    94,     0,     0,     0,     0,     0,     0,
       0,     0,    72,     0,     0,     0,    83,   111,   110,     0,
       0,     0,   114,     0,     0,     0,     0,     0,    96,    95,
       0,     0,     0,     0,     0,     0,     0,    85,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    72,     0,     0,     0,     0,   112,
       0,     0,     0,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      86,     0,     0,   117,   116,     0,     0,     0,     0,   102,
       0,   106,     0,     0,     0,     0,     0,     0,     0,     0,
      84,   113,     0,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    77,     0,     0,     0,    89,
      98,     0,     0,     0,   103,     0,     0,     0,     0,     0,
      80,    78,   115,     0,   104,     0,     0,     0,     0,     0,
       0,    79,     0,     0,   101,     0,     0,    97,    81,    88,
     105,     0,     0,     0,    99,     0,     0,   100
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    58,    59,   111,    92,   112,   100,   113,    70,    60,
      61,    62,    63,    64,    65,    66,    67,    77,    98
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -128
static const yytype_int16 yypact[] =
{
     367,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,
    -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,
    -128,  -128,  -128,  -128,  -128,  -128,  -128,    83,  -128,  -128,
    -128,    83,  -128,  -128,  -128,   -15,  -128,  -128,  -128,  -128,
    -128,    67,  -128,  -128,  -128,    36,    41,  -128,  -128,  -128,
    -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,   309,  -128,
    -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,  -128,
      23,   -15,  -128,     1,   -10,  -128,    -7,   -12,    -2,    -2,
    -128,  -128,   -15,    83,    20,   -15,    11,   -18,   -17,  -128,
    -128,    48,    64,  -128,    57,    41,    -6,    94,  -128,  -128,
      50,  -128,    83,   -15,   -15,   -15,  -128,  -128,     4,   106,
     -18,  -128,  -128,   107,   -15,    53,   103,   105,    62,   -15,
     -15,    65,   -15,  -128,    83,   115,   117,    76,    83,    98,
     -15,   -15,    99,   -19,     3,    68,  -128,  -128,  -128,    57,
      69,    -9,  -128,    10,    73,    73,   -15,   -15,  -128,  -128,
     -15,   124,   126,   -15,   -18,    74,   -18,  -128,   100,     7,
     -15,   -15,   -15,   -15,    80,   -15,   125,   -15,   135,   137,
      73,   -18,   139,    57,    52,    91,   -18,   146,   -15,  -128,
      57,    95,    97,   104,   148,  -128,   150,   -15,   102,    73,
      83,    -2,   155,    57,   108,   -18,   109,   -18,   110,   111,
    -128,   151,   -15,  -128,  -128,    18,   113,   149,   -15,  -128,
     -18,  -128,   141,    99,    83,   -18,   116,   -18,    83,   -18,
    -128,  -128,   168,   -15,   118,  -128,    83,    -4,    83,   -15,
     163,    73,   120,   -18,    83,  -128,    83,   121,   175,  -128,
    -128,    83,   -15,   178,  -128,    73,    57,   -18,   -18,    83,
    -128,  -128,  -128,   177,  -128,   182,    83,    -2,   174,    83,
      83,  -128,   131,    83,  -128,   166,    83,  -128,  -128,  -128,
    -128,   -15,    83,    73,  -128,    -2,    83,  -128
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -128,  -128,   136,   -16,  -127,   -38,   -75,    63,   -31,   -71,
    -128,  -128,  -128,  -128,   122,  -128,  -128,  -128,  -128
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      71,   119,   241,    76,   101,   153,    87,    93,   156,    75,
      75,    68,    69,   108,   162,   163,    90,    90,   164,    73,
     114,   179,    90,   223,    75,   104,   224,    68,    69,   105,
      68,    69,    75,   129,    72,    72,    72,    95,    72,    85,
     154,    72,    82,    78,    91,   161,    83,   195,    79,    72,
     120,    94,   103,   107,    84,    86,   118,    72,    99,    88,
      89,    96,   157,   116,    99,   180,   102,   110,   165,   109,
     128,   123,   115,   166,   167,   106,    72,   130,    90,   117,
      75,   147,    74,    68,    69,    75,   230,   124,   125,   126,
      68,    69,   127,   144,   132,    75,   148,   149,   135,   191,
     242,   159,   121,   140,   141,    72,   143,   208,   122,    68,
      69,   131,   136,   134,   151,   152,   212,   137,   210,   138,
     139,   145,   146,   150,   142,    90,   158,   160,   106,   171,
     168,   169,   172,   176,   170,   194,   178,   173,   174,   185,
     187,   189,   201,   190,   181,   182,   183,   184,   193,   186,
     197,   188,   199,   202,   205,   214,   203,   209,   206,   211,
     247,   213,   200,   204,   226,   221,   229,   215,   217,   219,
     220,   207,   225,   133,   257,   233,   237,   239,   246,   248,
     252,   253,   265,   231,   256,   262,   222,   235,   263,   266,
     269,   271,   227,     0,    81,   240,   155,   244,     0,    97,
     276,     0,   275,   250,     0,   251,     0,   238,   258,     0,
     254,     0,     0,   245,     0,     0,     0,   175,   261,   177,
       0,     0,     0,     0,     0,   264,   255,     0,   267,   268,
       0,     0,   270,     0,   192,   272,     0,   196,     0,   198,
       0,   274,     0,     0,     0,   277,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   273,     0,     0,   216,     0,
     218,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   228,     0,     0,     0,     0,   232,     0,
     234,     0,   236,     0,     0,     0,     0,     0,     0,     0,
     243,     0,     0,     0,     0,     0,   249,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    80,
     259,   260,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57
};

static const yytype_int16 yycheck[] =
{
      31,     7,     6,    41,    79,   132,     5,    14,     5,    28,
      28,     7,     8,    84,   141,     5,    26,    26,     8,    35,
      37,    14,    26,     5,    28,     5,     8,     7,     8,     9,
       7,     8,    28,   108,    53,    53,    53,    49,    53,    70,
      59,    53,    19,     7,    54,    54,    23,   174,     7,    53,
      56,    58,    83,    84,    70,    71,    94,    53,    60,    58,
      59,    77,    59,    15,    60,    58,    82,    56,    58,    85,
     108,   102,    88,   144,   145,    55,    53,   108,    26,    15,
      28,     5,    15,     7,     8,    28,   213,   103,   104,   105,
       7,     8,   108,   124,   110,    28,   127,   128,   114,   170,
     227,   139,     8,   119,   120,    53,   122,     5,    58,     7,
       8,     5,    59,     6,   130,   131,   191,    14,   189,    14,
      58,     6,     5,    25,    59,    26,    58,    58,    55,     5,
     146,   147,     6,    59,   150,   173,    36,   153,   154,    59,
      15,     6,   180,     6,   160,   161,   162,   163,     9,   165,
      59,   167,     6,    58,     6,   193,    59,   188,     8,   190,
     231,     6,   178,    59,    15,    14,    25,    59,    59,    59,
      59,   187,    59,   110,   245,    59,     8,    59,    15,    59,
      59,     6,   257,   214,     6,     8,   202,   218,     6,    15,
      59,    25,   208,    -1,    58,   226,   133,   228,    -1,    77,
     275,    -1,   273,   234,    -1,   236,    -1,   223,   246,    -1,
     241,    -1,    -1,   229,    -1,    -1,    -1,   154,   249,   156,
      -1,    -1,    -1,    -1,    -1,   256,   242,    -1,   259,   260,
      -1,    -1,   263,    -1,   171,   266,    -1,   174,    -1,   176,
      -1,   272,    -1,    -1,    -1,   276,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   271,    -1,    -1,   195,    -1,
     197,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   210,    -1,    -1,    -1,    -1,   215,    -1,
     217,    -1,   219,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     227,    -1,    -1,    -1,    -1,    -1,   233,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     0,
     247,   248,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    62,    63,
      70,    71,    72,    73,    74,    75,    76,    77,     7,     8,
      69,    69,    53,    64,    15,    28,    66,    78,     7,     7,
       0,    63,    19,    23,    64,    69,    64,     5,    58,    59,
      26,    54,    65,    14,    58,    49,    64,    75,    79,    60,
      67,    67,    64,    69,     5,     9,    55,    69,    70,    64,
      56,    64,    66,    68,    37,    64,    15,    15,    66,     7,
      56,     8,    58,    69,    64,    64,    64,    64,    66,    67,
      69,     5,    64,    68,     6,    64,    59,    14,    14,    58,
      64,    64,    59,    64,    69,     6,     5,     5,    69,    69,
      25,    64,    64,    65,    59,    68,     5,    59,    58,    66,
      58,    54,    65,     5,     8,    58,    70,    70,    64,    64,
      64,     5,     6,    64,    64,    68,    59,    68,    36,    14,
      58,    64,    64,    64,    64,    59,    64,    15,    64,     6,
       6,    70,    68,     9,    66,    65,    68,    59,    68,     6,
      64,    66,    58,    59,    59,     6,     8,    64,     5,    69,
      70,    69,    67,     6,    66,    59,    68,    59,    68,    59,
      59,    14,    64,     5,     8,    59,    15,    64,    68,    25,
      65,    69,    68,    59,    68,    69,    68,     8,    64,    59,
      69,     6,    65,    68,    69,    64,    15,    70,    59,    68,
      69,    69,    59,     6,    69,    64,     6,    70,    66,    68,
      68,    69,     8,     6,    69,    67,    15,    69,    69,    59,
      69,    25,    69,    64,    69,    70,    67,    69
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
#line 26 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 27 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 28 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 29 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 30 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 31 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 32 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 33 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 34 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 35 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 36 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 37 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 38 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 39 "parser.y"
    {fprintf(yyout,"$");}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 40 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 41 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 42 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 43 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 45 "parser.y"
    {fprintf(yyout," sqrt");}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 46 "parser.y"
    {fprintf(yyout," strcat");}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 47 "parser.y"
    {fprintf(yyout," pow");}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 48 "parser.y"
    {fprintf(yyout," toupper");}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 49 "parser.y"
    {fprintf(yyout," && ");}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 50 "parser.y"
    {fprintf(yyout," || ");}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 51 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 53 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 55 "parser.y"
    {fprintf(yyout," %s ",yytext);}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 57 "parser.y"
    {fprintf(yyout," if ");}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 58 "parser.y"
    {fprintf(yyout," else ");}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 59 "parser.y"
    {fprintf(yyout,"do");}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 60 "parser.y"
    {fprintf(yyout,"while");}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 62 "parser.y"
    {fprintf(yyout,"for");}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 63 "parser.y"
    {fprintf(yyout,"return ");}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 64 "parser.y"
    {fprintf(yyout," int ");}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 65 "parser.y"
    {fprintf(yyout," float ");}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 66 "parser.y"
    {fprintf(yyout," char ");}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 68 "parser.y"
    {fprintf(yyout," bool ");}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 69 "parser.y"
    {fprintf(yyout," true ");}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 70 "parser.y"
    {fprintf(yyout," false ");}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 71 "parser.y"
    {fprintf(yyout," void ");}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 72 "parser.y"
    {fprintf(yyout," switch ");}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 74 "parser.y"
    {fprintf(yyout," case ");}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 75 "parser.y"
    {fprintf(yyout," default ");}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 76 "parser.y"
    {fprintf(yyout," break ");}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 77 "parser.y"
    {fprintf(yyout," main ");}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 78 "parser.y"
    {fprintf(yyout," scanf ");}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 81 "parser.y"
    {fprintf(yyout," printf ");}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 82 "parser.y"
    {fprintf(yyout," %%f");}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 83 "parser.y"
    {fprintf(yyout," %%s");}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 84 "parser.y"
    {fprintf(yyout," %%d");}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 85 "parser.y"
    {fprintf(yyout,"%s ",yytext);}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 87 "parser.y"
    {fprintf(yyout," %s",yytext);}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 88 "parser.y"
    {fprintf(yyout," %s ",yytext);}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 90 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 91 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 92 "parser.y"
    {fprintf(yyout," %s ",yytext);}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 93 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 97 "parser.y"
    {(yyval) = strdup(yytext);}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 101 "parser.y"
    {(yyval) = strdup(yytext);}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 106 "parser.y"
    {(yyval) = strdup(yytext);
		}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 111 "parser.y"
    {(yyval) = strdup(yytext);}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 126 "parser.y"
    {(yyval) = strdup(yytext);}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 130 "parser.y"
    {
			int temp = atoi((yyvsp[(9) - (10)]));
			if(temp >= 0 ) 
				fprintf(yyout,"for(%s = %s; %s <= %s; %s++)",(yyvsp[(3) - (10)]),(yyvsp[(5) - (10)]),(yyvsp[(3) - (10)]),(yyvsp[(7) - (10)]),(yyvsp[(3) - (10)]));	
			else 
				fprintf(yyout,"for(%s = %s; %s >= %s; %s--)",(yyvsp[(3) - (10)]),(yyvsp[(5) - (10)]),(yyvsp[(3) - (10)]),(yyvsp[(7) - (10)]),(yyvsp[(3) - (10)]));
			}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 138 "parser.y"
    {
			int temp = atoi((yyvsp[(10) - (11)]));
			if(temp >= 0 ) 
				fprintf(yyout,"for(%s = %s%s; %s <= %s; %s++)",(yyvsp[(3) - (11)]),(yyvsp[(5) - (11)]),(yyvsp[(6) - (11)]),(yyvsp[(3) - (11)]),(yyvsp[(8) - (11)]),(yyvsp[(3) - (11)]));	
			else 
				fprintf(yyout,"for(%s = %s%s; %s >= %s; %s--)",(yyvsp[(3) - (11)]),(yyvsp[(5) - (11)]),(yyvsp[(6) - (11)]),(yyvsp[(3) - (11)]),(yyvsp[(8) - (11)]),(yyvsp[(3) - (11)]));
			}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 146 "parser.y"
    {
            int temp = atoi((yyvsp[(11) - (12)]));
			if(temp >= 0 ) 
				fprintf(yyout,"for(%s = %s; %s <= %s%s%s; %s++)",(yyvsp[(3) - (12)]),(yyvsp[(5) - (12)]),(yyvsp[(3) - (12)]),(yyvsp[(7) - (12)]),(yyvsp[(8) - (12)]),(yyvsp[(9) - (12)]),(yyvsp[(3) - (12)]));	
			else 
				fprintf(yyout,"for(%s = %s; %s >= %s%s%s; %s--)",(yyvsp[(3) - (12)]),(yyvsp[(5) - (12)]),(yyvsp[(3) - (12)]),(yyvsp[(7) - (12)]),(yyvsp[(8) - (12)]),(yyvsp[(9) - (12)]),(yyvsp[(3) - (12)]));
			}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 154 "parser.y"
    {
            int temp = atoi((yyvsp[(10) - (11)]));
			if(temp >= 0 ) 
				fprintf(yyout,"for(%s = %s; %s <= %s%s; %s++)",(yyvsp[(3) - (11)]),(yyvsp[(5) - (11)]),(yyvsp[(3) - (11)]),(yyvsp[(7) - (11)]),(yyvsp[(8) - (11)]),(yyvsp[(3) - (11)]));	
			else 
				fprintf(yyout,"for(%s = %s; %s >= %s%s; %s--)",(yyvsp[(3) - (11)]),(yyvsp[(5) - (11)]),(yyvsp[(3) - (11)]),(yyvsp[(7) - (11)]),(yyvsp[(8) - (11)]),(yyvsp[(3) - (11)]));
			}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 162 "parser.y"
    {
            int temp = atoi((yyvsp[(13) - (13)]));
			if(temp >= 0 ) 
				fprintf(yyout,"for(%s = %s%s%s%s; %s <= %s; %s++)",(yyvsp[(3) - (13)]),(yyvsp[(5) - (13)]),(yyvsp[(6) - (13)]),(yyvsp[(7) - (13)]),(yyvsp[(8) - (13)]),(yyvsp[(3) - (13)]),(yyvsp[(10) - (13)]),(yyvsp[(3) - (13)]));	
			else 
				fprintf(yyout,"for(%s = %s%s%s%s; %s >= %s; %s--)",(yyvsp[(3) - (13)]),(yyvsp[(5) - (13)]),(yyvsp[(6) - (13)]),(yyvsp[(7) - (13)]),(yyvsp[(8) - (13)]),(yyvsp[(3) - (13)]),(yyvsp[(10) - (13)]),(yyvsp[(3) - (13)]));
			}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 175 "parser.y"
    {
            if(strcmp((yyvsp[(2) - (3)]),"espaco") == 0) fprintf(yyout,"char *%s;",(yyvsp[(2) - (3)]));
            else fprintf(yyout,"char %s[100];",(yyvsp[(2) - (3)]));
            }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 179 "parser.y"
    {fprintf(yyout,"char %s[100], %s[100];",(yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 181 "parser.y"
    {
            fprintf(yyout,"char %s[%s][%s];",(yyvsp[(2) - (9)]),(yyvsp[(4) - (9)]),(yyvsp[(7) - (9)]));}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 184 "parser.y"
    {fprintf(yyout,"char %s[%s];",(yyvsp[(2) - (6)]),(yyvsp[(4) - (6)]));}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 186 "parser.y"
    {
            fprintf(yyout,"char *%s, float *%s, int *%s",(yyvsp[(2) - (8)]),(yyvsp[(5) - (8)]),(yyvsp[(8) - (8)]));}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 194 "parser.y"
    {
            char *result; 
            result = repl_str((yyvsp[(3) - (7)]),"%inteiro","%d");
            result = repl_str(result,"%real","%f");
            result = repl_str(result,"%texto"," %s");
            fprintf(yyout,"scanf(%s,&%s);",result,(yyvsp[(5) - (7)]));
            free (result);
            }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 203 "parser.y"
    {
                char *result; 
                result = repl_str((yyvsp[(3) - (13)]),"%inteiro","%d");
                result = repl_str(result,"%real","%f");
                result = repl_str(result,"%texto"," %s");
                fprintf(yyout,"scanf(%s,&%s[%s][%s]);",result,(yyvsp[(5) - (13)]),(yyvsp[(7) - (13)]),(yyvsp[(10) - (13)]));
                free (result);
           }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 212 "parser.y"
    {
            char *result; 
            result = repl_str((yyvsp[(3) - (10)]),"%inteiro","%d");
            result = repl_str(result,"%real","%f");
            result = repl_str(result,"%texto"," %s");
            fprintf(yyout,"scanf(%s,&%s[%s]);",result,(yyvsp[(5) - (10)]),(yyvsp[(7) - (10)]));
            free (result);
           }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 222 "parser.y"
    {
            char *result; 
            result = repl_str((yyvsp[(3) - (9)]),"%inteiro","%d");
            result = repl_str(result,"%real","%f");
            result = repl_str(result,"%texto"," %s");
            fprintf(yyout,"scanf(%s, &%s, &%s);",result,(yyvsp[(5) - (9)]),(yyvsp[(7) - (9)]));
            free (result);
           }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 234 "parser.y"
    {fprintf(yyout,"%s",(yyvsp[(1) - (1)]));}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 238 "parser.y"
    {
            
           char *result; 
               result = repl_str((yyvsp[(3) - (3)]),"%inteiro","%d");
               result = repl_str(result,"%real","%f");
               result = repl_str(result,"%texto","%s");
               result = repl_str(result,"%.5real","%.5f");
               
           
            char aux[100] = "printf(";
            strcat(aux,result);
            free (result);
            (yyval) = aux;
     
         }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 256 "parser.y"
    { fprintf(yyout,"if (%s)",(yyvsp[(3) - (4)]));}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 257 "parser.y"
    { fprintf(yyout,"if (!%s)",(yyvsp[(4) - (5)]));}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 258 "parser.y"
    { fprintf(yyout,"if (%s %s %s)",(yyvsp[(3) - (6)]),(yyvsp[(4) - (6)]),(yyvsp[(5) - (6)]));}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 259 "parser.y"
    { 
            if (strcmp((yyvsp[(4) - (6)]),"==") == 0 && strcmp((yyvsp[(3) - (6)]),"tex1") == 0 && strcmp((yyvsp[(5) - (6)]),"tex2") == 0) fprintf(yyout,"if (strcmp(%s,%s) == 0)",(yyvsp[(3) - (6)]),(yyvsp[(5) - (6)]));
            else fprintf(yyout,"if (%s %s %s)",(yyvsp[(3) - (6)]),(yyvsp[(4) - (6)]),(yyvsp[(5) - (6)]));
            }
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 263 "parser.y"
    { 
                fprintf(yyout,"if ((%s[%s] %% %s) %s %s)",(yyvsp[(4) - (13)]),(yyvsp[(6) - (13)]),(yyvsp[(9) - (13)]),(yyvsp[(11) - (13)]),(yyvsp[(12) - (13)]));}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 265 "parser.y"
    {
                fprintf(yyout,"if (strcmp(toupper(%s),\"%s\") == 0)",(yyvsp[(5) - (11)]),(yyvsp[(9) - (11)]));}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 267 "parser.y"
    {
                fprintf(yyout,"if (%s %s (%s[%s]%s'%s'))",(yyvsp[(3) - (15)]),(yyvsp[(4) - (15)]),(yyvsp[(6) - (15)]),(yyvsp[(8) - (15)]),(yyvsp[(10) - (15)]),(yyvsp[(12) - (15)]));}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 269 "parser.y"
    {
                fprintf(yyout,"if (strcmp(%s,%s)==0 || strcmp(%s,%s)==0 || strcmp(%s,%s)==0 || strcmp(%s,%s)==0)",(yyvsp[(3) - (18)]),(yyvsp[(5) - (18)]),(yyvsp[(7) - (18)]),(yyvsp[(9) - (18)]),(yyvsp[(11) - (18)]),(yyvsp[(13) - (18)]),(yyvsp[(15) - (18)]),(yyvsp[(17) - (18)]));}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 271 "parser.y"
    {
                fprintf(yyout,"if (%s[%s] %s %s[%s%s])",(yyvsp[(3) - (13)]),(yyvsp[(5) - (13)]),(yyvsp[(7) - (13)]),(yyvsp[(8) - (13)]),(yyvsp[(10) - (13)]),(yyvsp[(11) - (13)]));}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 273 "parser.y"
    {
                fprintf(yyout,"if (%s[%s] %s %s)",(yyvsp[(3) - (9)]),(yyvsp[(5) - (9)]),(yyvsp[(7) - (9)]),(yyvsp[(8) - (9)]));}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 275 "parser.y"
    {
                fprintf(yyout,"if (%s %% %s[%s] %s %s)",(yyvsp[(3) - (11)]),(yyvsp[(5) - (11)]),(yyvsp[(7) - (11)]),(yyvsp[(9) - (11)]),(yyvsp[(10) - (11)]));}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 277 "parser.y"
    {
                fprintf(yyout," if (%s[%s] %s %s[%s])",(yyvsp[(3) - (12)]),(yyvsp[(5) - (12)]),(yyvsp[(7) - (12)]),(yyvsp[(8) - (12)]),(yyvsp[(10) - (12)]));}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 279 "parser.y"
    {
                fprintf(yyout,"if (%s[%s] %s %s[%s%s%s])",(yyvsp[(3) - (14)]),(yyvsp[(5) - (14)]),(yyvsp[(7) - (14)]),(yyvsp[(8) - (14)]),(yyvsp[(10) - (14)]),(yyvsp[(11) - (14)]),(yyvsp[(12) - (14)]));}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 281 "parser.y"
    {
                fprintf(yyout,"if (%s %s %s[%s])",(yyvsp[(3) - (9)]),(yyvsp[(4) - (9)]),(yyvsp[(5) - (9)]),(yyvsp[(7) - (9)]));}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 288 "parser.y"
    {fprintf(yyout,"case %s %s",(yyvsp[(2) - (3)]),(yyvsp[(3) - (3)]));}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 289 "parser.y"
    {fprintf(yyout,"case %s",(yyvsp[(2) - (2)]));}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 294 "parser.y"
    { char aux[10]; strcpy(aux,(yyvsp[(1) - (2)])); strcat(aux,": "); (yyval) = aux;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 295 "parser.y"
    { char aux[10] = "'"; strcat(aux,(yyvsp[(2) - (4)])); strcat(aux,"': "); (yyval) = aux;  }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 296 "parser.y"
    { char aux[10] = "'*': "; (yyval) = aux; }
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 297 "parser.y"
    {  char aux[10]; strcpy(aux,(yyvsp[(1) - (6)])); strcat(aux," ... "); strcat(aux,(yyvsp[(5) - (6)])); strcat(aux,":");  (yyval) = aux; }
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 298 "parser.y"
    { char aux[10]; strcpy(aux,(yyvsp[(1) - (8)])); strcat(aux," ... "); strcat(aux,(yyvsp[(7) - (8)])); strcat(aux,":");  (yyval) = aux; }
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 303 "parser.y"
    { char aux[100]; strcpy(aux,(yyvsp[(1) - (3)])); strcat(aux,"); break; "); (yyval) = aux; }
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 304 "parser.y"
    { 
        char aux[100]; strcpy(aux,(yyvsp[(1) - (9)])); strcat(aux,"("); strcat(aux,(yyvsp[(3) - (9)])); strcat(aux,","); strcat(aux,(yyvsp[(5) - (9)])); strcat(aux,","); strcat(aux,(yyvsp[(7) - (9)])); strcat(aux,"); break; "); (yyval) = aux;   }
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 306 "parser.y"
    { char aux[100]; strcpy(aux,(yyvsp[(1) - (6)])); strcat(aux,"="); strcat(aux,(yyvsp[(3) - (6)])); strcat(aux,(yyvsp[(4) - (6)])); strcat(aux,(yyvsp[(5) - (6)])); strcat(aux,"; break; "); (yyval) = aux;  }
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 307 "parser.y"
    { char aux[100]; strcpy(aux,(yyvsp[(1) - (6)])); strcat(aux,"="); strcat(aux,(yyvsp[(3) - (6)])); strcat(aux,"*"); strcat(aux,(yyvsp[(5) - (6)])); strcat(aux,"; break; "); (yyval) = aux; }
    break;



/* Line 1455 of yacc.c  */
#line 2527 "y.tab.c"
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
#line 311 "parser.y"


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
