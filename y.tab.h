
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

extern YYSTYPE yylval;


