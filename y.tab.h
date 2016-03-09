
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

extern YYSTYPE yylval;


