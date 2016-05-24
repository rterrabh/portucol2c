%{
/*-------------------------- Definitions --------------------------*/
#include <stdio.h>
#include "y.tab.h"


/*Prototipo*/
void installID(){
    
}

%}

abrechave				"{"
fechachave				"}"
abrecolchete			"["
fechacolchete			"]"
abreparentese			"("
fechaparentese			")"
underline				"_"
doispontos				":"
aspasimples				"'"
exclamacao				"!"
string                  \"[^"\n]*["\n]
caractere				'([^'\\\n]|\\.)'
raizquadrada			"raizquadrada"
concatena				"concatena"
potencia				"potencia"
maiuscula				"maiuscula"
tamanhotexto			"tamanhotexto"
e						"e"
ou						"ou"
somasub					("+"|"-")
digito					[0-9]
numint					{digito}+
letra					[a-z|A-Z]
se						"se"
senao					"senao"
faca					"faca"
enquanto				"enquanto"
para					"para"
retorne					"retorne"
inteiro					"inteiro"
real					"real"
texto					"texto"
logico					"logico"
verdadeiro				"verdadeiro"
falso					"falso"
semretorno				"semretorno"
escolha					"escolha"
caso					"caso"
padrao					"padrao"
interrompa				"interrompa"
principal				"principal"
escreva					"escreva"
leia					"leia"
porreal					"%real"
portexto				"%texto"
porinteiro				"%inteiro"
id						{letra}(({letra}|{digito})|({letra}|{digito}|{underline}))*
numreal					{digito}+(\.{digito}+)?([E][+-]?{digito}+)?
multdiv					("*"|"/"|"%")
relacional				("<"|">"|"=="|">="|"<="|"!=")
atribuicao				"="
comentario				"/*"((\*+[^/*])|([^*]))*\**"*/"
virgula					","
pontoevirgula			";"
delim					[ \t\n]
ws                      {delim}+

other                  	.

%%
%{
/*----------------------------- Rules -----------------------------*/
%}
{ws}				{ /*sem acao, sem retorno */ }
{comentario}		{ 
						int i;
						for(i=0;i<yyleng;i++){
							if(yytext[i]=='\n');
						}
					}
{string}            { return STRING; }
{caractere}			{ return CARACTERE; }
{abrechave}			{ return ABRECHAVE; }
{fechachave}		{ return FECHACHAVE; }
{abrecolchete}		{ return ABRECOLCHETE; }
{fechacolchete}		{ return FECHACOLCHETE; }
{abreparentese}		{ return ABREPARENTESE;	}
{fechaparentese}	{ return FECHAPARENTESE; }
{doispontos}		{ return DOISPONTOS; }
{aspasimples}		{ return ASPASIMPLES; }
{exclamacao}		{ return EXCLAMACAO; }
{raizquadrada}		{ return RAIZQUADRADA; }
{concatena}			{ return CONCATENA; }
{potencia}			{ return POTENCIA; }
{maiuscula}			{ return MAIUSCULA; }
{tamanhotexto}		{ return TAMANHOTEXTO; }
{e}				    { return E; }
{ou}				{ return OU; }
{real}				{ return REAL; }
{texto}				{ return TEXTO; }
{inteiro}			{ return INTEIRO; }
{logico}			{ return LOGICO; }
{verdadeiro}		{ return VERDADEIRO; }
{falso}				{ return FALSO; }
{porinteiro}		{ return PORINTEIRO; }
{porreal}			{ return PORREAL; }
{portexto}			{ return PORTEXTO; }
{semretorno}		{ return SEMRETORNO; }
{principal}			{ return PRINCIPAL; }
{escreva}			{ return ESCREVA; }
{leia}				{ return LEIA; }
{escolha}			{ return ESCOLHA; }
{caso}				{ return CASO; }
{padrao}			{ return PADRAO; }
{interrompa}		{ return INTERROMPA; }
{se}				{ return SE; }
{senao}				{ return SENAO; }
{faca}				{ return FACA; }
{enquanto}			{ return ENQUANTO; }
{para}				{ return PARA; }
{retorne}			{ return RETORNE; }
{id}				{ installID();
					  return ID; }
{atribuicao}		{ return ATRIBUICAO;}
{multdiv}			{ return MULTDIV; }
{somasub}			{ return SOMASUB; }
{numint}			{ return NUMINT; }
{numreal}			{ return NUMREAL; }
{virgula}			{ return VIRGULA; }
{pontoevirgula}		{ return PONTOEVIRGULA; }
{relacional}		{ return RELACIONAL; }

{other}             { /*sem acao, sem retorno */ }
%%
/*------------------------ User subrotines ------------------------*/

int yywrap() {
	return 1;
}