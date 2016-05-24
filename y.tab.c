
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
	
	struct table {
		char tipo[10];
		char nome[30];
		char vet[100];
		int flag_param;
		int flag_char;
	};
	
	struct table tabela[300];
	int current_tab_tipo = 0, current_tab_nome = 0;
	int ident = 0;


/* Line 189 of yacc.c  */
#line 99 "y.tab.c"

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
     DOISPONTOS = 264,
     ASPASIMPLES = 265,
     EXCLAMACAO = 266,
     RAIZQUADRADA = 267,
     CONCATENA = 268,
     POTENCIA = 269,
     MAIUSCULA = 270,
     TAMANHOTEXTO = 271,
     E = 272,
     OU = 273,
     SOMASUB = 274,
     NUMINT = 275,
     NUMREAL = 276,
     SE = 277,
     SENAO = 278,
     FACA = 279,
     ENQUANTO = 280,
     PARA = 281,
     RETORNE = 282,
     INTEIRO = 283,
     REAL = 284,
     TEXTO = 285,
     LOGICO = 286,
     VERDADEIRO = 287,
     FALSO = 288,
     SEMRETORNO = 289,
     ESCOLHA = 290,
     CASO = 291,
     PADRAO = 292,
     INTERROMPA = 293,
     PRINCIPAL = 294,
     LEIA = 295,
     ESCREVA = 296,
     PORREAL = 297,
     PORTEXTO = 298,
     PORINTEIRO = 299,
     ID = 300,
     MULTDIV = 301,
     RELACIONAL = 302,
     ATRIBUICAO = 303,
     COMENTARIO = 304,
     VIRGULA = 305,
     PONTOEVIRGULA = 306,
     STRING = 307,
     CARACTERE = 308,
     LOWER_THAN_SENAO = 309
   };
#endif
/* Tokens.  */
#define ABRECHAVE 258
#define FECHACHAVE 259
#define ABRECOLCHETE 260
#define FECHACOLCHETE 261
#define ABREPARENTESE 262
#define FECHAPARENTESE 263
#define DOISPONTOS 264
#define ASPASIMPLES 265
#define EXCLAMACAO 266
#define RAIZQUADRADA 267
#define CONCATENA 268
#define POTENCIA 269
#define MAIUSCULA 270
#define TAMANHOTEXTO 271
#define E 272
#define OU 273
#define SOMASUB 274
#define NUMINT 275
#define NUMREAL 276
#define SE 277
#define SENAO 278
#define FACA 279
#define ENQUANTO 280
#define PARA 281
#define RETORNE 282
#define INTEIRO 283
#define REAL 284
#define TEXTO 285
#define LOGICO 286
#define VERDADEIRO 287
#define FALSO 288
#define SEMRETORNO 289
#define ESCOLHA 290
#define CASO 291
#define PADRAO 292
#define INTERROMPA 293
#define PRINCIPAL 294
#define LEIA 295
#define ESCREVA 296
#define PORREAL 297
#define PORTEXTO 298
#define PORINTEIRO 299
#define ID 300
#define MULTDIV 301
#define RELACIONAL 302
#define ATRIBUICAO 303
#define COMENTARIO 304
#define VIRGULA 305
#define PONTOEVIRGULA 306
#define STRING 307
#define CARACTERE 308
#define LOWER_THAN_SENAO 309




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 249 "y.tab.c"

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
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   499

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  78
/* YYNRULES -- Number of rules.  */
#define YYNRULES  153
/* YYNRULES -- Number of states.  */
#define YYNSTATES  294

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    12,    14,    17,    20,
      24,    30,    35,    36,    39,    40,    44,    50,    55,    58,
      59,    62,    64,    68,    72,    74,    77,    80,    83,    86,
      90,    91,    95,    96,   100,   101,   105,   106,   108,   110,
     112,   114,   116,   118,   120,   122,   124,   131,   138,   140,
     141,   144,   147,   148,   151,   154,   158,   161,   164,   165,
     167,   169,   171,   173,   175,   177,   179,   181,   183,   185,
     187,   190,   192,   198,   206,   212,   224,   232,   241,   249,
     256,   261,   268,   271,   273,   275,   278,   282,   286,   287,
     289,   291,   298,   299,   303,   304,   305,   307,   311,   312,
     316,   318,   321,   326,   327,   331,   334,   338,   339,   342,
     346,   347,   350,   354,   356,   358,   360,   363,   364,   366,
     370,   373,   377,   378,   381,   383,   387,   388,   392,   394,
     396,   398,   400,   402,   404,   406,   408,   410,   412,   414,
     416,   419,   421,   423,   428,   435,   440,   442,   444,   449,
     451,   452,   455,   459
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      56,     0,    -1,    57,    -1,    58,    -1,    58,    57,    -1,
      59,    -1,    79,    -1,    73,    63,    -1,    30,    60,    -1,
      74,    61,    62,    -1,     5,    75,     6,    48,    66,    -1,
       5,    75,     6,    61,    -1,    -1,    50,    60,    -1,    -1,
      74,    64,    65,    -1,     5,    75,     6,    48,    66,    -1,
       5,    75,     6,    64,    -1,    48,   106,    -1,    -1,    50,
      63,    -1,    51,    -1,     3,    67,     4,    -1,    66,    50,
      66,    -1,    68,    -1,    75,    69,    -1,    76,    70,    -1,
      77,    71,    -1,    78,    72,    -1,    50,    75,    69,    -1,
      -1,    50,    76,    70,    -1,    -1,    50,    77,    71,    -1,
      -1,    50,    78,    72,    -1,    -1,    28,    -1,    29,    -1,
      34,    -1,    31,    -1,    45,    -1,    20,    -1,    21,    -1,
      52,    -1,    53,    -1,    73,    74,     7,    80,     8,    84,
      -1,    73,    39,     7,    80,     8,    84,    -1,    81,    -1,
      -1,    83,    82,    -1,    50,    81,    -1,    -1,    73,    74,
      -1,    30,    74,    -1,     3,    85,     4,    -1,    59,    85,
      -1,    86,    85,    -1,    -1,    87,    -1,    84,    -1,    88,
      -1,    89,    -1,    90,    -1,    91,    -1,    92,    -1,    93,
      -1,    94,    -1,    99,    -1,    97,    -1,   106,    51,    -1,
      51,    -1,    22,     7,   106,     8,    86,    -1,    22,     7,
     106,     8,    86,    23,    86,    -1,    25,     7,   106,     8,
      86,    -1,    26,     7,    74,    48,   106,    51,   106,    51,
     123,     8,    86,    -1,    24,    86,    25,     7,   106,     8,
      51,    -1,    35,     7,   107,     8,     3,   102,   105,     4,
      -1,    40,     7,    77,    50,   107,     8,    51,    -1,    41,
       7,    77,   100,     8,    51,    -1,    15,     7,   101,     8,
      -1,    13,     7,    98,    50,    98,     8,    -1,    38,    51,
      -1,    77,    -1,   107,    -1,    27,    51,    -1,    27,   106,
      51,    -1,    50,   106,   100,    -1,    -1,   107,    -1,    78,
      -1,    36,   124,   103,     9,   104,   102,    -1,    -1,    50,
     124,   103,    -1,    -1,    -1,    86,    -1,    37,     9,    86,
      -1,    -1,   107,    48,   106,    -1,   109,    -1,    74,   108,
      -1,     5,   106,     6,   108,    -1,    -1,    18,   111,   110,
      -1,   111,   110,    -1,    18,   111,   110,    -1,    -1,   113,
     112,    -1,    17,   113,   112,    -1,    -1,   117,   115,    -1,
      11,   117,   115,    -1,    32,    -1,    33,    -1,    47,    -1,
     114,   117,    -1,    -1,    19,    -1,   116,   119,   118,    -1,
     119,   118,    -1,   116,   119,   118,    -1,    -1,   122,   121,
      -1,    46,    -1,   120,   122,   121,    -1,    -1,     7,   106,
       8,    -1,   107,    -1,   129,    -1,    76,    -1,    75,    -1,
      78,    -1,    77,    -1,   125,    -1,   126,    -1,   127,    -1,
      95,    -1,    96,    -1,    75,    -1,   116,    75,    -1,   123,
      -1,    78,    -1,    12,     7,   117,     8,    -1,    14,     7,
     117,    50,   117,     8,    -1,    16,     7,   128,     8,    -1,
     107,    -1,    77,    -1,    74,     7,   130,     8,    -1,   131,
      -1,    -1,   106,   132,    -1,    50,   106,   132,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    35,    35,    37,    92,   149,   150,   152,   162,   169,
     186,   195,   204,   206,   212,   214,   225,   233,   241,   247,
     249,   255,   257,   265,   272,   274,   280,   286,   292,   299,
     306,   308,   315,   317,   324,   326,   333,   335,   336,   337,
     338,   340,   342,   344,   346,   348,   350,   361,   372,   373,
     375,   382,   388,   390,   396,   403,   411,   417,   423,   425,
     426,   427,   428,   429,   430,   431,   432,   433,   434,   435,
     437,   443,   445,   454,   466,   477,   514,   525,   545,   566,
     582,   591,   602,   604,   605,   607,   608,   616,   623,   625,
     626,   628,   640,   642,   650,   652,   653,   655,   661,   663,
     670,   672,   679,   687,   689,   696,   703,   710,   712,   727,
     734,   737,   743,   750,   751,   753,   755,   761,   763,   765,
     771,   778,   785,   787,   794,   796,   802,   805,   812,   813,
     814,   815,   816,   817,   818,   819,   820,   821,   822,   824,
     825,   832,   833,   835,   844,   855,   864,   865,   867,   884,
     885,   887,   894,   901
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ABRECHAVE", "FECHACHAVE",
  "ABRECOLCHETE", "FECHACOLCHETE", "ABREPARENTESE", "FECHAPARENTESE",
  "DOISPONTOS", "ASPASIMPLES", "EXCLAMACAO", "RAIZQUADRADA", "CONCATENA",
  "POTENCIA", "MAIUSCULA", "TAMANHOTEXTO", "E", "OU", "SOMASUB", "NUMINT",
  "NUMREAL", "SE", "SENAO", "FACA", "ENQUANTO", "PARA", "RETORNE",
  "INTEIRO", "REAL", "TEXTO", "LOGICO", "VERDADEIRO", "FALSO",
  "SEMRETORNO", "ESCOLHA", "CASO", "PADRAO", "INTERROMPA", "PRINCIPAL",
  "LEIA", "ESCREVA", "PORREAL", "PORTEXTO", "PORINTEIRO", "ID", "MULTDIV",
  "RELACIONAL", "ATRIBUICAO", "COMENTARIO", "VIRGULA", "PONTOEVIRGULA",
  "STRING", "CARACTERE", "LOWER_THAN_SENAO", "$accept", "programa",
  "declaracao_lista", "declaracao", "var_declaracao", "decl_texto",
  "decl_texto_vet", "decl_texto_fat", "var_declaracao_meio",
  "var_declaracao_vet", "var_declaracao_fat", "var_vet_atr",
  "var_vet_dentro", "conteudo_vetor", "vetor_int", "vetor_real",
  "vetor_string", "vetor_caractere", "tipo_especificador", "id", "numint",
  "numreal", "string", "caractere", "fun_declaracao", "params",
  "param_lista", "param_lista_fat", "param", "composto_decl",
  "dentro_funcao", "comando", "expressao_decl", "selecao_decl",
  "iteracao_decl", "para_decl", "facaenq_decl", "escolha_decl",
  "leia_decl", "escreva_decl", "maiuscula_decl", "concatena_decl",
  "interrompa_decl", "concatena_fator", "retorno_decl", "escreva_fator",
  "char_fator", "escolhas_dentro", "escolhas_dentro_mais", "comando_caso",
  "padrao_opc", "expressao", "var", "var_fat", "expressao_logica",
  "expressao_logica_fat", "termo_logico", "termo_logico_fat",
  "expressao_simples", "relacional", "expressao_simples_fat", "somasub",
  "expressao_soma", "expressao_soma_fat", "termo", "multdiv", "termo_fat",
  "fator", "expressao_unaria", "escolha_simples", "raizq_decl",
  "potencia_decl", "tamanhotexto_decl", "texto_fator", "ativacao", "args",
  "arg_lista", "args_fat", 0
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
     305,   306,   307,   308,   309
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    57,    57,    58,    58,    59,    59,    60,
      61,    61,    61,    62,    62,    63,    64,    64,    64,    64,
      65,    65,    66,    67,    67,    68,    68,    68,    68,    69,
      69,    70,    70,    71,    71,    72,    72,    73,    73,    73,
      73,    74,    75,    76,    77,    78,    79,    79,    80,    80,
      81,    82,    82,    83,    83,    84,    85,    85,    85,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      87,    87,    88,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    98,    99,    99,   100,   100,   101,
     101,   102,   102,   103,   103,   104,   104,   105,   105,   106,
     106,   107,   108,   108,   109,   109,   110,   110,   111,   112,
     112,   113,   113,   113,   113,   114,   115,   115,   116,   117,
     117,   118,   118,   119,   120,   121,   121,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   123,
     123,   124,   124,   125,   126,   127,   128,   128,   129,   130,
     130,   131,   132,   132
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     2,     2,     3,
       5,     4,     0,     2,     0,     3,     5,     4,     2,     0,
       2,     1,     3,     3,     1,     2,     2,     2,     2,     3,
       0,     3,     0,     3,     0,     3,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     6,     6,     1,     0,
       2,     2,     0,     2,     2,     3,     2,     2,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     5,     7,     5,    11,     7,     8,     7,     6,
       4,     6,     2,     1,     1,     2,     3,     3,     0,     1,
       1,     6,     0,     3,     0,     0,     1,     3,     0,     3,
       1,     2,     4,     0,     3,     2,     3,     0,     2,     3,
       0,     2,     3,     1,     1,     1,     2,     0,     1,     3,
       2,     3,     0,     2,     1,     3,     0,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     4,     6,     4,     1,     1,     4,     1,
       0,     2,     3,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    37,    38,     0,    40,    39,     0,     2,     3,     5,
       0,     6,    41,     8,    12,     1,     4,     0,     7,    19,
       0,    14,    49,     0,    49,     0,     0,    42,     0,     0,
       9,     0,     0,     0,    48,    52,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   118,    43,   113,   114,
      44,    45,   103,   131,   130,   133,   132,   137,   138,    18,
     128,   100,   107,   110,     0,   117,   122,   126,   134,   135,
     136,   129,     0,    21,    15,    12,    13,    54,    53,     0,
       0,    50,    19,     0,     0,   128,   117,     0,     0,     0,
       0,     0,   107,     0,   150,   101,     0,     0,   105,     0,
     108,   122,   115,     0,   111,     0,   120,   124,     0,   123,
      20,    19,     0,    11,    58,    47,    51,     0,    17,    46,
     127,   112,     0,   103,    83,     0,    84,     0,    90,     0,
      89,   147,   146,     0,   104,     0,   153,     0,   149,    99,
     107,   110,   119,   116,   122,   126,     0,    10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    71,    58,     0,
      60,     0,    58,    59,    61,    62,    63,    64,    65,    66,
      67,    69,    68,     0,    16,   143,     0,     0,    80,   145,
     103,     0,   151,   148,   106,   109,   121,   125,     0,     0,
      24,    30,    32,    34,    36,     0,     0,     0,     0,    85,
       0,     0,    82,     0,     0,    56,    55,    57,    70,     0,
       0,   102,   153,     0,    22,     0,    25,     0,    26,     0,
      27,     0,    28,     0,     0,     0,     0,    86,     0,     0,
      88,    81,   144,   152,    23,    30,    32,    34,    36,     0,
       0,     0,     0,     0,     0,     0,     0,    29,    31,    33,
      35,    72,     0,    74,     0,    92,     0,    88,     0,     0,
       0,     0,     0,    98,     0,    87,    79,    73,    76,     0,
     139,   142,     0,   141,    94,     0,     0,    78,     0,   140,
       0,     0,     0,    77,     0,    94,    95,    97,     0,    93,
      96,    92,    75,    91
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,   158,    13,    21,    30,    18,    26,
      74,   147,   189,   190,   216,   218,   220,   222,    32,    52,
      53,    54,    55,    56,    11,    33,    34,    81,    35,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
      57,    58,   171,   125,   172,   246,   129,   263,   281,   291,
     276,   173,    60,    95,    61,    98,    62,   100,    63,   103,
     104,    64,    65,   106,    66,   108,   109,    67,   273,   274,
      68,    69,    70,   133,    71,   137,   138,   182
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -141
static const yytype_int16 yypact[] =
{
     108,  -141,  -141,   -11,  -141,  -141,    21,  -141,   108,  -141,
       2,  -141,  -141,  -141,    47,  -141,  -141,    49,  -141,    17,
      43,    24,   132,    43,   132,   389,    -7,  -141,    61,   -11,
    -141,   -11,   -11,    77,  -141,    36,    82,    83,   389,   431,
      85,    87,    88,    94,    96,   404,  -141,  -141,  -141,  -141,
    -141,  -141,    48,  -141,  -141,  -141,  -141,  -141,  -141,  -141,
      59,  -141,    92,    98,   446,    64,    97,    67,  -141,  -141,
    -141,  -141,   -11,  -141,  -141,    13,  -141,  -141,  -141,   115,
     132,  -141,    28,   115,   111,  -141,    64,   431,   -13,   431,
     -16,   -13,    92,   389,   389,  -141,   389,   404,  -141,   404,
    -141,    97,  -141,   431,  -141,   446,  -141,  -141,   446,  -141,
    -141,    30,   117,  -141,   252,  -141,  -141,   338,  -141,  -141,
    -141,  -141,   116,   118,  -141,    75,  -141,    79,  -141,   119,
    -141,  -141,  -141,   122,  -141,   125,    84,   133,  -141,  -141,
      92,    98,  -141,  -141,    97,    67,     5,  -141,   136,   295,
     137,   139,   361,   140,    89,   143,   145,  -141,   252,   -11,
    -141,   149,   252,  -141,  -141,  -141,  -141,  -141,  -141,  -141,
    -141,  -141,  -141,   104,  -141,  -141,   -13,   431,  -141,  -141,
     118,   389,  -141,  -141,  -141,  -141,  -141,  -141,   106,   155,
    -141,   114,   120,   124,   127,   389,   142,   389,   -11,  -141,
     121,   -11,  -141,   126,   126,  -141,  -141,  -141,  -141,   160,
     171,  -141,    84,   117,  -141,    43,  -141,   159,  -141,   126,
    -141,   128,  -141,   174,   176,   179,   141,  -141,   180,   134,
     146,  -141,  -141,  -141,  -141,   114,   120,   124,   127,   295,
     389,   295,   389,   187,   -11,   389,   183,  -141,  -141,  -141,
    -141,   169,   185,  -141,   147,   163,   194,   146,   152,   295,
     153,   389,    31,   168,   156,  -141,  -141,  -141,  -141,   157,
    -141,  -141,    43,  -141,   161,   197,   205,  -141,    62,  -141,
      31,   203,   295,  -141,   206,   161,   295,  -141,   295,  -141,
    -141,   163,  -141,  -141
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -141,  -141,   207,  -141,    38,   184,   148,  -141,   150,   138,
    -141,  -104,  -141,  -141,   -10,   -12,    -9,    -8,     7,    -1,
     -20,  -140,   -71,   -86,  -141,   202,   151,  -141,  -141,   -60,
    -113,  -137,  -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,
    -141,  -141,  -141,    51,  -141,   -28,  -141,   -59,   -52,  -141,
    -141,   -24,     9,    54,  -141,   -81,   -35,    95,   158,  -141,
     154,   -61,   -23,   -65,   -37,  -141,    90,   130,   -39,   -36,
    -141,  -141,  -141,  -141,  -141,  -141,  -141,    29
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      28,    59,    14,    36,   128,   105,   192,    10,   146,    19,
      92,   134,   196,   174,    84,    10,    86,   124,    20,   115,
     131,    15,    23,   119,    24,    27,    47,   101,    14,    12,
      77,    78,    12,    23,    12,    23,   142,    51,     9,    50,
     105,    17,   188,    72,    73,   205,     9,    12,    85,   207,
      46,    27,    20,    93,    85,    94,    22,    50,    51,   184,
     194,   112,   140,    27,   122,    25,   127,    75,   144,   135,
     136,   111,   139,    85,    29,   193,   117,   236,    25,   186,
     143,    46,    27,   105,    51,    79,    80,   123,    82,   123,
     123,    83,    87,    59,    88,    89,    85,   126,    85,   130,
     132,    90,   251,    91,   253,   124,    85,    96,    85,   234,
      97,   102,    85,   107,    85,    99,    46,    85,   114,   120,
     146,   159,   267,    93,   175,   176,   191,   178,   200,   177,
     179,   180,   229,   230,   181,   238,     1,     2,     3,     4,
     202,   183,     5,   195,   197,   287,   198,   201,   237,   290,
     203,   292,   204,   206,   210,   208,   213,   212,   111,   214,
       1,     2,    31,     4,   215,   159,     5,   224,   231,   159,
     217,   223,   227,   225,   219,   123,   271,   221,    50,   232,
      47,    51,   239,   240,   244,   126,    85,   241,   243,   242,
     255,   258,   259,   260,   271,   235,   245,   226,   261,   262,
     123,   272,   264,   266,   268,   275,   282,   277,   278,   283,
     228,   280,   286,    76,   288,    16,   252,   272,   254,   272,
     118,   257,   110,   113,   248,   247,    37,   209,   249,   265,
     250,   116,   293,   289,   211,   187,   185,   269,   145,   284,
     121,   233,   270,   123,   285,     0,     0,     0,     0,     0,
       0,     0,   279,   256,     0,   114,     0,   141,   270,    38,
     270,     0,     0,    39,    40,    41,    42,    43,    44,     0,
      45,    46,    27,    47,   148,     0,   149,   150,   151,   152,
       1,     2,     3,     4,    48,    49,     5,   153,     0,     0,
     154,     0,   155,   156,     0,     0,     0,    12,   114,     0,
       0,     0,    38,   157,    50,    51,    39,    40,    41,    42,
      43,    44,     0,    45,    46,    27,    47,   148,     0,   149,
     150,   151,   152,     0,     0,     0,     0,    48,    49,     0,
     153,     0,     0,   154,     0,   155,   156,     0,     0,     0,
      12,   146,     0,     0,     0,    38,   157,    50,    51,    39,
      40,    41,    42,    43,    44,     0,    45,    46,    27,    47,
       0,     0,     0,     0,     0,     0,     0,     0,    38,     0,
      48,    49,    39,    40,    41,    42,    43,    44,     0,    45,
      46,    27,    47,    12,     0,     0,     0,     0,     0,     0,
      50,    51,     0,    48,    49,     0,    38,     0,     0,     0,
      39,    40,    41,    42,    43,    44,    12,    45,    46,    27,
      47,    38,   199,    50,    51,    39,    40,    41,    42,    43,
      44,    48,    49,    46,    27,    47,     0,     0,     0,     0,
       0,     0,     0,     0,    12,     0,    48,    49,    38,     0,
       0,    50,    51,    40,    41,    42,    43,    44,     0,    12,
      46,    27,    47,    38,     0,     0,    50,    51,    40,    41,
      42,    43,    44,     0,     0,     0,    27,    47,     0,     0,
       0,     0,     0,     0,     0,     0,    12,     0,     0,     0,
       0,     0,     0,    50,    51,     0,     0,     0,     0,     0,
       0,    12,     0,     0,     0,     0,     0,     0,    50,    51
};

static const yytype_int16 yycheck[] =
{
      20,    25,     3,    23,    90,    66,   146,     0,     3,    10,
      45,    92,   149,   117,    38,     8,    39,    88,     5,    79,
      91,     0,     5,    83,     7,    20,    21,    64,    29,    45,
      31,    32,    45,     5,    45,     5,   101,    53,     0,    52,
     101,    39,   146,    50,    51,   158,     8,    45,    39,   162,
      19,    20,     5,     5,    45,     7,     7,    52,    53,   140,
     146,    48,    97,    20,    87,    48,    89,     6,   105,    93,
      94,    72,    96,    64,    50,   146,    48,   217,    48,   144,
     103,    19,    20,   144,    53,     8,    50,    88,     6,    90,
      91,     8,     7,   117,     7,     7,    87,    88,    89,    90,
      91,     7,   239,     7,   241,   176,    97,    48,    99,   213,
      18,    47,   103,    46,   105,    17,    19,   108,     3,     8,
       3,   114,   259,     5,     8,    50,   146,     8,   152,    50,
       8,     6,   203,   204,    50,   221,    28,    29,    30,    31,
      51,     8,    34,     7,     7,   282,     7,     7,   219,   286,
       7,   288,     7,     4,   177,    51,    50,   181,   159,     4,
      28,    29,    30,    31,    50,   158,    34,    25,     8,   162,
      50,   195,    51,   197,    50,   176,   262,    50,    52,     8,
      21,    53,     8,     7,    50,   176,   177,     8,     8,    48,
       3,     8,    23,     8,   280,   215,    50,   198,    51,    36,
     201,   262,     8,    51,    51,    37,     9,    51,    51,     4,
     201,    50,     9,    29,     8,     8,   240,   278,   242,   280,
      82,   245,    72,    75,   236,   235,    24,   176,   237,   257,
     238,    80,   291,   285,   180,   145,   141,   261,   108,   278,
      86,   212,   262,   244,   280,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   272,   244,    -1,     3,    -1,    99,   278,     7,
     280,    -1,    -1,    11,    12,    13,    14,    15,    16,    -1,
      18,    19,    20,    21,    22,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    -1,
      38,    -1,    40,    41,    -1,    -1,    -1,    45,     3,    -1,
      -1,    -1,     7,    51,    52,    53,    11,    12,    13,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    -1,    24,
      25,    26,    27,    -1,    -1,    -1,    -1,    32,    33,    -1,
      35,    -1,    -1,    38,    -1,    40,    41,    -1,    -1,    -1,
      45,     3,    -1,    -1,    -1,     7,    51,    52,    53,    11,
      12,    13,    14,    15,    16,    -1,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     7,    -1,
      32,    33,    11,    12,    13,    14,    15,    16,    -1,    18,
      19,    20,    21,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    -1,    32,    33,    -1,     7,    -1,    -1,    -1,
      11,    12,    13,    14,    15,    16,    45,    18,    19,    20,
      21,     7,    51,    52,    53,    11,    12,    13,    14,    15,
      16,    32,    33,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    32,    33,     7,    -1,
      -1,    52,    53,    12,    13,    14,    15,    16,    -1,    45,
      19,    20,    21,     7,    -1,    -1,    52,    53,    12,    13,
      14,    15,    16,    -1,    -1,    -1,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    28,    29,    30,    31,    34,    56,    57,    58,    59,
      73,    79,    45,    60,    74,     0,    57,    39,    63,    74,
       5,    61,     7,     5,     7,    48,    64,    20,    75,    50,
      62,    30,    73,    80,    81,    83,    75,    80,     7,    11,
      12,    13,    14,    15,    16,    18,    19,    21,    32,    33,
      52,    53,    74,    75,    76,    77,    78,    95,    96,   106,
     107,   109,   111,   113,   116,   117,   119,   122,   125,   126,
     127,   129,    50,    51,    65,     6,    60,    74,    74,     8,
      50,    82,     6,     8,   106,   107,   117,     7,     7,     7,
       7,     7,   111,     5,     7,   108,    48,    18,   110,    17,
     112,   119,    47,   114,   115,   116,   118,    46,   120,   121,
      63,    74,    48,    61,     3,    84,    81,    48,    64,    84,
       8,   115,   117,    74,    77,    98,   107,   117,    78,   101,
     107,    77,   107,   128,   110,   106,   106,   130,   131,   106,
     111,   113,   118,   117,   119,   122,     3,    66,    22,    24,
      25,    26,    27,    35,    38,    40,    41,    51,    59,    73,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    97,    99,   106,    66,     8,    50,    50,     8,     8,
       6,    50,   132,     8,   110,   112,   118,   121,    66,    67,
      68,    75,    76,    77,    78,     7,    86,     7,     7,    51,
     106,     7,    51,     7,     7,    85,     4,    85,    51,    98,
     117,   108,   106,    50,     4,    50,    69,    50,    70,    50,
      71,    50,    72,   106,    25,   106,    74,    51,   107,    77,
      77,     8,     8,   132,    66,    75,    76,    77,    78,     8,
       7,     8,    48,     8,    50,    50,   100,    69,    70,    71,
      72,    86,   106,    86,   106,     3,   107,   106,     8,    23,
       8,    51,    36,   102,     8,   100,    51,    86,    51,   106,
      75,    78,   116,   123,   124,    37,   105,    51,    51,    75,
      50,   103,     9,     4,   123,   124,     9,    86,     8,   103,
      86,   104,    86,   102
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
        case 2:

/* Line 1455 of yacc.c  */
#line 35 "parser.y"
    { fprintf(yyout,"%s", (yyvsp[(1) - (1)])); }
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 37 "parser.y"
    { 	
											char aux[10000];
											strcpy(aux, (yyvsp[(1) - (1)]));
											int i;
											char *result;
											for(i = 0; i<current_tab_tipo ; i++){
												if(tabela[i].flag_param == 1){
													char temp_par[10];
													char result_par[15];
													char temp_vir[10];
													char result_vir[20];
													
													strcpy(temp_par, "(");
													strcat(temp_par, tabela[i].tipo);
													strcpy(result_par, temp_par);
													strcat(result_par, "*");
													strcat(temp_par, tabela[i].nome);
													strcat(result_par, tabela[i].nome);
													
													strcpy(temp_vir, ", ");
													strcat(temp_vir, tabela[i].tipo);
													strcpy(result_vir, temp_vir);
													strcat(result_vir, "*");
													strcat(temp_vir, tabela[i].nome);
													strcat(result_vir, tabela[i].nome);
													
													result = repl_str(aux, temp_par, result_par);
													result = repl_str(result, temp_vir, result_vir);
													strcpy(aux, result);
												}
												if(tabela[i].flag_char == 1){
													char temp_decl[40];
													char result_decl[40];
													char temp_gets[70];
													char result_gets[90];
													
													strcpy(temp_decl, tabela[i].nome);
													strcat(temp_decl, "[50]");
													strcpy(result_decl, tabela[i].nome);
													
													strcpy(temp_gets, "gets(");
													strcat(temp_gets, tabela[i].nome);
													strcat(temp_gets, ")");
													strcpy(result_gets, "scanf(\" %c\", ");
													strcat(result_gets, tabela[i].nome);
													strcat(result_gets, ")");
													
													result = repl_str(aux, temp_decl, result_decl);
													result = repl_str(result, temp_gets, result_gets);
													strcpy(aux, result);
												}
											}
											free(result);
											(yyval) = strdup(aux);
										}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 92 "parser.y"
    {
														char aux[10000];
														strcpy(aux, (yyvsp[(1) - (2)]));
														strcat(aux, (yyvsp[(2) - (2)]));
														int i;
														char *result;
														for(i = 0; i<current_tab_tipo ; i++){
															if(tabela[i].flag_param == 1){
																char temp_par[10];
																char result_par[15];
																char temp_vir[10];
																char result_vir[20];
																
																strcpy(temp_par, "(");
																strcat(temp_par, tabela[i].tipo);
																strcpy(result_par, temp_par);
																strcat(result_par, "*");
																strcat(temp_par, tabela[i].nome);
																strcat(result_par, tabela[i].nome);
																
																strcpy(temp_vir, ", ");
																strcat(temp_vir, tabela[i].tipo);
																strcpy(result_vir, temp_vir);
																strcat(result_vir, "*");
																strcat(temp_vir, tabela[i].nome);
																strcat(result_vir, tabela[i].nome);
																
																result = repl_str(aux, temp_par, result_par);
																result = repl_str(result, temp_vir, result_vir);
																strcpy(aux, result);
															}
															if(tabela[i].flag_char == 1){
																char temp_decl[40];
																char result_decl[40];
																char temp_gets[70];
																char result_gets[90];
																
																strcpy(temp_decl, tabela[i].nome);
																strcat(temp_decl, "[50]");
																strcpy(result_decl, tabela[i].nome);
																
																strcpy(temp_gets, "gets(");
																strcat(temp_gets, tabela[i].nome);
																strcat(temp_gets, ")");
																strcpy(result_gets, "scanf(\" %c\", ");
																strcat(result_gets, tabela[i].nome);
																strcat(result_gets, ")");
																
																result = repl_str(aux, temp_decl, result_decl);
																result = repl_str(result, temp_gets, result_gets);
																strcpy(aux, result);
															}
														}
														free(result);
														(yyval) = strdup(aux);
													}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 152 "parser.y"
    {
																			char aux[100];
																			strcpy(aux, (yyvsp[(1) - (2)]));
																			strcat(aux, (yyvsp[(2) - (2)]));
																			while(current_tab_tipo < current_tab_nome){
																				strcpy(tabela[current_tab_tipo].tipo, (yyvsp[(1) - (2)]));
																				current_tab_tipo++;
																			}
																			(yyval) = strdup(aux);
																		}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 162 "parser.y"
    {
											char aux[100];
											strcpy(aux, "char ");
											strcat(aux, (yyvsp[(2) - (2)]));
											(yyval) = strdup(aux);
										}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 169 "parser.y"
    {
													char aux[100];
													strcpy(aux, (yyvsp[(1) - (3)]));
													strcat(aux, (yyvsp[(2) - (3)]));
													strcpy(tabela[current_tab_nome].nome, (yyvsp[(1) - (3)]));
													if(strstr((yyvsp[(2) - (3)]), "[") == NULL){
														strcat(aux, "[50]");
														strcpy(tabela[current_tab_nome].vet, "[50]");
													}
													strcpy(tabela[current_tab_tipo].tipo, "char ");
													strcpy(tabela[current_tab_nome].vet, (yyvsp[(2) - (3)]));
													current_tab_tipo++;
													current_tab_nome++;
													strcat(aux, (yyvsp[(3) - (3)]));
													(yyval) = strdup(aux);
												}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 186 "parser.y"
    {
																							char aux[200];
																							strcpy(aux, "[");
																							strcat(aux, (yyvsp[(2) - (5)]));
																							strcat(aux, "] = ");
																							tabela[current_tab_nome].flag_char = 1;
																							strcat(aux, (yyvsp[(5) - (5)]));
																							(yyval) = strdup(aux);
																						}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 195 "parser.y"
    {
																			char aux[100];
																			strcpy(aux, "[");
																			strcat(aux, (yyvsp[(2) - (4)]));
																			strcat(aux, "]");
																			tabela[current_tab_nome].flag_char = 1;
																			strcat(aux, (yyvsp[(4) - (4)]));
																			(yyval) = strdup(aux);
																		}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 204 "parser.y"
    { (yyval) = strdup(""); }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 206 "parser.y"
    {
															char aux[100];
															strcpy(aux, ", ");
															strcat(aux, (yyvsp[(2) - (2)]));
															(yyval) = strdup(aux);
														}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 212 "parser.y"
    { (yyval) = strdup(""); }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 214 "parser.y"
    {
																			char aux[100];
																			strcpy(aux, (yyvsp[(1) - (3)]));
																			strcat(aux, (yyvsp[(2) - (3)]));
																			strcpy(tabela[current_tab_nome].nome, (yyvsp[(1) - (3)]));
																			strcpy(tabela[current_tab_nome].vet, (yyvsp[(2) - (3)]));
																			current_tab_nome++;
																			strcat(aux, (yyvsp[(3) - (3)]));
																			(yyval) = strdup(aux);
																		}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 225 "parser.y"
    {
																							char aux[200];
																							strcpy(aux, "[");
																							strcat(aux, (yyvsp[(2) - (5)]));
																							strcat(aux, "] = ");
																							strcat(aux, (yyvsp[(5) - (5)]));
																							(yyval) = strdup(aux);
																						}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 233 "parser.y"
    {
																					char aux[100];
																					strcpy(aux, "[");
																					strcat(aux, (yyvsp[(2) - (4)]));
																					strcat(aux, "]");
																					strcat(aux, (yyvsp[(4) - (4)]));
																					(yyval) = strdup(aux);
																			}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 241 "parser.y"
    {
												char aux[100];
												strcpy(aux, " = ");
												strcat(aux, (yyvsp[(2) - (2)]));
												(yyval) = strdup(aux);
											}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 247 "parser.y"
    { (yyval) = strdup(""); }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 249 "parser.y"
    {
																char aux[100];
																strcpy(aux, ", ");
																strcat(aux, (yyvsp[(2) - (2)]));
																(yyval) = strdup(aux);
															}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 255 "parser.y"
    { (yyval) = strdup(";\n"); }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 257 "parser.y"
    {
																		char aux[100];
																		strcpy(aux, "{");
																		strcat(aux, (yyvsp[(2) - (3)]));
																		strcat(aux, "}");
																		(yyval) = strdup(aux);
																	}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 265 "parser.y"
    {
																	char aux[100];
																	strcpy(aux, (yyvsp[(1) - (3)]));
																	strcat(aux, ", ");
																	strcat(aux, (yyvsp[(3) - (3)]));
																	(yyval) = strdup(aux);
																}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 274 "parser.y"
    {
													char aux[100];
													strcpy(aux, (yyvsp[(1) - (2)]));
													strcat(aux, (yyvsp[(2) - (2)]));
													(yyval) = strdup(aux);
												}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 280 "parser.y"
    {
												char aux[100];
												strcpy(aux, (yyvsp[(1) - (2)]));
												strcat(aux, (yyvsp[(2) - (2)]));
												(yyval) = strdup(aux);
											}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 286 "parser.y"
    {
												char aux[100];
												strcpy(aux, (yyvsp[(1) - (2)]));
												strcat(aux, (yyvsp[(2) - (2)]));
												(yyval) = strdup(aux);
											}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 292 "parser.y"
    {
													char aux[100];
													strcpy(aux, (yyvsp[(1) - (2)]));
													strcat(aux, (yyvsp[(2) - (2)]));
													(yyval) = strdup(aux);
												}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 299 "parser.y"
    {
															char aux[100];
															strcpy(aux, ", ");
															strcat(aux, (yyvsp[(2) - (3)]));
															strcat(aux, (yyvsp[(3) - (3)]));
															(yyval) = strdup(aux);
														}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 306 "parser.y"
    { (yyval) = strdup(""); }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 308 "parser.y"
    {
																char aux[100];
																strcpy(aux, ", ");
																strcat(aux, (yyvsp[(2) - (3)]));
																strcat(aux, (yyvsp[(3) - (3)]));
																(yyval) = strdup(aux);
															}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 315 "parser.y"
    { (yyval) = strdup(""); }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 317 "parser.y"
    {
																char aux[100];
																strcpy(aux, ", ");
																strcat(aux, (yyvsp[(2) - (3)]));
																strcat(aux, (yyvsp[(3) - (3)]));
																(yyval) = strdup(aux);
															}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 324 "parser.y"
    { (yyval) = strdup(""); }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 326 "parser.y"
    {
																	char aux[100];
																	strcpy(aux, ", ");
																	strcat(aux, (yyvsp[(2) - (3)]));
																	strcat(aux, (yyvsp[(3) - (3)]));
																	(yyval) = strdup(aux);
																}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 333 "parser.y"
    { (yyval) = strdup(""); }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 335 "parser.y"
    { (yyval) = "int "; }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 336 "parser.y"
    { (yyval) = "float "; }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 337 "parser.y"
    { (yyval) = "void "; }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 338 "parser.y"
    { (yyval) = "bool "; }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 340 "parser.y"
    { (yyval) = strdup(yytext); }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 342 "parser.y"
    { (yyval) = strdup(yytext); }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 344 "parser.y"
    { (yyval) = strdup(yytext); }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 346 "parser.y"
    { (yyval) = strdup(yytext); }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 348 "parser.y"
    { (yyval) = strdup(yytext); }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 351 "parser.y"
    {
																char aux[5000];
																strcpy(aux, (yyvsp[(1) - (6)]));
																strcat(aux, (yyvsp[(2) - (6)]));
																strcat(aux, " (");
																strcat(aux, (yyvsp[(4) - (6)]));
																strcat(aux, ")");
																strcat(aux, (yyvsp[(6) - (6)]));
																(yyval) = strdup(aux);
															}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 362 "parser.y"
    {
																char aux[5000];
																strcpy(aux, (yyvsp[(1) - (6)]));
																strcat(aux, " main (");
																strcat(aux, (yyvsp[(4) - (6)]));
																strcat(aux, ")");
																strcat(aux, (yyvsp[(6) - (6)]));
																(yyval) = strdup(aux);
															}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 373 "parser.y"
    { (yyval) = strdup(""); }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 375 "parser.y"
    {
														char aux[100];
														strcpy(aux, (yyvsp[(1) - (2)]));
														strcat(aux, (yyvsp[(2) - (2)]));
														(yyval) = strdup(aux);
													}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 382 "parser.y"
    { 
														char aux[100];
														strcpy(aux, ", ");
														strcat(aux, (yyvsp[(2) - (2)]));
														(yyval) = strdup(aux);
													}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 388 "parser.y"
    { (yyval) = strdup(""); }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 390 "parser.y"
    {
														char aux[100];
														strcpy(aux, (yyvsp[(1) - (2)]));
														strcat(aux, (yyvsp[(2) - (2)]));
														(yyval) = strdup(aux);
													}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 396 "parser.y"
    {
									char aux[100];
									strcpy(aux, "char *");
									strcat(aux, (yyvsp[(2) - (2)]));
									(yyval) = strdup(aux);
								}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 403 "parser.y"
    {
																		char aux[100];
																		strcpy(aux, "{ \n");
																		strcat(aux, (yyvsp[(2) - (3)]));
																		strcat(aux, "}\n");
																		(yyval) = strdup(aux);
																	}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 411 "parser.y"
    {
																char aux[1000];
																strcpy(aux, (yyvsp[(1) - (2)]));
																strcat(aux, (yyvsp[(2) - (2)]));
																(yyval) = strdup(aux);
															}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 417 "parser.y"
    {
												char aux[5000];
												strcpy(aux, (yyvsp[(1) - (2)]));
												strcat(aux, (yyvsp[(2) - (2)]));
												(yyval) = strdup(aux);
											}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 423 "parser.y"
    { (yyval) = strdup(""); }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 437 "parser.y"
    {
																char aux[1000];
																strcpy(aux, (yyvsp[(1) - (2)]));
																strcat(aux, ";\n");
																(yyval) = strdup(aux);
														}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 443 "parser.y"
    { (yyval) = strdup(";\n"); }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 446 "parser.y"
    {
																	char aux[1000];
																	strcpy(aux, "if (");
																	strcat(aux, (yyvsp[(3) - (5)]));
																	strcat(aux, ")");
																	strcat(aux, (yyvsp[(5) - (5)]));
																	(yyval) = strdup(aux);
																}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 455 "parser.y"
    {
																	char aux[1000];
																	strcpy(aux, "if (");
																	strcat(aux, (yyvsp[(3) - (7)]));
																	strcat(aux, ")");
																	strcat(aux, (yyvsp[(5) - (7)]));
																	strcat(aux, "else ");
																	strcat(aux, (yyvsp[(7) - (7)]));
																	(yyval) = strdup(aux);
																}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 467 "parser.y"
    {
																	char aux[1500];
																	strcpy(aux, "while (");
																	strcat(aux, (yyvsp[(3) - (5)]));
																	strcat(aux, ")");
																	strcat(aux, (yyvsp[(5) - (5)]));
																	(yyval) = strdup(aux);
																}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 478 "parser.y"
    {
																	char aux[1000];
																	char operacao[20];
																	char passo[20];
																	int temp = atoi((yyvsp[(9) - (11)]));
																	if(temp >= 0){
																		strcpy(operacao, (yyvsp[(3) - (11)]));
																		strcat(operacao, "<= ");
																		strcat(operacao, (yyvsp[(7) - (11)]));
																		strcpy(passo, (yyvsp[(3) - (11)]));
																		strcat(passo, "=");
																		strcat(passo, (yyvsp[(3) - (11)]));
																		strcat(passo, "+ ");
																		strcat(passo, (yyvsp[(9) - (11)]));
																	} else {
																		strcpy(operacao, (yyvsp[(3) - (11)]));
																		strcat(operacao, ">= ");
																		strcat(operacao, (yyvsp[(7) - (11)]));
																		strcpy(passo, (yyvsp[(3) - (11)]));
																		strcat(passo, "=");
																		strcat(passo, (yyvsp[(3) - (11)]));
																		strcat(passo, (yyvsp[(9) - (11)]));
																	}
																	strcpy(aux, "for (");
																	strcat(aux, (yyvsp[(3) - (11)]));
																	strcat(aux, " = ");
																	strcat(aux, (yyvsp[(5) - (11)]));
																	strcat(aux, "; ");
																	strcat(aux, operacao);
																	strcat(aux, "; ");
																	strcat(aux, passo);
																	strcat(aux, ") ");
																	strcat(aux, (yyvsp[(11) - (11)]));
																	(yyval) = strdup(aux);
																}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 515 "parser.y"
    {
																	char aux[1500];
																	strcpy(aux, "do");
																	strcat(aux, (yyvsp[(2) - (7)]));
																	strcat(aux, "while (");
																	strcat(aux, (yyvsp[(5) - (7)]));
																	strcat(aux, ");\n");
																	(yyval) = strdup(aux);
																}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 526 "parser.y"
    {
																	char aux[1000];
																	strcpy(aux, "switch (");
																	strcat(aux, (yyvsp[(3) - (8)]));
																	strcat(aux, ") {\n");
																	strcat(aux, (yyvsp[(6) - (8)]));
																	strcat(aux, (yyvsp[(7) - (8)]));
																	strcat(aux, "}\n");
																	int i;
																	for(i = 0; i<current_tab_tipo ; i++){
																		if(strstr((yyvsp[(3) - (8)]), tabela[i].nome) != NULL){
																			if(strcmp(tabela[i].tipo, "char ") == 0){
																				tabela[i].flag_char = 1;
																			}
																		}
																	}
																	(yyval) = strdup(aux);
																}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 546 "parser.y"
    {
																	char *result;
																	char aux[400];
																	if(strstr((yyvsp[(3) - (7)]), "%texto") != NULL){
																		strcpy(aux, "gets(");
																		strcat(aux, (yyvsp[(5) - (7)]));
																		strcat(aux, ");\n");
																	} else {
																		result = repl_str((yyvsp[(3) - (7)]),"%inteiro","%d");
																		result = repl_str(result,"%real","%f");
																		strcpy(aux, "scanf(");
																		strcat(aux, result);
																		strcat(aux, ", &");
																		strcat(aux, (yyvsp[(5) - (7)]));
																		strcat(aux, ");\n");
																	}
																	free(result);
																	(yyval) = strdup(aux);
																}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 567 "parser.y"
    {
																	char *result;
																	char aux[400];
																	result = repl_str((yyvsp[(3) - (6)]),"%inteiro","%d");
																	result = repl_str(result,"%real","%f");
																	result = repl_str(result,"%texto","%s");
																	result = repl_str(result,"%.5real","%.5f");
																	strcpy(aux, "printf (");
																	strcat(aux, result);
																	strcat(aux, (yyvsp[(4) - (6)]));
																	strcat(aux, ");\n");
																	free(result);
																	(yyval) = strdup(aux);
																}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 583 "parser.y"
    {
																	char aux[200];
																	strcpy(aux, "toupper (");
																	strcat(aux, (yyvsp[(3) - (4)]));
																	strcat(aux, ")");
																	(yyval) = strdup(aux);
																}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 592 "parser.y"
    {
																	char aux[200];
																	strcpy(aux, "strcat(");
																	strcat(aux, (yyvsp[(3) - (6)]));
																	strcat(aux, ", ");
																	strcat(aux, (yyvsp[(5) - (6)]));
																	strcat(aux, ")");
																	(yyval) = strdup(aux);
																}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 602 "parser.y"
    { (yyval) = strdup("break;\n"); }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 607 "parser.y"
    { (yyval) = strdup("return;\n"); }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 608 "parser.y"
    {
															char aux[50];
															strcpy(aux, "return ");
															strcat(aux, (yyvsp[(2) - (3)]));
															strcat(aux, ";\n");
															(yyval) = strdup(aux);
														}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 616 "parser.y"
    {
																	char aux[100];
																	strcpy(aux, ", ");
																	strcat(aux, (yyvsp[(2) - (3)]));
																	strcat(aux, (yyvsp[(3) - (3)]));
																	(yyval) = strdup(aux);
																}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 623 "parser.y"
    { (yyval) = strdup(""); }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 629 "parser.y"
    {
																	char aux[400];
																	strcpy(aux, "case ");
																	strcat(aux, (yyvsp[(2) - (6)]));
																	strcat(aux, (yyvsp[(3) - (6)]));
																	strcat(aux, ":\n");
																	strcat(aux, (yyvsp[(5) - (6)]));
																	strcat(aux, "break;\n");
																	strcat(aux, (yyvsp[(6) - (6)]));
																	(yyval) = strdup(aux);
																}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 640 "parser.y"
    { (yyval) = strdup(""); }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 643 "parser.y"
    {
																	char aux[100];
																	strcpy(aux, ":\ncase ");
																	strcat(aux, (yyvsp[(2) - (3)]));
																	strcat(aux, (yyvsp[(3) - (3)]));
																	(yyval) = strdup(aux);
																}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 650 "parser.y"
    { (yyval) = strdup(""); }
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 652 "parser.y"
    { (yyval) = strdup(""); }
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 655 "parser.y"
    {
																char aux[400];
																strcpy(aux, "default :\n");
																strcat(aux, (yyvsp[(3) - (3)]));
																(yyval) = strdup(aux);
															}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 661 "parser.y"
    { (yyval) = strdup(""); }
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 663 "parser.y"
    { 
														char aux[200];
														strcpy(aux, (yyvsp[(1) - (3)]));
														strcat(aux, " = ");
														strcat(aux, (yyvsp[(3) - (3)]));
														(yyval) = strdup(aux);
													}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 672 "parser.y"
    {
											char aux[50];
											strcpy(aux, (yyvsp[(1) - (2)]));
											strcat(aux, (yyvsp[(2) - (2)]));
											(yyval) = strdup(aux);
										}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 679 "parser.y"
    {
																			char aux[100];
																			strcpy(aux, "[");
																			strcat(aux, (yyvsp[(2) - (4)]));
																			strcat(aux, "]");
																			strcat(aux, (yyvsp[(4) - (4)]));
																			(yyval) = strdup(aux);
																		}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 687 "parser.y"
    { (yyval) = strdup(""); }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 689 "parser.y"
    {
																		char aux[100];
																		strcpy(aux, "||");
																		strcat(aux, (yyvsp[(2) - (3)]));
																		strcat(aux, (yyvsp[(3) - (3)]));
																		(yyval) = strdup(aux);
																	}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 696 "parser.y"
    {
															char aux[100];
															strcpy(aux, (yyvsp[(1) - (2)]));
															strcat(aux, (yyvsp[(2) - (2)]));
															(yyval) = strdup(aux);
														}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 703 "parser.y"
    {
																		char aux[100];
																		strcpy(aux, "||");
																		strcat(aux, (yyvsp[(2) - (3)]));
																		strcat(aux, (yyvsp[(3) - (3)]));
																		(yyval) = strdup(aux);
																	}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 710 "parser.y"
    { (yyval) = strdup(""); }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 712 "parser.y"
    {
																		char aux[100];
																		strcpy(aux, (yyvsp[(1) - (2)]));
																		int i;
																		for(i = 0; i<current_tab_tipo ; i++){
																			if(strstr((yyvsp[(1) - (2)]), tabela[i].nome) != NULL){
																				if(strstr((yyvsp[(1) - (2)]), "\'") != NULL){
																					tabela[i].flag_char = 1;
																				}
																			}
																		}
																		strcat(aux, (yyvsp[(2) - (2)]));
																		(yyval) = strdup(aux);
																	}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 727 "parser.y"
    {
																			char aux[100];
																			strcpy(aux, "&&");
																			strcat(aux, (yyvsp[(2) - (3)]));
																			strcat(aux, (yyvsp[(3) - (3)]));
																			(yyval) = strdup(aux);
																		}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 734 "parser.y"
    { (yyval) = strdup(""); }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 737 "parser.y"
    {
																		char aux[100];
																		strcpy(aux, (yyvsp[(1) - (2)]));
																		strcat(aux, (yyvsp[(2) - (2)]));
																		(yyval) = strdup(aux);
																	}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 743 "parser.y"
    {
																			char aux[100];
																			strcpy(aux, "!");
																			strcat(aux, (yyvsp[(2) - (3)]));
																			strcat(aux, (yyvsp[(3) - (3)]));
																			(yyval) = strdup(aux);
																		}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 750 "parser.y"
    { (yyval) = strdup("true"); }
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 751 "parser.y"
    { (yyval) = strdup("false"); }
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 753 "parser.y"
    { (yyval) = strdup(yytext); }
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 755 "parser.y"
    {
																char aux[100];
																strcpy(aux, (yyvsp[(1) - (2)]));
																strcat(aux, (yyvsp[(2) - (2)]));
																(yyval) = strdup(aux);
															}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 761 "parser.y"
    { (yyval) = strdup(""); }
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 763 "parser.y"
    { (yyval) = strdup(yytext); }
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 765 "parser.y"
    {
																	char aux[100];
																	strcpy(aux, (yyvsp[(1) - (3)]));
																	strcat(aux, (yyvsp[(2) - (3)]));
																	(yyval) = strdup(aux);
																}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 771 "parser.y"
    {
													char aux[100];
													strcpy(aux, (yyvsp[(1) - (2)]));
													strcat(aux, (yyvsp[(2) - (2)]));
													(yyval) = strdup(aux);
												}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 778 "parser.y"
    {
																	char aux[100];
																	strcpy(aux, (yyvsp[(1) - (3)]));
																	strcat(aux, (yyvsp[(2) - (3)]));
																	strcat(aux, (yyvsp[(3) - (3)]));
																	(yyval) = strdup(aux);
																}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 785 "parser.y"
    { (yyval) = strdup(""); }
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 787 "parser.y"
    {
												char aux[100];
												strcpy(aux, (yyvsp[(1) - (2)]));
												strcat(aux, (yyvsp[(2) - (2)]));
												(yyval) = strdup(aux);
											}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 794 "parser.y"
    { (yyval) = strdup(yytext); }
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 796 "parser.y"
    {
														char aux[100];
														strcpy(aux, (yyvsp[(1) - (3)]));
														strcat(aux, (yyvsp[(2) - (3)]));
														(yyval) = strdup(aux);
													}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 802 "parser.y"
    { (yyval) = strdup(""); }
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 805 "parser.y"
    {
																	char aux[100];
																	strcpy(aux, "(");
																	strcat(aux, (yyvsp[(2) - (3)]));
																	strcat(aux, ")");
																	(yyval) = strdup(aux);
																}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 825 "parser.y"
    {
											char aux[30];
											strcpy(aux, (yyvsp[(1) - (2)]));
											strcat(aux, (yyvsp[(2) - (2)]));
											(yyval) = strdup(aux);
										}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 836 "parser.y"
    {
																		char aux[150];
																		strcpy(aux, "sqrt (");
																		strcat(aux, (yyvsp[(3) - (4)]));
																		strcat(aux, ")");
																		(yyval) = strdup(aux);
																	}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 845 "parser.y"
    {
																		char aux[100];
																		strcpy(aux, "pow (");
																		strcat(aux, (yyvsp[(3) - (6)]));
																		strcat(aux, ", ");
																		strcat(aux, (yyvsp[(5) - (6)]));
																		strcat(aux, ")");
																		(yyval) = strdup(aux);
																	}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 856 "parser.y"
    {
																		char aux[100];
																		strcpy(aux, "strlen (");
																		strcat(aux, (yyvsp[(3) - (4)]));
																		strcat(aux, ")");
																		(yyval) = strdup(aux);
																	}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 867 "parser.y"
    {
																	char aux[100];
																	strcpy(aux, (yyvsp[(1) - (4)]));
																	strcat(aux, "(");
																	int i;
																	for(i = 0; i<current_tab_tipo ; i++){
																		if(strstr((yyvsp[(3) - (4)]), tabela[i].nome) != NULL){
																			if(strstr(tabela[i].vet, "[") != NULL){
																				tabela[i].flag_param = 1;
																			}
																		}
																	}
																	strcat(aux, (yyvsp[(3) - (4)]));
																	strcat(aux, ")");
																	(yyval) = strdup(aux);
																}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 885 "parser.y"
    { (yyval) = strdup(""); }
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 887 "parser.y"
    {
													char aux[100];
													strcpy(aux, (yyvsp[(1) - (2)]));
													strcat(aux, (yyvsp[(2) - (2)]));
													(yyval) = strdup(aux);
												}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 894 "parser.y"
    {
															char aux [100];
															strcpy(aux, ", ");
															strcat(aux, (yyvsp[(2) - (3)]));
															strcat(aux, (yyvsp[(3) - (3)]));
															(yyval) = strdup(aux);
														}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 901 "parser.y"
    { (yyval) = strdup(""); }
    break;



/* Line 1455 of yacc.c  */
#line 3184 "y.tab.c"
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
#line 903 "parser.y"

void yyerror (char *s) {
	fprintf(stderr, "%s\n", s);
}

int main(int argc, char *argv[]){
	yyout = fopen(argv[2],"w");
	fprintf(yyout,"#include <stdio.h>\n");
	fprintf(yyout,"#include <stdlib.h>\n");
	fprintf(yyout,"#include <stdbool.h>\n");
	fprintf(yyout,"#include <math.h>\n");
    fprintf(yyout,"#include <string.h>\n");
	fprintf(yyout,"\n");
	yyin = fopen(argv[1], "r");
	yyparse();
	return 0;
}
