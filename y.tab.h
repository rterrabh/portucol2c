
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

extern YYSTYPE yylval;


