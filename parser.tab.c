/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



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




/* Copy the first part of user declarations.  */
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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 240 "parser.tab.c"

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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  82
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   681

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  144
/* YYNRULES -- Number of states.  */
#define YYNSTATES  396

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
     140,   142,   144,   146,   148,   150,   152,   154,   158,   164,
     174,   181,   191,   207,   220,   227,   244,   254,   262,   266,
     268,   279,   291,   304,   316,   330,   334,   340,   350,   357,
     366,   374,   388,   399,   409,   411,   415,   421,   429,   438,
     449,   462,   476,   492,   502,   516,   527,   540,   553,   566,
     571,   577,   584,   591,   605,   617,   633,   652,   666,   676,
     688,   701,   716,   726,   735,   739,   742,   745,   750,   755,
     762,   771,   773,   783,   790
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
      29,    -1,    77,    -1,    30,    -1,    31,    -1,    32,    -1,
      33,    -1,    72,    -1,    34,    -1,    35,    -1,    71,    -1,
      37,    -1,    38,    -1,    73,    -1,    39,    -1,    40,    -1,
      41,    -1,    42,    -1,    43,    -1,    78,    -1,    44,    -1,
      45,    -1,    46,    -1,    47,    -1,    48,    -1,    74,    -1,
      75,    -1,    49,    -1,    50,    -1,    51,    -1,    52,    -1,
      53,    -1,    54,    -1,    55,    -1,    70,    -1,    56,    -1,
      57,    -1,    58,    -1,    59,    -1,    53,    -1,    26,    -1,
      28,    -1,    60,    -1,    64,    -1,    66,    -1,     7,    -1,
       8,    -1,    55,    -1,    36,    64,    59,    -1,    36,    64,
      56,    68,    59,    -1,    36,    64,     7,    36,    64,    58,
      36,    64,     8,    -1,    36,    64,     7,    36,    64,     8,
      -1,    36,    64,    56,    68,    58,    64,    56,    68,    59,
      -1,    36,    64,    56,    68,    58,    64,    56,    68,    58,
      64,    58,    64,    56,    68,    59,    -1,    36,    64,     5,
      68,     6,    58,    64,    58,    64,    58,    64,    59,    -1,
      36,    64,     5,    68,     6,    56,    -1,    36,    64,     5,
      68,     6,    58,    64,     5,    68,     6,    58,    64,     5,
      68,     6,    59,    -1,    36,    64,     5,    68,     6,     5,
      68,     6,    56,    -1,    36,    64,    56,    68,    58,    64,
      58,    -1,    36,    64,    58,    -1,    36,    -1,    34,    69,
      64,    56,    68,    59,    68,    59,    68,    69,    -1,    34,
      69,    64,    56,    68,    68,    59,    68,    59,    68,    69,
      -1,    34,    69,    64,    56,    68,    59,    64,    65,    68,
      59,    68,    69,    -1,    34,    69,    64,    56,    68,    59,
      64,    68,    59,    68,    69,    -1,    34,    69,    64,    56,
      64,    65,    64,    66,    59,    68,    59,    68,    69,    -1,
      38,    64,    59,    -1,    38,    64,    58,    64,    59,    -1,
      38,    64,     5,    68,     6,     5,    68,     6,    59,    -1,
      38,    64,     5,    68,     6,    59,    -1,    38,    64,    58,
      37,    64,    58,    36,    64,    -1,    48,     7,    67,    58,
      64,     8,    59,    -1,    48,     7,    67,    58,    64,     5,
      64,     6,     5,    64,     6,     8,    59,    -1,    48,     7,
      67,    58,    64,     5,    64,     6,     8,    59,    -1,    48,
       7,    67,    58,    64,    58,    64,     8,    59,    -1,    76,
      -1,    49,     7,    67,    -1,    49,     7,    67,     8,    59,
      -1,    49,     7,    67,    58,    64,     8,    59,    -1,    49,
       7,    67,    58,    64,    68,     8,    59,    -1,    49,     7,
      67,    58,    64,     5,    68,     6,     8,    59,    -1,    49,
       7,    67,    58,    64,    58,    64,     5,    68,     6,     8,
      59,    -1,    49,     7,    67,    58,    64,     5,    68,     6,
       5,    68,     6,     8,    59,    -1,    49,     7,    67,    58,
      64,     5,    68,     6,    58,    64,     5,    68,     6,     8,
      59,    -1,    49,     7,    67,    58,    64,    58,    64,     8,
      59,    -1,    49,     7,    67,    58,    64,    58,    64,    58,
      64,    58,    64,     8,    59,    -1,    49,     7,    67,    58,
      64,     7,    68,     8,     8,    59,    -1,    49,     7,    67,
      58,    64,     7,    68,    58,    68,     8,     8,    59,    -1,
      49,     7,    67,    58,    64,    58,    64,     7,    68,     8,
       8,    59,    -1,    49,     7,    67,    58,    21,     7,    68,
      58,    68,     8,     8,    59,    -1,    30,    69,    64,    69,
      -1,    30,    69,    19,    64,    69,    -1,    30,    69,    64,
      70,    66,    69,    -1,    30,    69,    64,    70,    64,    69,
      -1,    30,    69,    69,    64,     5,    64,     6,     9,    66,
      69,    70,    68,    69,    -1,    30,    69,    23,    69,    64,
      69,    70,    15,    64,    15,    69,    -1,    30,    69,    64,
      70,    69,    64,     5,    68,     6,    65,    15,    66,    15,
      69,    69,    -1,    30,    69,    64,    70,    67,    25,    64,
      70,    67,    25,    64,    70,    67,    25,    64,    70,    67,
      69,    -1,    30,    69,    64,     5,    64,     6,    70,    64,
       5,    64,    68,     6,    69,    -1,    30,    69,    64,     5,
      64,     6,    70,    64,    69,    -1,    30,    69,    64,     9,
      64,     5,    64,     6,    70,    68,    69,    -1,    30,    69,
      64,     5,    64,     6,    70,    64,     5,    64,     6,    69,
      -1,    30,    69,    64,     5,    64,     6,    70,    64,     5,
      64,    65,    64,     6,    69,    -1,    30,    69,    64,    70,
      64,     5,    64,     6,    69,    -1,    30,    69,    64,    70,
      15,    64,    15,    69,    -1,    44,    79,    80,    -1,    44,
      79,    -1,    66,    14,    -1,    15,    65,    15,    14,    -1,
      15,    54,    15,    14,    -1,    66,    58,    66,    58,    66,
      14,    -1,    66,    58,    66,    58,    66,    58,    66,    14,
      -1,    76,    -1,    64,     7,    64,    58,    64,    58,    64,
       8,    59,    -1,    64,    56,    64,    65,    64,    59,    -1,
      64,    56,    64,    54,    64,    59,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    21,    21,    22,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    45,    46,    47,    48,    49,    50,    51,    53,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    91,    92,    93,    94,    95,    96,    97,   101,   107,
     112,   117,   122,   123,   127,   128,   132,   136,   140,   145,
     149,   153,   158,   163,   167,   169,   172,   174,   176,   178,
     183,   194,   202,   210,   218,   231,   236,   238,   241,   243,
     251,   260,   269,   287,   299,   303,   322,   341,   361,   379,
     398,   419,   439,   461,   479,   505,   525,   547,   569,   591,
     592,   593,   596,   600,   602,   604,   606,   608,   610,   612,
     614,   616,   618,   620,   627,   628,   633,   634,   635,   636,
     637,   642,   643,   645,   646
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
  "int", "para", "textostring", "leia", "printf", "escreva", "se", "caso",
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
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      72,    72,    72,    72,    72,    73,    73,    73,    73,    73,
      74,    74,    74,    74,    75,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    78,    78,    79,    79,    79,    79,
      79,    80,    80,    80,    80
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
       1,     1,     1,     1,     1,     1,     1,     3,     5,     9,
       6,     9,    15,    12,     6,    16,     9,     7,     3,     1,
      10,    11,    12,    11,    13,     3,     5,     9,     6,     8,
       7,    13,    10,     9,     1,     3,     5,     7,     8,    10,
      12,    13,    15,     9,    13,    10,    12,    12,    12,     4,
       5,     6,     6,    13,    11,    15,    18,    13,     9,    11,
      12,    14,     9,     8,     3,     2,     2,     4,     4,     6,
       8,     1,     9,     6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    32,    33,    34,
      35,    37,    38,    89,    40,    41,    43,    44,    45,    46,
      47,    49,    50,    51,    52,    53,    56,    57,    58,    59,
      60,    61,    62,    64,    65,    66,    67,    21,     0,     3,
      63,    39,    36,    42,    54,    55,   104,    31,    48,    74,
      75,     0,     0,    68,     0,     0,     0,    70,     0,   135,
       0,     0,     1,     2,     0,     0,     0,     0,     0,     0,
       0,     0,    88,    77,     0,     0,    95,    69,     0,     0,
     136,     0,     0,     0,   141,   134,    71,     0,   105,     0,
       0,     0,     0,    76,   119,     0,     0,     0,    72,    73,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   120,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    72,     0,     0,     0,     0,    78,
       0,     0,    96,   138,   137,     0,     0,     0,     0,   106,
       0,     0,     0,     0,     0,     0,     0,   122,   121,     0,
       0,     0,     0,     0,     0,     0,    84,     0,    80,     0,
       0,     0,    98,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    72,     0,     0,     0,
       0,     0,     0,    87,     0,     0,   139,     0,     0,     0,
       0,     0,   100,     0,     0,     0,     0,   107,     0,     0,
       0,     0,     0,   133,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    99,
       0,     0,   144,   143,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   108,     0,     0,   128,     0,   132,
       0,     0,     0,     0,     0,     0,     0,     0,    86,     0,
       0,    79,     0,    81,    97,   140,     0,     0,     0,   103,
       0,     0,     0,     0,     0,     0,     0,     0,   113,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    90,
       0,     0,     0,     0,     0,     0,   102,     0,     0,   109,
       0,   115,     0,     0,     0,     0,   124,     0,     0,     0,
     129,     0,     0,     0,     0,     0,    93,    91,     0,     0,
       0,   142,     0,     0,     0,     0,     0,     0,     0,     0,
     130,     0,     0,     0,     0,     0,     0,    92,     0,    83,
       0,     0,   118,     0,     0,   116,   110,   117,     0,     0,
     127,     0,     0,   123,    94,     0,     0,   101,   111,     0,
     114,   131,     0,     0,     0,     0,     0,     0,   125,     0,
      82,   112,     0,    85,     0,   126
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    58,    59,   118,    99,   119,   107,   120,    71,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    79,   105
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -142
static const yytype_int16 yypact[] =
{
     621,  -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,
    -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,
    -142,  -142,  -142,  -142,  -142,  -142,  -142,    24,  -142,  -142,
    -142,    24,  -142,   -41,  -142,   -41,  -142,  -142,  -142,  -142,
    -142,    83,  -142,  -142,  -142,    55,    72,  -142,  -142,  -142,
    -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,   563,  -142,
    -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,
    -142,   142,   -41,  -142,     0,     5,   -11,  -142,    -5,   -24,
     -42,   -42,  -142,  -142,   -41,    24,    41,   -41,    62,    64,
      61,    64,  -142,  -142,    64,    57,  -142,  -142,    78,   109,
    -142,    85,    72,    15,  -142,  -142,  -142,    68,    -6,    24,
     -41,   -41,   -41,  -142,  -142,    13,   126,    64,  -142,  -142,
     134,   -41,    95,   139,   -41,    89,   137,   144,   104,   -41,
     -41,   -41,   105,    17,  -142,    24,   157,   161,   -41,   131,
      24,   146,   -41,   -41,   141,    53,    29,     3,   -41,  -142,
       1,   116,  -142,  -142,  -142,    85,   117,    -3,     9,  -142,
     171,    19,   124,   124,   -41,   165,   -41,  -142,  -142,   -41,
     177,   179,   -41,    64,   127,    64,  -142,   -41,  -142,   147,
      45,    64,  -142,   151,    16,   -41,   -41,   -41,   -41,   129,
     -41,    64,    64,    64,   138,   -41,   185,   181,   -41,   192,
      24,   195,   124,    64,   196,    85,    79,   148,    64,   200,
      -1,   -41,    64,  -142,   202,   -41,  -142,    85,   152,   150,
     153,   205,  -142,   206,   155,   210,    11,  -142,    37,   158,
     -41,   136,   124,  -142,    24,   -42,   212,    85,   162,    64,
     163,    64,   164,   168,    64,   -41,   217,    98,   167,  -142,
     213,   -41,  -142,  -142,   115,   169,    64,    28,   221,    64,
      64,    64,   172,   -41,  -142,   215,   -41,  -142,    64,  -142,
     208,   141,    24,    64,   176,    64,    24,    64,  -142,   214,
     178,  -142,   -41,  -142,  -142,  -142,   229,   -41,   180,  -142,
     230,    64,   183,   -41,   184,   232,   238,   239,  -142,   188,
      24,    74,    24,   -41,   233,   124,   191,    64,    24,  -142,
      24,   193,   -41,   194,   197,   247,  -142,   246,   251,  -142,
     254,  -142,   252,   253,   255,   -41,  -142,    24,   -41,   256,
    -142,   124,    85,    64,    64,    24,  -142,  -142,   -41,   207,
     -41,  -142,   257,   209,   264,    64,   216,   219,   222,   266,
    -142,   258,    24,   -42,   261,    24,    24,  -142,   277,  -142,
     228,   226,  -142,   231,   281,  -142,  -142,  -142,   234,    24,
    -142,   263,    24,  -142,  -142,    64,    64,  -142,  -142,   284,
    -142,  -142,   -41,    24,   283,   235,   236,   124,  -142,   241,
    -142,  -142,   -42,  -142,    24,  -142
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -142,  -142,   240,     4,  -141,   -33,   -80,   189,   -31,   -73,
    -142,  -142,  -142,  -142,  -142,   223,  -142,  -142,  -142,  -142
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      72,   108,   132,   172,   244,    89,   181,    90,    78,   100,
      94,   178,    73,   115,   188,    97,   187,   189,   106,   258,
      69,    70,   129,    97,   192,   102,   193,   194,   138,    73,
     216,    69,    70,   291,   175,   141,   292,    74,   160,    75,
      87,    77,   260,    98,   261,   262,   111,    77,    69,    70,
     112,   186,   133,   101,   110,   114,    91,   245,    92,    93,
     182,   179,    80,    95,    96,   239,    73,   190,   128,   259,
      73,   130,    73,   106,   217,    86,    88,   195,   134,    81,
     327,    77,   140,   103,   142,   176,   293,   177,   109,   197,
     198,   116,    77,   126,   124,   263,   113,   121,    76,   125,
      97,   212,    77,   213,   162,    97,    73,    77,   167,   168,
      73,    77,   173,    77,   135,   136,   137,    73,   117,   139,
     287,   144,   184,   288,   127,   147,   131,    73,   151,   235,
     304,   143,    73,   156,   157,   158,   166,   161,    69,    70,
     146,   266,   165,    69,    70,   150,   170,   171,   152,    69,
      70,   153,   180,   148,   149,   270,   282,   283,   154,   268,
     328,    84,   155,   163,   159,    85,   164,    97,   199,   233,
     201,   169,   238,   202,   183,   185,   205,   206,   191,   113,
     200,   210,   203,   211,   250,   204,   208,   215,   222,   218,
     219,   220,   221,   229,   223,    73,   230,   227,   232,   228,
     267,   234,   231,   269,   272,   237,   243,   241,   248,   252,
     251,   254,   253,   256,   255,   246,   257,   264,   271,   249,
     311,   273,   275,   277,   278,   281,   284,   285,   289,   294,
     300,   298,   333,   303,   265,   307,   312,   314,   317,   316,
     322,   305,   319,   321,   323,   309,   325,   324,   332,   280,
     334,   338,   340,   342,   343,   286,   341,   344,   353,   345,
     346,   347,   352,   348,   369,   361,   359,   299,   362,   326,
     301,   330,   363,   371,   368,   365,   372,   336,   366,   337,
     122,   367,   375,   123,   376,   377,   313,   379,   382,   389,
     378,   315,   386,   380,   390,   391,   350,   320,    83,   354,
     393,     0,   104,     0,   357,     0,   145,   331,     0,     0,
       0,     0,   394,     0,   392,     0,   339,     0,     0,     0,
       0,   370,     0,     0,   373,   374,     0,     0,     0,   349,
       0,     0,   351,     0,   174,     0,     0,     0,   381,     0,
       0,   383,   358,     0,   360,     0,     0,     0,     0,     0,
     196,     0,   388,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   207,   395,   209,     0,     0,     0,     0,     0,
     214,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     224,   225,   226,     0,     0,     0,   387,     0,     0,     0,
       0,     0,   236,     0,     0,   240,     0,   242,     0,     0,
       0,   247,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   274,     0,
     276,     0,     0,   279,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   290,     0,     0,   295,   296,
     297,     0,     0,     0,     0,     0,     0,   302,     0,     0,
       0,     0,   306,     0,   308,     0,   310,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     318,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     329,     0,     0,     0,     0,     0,   335,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   355,   356,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   364,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    82,   384,   385,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57
};

static const yytype_int16 yycheck[] =
{
      31,    81,     8,   144,     5,     5,     5,     7,    41,    14,
       5,     8,    53,    86,     5,    26,   157,     8,    60,     8,
       7,     8,     7,    26,     5,    49,     7,     8,    15,    53,
      14,     7,     8,     5,     5,   115,     8,    33,    21,    35,
      71,    28,     5,    54,     7,     8,     5,    28,     7,     8,
       9,    54,    58,    58,    85,    86,    56,    58,    58,    59,
      59,    58,     7,    58,    59,   206,    53,    58,   101,    58,
      53,    56,    53,    60,    58,    71,    72,    58,   109,     7,
       6,    28,   115,    79,   115,    56,    58,    58,    84,   162,
     163,    87,    28,    15,    37,    58,    55,    36,    15,    95,
      26,    56,    28,    58,   135,    26,    53,    28,   139,   140,
      53,    28,    59,    28,   110,   111,   112,    53,    56,   115,
       5,   117,   155,     8,    15,   121,    58,    53,   124,   202,
     271,     5,    53,   129,   130,   131,     5,   133,     7,     8,
       6,     5,   138,     7,     8,     6,   142,   143,    59,     7,
       8,    14,   148,    58,    59,   235,    58,    59,    14,   232,
     301,    19,    58,     6,    59,    23,     5,    26,   164,   200,
     166,    25,   205,   169,    58,    58,   172,   173,     7,    55,
      15,   177,     5,    36,   217,     6,    59,    36,    59,   185,
     186,   187,   188,     8,   190,    53,    15,    59,     6,   195,
     231,     6,   198,   234,   237,     9,     6,    59,     6,    59,
      58,     6,    59,    58,     8,   211,     6,    59,     6,   215,
       6,    59,    59,    59,    56,     8,    59,    14,    59,     8,
      15,    59,   305,    25,   230,    59,    58,     8,     8,    59,
       8,   272,    59,    59,     6,   276,    58,     8,    15,   245,
      59,    58,    58,     6,     8,   251,    59,     6,   331,     5,
       8,     8,     6,     8,     6,     8,    59,   263,    59,   300,
     266,   302,     8,   353,     8,    59,    15,   308,    59,   310,
      91,    59,     5,    94,    56,    59,   282,     6,    25,     6,
      59,   287,     8,    59,    59,    59,   327,   293,    58,   332,
      59,    -1,    79,    -1,   335,    -1,   117,   303,    -1,    -1,
      -1,    -1,   392,    -1,   387,    -1,   312,    -1,    -1,    -1,
      -1,   352,    -1,    -1,   355,   356,    -1,    -1,    -1,   325,
      -1,    -1,   328,    -1,   145,    -1,    -1,    -1,   369,    -1,
      -1,   372,   338,    -1,   340,    -1,    -1,    -1,    -1,    -1,
     161,    -1,   383,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   173,   394,   175,    -1,    -1,    -1,    -1,    -1,
     181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     191,   192,   193,    -1,    -1,    -1,   382,    -1,    -1,    -1,
      -1,    -1,   203,    -1,    -1,   206,    -1,   208,    -1,    -1,
      -1,   212,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   239,    -1,
     241,    -1,    -1,   244,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   256,    -1,    -1,   259,   260,
     261,    -1,    -1,    -1,    -1,    -1,    -1,   268,    -1,    -1,
      -1,    -1,   273,    -1,   275,    -1,   277,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     291,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     301,    -1,    -1,    -1,    -1,    -1,   307,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   333,   334,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   345,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     0,   375,   376,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    -1,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60
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
      70,    71,    72,    73,    74,    75,    76,    77,    78,     7,
       8,    69,    69,    53,    64,    64,    15,    28,    66,    79,
       7,     7,     0,    63,    19,    23,    64,    69,    64,     5,
       7,    56,    58,    59,     5,    58,    59,    26,    54,    65,
      14,    58,    49,    64,    76,    80,    60,    67,    67,    64,
      69,     5,     9,    55,    69,    70,    64,    56,    64,    66,
      68,    36,    68,    68,    37,    64,    15,    15,    66,     7,
      56,    58,     8,    58,    69,    64,    64,    64,    15,    64,
      66,    67,    69,     5,    64,    68,     6,    64,    58,    59,
       6,    64,    59,    14,    14,    58,    64,    64,    64,    59,
      21,    64,    69,     6,     5,    64,     5,    69,    69,    25,
      64,    64,    65,    59,    68,     5,    56,    58,     8,    58,
      64,     5,    59,    58,    66,    58,    54,    65,     5,     8,
      58,     7,     5,     7,     8,    58,    68,    70,    70,    64,
      15,    64,    64,     5,     6,    64,    64,    68,    59,    68,
      64,    36,    56,    58,    68,    36,    14,    58,    64,    64,
      64,    64,    59,    64,    68,    68,    68,    59,    64,     8,
      15,    64,     6,    69,     6,    70,    68,     9,    66,    65,
      68,    59,    68,     6,     5,    58,    64,    68,     6,    64,
      66,    58,    59,    59,     6,     8,    58,     6,     8,    58,
       5,     7,     8,    58,    59,    64,     5,    69,    70,    69,
      67,     6,    66,    59,    68,    59,    68,    59,    56,    68,
      64,     8,    58,    59,    59,    14,    64,     5,     8,    59,
      68,     5,     8,    58,     8,    68,    68,    68,    59,    64,
      15,    64,    68,    25,    65,    69,    68,    59,    68,    69,
      68,     6,    58,    64,     8,    64,    59,     8,    68,    59,
      64,    59,     8,     6,     8,    58,    69,     6,    65,    68,
      69,    64,    15,    70,    59,    68,    69,    69,    58,    64,
      58,    59,     6,     8,     6,     5,     8,     8,     8,    64,
      69,    64,     6,    70,    66,    68,    68,    69,    64,    59,
      64,     8,    59,     8,    68,    59,    59,    59,     8,     6,
      69,    67,    15,    69,    69,     5,    56,    59,    59,     6,
      59,    69,    25,    69,    68,    68,     8,    64,    69,     6,
      59,    59,    70,    59,    67,    69
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
#line 26 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 5:
#line 27 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 6:
#line 28 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 7:
#line 29 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 8:
#line 30 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 9:
#line 31 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 10:
#line 32 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 11:
#line 33 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 12:
#line 34 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 13:
#line 35 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 14:
#line 36 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 15:
#line 37 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 16:
#line 38 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 17:
#line 39 "parser.y"
    {fprintf(yyout,"$");}
    break;

  case 18:
#line 40 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 19:
#line 41 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 20:
#line 42 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 21:
#line 43 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 22:
#line 45 "parser.y"
    {fprintf(yyout," sqrt");}
    break;

  case 23:
#line 46 "parser.y"
    {fprintf(yyout," strcat");}
    break;

  case 24:
#line 47 "parser.y"
    {fprintf(yyout," pow");}
    break;

  case 25:
#line 48 "parser.y"
    {fprintf(yyout," toupper");}
    break;

  case 26:
#line 49 "parser.y"
    {fprintf(yyout," && ");}
    break;

  case 27:
#line 50 "parser.y"
    {fprintf(yyout," || ");}
    break;

  case 28:
#line 51 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 29:
#line 53 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 30:
#line 55 "parser.y"
    {fprintf(yyout," %s ",yytext);}
    break;

  case 32:
#line 57 "parser.y"
    {fprintf(yyout," if ");}
    break;

  case 33:
#line 58 "parser.y"
    {fprintf(yyout,"else ");}
    break;

  case 34:
#line 59 "parser.y"
    {fprintf(yyout,"do");}
    break;

  case 35:
#line 60 "parser.y"
    {fprintf(yyout,"while");}
    break;

  case 37:
#line 62 "parser.y"
    {fprintf(yyout,"for");}
    break;

  case 38:
#line 63 "parser.y"
    {fprintf(yyout,"return ");}
    break;

  case 40:
#line 66 "parser.y"
    {fprintf(yyout," float ");}
    break;

  case 41:
#line 67 "parser.y"
    {fprintf(yyout," char ");}
    break;

  case 43:
#line 69 "parser.y"
    {fprintf(yyout," bool ");}
    break;

  case 44:
#line 70 "parser.y"
    {fprintf(yyout," true ");}
    break;

  case 45:
#line 71 "parser.y"
    {fprintf(yyout," false ");}
    break;

  case 46:
#line 72 "parser.y"
    {fprintf(yyout," void ");}
    break;

  case 47:
#line 73 "parser.y"
    {fprintf(yyout," switch ");}
    break;

  case 49:
#line 75 "parser.y"
    {fprintf(yyout," case ");}
    break;

  case 50:
#line 76 "parser.y"
    {fprintf(yyout," default ");}
    break;

  case 51:
#line 77 "parser.y"
    {fprintf(yyout," break ");}
    break;

  case 52:
#line 78 "parser.y"
    {fprintf(yyout," main ");}
    break;

  case 53:
#line 79 "parser.y"
    {fprintf(yyout," scanf ");}
    break;

  case 56:
#line 82 "parser.y"
    {fprintf(yyout," printf ");}
    break;

  case 57:
#line 83 "parser.y"
    {fprintf(yyout," %%f");}
    break;

  case 58:
#line 84 "parser.y"
    {fprintf(yyout," %%s");}
    break;

  case 59:
#line 85 "parser.y"
    {fprintf(yyout," %%d");}
    break;

  case 60:
#line 86 "parser.y"
    {
                if(strcmp(yytext,"itens")==0) fprintf(yyout,"*%s ",yytext);
                else 
                fprintf(yyout,"%s",yytext);}
    break;

  case 61:
#line 91 "parser.y"
    {fprintf(yyout," %s",yytext);}
    break;

  case 62:
#line 92 "parser.y"
    {fprintf(yyout," %s ",yytext);}
    break;

  case 64:
#line 94 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 65:
#line 95 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 66:
#line 96 "parser.y"
    {fprintf(yyout," %s ",yytext);}
    break;

  case 67:
#line 97 "parser.y"
    {fprintf(yyout,"%s",yytext);}
    break;

  case 68:
#line 101 "parser.y"
    { 
        
            (yyval) = strdup(yytext);}
    break;

  case 69:
#line 107 "parser.y"
    {(yyval) = strdup(yytext);}
    break;

  case 70:
#line 112 "parser.y"
    {(yyval) = strdup(yytext);
		}
    break;

  case 71:
#line 117 "parser.y"
    {(yyval) = strdup(yytext);}
    break;

  case 76:
#line 132 "parser.y"
    {(yyval) = strdup(yytext);}
    break;

  case 77:
#line 136 "parser.y"
    {
            fprintf(yyout,"int %s;",(yyvsp[(2) - (3)]));
        }
    break;

  case 78:
#line 140 "parser.y"
    {
            fprintf(yyout,"int %s = %s;",(yyvsp[(2) - (5)]),(yyvsp[(4) - (5)]));
        }
    break;

  case 79:
#line 145 "parser.y"
    { 
            fprintf(yyout,"int %s (int %s[], int %s)",(yyvsp[(2) - (9)]),(yyvsp[(5) - (9)]),(yyvsp[(8) - (9)]));
        }
    break;

  case 80:
#line 149 "parser.y"
    { 
            fprintf(yyout,"int %s (int %s)",(yyvsp[(2) - (6)]),(yyvsp[(5) - (6)]));
        }
    break;

  case 81:
#line 153 "parser.y"
    {
            fprintf(yyout,"int %s = %s, %s = %s;",(yyvsp[(2) - (9)]),(yyvsp[(4) - (9)]),(yyvsp[(6) - (9)]),(yyvsp[(8) - (9)]));
        }
    break;

  case 82:
#line 158 "parser.y"
    {
            fprintf(yyout,"int %s = %s, %s = %s, %s, %s = %s;",(yyvsp[(2) - (15)]),(yyvsp[(4) - (15)]),(yyvsp[(6) - (15)]),(yyvsp[(8) - (15)]),(yyvsp[(10) - (15)]),(yyvsp[(12) - (15)]),(yyvsp[(14) - (15)]));
        }
    break;

  case 83:
#line 163 "parser.y"
    {
            fprintf(yyout,"int %s[%s], %s, %s, %s;",(yyvsp[(2) - (12)]),(yyvsp[(4) - (12)]),(yyvsp[(7) - (12)]),(yyvsp[(9) - (12)]),(yyvsp[(11) - (12)]));
        }
    break;

  case 84:
#line 167 "parser.y"
    {fprintf(yyout,"int %s[%s] = ", (yyvsp[(2) - (6)]),(yyvsp[(4) - (6)]));}
    break;

  case 85:
#line 170 "parser.y"
    {fprintf(yyout,"int %s[%s], %s[%s], %s[%s]; ",(yyvsp[(2) - (16)]),(yyvsp[(4) - (16)]),(yyvsp[(7) - (16)]),(yyvsp[(9) - (16)]),(yyvsp[(12) - (16)]),(yyvsp[(14) - (16)]));}
    break;

  case 86:
#line 172 "parser.y"
    {fprintf(yyout,"int %s[%s][%s] = ",(yyvsp[(2) - (9)]),(yyvsp[(4) - (9)]),(yyvsp[(7) - (9)]));}
    break;

  case 87:
#line 174 "parser.y"
    {fprintf(yyout,"int %s = %s, %s, ", (yyvsp[(2) - (7)]),(yyvsp[(4) - (7)]),(yyvsp[(6) - (7)]));}
    break;

  case 88:
#line 176 "parser.y"
    {fprintf(yyout,"int %s,",(yyvsp[(2) - (3)]));}
    break;

  case 89:
#line 178 "parser.y"
    {fprintf(yyout,"int ");}
    break;

  case 90:
#line 183 "parser.y"
    {
			if(strcmp((yyvsp[(7) - (10)]),"itens")==0) fprintf(yyout,"for(%s = %s; %s < *%s; %s++)",(yyvsp[(3) - (10)]),(yyvsp[(5) - (10)]),(yyvsp[(3) - (10)]),(yyvsp[(7) - (10)]),(yyvsp[(3) - (10)]));
            else {
                int temp = atoi((yyvsp[(9) - (10)]));
			    if(temp >= 0 ) 
				    fprintf(yyout,"for(%s = %s; %s <= %s; %s++)",(yyvsp[(3) - (10)]),(yyvsp[(5) - (10)]),(yyvsp[(3) - (10)]),(yyvsp[(7) - (10)]),(yyvsp[(3) - (10)]));	
			    else 
				    fprintf(yyout,"for(%s = %s; %s >= %s; %s--)",(yyvsp[(3) - (10)]),(yyvsp[(5) - (10)]),(yyvsp[(3) - (10)]),(yyvsp[(7) - (10)]),(yyvsp[(3) - (10)]));
			    }
           }
    break;

  case 91:
#line 194 "parser.y"
    {
			int temp = atoi((yyvsp[(10) - (11)]));
			if(temp >= 0 ) 
				fprintf(yyout,"for(%s = %s%s; %s <= %s; %s++)",(yyvsp[(3) - (11)]),(yyvsp[(5) - (11)]),(yyvsp[(6) - (11)]),(yyvsp[(3) - (11)]),(yyvsp[(8) - (11)]),(yyvsp[(3) - (11)]));	
			else 
				fprintf(yyout,"for(%s = %s%s; %s >= %s; %s--)",(yyvsp[(3) - (11)]),(yyvsp[(5) - (11)]),(yyvsp[(6) - (11)]),(yyvsp[(3) - (11)]),(yyvsp[(8) - (11)]),(yyvsp[(3) - (11)]));
			}
    break;

  case 92:
#line 202 "parser.y"
    {
            int temp = atoi((yyvsp[(11) - (12)]));
			if(temp >= 0 ) 
				fprintf(yyout,"for(%s = %s; %s <= %s%s%s; %s++)",(yyvsp[(3) - (12)]),(yyvsp[(5) - (12)]),(yyvsp[(3) - (12)]),(yyvsp[(7) - (12)]),(yyvsp[(8) - (12)]),(yyvsp[(9) - (12)]),(yyvsp[(3) - (12)]));	
			else 
				fprintf(yyout,"for(%s = %s; %s >= %s%s%s; %s--)",(yyvsp[(3) - (12)]),(yyvsp[(5) - (12)]),(yyvsp[(3) - (12)]),(yyvsp[(7) - (12)]),(yyvsp[(8) - (12)]),(yyvsp[(9) - (12)]),(yyvsp[(3) - (12)]));
			}
    break;

  case 93:
#line 210 "parser.y"
    {
            int temp = atoi((yyvsp[(10) - (11)]));
			if(temp >= 0 ) 
				fprintf(yyout,"for(%s = %s; %s <= %s%s; %s++)",(yyvsp[(3) - (11)]),(yyvsp[(5) - (11)]),(yyvsp[(3) - (11)]),(yyvsp[(7) - (11)]),(yyvsp[(8) - (11)]),(yyvsp[(3) - (11)]));	
			else 
				fprintf(yyout,"for(%s = %s; %s >= %s%s; %s--)",(yyvsp[(3) - (11)]),(yyvsp[(5) - (11)]),(yyvsp[(3) - (11)]),(yyvsp[(7) - (11)]),(yyvsp[(8) - (11)]),(yyvsp[(3) - (11)]));
			}
    break;

  case 94:
#line 218 "parser.y"
    {
            int temp = atoi((yyvsp[(13) - (13)]));
			if(temp >= 0 ) 
				fprintf(yyout,"for(%s = %s%s%s%s; %s <= %s; %s++)",(yyvsp[(3) - (13)]),(yyvsp[(5) - (13)]),(yyvsp[(6) - (13)]),(yyvsp[(7) - (13)]),(yyvsp[(8) - (13)]),(yyvsp[(3) - (13)]),(yyvsp[(10) - (13)]),(yyvsp[(3) - (13)]));	
			else 
				fprintf(yyout,"for(%s = %s%s%s%s; %s >= %s; %s--)",(yyvsp[(3) - (13)]),(yyvsp[(5) - (13)]),(yyvsp[(6) - (13)]),(yyvsp[(7) - (13)]),(yyvsp[(8) - (13)]),(yyvsp[(3) - (13)]),(yyvsp[(10) - (13)]),(yyvsp[(3) - (13)]));
			}
    break;

  case 95:
#line 231 "parser.y"
    {
            if(strcmp((yyvsp[(2) - (3)]),"espaco") == 0) fprintf(yyout,"char *%s;",(yyvsp[(2) - (3)]));
            else if(strcmp((yyvsp[(2) - (3)]),"operacao") == 0) fprintf(yyout,"char %s;",(yyvsp[(2) - (3)]));
            else fprintf(yyout,"char %s[100];",(yyvsp[(2) - (3)]));
            }
    break;

  case 96:
#line 236 "parser.y"
    {fprintf(yyout,"char %s[100], %s[100];",(yyvsp[(2) - (5)]), (yyvsp[(4) - (5)]));}
    break;

  case 97:
#line 238 "parser.y"
    {
            fprintf(yyout,"char %s[%s][%s];",(yyvsp[(2) - (9)]),(yyvsp[(4) - (9)]),(yyvsp[(7) - (9)]));}
    break;

  case 98:
#line 241 "parser.y"
    {fprintf(yyout,"char %s[%s];",(yyvsp[(2) - (6)]),(yyvsp[(4) - (6)]));}
    break;

  case 99:
#line 243 "parser.y"
    {
            fprintf(yyout,"char %s[], float %s[], int *%s",(yyvsp[(2) - (8)]),(yyvsp[(5) - (8)]),(yyvsp[(8) - (8)]));}
    break;

  case 100:
#line 251 "parser.y"
    {
            char *result; 
            result = repl_str((yyvsp[(3) - (7)]),"%inteiro","%d");
            result = repl_str(result,"%real","%f");
            result = repl_str(result,"%texto"," %s");
            fprintf(yyout,"scanf(%s,&%s);",result,(yyvsp[(5) - (7)]));
            free (result);
            }
    break;

  case 101:
#line 260 "parser.y"
    {
                char *result; 
                result = repl_str((yyvsp[(3) - (13)]),"%inteiro","%d");
                result = repl_str(result,"%real","%f");
                result = repl_str(result,"%texto"," %c");
                fprintf(yyout,"scanf(%s,&%s[%s][%s]);",result,(yyvsp[(5) - (13)]),(yyvsp[(7) - (13)]),(yyvsp[(10) - (13)]));
                free (result);
           }
    break;

  case 102:
#line 269 "parser.y"
    {
            if(strcmp((yyvsp[(7) - (10)]),"itens")==0){
                char *result; 
                result = repl_str((yyvsp[(3) - (10)]),"%inteiro","%d");
                result = repl_str(result,"%real","%f");
                result = repl_str(result,"%texto"," %s");
                fprintf(yyout,"scanf(%s,&%s[*%s]);",result,(yyvsp[(5) - (10)]),(yyvsp[(7) - (10)]));
                free (result);
            } else {
                char *result; 
                result = repl_str((yyvsp[(3) - (10)]),"%inteiro","%d");
                result = repl_str(result,"%real","%f");
                result = repl_str(result,"%texto"," %s");
                fprintf(yyout,"scanf(%s,&%s[%s]);",result,(yyvsp[(5) - (10)]),(yyvsp[(7) - (10)]));
                free (result);
            } 
        }
    break;

  case 103:
#line 287 "parser.y"
    {
            char *result; 
            result = repl_str((yyvsp[(3) - (9)]),"%inteiro","%d");
            result = repl_str(result,"%real","%f");
            result = repl_str(result,"%texto"," %s");
            fprintf(yyout,"scanf(%s, &%s, &%s);",result,(yyvsp[(5) - (9)]),(yyvsp[(7) - (9)]));
            free (result);
           }
    break;

  case 104:
#line 299 "parser.y"
    {fprintf(yyout,"%s",(yyvsp[(1) - (1)]));}
    break;

  case 105:
#line 303 "parser.y"
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

  case 106:
#line 322 "parser.y"
    {
            
           
           char *result; 
               result = repl_str((yyvsp[(3) - (5)]),"%inteiro","%d");
               result = repl_str(result,"%real","%f");
               result = repl_str(result,"%texto","%s");
               result = repl_str(result,"%.5real","%.5f");
               
           
            char aux[100] = "printf(";
            strcat(aux,result);
            free (result);
            strcat(aux,");");
            (yyval) = aux;
     
             
          }
    break;

  case 107:
#line 341 "parser.y"
    {
            
                 
           char *result; 
               result = repl_str((yyvsp[(3) - (7)]),"%inteiro","%d");
               result = repl_str(result,"%real","%f");
               result = repl_str(result,"%texto","%s");
               result = repl_str(result,"%.5real","%.5f");
               
           
            char aux[100] = "printf(";
            strcat(aux,result);
            free (result);
            strcat(aux,",");
            strcat(aux,(yyvsp[(5) - (7)]));
            strcat(aux,");");
            (yyval) = aux;
     
             }
    break;

  case 108:
#line 361 "parser.y"
    {
               char *result; 
               result = repl_str((yyvsp[(3) - (8)]),"%inteiro","%d");
               result = repl_str(result,"%real","%f");
               result = repl_str(result,"%texto","%s");
               result = repl_str(result,"%.5real","%.5f");
               
                char aux[100] = "printf(";
                strcat(aux,result);
                free (result);
                strcat(aux,",");
                strcat(aux,(yyvsp[(5) - (8)]));
                strcat(aux,(yyvsp[(6) - (8)]));
                //strcat(aux,$7);
                strcat(aux,");");
                (yyval) = aux;
        }
    break;

  case 109:
#line 379 "parser.y"
    {
               char *result; 
               result = repl_str((yyvsp[(3) - (10)]),"%inteiro","%d");
               result = repl_str(result,"%real","%f");
               result = repl_str(result,"%texto","%s");
               result = repl_str(result,"%.5real","%.5f");
               
                char aux[100] = "printf(";
                strcat(aux,result);
                free (result);
                strcat(aux,",");
                strcat(aux,(yyvsp[(5) - (10)]));
                strcat(aux,"[");
                strcat(aux,(yyvsp[(7) - (10)]));
                strcat(aux,"]);");
                (yyval) = aux;
        }
    break;

  case 110:
#line 398 "parser.y"
    {
               char *result; 
               result = repl_str((yyvsp[(3) - (12)]),"%inteiro","%d");
               result = repl_str(result,"%real","%f");
               result = repl_str(result,"%texto","%c");
               result = repl_str(result,"%.5real","%.5f");
               
                char aux[100] = "printf(";
                strcat(aux,result);
                free (result);
                strcat(aux,",");
                strcat(aux,(yyvsp[(5) - (12)]));
                strcat(aux,", ");
                strcat(aux,(yyvsp[(7) - (12)]));
                strcat(aux,"[");
                strcat(aux,(yyvsp[(9) - (12)]));
                strcat(aux,"]);");
                (yyval) = aux;
        }
    break;

  case 111:
#line 419 "parser.y"
    {
               char *result; 
               result = repl_str((yyvsp[(3) - (13)]),"%inteiro","%d");
               result = repl_str(result,"%real","%f");
               result = repl_str(result,"%texto","%c");
               result = repl_str(result,"%.5real","%.5f");
               
                char aux[100] = "printf(";
                strcat(aux,result);
                free (result);
                strcat(aux,",");
                strcat(aux,(yyvsp[(5) - (13)]));
                strcat(aux,"[");
                strcat(aux,(yyvsp[(7) - (13)]));
                strcat(aux,"][");
                strcat(aux,(yyvsp[(10) - (13)]));
                strcat(aux,"]);");
                (yyval) = aux;
        }
    break;

  case 112:
#line 439 "parser.y"
    {
               char *result; 
               result = repl_str((yyvsp[(3) - (15)]),"%inteiro","%d");
               result = repl_str(result,"%real","%f");
               result = repl_str(result,"%texto","%c");
               result = repl_str(result,"%.5real","%.5f");
               
                char aux[100] = "printf(";
                strcat(aux,result);
                free (result);
                strcat(aux,",");
                strcat(aux,(yyvsp[(5) - (15)]));
                strcat(aux,"[");
                strcat(aux,(yyvsp[(7) - (15)]));
                strcat(aux,"], ");
                strcat(aux,(yyvsp[(10) - (15)]));
                strcat(aux,"[");
                strcat(aux,(yyvsp[(12) - (15)]));
                strcat(aux,"] );");
                (yyval) = aux;
        }
    break;

  case 113:
#line 461 "parser.y"
    {
               char *result; 
               result = repl_str((yyvsp[(3) - (9)]),"%inteiro","%d");
               result = repl_str(result,"%real","%f");
               result = repl_str(result,"%texto","%c");
               result = repl_str(result,"%.5real","%.5f");
               
                char aux[100] = "printf(";
                strcat(aux,result);
                free (result);
                strcat(aux,",");
                strcat(aux,(yyvsp[(5) - (9)]));
                strcat(aux,", ");
                strcat(aux,(yyvsp[(7) - (9)]));
                strcat(aux,"); ");
                (yyval) = aux;
        }
    break;

  case 114:
#line 479 "parser.y"
    {
            
               char *result; 
               result = repl_str((yyvsp[(3) - (13)]),"%inteiro","%d");
               result = repl_str(result,"%real","%f");
               result = repl_str(result,"%texto","%s");
               result = repl_str(result,"%.5real","%.5f");
               
           
            char aux[100] = "printf(";
            strcat(aux,result);
            free (result);
            strcat(aux,", ");
            strcat(aux,(yyvsp[(5) - (13)]));
            strcat(aux,", ");
            strcat(aux,(yyvsp[(7) - (13)]));
            strcat(aux,", ");
            strcat(aux,(yyvsp[(9) - (13)]));
            strcat(aux,", ");
            strcat(aux,(yyvsp[(11) - (13)]));
            strcat(aux,"); ");
            (yyval) = aux;
     
             
          }
    break;

  case 115:
#line 505 "parser.y"
    {
                    
               char *result; 
               result = repl_str((yyvsp[(3) - (10)]),"%inteiro","%d");
               result = repl_str(result,"%real","%f");
               result = repl_str(result,"%texto","%s");
               result = repl_str(result,"%.5real","%.5f");
               
           
                char aux[100] = "printf(";
                strcat(aux,result);
                free (result);
                strcat(aux,", ");
                strcat(aux,(yyvsp[(5) - (10)]));
                strcat(aux,"(");
                strcat(aux,(yyvsp[(7) - (10)]));
                strcat(aux,")); ");
                (yyval) = aux;
          }
    break;

  case 116:
#line 525 "parser.y"
    {
                    
               char *result; 
               result = repl_str((yyvsp[(3) - (12)]),"%inteiro","%d");
               result = repl_str(result,"%real","%f");
               result = repl_str(result,"%texto","%s");
               result = repl_str(result,"%.5real","%.5f");
               
           
                char aux[100] = "printf(";
                strcat(aux,result);
                free (result);
                strcat(aux,", ");
                strcat(aux,(yyvsp[(5) - (12)]));
                strcat(aux,"(");
                strcat(aux,(yyvsp[(7) - (12)]));
                strcat(aux,",");
                strcat(aux,(yyvsp[(9) - (12)]));
                strcat(aux,")); ");
                (yyval) = aux;
          }
    break;

  case 117:
#line 547 "parser.y"
    {
                    
               char *result; 
               result = repl_str((yyvsp[(3) - (12)]),"%inteiro","%d");
               result = repl_str(result,"%real","%f");
               result = repl_str(result,"%texto","%s");
               result = repl_str(result,"%.5real","%.5f");
               
           
                char aux[100] = "printf(";
                strcat(aux,result);
                free (result);
                strcat(aux,", ");
                strcat(aux,(yyvsp[(5) - (12)]));
                strcat(aux,", ");
                strcat(aux,(yyvsp[(7) - (12)]));
                strcat(aux,"(");
                strcat(aux,(yyvsp[(9) - (12)]));
                strcat(aux,")); ");
                (yyval) = aux;
          }
    break;

  case 118:
#line 569 "parser.y"
    {
                    
               char *result; 
               result = repl_str((yyvsp[(3) - (12)]),"%inteiro","%d");
               result = repl_str(result,"%real","%f");
               result = repl_str(result,"%texto","%s");
               result = repl_str(result,"%.5real","%.5f");
               
           
                char aux[100] = "printf(";
                strcat(aux,result);
                free (result);
                strcat(aux,", strcat(");
                strcat(aux,(yyvsp[(7) - (12)]));
                strcat(aux,",");
                strcat(aux,(yyvsp[(9) - (12)]));
                strcat(aux,")); ");
                (yyval) = aux;
          }
    break;

  case 119:
#line 591 "parser.y"
    { fprintf(yyout,"if (%s)",(yyvsp[(3) - (4)]));}
    break;

  case 120:
#line 592 "parser.y"
    { fprintf(yyout,"if (!%s)",(yyvsp[(4) - (5)]));}
    break;

  case 121:
#line 593 "parser.y"
    { 
                if(strcmp((yyvsp[(3) - (6)]),"itens")==0) fprintf(yyout,"if (*%s %s %s)",(yyvsp[(3) - (6)]),(yyvsp[(4) - (6)]),(yyvsp[(5) - (6)]));
                else fprintf(yyout,"if (%s %s %s)",(yyvsp[(3) - (6)]),(yyvsp[(4) - (6)]),(yyvsp[(5) - (6)]));}
    break;

  case 122:
#line 596 "parser.y"
    { 
            if (strcmp((yyvsp[(4) - (6)]),"==") == 0 && strcmp((yyvsp[(3) - (6)]),"tex1") == 0 && strcmp((yyvsp[(5) - (6)]),"tex2") == 0) fprintf(yyout,"if (strcmp(%s,%s) == 0)",(yyvsp[(3) - (6)]),(yyvsp[(5) - (6)]));
            else fprintf(yyout,"if (%s %s %s)",(yyvsp[(3) - (6)]),(yyvsp[(4) - (6)]),(yyvsp[(5) - (6)]));
            }
    break;

  case 123:
#line 600 "parser.y"
    { 
                fprintf(yyout,"if ((%s[%s] %% %s) %s %s)",(yyvsp[(4) - (13)]),(yyvsp[(6) - (13)]),(yyvsp[(9) - (13)]),(yyvsp[(11) - (13)]),(yyvsp[(12) - (13)]));}
    break;

  case 124:
#line 602 "parser.y"
    {
                fprintf(yyout,"if (strcmp(toupper(%s),\"%s\") == 0)",(yyvsp[(5) - (11)]),(yyvsp[(9) - (11)]));}
    break;

  case 125:
#line 604 "parser.y"
    {
                fprintf(yyout,"if (%s %s (%s[%s]%s'%s'))",(yyvsp[(3) - (15)]),(yyvsp[(4) - (15)]),(yyvsp[(6) - (15)]),(yyvsp[(8) - (15)]),(yyvsp[(10) - (15)]),(yyvsp[(12) - (15)]));}
    break;

  case 126:
#line 606 "parser.y"
    {
                fprintf(yyout,"if (strcmp(%s,%s)==0 || strcmp(%s,%s)==0 || strcmp(%s,%s)==0 || strcmp(%s,%s)==0)",(yyvsp[(3) - (18)]),(yyvsp[(5) - (18)]),(yyvsp[(7) - (18)]),(yyvsp[(9) - (18)]),(yyvsp[(11) - (18)]),(yyvsp[(13) - (18)]),(yyvsp[(15) - (18)]),(yyvsp[(17) - (18)]));}
    break;

  case 127:
#line 608 "parser.y"
    {
                fprintf(yyout,"if (%s[%s] %s %s[%s%s])",(yyvsp[(3) - (13)]),(yyvsp[(5) - (13)]),(yyvsp[(7) - (13)]),(yyvsp[(8) - (13)]),(yyvsp[(10) - (13)]),(yyvsp[(11) - (13)]));}
    break;

  case 128:
#line 610 "parser.y"
    {
                fprintf(yyout,"if (%s[%s] %s %s)",(yyvsp[(3) - (9)]),(yyvsp[(5) - (9)]),(yyvsp[(7) - (9)]),(yyvsp[(8) - (9)]));}
    break;

  case 129:
#line 612 "parser.y"
    {
                fprintf(yyout,"if (%s %% %s[%s] %s %s)",(yyvsp[(3) - (11)]),(yyvsp[(5) - (11)]),(yyvsp[(7) - (11)]),(yyvsp[(9) - (11)]),(yyvsp[(10) - (11)]));}
    break;

  case 130:
#line 614 "parser.y"
    {
                fprintf(yyout," if (%s[%s] %s %s[%s])",(yyvsp[(3) - (12)]),(yyvsp[(5) - (12)]),(yyvsp[(7) - (12)]),(yyvsp[(8) - (12)]),(yyvsp[(10) - (12)]));}
    break;

  case 131:
#line 616 "parser.y"
    {
                fprintf(yyout,"if (%s[%s] %s %s[%s%s%s])",(yyvsp[(3) - (14)]),(yyvsp[(5) - (14)]),(yyvsp[(7) - (14)]),(yyvsp[(8) - (14)]),(yyvsp[(10) - (14)]),(yyvsp[(11) - (14)]),(yyvsp[(12) - (14)]));}
    break;

  case 132:
#line 618 "parser.y"
    {
                fprintf(yyout,"if (%s %s %s[%s])",(yyvsp[(3) - (9)]),(yyvsp[(4) - (9)]),(yyvsp[(5) - (9)]),(yyvsp[(7) - (9)]));}
    break;

  case 133:
#line 620 "parser.y"
    {
                fprintf(yyout,"if (strcmp(%s,\"%s\") != 0)",(yyvsp[(3) - (8)]),(yyvsp[(6) - (8)]));}
    break;

  case 134:
#line 627 "parser.y"
    {fprintf(yyout,"case %s %s",(yyvsp[(2) - (3)]),(yyvsp[(3) - (3)]));}
    break;

  case 135:
#line 628 "parser.y"
    {fprintf(yyout,"case %s",(yyvsp[(2) - (2)]));}
    break;

  case 136:
#line 633 "parser.y"
    { char aux[10]; strcpy(aux,(yyvsp[(1) - (2)])); strcat(aux,": "); (yyval) = aux;}
    break;

  case 137:
#line 634 "parser.y"
    { char aux[10] = "'"; strcat(aux,(yyvsp[(2) - (4)])); strcat(aux,"': "); (yyval) = aux;  }
    break;

  case 138:
#line 635 "parser.y"
    { char aux[10] = "'*': "; (yyval) = aux; }
    break;

  case 139:
#line 636 "parser.y"
    {  char aux[10]; strcpy(aux,(yyvsp[(1) - (6)])); strcat(aux," ... "); strcat(aux,(yyvsp[(5) - (6)])); strcat(aux,":");  (yyval) = aux; }
    break;

  case 140:
#line 637 "parser.y"
    { char aux[10]; strcpy(aux,(yyvsp[(1) - (8)])); strcat(aux," ... "); strcat(aux,(yyvsp[(7) - (8)])); strcat(aux,":");  (yyval) = aux; }
    break;

  case 141:
#line 642 "parser.y"
    { char aux[100]; strcpy(aux,(yyvsp[(1) - (1)])); strcat(aux," break; "); (yyval) = aux; }
    break;

  case 142:
#line 643 "parser.y"
    { 
        char aux[100]; strcpy(aux,(yyvsp[(1) - (9)])); strcat(aux,"("); strcat(aux,(yyvsp[(3) - (9)])); strcat(aux,","); strcat(aux,(yyvsp[(5) - (9)])); strcat(aux,",&"); strcat(aux,(yyvsp[(7) - (9)])); strcat(aux,"); break; "); (yyval) = aux;   }
    break;

  case 143:
#line 645 "parser.y"
    { char aux[100]; strcpy(aux,(yyvsp[(1) - (6)])); strcat(aux,"="); strcat(aux,(yyvsp[(3) - (6)])); strcat(aux,(yyvsp[(4) - (6)])); strcat(aux,(yyvsp[(5) - (6)])); strcat(aux,"; break; "); (yyval) = aux;  }
    break;

  case 144:
#line 646 "parser.y"
    { char aux[100]; strcpy(aux,(yyvsp[(1) - (6)])); strcat(aux,"="); strcat(aux,(yyvsp[(3) - (6)])); strcat(aux,"*"); strcat(aux,(yyvsp[(5) - (6)])); strcat(aux,"; break; "); (yyval) = aux; }
    break;


/* Line 1267 of yacc.c.  */
#line 2847 "parser.tab.c"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 650 "parser.y"


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
