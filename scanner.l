%{
/*-------------------------- Definitions --------------------------*/
#include <stdio.h>
#include "y.tab.h"
int linha=1, coluna=1;

/*Prototipo*/
installID(){

}

%}

abrechave				"{"
fechachave				"}"
abrecolchete			"["
fechacolchete			"]"
abreparentese			"("
fechaparentese			")"
porcentagem				"%"
contrabarra				("\\")
aspas					["]
underline				"_"
ponto					"."
doispontos				":"
aspasimples				"'"
cifrao					"$"
ecomercial				"&"
interrogacao			"?"
exclamacao				"!"
sqrt					"raizquadrada"
strcat					"concatena"
pow						"potencia"
toupper					"maiuscula"
and						"e"
or						"ou"
soma					("+"|"-")
digito					[0-9]
numint					[+-]?{digito}+
letra					[a-z|A-Z]
if						"se"
else					"senao"
do						"faca"
while					"enquanto"
for						"para"
return					"retorne"
int						"inteiro"
float					"real"
char					"texto"
bool					"logico"
true					"verdadeiro"
false					"falso"
void					"semretorno"
switch					"escolha"
case					"caso"
default					"padrao"
break					"interrompa"
main					"principal"
escreva					"escreva"
leia					"leia"
f						"%real"
c						"%texto"
i						"%inteiro"
id						{letra}(({letra}|{digito})|({letra}|{digito}|{underline}))*
numreal					[+-]?{digito}+(\.{digito}+)?([E][+-]?{digito}+)?
mult					("*"|"/")
relacional				("<"|">"|"=="|">="|"<="|"!=")
atribuicao				"="
comentario				"/*"((\*+[^/*])|([^*]))*\**"*/"
virgula					","
pontoevirgula			";"
delim					[ \t\n]
ws                      {delim}+
string                  "\""[.]*"\""
other                  	.

%%
%{
/*----------------------------- Rules -----------------------------*/
%}
{ws}				{ /*sem acao, sem retorno */ }
{comentario}		{ 
						int i;
						for(i=0;i<yyleng;i++){
							if(yytext[i]=='\n') linha++;
						}
					}
{abrechave}			{ return ABRECHAVE; }
{fechachave}		{ return FECHACHAVE; }
{abrecolchete}		{ return ABRECOLCHETE; }
{fechacolchete}		{ return FECHACOLCHETE; }
{abreparentese}		{ return ABREPARENTESE;	}
{fechaparentese}	{ return FECHAPARENTESE; }
{porcentagem}		{ return PORCENTAGEM; }
{contrabarra}		{ return CONTRABARRA; }
{aspas}				{ return ASPAS; }
{underline}			{ return UNDERLINE; }
{ponto}				{ return PONTO;}
{doispontos}		{ return DOISPONTOS; }
{aspasimples}		{ return ASPASIMPLES; }
{cifrao}			{ return CIFRAO; }
{ecomercial}		{ return ECOMERCIAL; }
{interrogacao}		{ return INTERROGACAO; }
{exclamacao}		{ return EXCLAMACAO; }
{sqrt}				{ return SQRT; }
{strcat}			{ return STRCAT; }
{pow}				{ return POW; }
{toupper}			{ return TOUPPER; }
{and}				{ return AND; }
{or}				{ return OR; }
{f}					{ return F; }
{c}					{ return C; }
{i}					{ return I; }
{bool}				{ return BOOL; }
{true}				{ return TRUE; }
{false}				{ return FALSE; }
{int}				{ return INT; }
{float}				{ return FLOAT; }
{char}				{ return CHAR; }
{void}				{ return VOID; }
{main}				{ return MAIN; }
{escreva}			{ return ESCREVA; }
{leia}				{ return LEIA; }
{switch}			{ return SWITCH; } //Traduzir tudo
{case}				{ return CASE; }
{default}			{ return DEFAULT; }
{break}				{ return BREAK; }
{if}				{ return IF; }
{else}				{ return ELSE; }
{do}				{ return DO; }
{while}				{ return WHILE; }
{for}				{ return FOR; }
{return}			{ return RETURN; }
{id}				{ installID();
					  return ID; }
{atribuicao}		{ return ATRIBUICAO;}
{mult}				{ return MULT; }
{soma}				{ return SOMA; }
{numint}			{ return NUMINT; }
{numreal}			{ return NUMREAL; }
{virgula}			{ return VIRGULA; }
{pontoevirgula}		{ return PONTOEVIRGULA; }
{relacional}		{ return RELACIONAL; }
{string}            { return STRING; }
{other}             { return OTHER; }
%%
/*------------------------ User subrotines ------------------------*/

int yywrap() {
	return 1;
}