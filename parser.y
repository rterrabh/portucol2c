%{
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
		int flag_string;
	};
	
	struct table tabela[300];
	int current_tab_tipo = 0, current_tab_nome = 0;
	int ident = 0;
%}
%token ABRECHAVE FECHACHAVE ABRECOLCHETE FECHACOLCHETE ABREPARENTESE FECHAPARENTESE
%token DOISPONTOS ASPASIMPLES EXCLAMACAO RAIZQUADRADA CONCATENA POTENCIA MAIUSCULA TAMANHOTEXTO E OU SOMASUB NUMINT NUMREAL
%token SE SENAO FACA ENQUANTO PARA RETORNE INTEIRO REAL TEXTO LOGICO VERDADEIRO FALSO SEMRETORNO ESCOLHA CASO PADRAO INTERROMPA PRINCIPAL LEIA ESCREVA PORREAL PORTEXTO PORINTEIRO ID
%token MULTDIV RELACIONAL ATRIBUICAO COMENTARIO VIRGULA PONTOEVIRGULA STRING CARACTERE

%nonassoc LOWER_THAN_SENAO
%nonassoc SENAO
%left  SOMASUB
%left  MULTDIV
%%
programa 			: declaracao_lista { fprintf(yyout,"%s", $1); }
				  ;
declaracao_lista 		: declaracao	{ 	
											char aux[10000];
											strcpy(aux, $1);
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
													strcpy(result_gets, "scanf(\" %c\", &");
													strcat(result_gets, tabela[i].nome);
													strcat(result_gets, ")");
													
													result = repl_str(aux, temp_decl, result_decl);
													result = repl_str(result, temp_gets, result_gets);
													strcpy(aux, result);
												}
											}
											free(result);
											$$ = strdup(aux);
										}
				| declaracao declaracao_lista		{
														char aux[10000];
														strcpy(aux, $1);
														strcat(aux, $2);
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
																strcpy(result_gets, "scanf(\" %c\", &");
																strcat(result_gets, tabela[i].nome);
																strcat(result_gets, ")");
																
																result = repl_str(aux, temp_decl, result_decl);
																result = repl_str(result, temp_gets, result_gets);
																strcpy(aux, result);
															}
														}
														free(result);
														$$ = strdup(aux);
													}
				  ;
declaracao 			: var_declaracao
				| fun_declaracao
		  		  ;
var_declaracao 			: tipo_especificador var_declaracao_meio		{
																			char aux[100];
																			strcpy(aux, $1);
																			strcat(aux, $2);
																			while(current_tab_tipo < current_tab_nome){
																				strcpy(tabela[current_tab_tipo].tipo, $1);
																				current_tab_tipo++;
																			}
																			$$ = strdup(aux);
																		}
				| TEXTO decl_texto		{
											char aux[100];
											strcpy(aux, "char ");
											strcat(aux, $2);
											$$ = strdup(aux);
										}
			  	  ;
decl_texto				: id decl_texto_vet decl_texto_fat		{
													char aux[100];
													strcpy(aux, $1);
													strcat(aux, $2);
													strcpy(tabela[current_tab_nome].nome, $1);
													if(strstr($2, "[") == NULL){
														strcat(aux, "[50]");
														strcpy(tabela[current_tab_nome].vet, "[50]");
														tabela[current_tab_nome].flag_string = 1;
													}
													strcpy(tabela[current_tab_tipo].tipo, "char ");
													strcpy(tabela[current_tab_nome].vet, $2);
													current_tab_tipo++;
													current_tab_nome++;
													strcat(aux, $3);
													$$ = strdup(aux);
												}
				  ;
decl_texto_vet			: ABRECOLCHETE numint FECHACOLCHETE ATRIBUICAO var_vet_atr		{
																							char aux[200];
																							strcpy(aux, "[");
																							strcat(aux, $2);
																							strcat(aux, "] = ");
																							tabela[current_tab_nome].flag_char = 1;
																							strcat(aux, $5);
																							$$ = strdup(aux);
																						}
				| ABRECOLCHETE numint FECHACOLCHETE decl_texto_vet		{
																			char aux[100];
																			strcpy(aux, "[");
																			strcat(aux, $2);
																			strcat(aux, "]");
																			tabela[current_tab_nome].flag_char = 1;
																			strcat(aux, $4);
																			$$ = strdup(aux);
																		}
				| /*vazio*/		{ $$ = strdup(""); }
				  ;
decl_texto_fat			: VIRGULA decl_texto		{
															char aux[100];
															strcpy(aux, ", ");
															strcat(aux, $2);
															$$ = strdup(aux);
														}
				| /*vazio*/		{ $$ = strdup(""); }
				  ;
var_declaracao_meio		: id var_declaracao_vet var_declaracao_fat		{
																			char aux[100];
																			strcpy(aux, $1);
																			strcat(aux, $2);
																			strcpy(tabela[current_tab_nome].nome, $1);
																			strcpy(tabela[current_tab_nome].vet, $2);
																			current_tab_nome++;
																			strcat(aux, $3);
																			$$ = strdup(aux);
																		}
				  ;
var_declaracao_vet 		: ABRECOLCHETE numint FECHACOLCHETE ATRIBUICAO var_vet_atr		{
																							char aux[200];
																							strcpy(aux, "[");
																							strcat(aux, $2);
																							strcat(aux, "] = ");
																							strcat(aux, $5);
																							$$ = strdup(aux);
																						}
				| ABRECOLCHETE numint FECHACOLCHETE var_declaracao_vet		{
																					char aux[100];
																					strcpy(aux, "[");
																					strcat(aux, $2);
																					strcat(aux, "]");
																					strcat(aux, $4);
																					$$ = strdup(aux);
																			}
				| ATRIBUICAO expressao		{
												char aux[100];
												strcpy(aux, " = ");
												strcat(aux, $2);
												$$ = strdup(aux);
											}
				| /*vazio*/		{ $$ = strdup(""); }
				  ;
var_declaracao_fat		: VIRGULA var_declaracao_meio		{
																char aux[100];
																strcpy(aux, ", ");
																strcat(aux, $2);
																$$ = strdup(aux);
															}
				| PONTOEVIRGULA		{ $$ = strdup(";\n"); }
				  ;
var_vet_atr				: ABRECHAVE var_vet_dentro FECHACHAVE		{
																		char aux[100];
																		strcpy(aux, "{");
																		strcat(aux, $2);
																		strcat(aux, "}");
																		$$ = strdup(aux);
																	}
				  ;
var_vet_dentro			: var_vet_atr VIRGULA var_vet_atr		{
																	char aux[100];
																	strcpy(aux, $1);
																	strcat(aux, ", ");
																	strcat(aux, $3);
																	$$ = strdup(aux);
																}
				| conteudo_vetor
				  ;
conteudo_vetor			: numint vetor_int		{
													char aux[100];
													strcpy(aux, $1);
													strcat(aux, $2);
													$$ = strdup(aux);
												}
				| numreal vetor_real		{
												char aux[100];
												strcpy(aux, $1);
												strcat(aux, $2);
												$$ = strdup(aux);
											}
				| string vetor_string		{
												char aux[100];
												strcpy(aux, $1);
												strcat(aux, $2);
												$$ = strdup(aux);
											}
				| caractere vetor_caractere		{
													char aux[100];
													strcpy(aux, $1);
													strcat(aux, $2);
													$$ = strdup(aux);
												}
				  ;
vetor_int				: VIRGULA numint vetor_int		{
															char aux[100];
															strcpy(aux, ", ");
															strcat(aux, $2);
															strcat(aux, $3);
															$$ = strdup(aux);
														}
				| /*vazio*/		{ $$ = strdup(""); }
				  ;
vetor_real				: VIRGULA numreal vetor_real		{
																char aux[100];
																strcpy(aux, ", ");
																strcat(aux, $2);
																strcat(aux, $3);
																$$ = strdup(aux);
															}
				| /*vazio*/		{ $$ = strdup(""); }
				  ;
vetor_string			: VIRGULA string vetor_string		{
																char aux[100];
																strcpy(aux, ", ");
																strcat(aux, $2);
																strcat(aux, $3);
																$$ = strdup(aux);
															}
				| /*vazio*/		{ $$ = strdup(""); }
				  ;
vetor_caractere			: VIRGULA caractere vetor_caractere		{
																	char aux[100];
																	strcpy(aux, ", ");
																	strcat(aux, $2);
																	strcat(aux, $3);
																	$$ = strdup(aux);
																}
				| /*vazio*/		{ $$ = strdup(""); }
				  ;
tipo_especificador 		: INTEIRO		{ $$ = "int "; }
				| REAL		{ $$ = "float "; }
				| SEMRETORNO		{ $$ = "void "; }
				| LOGICO		{ $$ = "bool "; }
				  ;
id						: ID	{ $$ = strdup(yytext); }
				  ;
numint					: NUMINT		{ $$ = strdup(yytext); }
				  ;
numreal					: NUMREAL		{ $$ = strdup(yytext); }
				  ;
string					: STRING		{ $$ = strdup(yytext); }
				  ;
caractere				: CARACTERE		{ $$ = strdup(yytext); }
				  ;
fun_declaracao 			: tipo_especificador id ABREPARENTESE params FECHAPARENTESE composto_decl	
															{
																char aux[5000];
																strcpy(aux, $1);
																strcat(aux, $2);
																strcat(aux, " (");
																strcat(aux, $4);
																strcat(aux, ")");
																strcat(aux, $6);
																$$ = strdup(aux);
															}
				| tipo_especificador PRINCIPAL ABREPARENTESE params FECHAPARENTESE composto_decl
															{
																char aux[5000];
																strcpy(aux, $1);
																strcat(aux, " main (");
																strcat(aux, $4);
																strcat(aux, ")");
																strcat(aux, $6);
																$$ = strdup(aux);
															}
			  	  ;
params 				: param_lista
				| /*vazio*/			{ $$ = strdup(""); }
	  			  ;
param_lista 			: param param_lista_fat		{
														char aux[100];
														strcpy(aux, $1);
														strcat(aux, $2);
														$$ = strdup(aux);
													}
			     	  ;
param_lista_fat 		: VIRGULA param_lista		{ 
														char aux[100];
														strcpy(aux, ", ");
														strcat(aux, $2);
														$$ = strdup(aux);
													}
				| /*vazio*/			{ $$ = strdup(""); }
				  ;
param 				: tipo_especificador id			{
														char aux[100];
														strcpy(aux, $1);
														strcat(aux, $2);
														$$ = strdup(aux);
													}
				| TEXTO id		{
									char aux[100];
									strcpy(aux, "char *");
									strcat(aux, $2);
									$$ = strdup(aux);
								}
	  			  ;
composto_decl 			: ABRECHAVE dentro_funcao FECHACHAVE		{
																		char aux[100];
																		strcpy(aux, "{ \n");
																		strcat(aux, $2);
																		strcat(aux, "}\n");
																		$$ = strdup(aux);
																	}
				  ;
dentro_funcao			: var_declaracao dentro_funcao		{
																char aux[1000];
																strcpy(aux, $1);
																strcat(aux, $2);
																$$ = strdup(aux);
															}
				| comando dentro_funcao		{
												char aux[5000];
												strcpy(aux, $1);
												strcat(aux, $2);
												$$ = strdup(aux);
											}
				| /*vazio*/		{ $$ = strdup(""); }
				  ;
comando 			: expressao_decl
				| composto_decl
				| selecao_decl
				| iteracao_decl
				| para_decl
				| facaenq_decl
				| escolha_decl
				| leia_decl
				| escreva_decl
				| retorno_decl
				| interrompa_decl
				  ;
expressao_decl 			: expressao PONTOEVIRGULA		{
																char aux[1000];
																strcpy(aux, $1);
																strcat(aux, ";\n");
																$$ = strdup(aux);
														}
				| PONTOEVIRGULA		{ $$ = strdup(";\n"); }
			   	  ;
selecao_decl 			: SE ABREPARENTESE expressao FECHAPARENTESE comando %prec LOWER_THAN_SENAO 	
																{
																	char aux[1000];
																	strcpy(aux, "if (");
																	strcat(aux, $3);
																	strcat(aux, ")");
																	strcat(aux, $5);
																	$$ = strdup(aux);
																}
				| SE ABREPARENTESE expressao FECHAPARENTESE comando SENAO comando
																{
																	char aux[1000];
																	strcpy(aux, "if (");
																	strcat(aux, $3);
																	strcat(aux, ")");
																	strcat(aux, $5);
																	strcat(aux, "else ");
																	strcat(aux, $7);
																	$$ = strdup(aux);
																}
			 	  ;
iteracao_decl 			: ENQUANTO ABREPARENTESE expressao FECHAPARENTESE comando
																{
																	char aux[1500];
																	strcpy(aux, "while (");
																	strcat(aux, $3);
																	strcat(aux, ")");
																	strcat(aux, $5);
																	$$ = strdup(aux);
																}
			  	  ;

para_decl				: PARA ABREPARENTESE id ATRIBUICAO expressao PONTOEVIRGULA expressao PONTOEVIRGULA expressao_unaria FECHAPARENTESE comando
																{
																	char aux[1000];
																	char operacao[20];
																	char passo[20];
																	int temp = atoi($9);
																	if(temp >= 0){
																		strcpy(operacao, $3);
																		strcat(operacao, "<= ");
																		strcat(operacao, $7);
																		strcpy(passo, $3);
																		strcat(passo, "=");
																		strcat(passo, $3);
																		strcat(passo, "+ ");
																		strcat(passo, $9);
																	} else {
																		strcpy(operacao, $3);
																		strcat(operacao, ">= ");
																		strcat(operacao, $7);
																		strcpy(passo, $3);
																		strcat(passo, "=");
																		strcat(passo, $3);
																		strcat(passo, $9);
																	}
																	strcpy(aux, "for (");
																	strcat(aux, $3);
																	strcat(aux, " = ");
																	strcat(aux, $5);
																	strcat(aux, "; ");
																	strcat(aux, operacao);
																	strcat(aux, "; ");
																	strcat(aux, passo);
																	strcat(aux, ") ");
																	strcat(aux, $11);
																	$$ = strdup(aux);
																}
				  ;
facaenq_decl			: FACA comando ENQUANTO ABREPARENTESE expressao FECHAPARENTESE PONTOEVIRGULA
																{
																	char aux[1500];
																	strcpy(aux, "do");
																	strcat(aux, $2);
																	strcat(aux, "while (");
																	strcat(aux, $5);
																	strcat(aux, ");\n");
																	$$ = strdup(aux);
																}
				  ;
escolha_decl			: ESCOLHA ABREPARENTESE var FECHAPARENTESE ABRECHAVE escolhas_dentro padrao_opc FECHACHAVE
																{
																	char aux[1000];
																	strcpy(aux, "switch (");
																	strcat(aux, $3);
																	strcat(aux, ") {\n");
																	strcat(aux, $6);
																	strcat(aux, $7);
																	strcat(aux, "}\n");
																	int i;
																	for(i = 0; i<current_tab_tipo ; i++){
																		if(strstr($3, tabela[i].nome) != NULL){
																			if(strcmp(tabela[i].tipo, "char ") == 0){
																				tabela[i].flag_char = 1;
																			}
																		}
																	}
																	$$ = strdup(aux);
																}
				  ;
leia_decl				: LEIA ABREPARENTESE string VIRGULA var FECHAPARENTESE PONTOEVIRGULA
																{
																	char *result;
																	char aux[400];
																	char aux2[400];
																	if(strstr($3, "%texto") != NULL){
																		strcpy(aux, "gets(");
																		strcat(aux, $5);
																		strcat(aux, ");\n");
																	} else {
																		result = repl_str($3,"%inteiro","%d");
																		result = repl_str(result,"%real","%f");
																		strcpy(aux, "scanf(");
																		strcat(aux, result);
																		strcat(aux, ", &");
																		strcat(aux, $5);
																		strcat(aux, ");\n");
																	}
																	$$ = strdup(aux);
																	free(result);
																}
				  ;
escreva_decl			: ESCREVA ABREPARENTESE string escreva_fator FECHAPARENTESE PONTOEVIRGULA
																{
																	char *result;
																	char aux[400];
																	result = repl_str($3,"%inteiro","%d");
																	result = repl_str(result,"%real","%f");
																	result = repl_str(result,"%texto","%s");
																	result = repl_str(result,"%.5real","%.5f");
																	strcpy(aux, "printf (");
																	strcat(aux, result);
																	strcat(aux, $4);
																	strcat(aux, ");\n");
																	free(result);
																	$$ = strdup(aux);
																}
				  ;
maiuscula_decl			: MAIUSCULA ABREPARENTESE char_fator FECHAPARENTESE
																{
																	char aux[200];
																	strcpy(aux, "toupper (");
																	strcat(aux, $3);
																	strcat(aux, ")");
																	$$ = strdup(aux);
																}
				  ;
concatena_decl			: CONCATENA ABREPARENTESE concatena_fator VIRGULA concatena_fator FECHAPARENTESE
																{
																	char aux[200];
																	strcpy(aux, "strcat(");
																	strcat(aux, $3);
																	strcat(aux, ", ");
																	strcat(aux, $5);
																	strcat(aux, ")");
																	$$ = strdup(aux);
																}
				  ;
interrompa_decl			: INTERROMPA PONTOEVIRGULA		{ $$ = strdup("break;\n"); }
				  ;
concatena_fator			: string
				| var
				  ;
retorno_decl 			: RETORNE PONTOEVIRGULA		{ $$ = strdup("return;\n"); }
				| RETORNE expressao PONTOEVIRGULA		{
															char aux[50];
															strcpy(aux, "return ");
															strcat(aux, $2);
															strcat(aux, ";\n");
															$$ = strdup(aux);
														}
				  ;
escreva_fator			: VIRGULA expressao escreva_fator		{
																	char aux[100];
																	strcpy(aux, ", ");
																	strcat(aux, $2);
																	strcat(aux, $3);
																	$$ = strdup(aux);
																}
				| /*vazio*/		{ $$ = strdup(""); }
				  ;
char_fator				: var
				| caractere
				  ;
escolhas_dentro			: CASO escolha_simples escolhas_dentro_mais DOISPONTOS comando_caso escolhas_dentro
																{
																	char aux[400];
																	strcpy(aux, "case ");
																	strcat(aux, $2);
																	strcat(aux, $3);
																	strcat(aux, ":\n");
																	strcat(aux, $5);
																	strcat(aux, "break;\n");
																	strcat(aux, $6);
																	$$ = strdup(aux);
																}
				| /*vazio*/		{ $$ = strdup(""); }
				  ;
escolhas_dentro_mais	: VIRGULA escolha_simples escolhas_dentro_mais
																{
																	char aux[100];
																	strcpy(aux, ":\ncase ");
																	strcat(aux, $2);
																	strcat(aux, $3);
																	$$ = strdup(aux);
																}
				| /*vazio*/		{ $$ = strdup(""); }
				  ;
comando_caso			:  /*vazio*/		{ $$ = strdup(""); }
				| comando
				  ;
padrao_opc				: PADRAO DOISPONTOS comando			{
																char aux[400];
																strcpy(aux, "default :\n");
																strcat(aux, $3);
																$$ = strdup(aux);
															}
				| /*vazio*/		{ $$ = strdup(""); }
				  ;
expressao 			: var ATRIBUICAO expressao		{ 
														char aux[200];
														strcpy(aux, $1);
														strcat(aux, " = ");
														strcat(aux, $3);
														int i;
														for(i = 0; i<current_tab_tipo ; i++){
															if(strcmp($1, tabela[i].nome) == 0){
																if(tabela[i].flag_string == 1){
																	strcpy(aux, "strcpy(");
																	strcat(aux, $1);
																	strcat(aux, ", ");
																	strcat(aux, $3);
																	strcat(aux, ")");
																}
															}
														}
														$$ = strdup(aux);
													}
				| expressao_logica
		 		  ;
var 				: id var_fat		{
											char aux[50];
											strcpy(aux, $1);
											strcat(aux, $2);
											$$ = strdup(aux);
										}
				  ;
var_fat 			: ABRECOLCHETE expressao FECHACOLCHETE var_fat		{
																			char aux[100];
																			strcpy(aux, "[");
																			strcat(aux, $2);
																			strcat(aux, "]");
																			strcat(aux, $4);
																			$$ = strdup(aux);
																		}
				| /*vazio*/		{ $$ = strdup(""); }
				  ;
expressao_logica		: OU termo_logico expressao_logica_fat		{
																		char aux[100];
																		strcpy(aux, "||");
																		strcat(aux, $2);
																		strcat(aux, $3);
																		$$ = strdup(aux);
																	}
				| termo_logico expressao_logica_fat		{
															char aux[100];
															strcpy(aux, $1);
															strcat(aux, $2);
															$$ = strdup(aux);
														}
				  ;
expressao_logica_fat	: OU termo_logico expressao_logica_fat		{
																		char aux[100];
																		strcpy(aux, "||");
																		strcat(aux, $2);
																		strcat(aux, $3);
																		$$ = strdup(aux);
																	}
				| /*vazio*/		{ $$ = strdup(""); }
				  ;
termo_logico			: expressao_simples termo_logico_fat		{
																		char aux[100];
																		strcpy(aux, $1);
																		int i;
																		for(i = 0; i<current_tab_tipo ; i++){
																			if(strstr($1, tabela[i].nome) != NULL){
																				if(strstr($1, "\'") != NULL){
																					if(strstr($1, "[") == NULL){
																						if((strstr($1, "!=") != NULL) || strstr($1, "==") != NULL){
																							tabela[i].flag_char = 1;
																						}
																					}
																				}
																			}
																		}
																		strcat(aux, $2);
																		$$ = strdup(aux);
																	}
				  ;
termo_logico_fat			: E expressao_simples termo_logico_fat		{
																			char aux[100];
																			strcpy(aux, "&&");
																			strcat(aux, $2);
																			strcat(aux, $3);
																			$$ = strdup(aux);
																		}
				| /*vazio*/		{ $$ = strdup(""); }
				  ;
				  
expressao_simples 		: expressao_soma expressao_simples_fat		{
																		char aux[100];
																		strcpy(aux, $1);
																		strcat(aux, $2);
																		int i;
																		for(i = 0; i<current_tab_tipo ; i++){
																			if(strcmp($1, tabela[i].nome) == 0){
																				if(tabela[i].flag_string == 1){
																					if(strstr($2, "==") != NULL){
																						if(strstr($2, "\'") == NULL){
																							char *result;
																							strcpy(aux, "strcmp(");
																							strcat(aux, $1);
																							result = repl_str($2, "==", "");
																							strcat(aux, ", ");
																							strcat(aux, result);
																							strcat(aux, ") == 0");
																						}
																					}
																				}
																			}
																		}
																		$$ = strdup(aux);
																	}
				| EXCLAMACAO expressao_soma expressao_simples_fat		{
																			char aux[100];
																			strcpy(aux, "!");
																			strcat(aux, $2);
																			strcat(aux, $3);
																			$$ = strdup(aux);
																		}
				| VERDADEIRO	{ $$ = strdup("true"); }
				| FALSO		{ $$ = strdup("false"); }
				  ;
relacional				: RELACIONAL		{ $$ = strdup(yytext); }
				  ;
expressao_simples_fat	 	: relacional expressao_soma		{
																char aux[100];
																strcpy(aux, $1);
																strcat(aux, $2);
																$$ = strdup(aux);
															}
				| /*vazio*/		{ $$ = strdup(""); }
				  ;
somasub					: SOMASUB	{ $$ = strdup(yytext); }
				  ;
expressao_soma			: somasub termo expressao_soma_fat		{
																	char aux[100];
																	strcpy(aux, $1);
																	strcat(aux, $2);
																	$$ = strdup(aux);
																}
				| termo expressao_soma_fat		{
													char aux[100];
													strcpy(aux, $1);
													strcat(aux, $2);
													$$ = strdup(aux);
												}
				  ;
expressao_soma_fat		: somasub termo expressao_soma_fat		{
																	char aux[100];
																	strcpy(aux, $1);
																	strcat(aux, $2);
																	strcat(aux, $3);
																	$$ = strdup(aux);
																}
				| /*vazio*/		{ $$ = strdup(""); }
				  ;
termo 				: fator termo_fat		{
												char aux[100];
												strcpy(aux, $1);
												strcat(aux, $2);
												$$ = strdup(aux);
											}
	  			  ;
multdiv				: MULTDIV		{ $$ = strdup(yytext); }
				  ;
termo_fat 			: multdiv fator termo_fat		{
														char aux[100];
														strcpy(aux, $1);
														strcat(aux, $2);
														$$ = strdup(aux);
													}
				| /*vazio*/		{ $$ = strdup(""); }
		  		  ;

fator 			: ABREPARENTESE expressao FECHAPARENTESE		{
																	char aux[100];
																	strcpy(aux, "(");
																	strcat(aux, $2);
																	strcat(aux, ")");
																	$$ = strdup(aux);
																}
				| var
				| ativacao
				| numreal
				| numint
				| caractere
				| string
				| raizq_decl
				| potencia_decl
				| tamanhotexto_decl
				| maiuscula_decl
				| concatena_decl
	  			  ;
expressao_unaria 	: numint
				| somasub numint		{
											char aux[30];
											strcpy(aux, $1);
											strcat(aux, $2);
											$$ = strdup(aux);
										}
				  ;
escolha_simples		: expressao_unaria
				| caractere
				  ;
raizq_decl				: RAIZQUADRADA ABREPARENTESE expressao_soma FECHAPARENTESE
																	{
																		char aux[150];
																		strcpy(aux, "sqrt (");
																		strcat(aux, $3);
																		strcat(aux, ")");
																		$$ = strdup(aux);
																	}
				  ;
potencia_decl			: POTENCIA ABREPARENTESE expressao_soma VIRGULA expressao_soma FECHAPARENTESE
																	{
																		char aux[100];
																		strcpy(aux, "pow (");
																		strcat(aux, $3);
																		strcat(aux, ", ");
																		strcat(aux, $5);
																		strcat(aux, ")");
																		$$ = strdup(aux);
																	}
				  ;
tamanhotexto_decl		: TAMANHOTEXTO ABREPARENTESE texto_fator FECHAPARENTESE
																	{
																		char aux[100];
																		strcpy(aux, "strlen (");
																		strcat(aux, $3);
																		strcat(aux, ")");
																		$$ = strdup(aux);
																	}
				  ;
texto_fator				: var
				| string
				  ;
ativacao 			: id ABREPARENTESE args FECHAPARENTESE		{
																	char aux[100];
																	strcpy(aux, $1);
																	strcat(aux, "(");
																	int i;
																	for(i = 0; i<current_tab_tipo ; i++){
																		if(strstr($3, tabela[i].nome) != NULL){
																			if(strstr(tabela[i].vet, "[") != NULL){
																				tabela[i].flag_param = 1;
																			}
																		}
																	}
																	strcat(aux, $3);
																	strcat(aux, ")");
																	$$ = strdup(aux);
																}
		 		  ;
args 				: arg_lista
				| /*vazio*/		{ $$ = strdup(""); }
	 			  ;
arg_lista 			: expressao args_fat		{
													char aux[100];
													strcpy(aux, $1);
													strcat(aux, $2);
													$$ = strdup(aux);
												}
		  		  ;
args_fat 			: VIRGULA expressao args_fat		{
															char aux [100];
															strcpy(aux, ", ");
															strcat(aux, $2);
															strcat(aux, $3);
															$$ = strdup(aux);
														}
				| /*vazio*/		{ $$ = strdup(""); }
				  ;
%%
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