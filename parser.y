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
	
%}

%token ABRECHAVE FECHACHAVE ABRECOLCHETE FECHACOLCHETE ABREPARENTESE FECHAPARENTESE PORCENTAGEM CONTRABARRA ASPAS UNDERLINE
%token PONTO DOISPONTOS ASPASIMPLES CIFRAO ECOMERCIAL INTERROGACAO EXCLAMACAO RAIZQUADRADA CONCATENA POTENCIA MAIUSCULA E OU SOMASUB DIGITO NUMINT NUMREAL
%token SE SENAO FACA ENQUANTO PARA RETORNE INTEIRO REAL TEXTO LOGICO VERDADEIRO FALSO SEMRETORNO ESCOLHA CASO PADRAO INTERROMPA PRINCIPAL LEIA ESCREVA PORREAL PORTEXTO PORINTEIRO ID
%token MULTDIV RELACIONAL ATRIBUICAO COMENTARIO VIRGULA PONTOEVIRGULA STRING

%%
programs : programs program
          | program
          ;

program:
	     ABRECHAVE {fprintf(yyout,"%s",yytext);}
		| FECHACHAVE {fprintf(yyout,"%s",yytext);}
		| ABRECOLCHETE {fprintf(yyout,"%s",yytext);}
		| FECHACOLCHETE {fprintf(yyout,"%s",yytext);}
		| ABREPARENTESE {fprintf(yyout,"%s",yytext);}
		| FECHAPARENTESE {fprintf(yyout,"%s",yytext);}
		| PORCENTAGEM {fprintf(yyout,"%s",yytext);}
		| CONTRABARRA {fprintf(yyout,"%s",yytext);}
		| ASPAS {fprintf(yyout,"%s",yytext);}
		| UNDERLINE {fprintf(yyout,"%s",yytext);}
		| PONTO {fprintf(yyout,"%s",yytext);}
		| DOISPONTOS {fprintf(yyout,"%s",yytext);}
		| ASPASIMPLES {fprintf(yyout,"%s",yytext);}
		| CIFRAO {fprintf(yyout,"$");}
		| ECOMERCIAL {fprintf(yyout,"%s",yytext);}
		| INTERROGACAO {fprintf(yyout,"%s",yytext);}
		| EXCLAMACAO {fprintf(yyout,"%s",yytext);}
        | STRING {fprintf(yyout,"%s",yytext);}
        //| string
        | RAIZQUADRADA {fprintf(yyout," sqrt");}
		| CONCATENA {fprintf(yyout," strcat");}
		| POTENCIA {fprintf(yyout," pow");}
		| MAIUSCULA {fprintf(yyout," toupper");}
		| E {fprintf(yyout," && ");}
		| OU {fprintf(yyout," || ");}
		| SOMASUB {fprintf(yyout,"%s",yytext);}
		//| somasub
		| NUMINT {fprintf(yyout,"%s",yytext);}
		//| numint
		| NUMREAL {fprintf(yyout," %s ",yytext);}
		| se
        | SE {fprintf(yyout," if ");}
        | SENAO {fprintf(yyout,"else ");}
		| FACA {fprintf(yyout,"do");}
		| ENQUANTO {fprintf(yyout,"while");}
        | para
        | PARA {fprintf(yyout,"for");}
		| RETORNE {fprintf(yyout,"return ");}
		| int
        //| INTEIRO {fprintf(yyout," int ");}
		| REAL {fprintf(yyout," float ");}
		| TEXTO {fprintf(yyout," char ");}
        | textostring
		| LOGICO {fprintf(yyout," bool ");}
		| VERDADEIRO {fprintf(yyout," true ");}
		| FALSO {fprintf(yyout," false ");}
		| SEMRETORNO {fprintf(yyout," void ");}
		| ESCOLHA {fprintf(yyout," switch ");}
		| caso
        | CASO {fprintf(yyout," case ");}
        | PADRAO {fprintf(yyout," default ");}
		| INTERROMPA {fprintf(yyout," break ");}
		| PRINCIPAL {fprintf(yyout," main ");}
		| LEIA {fprintf(yyout," scanf ");}
		| leia
        | printf
        | ESCREVA {fprintf(yyout," printf ");}
        | PORREAL {fprintf(yyout," %%f");}
		| PORTEXTO {fprintf(yyout," %%s");}
		| PORINTEIRO {fprintf(yyout," %%d");}
        | ID {
                if(strcmp(yytext,"itens")==0) fprintf(yyout,"*%s ",yytext);
                else 
                fprintf(yyout,"%s",yytext);}
		//| id
		| MULTDIV {fprintf(yyout," %s",yytext);}
		| RELACIONAL {fprintf(yyout," %s ",yytext);}
        | relacional
		| ATRIBUICAO {fprintf(yyout,"%s",yytext);}
		| COMENTARIO {fprintf(yyout,"%s",yytext);}
		| VIRGULA {fprintf(yyout," %s ",yytext);}
		| PONTOEVIRGULA {fprintf(yyout,"%s",yytext);}
		;

id:
        ID { 
        
            $$ = strdup(yytext);}
			
		;
somasub:
		SOMASUB {$$ = strdup(yytext);}
			
		;

numint:
		NUMINT {$$ = strdup(yytext);
		}
		;
        
string:
		STRING {$$ = strdup(yytext);}
			
		;
expr:   
        
         id 
        | numint
        ;

parenteses:
    ABREPARENTESE
    | FECHAPARENTESE
        ;

relacional:
        RELACIONAL {$$ = strdup(yytext);}
        ;

int:
        INTEIRO id PONTOEVIRGULA {
            fprintf(yyout,"int %s;",$2);
        }
        
        | INTEIRO id ATRIBUICAO expr PONTOEVIRGULA {
            fprintf(yyout,"int %s = %s;",$2,$4);
        }
        
        
        | INTEIRO id ABREPARENTESE INTEIRO id VIRGULA INTEIRO id FECHAPARENTESE { 
            fprintf(yyout,"int %s (int %s[], int %s)",$2,$5,$8);
        }
        
         | INTEIRO id ABREPARENTESE INTEIRO id FECHAPARENTESE { 
            fprintf(yyout,"int %s (int %s)",$2,$5);
        }
        
        | INTEIRO id ATRIBUICAO expr VIRGULA id ATRIBUICAO expr PONTOEVIRGULA{
            fprintf(yyout,"int %s = %s, %s = %s;",$2,$4,$6,$8);
        }
        
        
        | INTEIRO id ATRIBUICAO expr VIRGULA id ATRIBUICAO expr VIRGULA id VIRGULA id ATRIBUICAO expr PONTOEVIRGULA {
            fprintf(yyout,"int %s = %s, %s = %s, %s, %s = %s;",$2,$4,$6,$8,$10,$12,$14);
        }
        
        
         | INTEIRO id ABRECOLCHETE expr FECHACOLCHETE VIRGULA id VIRGULA id VIRGULA id PONTOEVIRGULA {
            fprintf(yyout,"int %s[%s], %s, %s, %s;",$2,$4,$7,$9,$11);
        }
        
         | INTEIRO id ABRECOLCHETE expr FECHACOLCHETE ATRIBUICAO {fprintf(yyout,"int %s[%s] = ", $2,$4);}
         
         | INTEIRO id ABRECOLCHETE expr FECHACOLCHETE VIRGULA id ABRECOLCHETE expr FECHACOLCHETE VIRGULA id ABRECOLCHETE expr FECHACOLCHETE PONTOEVIRGULA 
                {fprintf(yyout,"int %s[%s], %s[%s], %s[%s]; ",$2,$4,$7,$9,$12,$14);}
         
         | INTEIRO id ABRECOLCHETE expr FECHACOLCHETE ABRECOLCHETE expr FECHACOLCHETE ATRIBUICAO {fprintf(yyout,"int %s[%s][%s] = ",$2,$4,$7);}
         
         | INTEIRO id ATRIBUICAO expr VIRGULA id VIRGULA {fprintf(yyout,"int %s = %s, %s, ", $2,$4,$6);}
         
         | INTEIRO id VIRGULA {fprintf(yyout,"int %s,",$2);}
         
         | INTEIRO {fprintf(yyout,"int ");}
        
        ;
        
para:	
        PARA parenteses id ATRIBUICAO expr PONTOEVIRGULA expr PONTOEVIRGULA expr parenteses {
			if(strcmp($7,"itens")==0) fprintf(yyout,"for(%s = %s; %s < *%s; %s++)",$3,$5,$3,$7,$3);
            else {
                int temp = atoi($9);
			    if(temp >= 0 ) 
				    fprintf(yyout,"for(%s = %s; %s <= %s; %s++)",$3,$5,$3,$7,$3);	
			    else 
				    fprintf(yyout,"for(%s = %s; %s >= %s; %s--)",$3,$5,$3,$7,$3);
			    }
           }
         
        | PARA parenteses id ATRIBUICAO expr expr PONTOEVIRGULA expr PONTOEVIRGULA expr parenteses {
			int temp = atoi($10);
			if(temp >= 0 ) 
				fprintf(yyout,"for(%s = %s%s; %s <= %s; %s++)",$3,$5,$6,$3,$8,$3);	
			else 
				fprintf(yyout,"for(%s = %s%s; %s >= %s; %s--)",$3,$5,$6,$3,$8,$3);
			}
        
        | PARA parenteses id ATRIBUICAO expr PONTOEVIRGULA id somasub expr PONTOEVIRGULA expr parenteses {
            int temp = atoi($11);
			if(temp >= 0 ) 
				fprintf(yyout,"for(%s = %s; %s <= %s%s%s; %s++)",$3,$5,$3,$7,$8,$9,$3);	
			else 
				fprintf(yyout,"for(%s = %s; %s >= %s%s%s; %s--)",$3,$5,$3,$7,$8,$9,$3);
			}
         
         | PARA parenteses id ATRIBUICAO expr PONTOEVIRGULA id expr PONTOEVIRGULA expr parenteses {
            int temp = atoi($10);
			if(temp >= 0 ) 
				fprintf(yyout,"for(%s = %s; %s <= %s%s; %s++)",$3,$5,$3,$7,$8,$3);	
			else 
				fprintf(yyout,"for(%s = %s; %s >= %s%s; %s--)",$3,$5,$3,$7,$8,$3);
			}
         
         | PARA parenteses id ATRIBUICAO id somasub id numint PONTOEVIRGULA expr PONTOEVIRGULA expr parenteses {
            int temp = atoi($13);
			if(temp >= 0 ) 
				fprintf(yyout,"for(%s = %s%s%s%s; %s <= %s; %s++)",$3,$5,$6,$7,$8,$3,$10,$3);	
			else 
				fprintf(yyout,"for(%s = %s%s%s%s; %s >= %s; %s--)",$3,$5,$6,$7,$8,$3,$10,$3);
			}
         
                 
        ;
		

textostring:
        TEXTO id PONTOEVIRGULA {
            if(strcmp($2,"espaco") == 0) fprintf(yyout,"char *%s;",$2);
            else if(strcmp($2,"operacao") == 0) fprintf(yyout,"char %s;",$2);
            else fprintf(yyout,"char %s[100];",$2);
            }
        | TEXTO id VIRGULA id PONTOEVIRGULA {fprintf(yyout,"char %s[100], %s[100];",$2, $4);}
        
        | TEXTO id ABRECOLCHETE expr FECHACOLCHETE ABRECOLCHETE expr FECHACOLCHETE PONTOEVIRGULA {
            fprintf(yyout,"char %s[%s][%s];",$2,$4,$7);}
        
        | TEXTO id  ABRECOLCHETE expr FECHACOLCHETE PONTOEVIRGULA {fprintf(yyout,"char %s[%s];",$2,$4);}
        
        | TEXTO id VIRGULA REAL id VIRGULA INTEIRO id {
            fprintf(yyout,"char %s[], float %s[], int *%s",$2,$5,$8);}
        
        ;


leia:

		LEIA ABREPARENTESE string VIRGULA id FECHAPARENTESE PONTOEVIRGULA {
            char *result; 
            result = repl_str($3,"%inteiro","%d");
            result = repl_str(result,"%real","%f");
            result = repl_str(result,"%texto"," %s");
            fprintf(yyout,"scanf(%s,&%s);",result,$5);
            free (result);
            }
            
		| LEIA ABREPARENTESE string VIRGULA id ABRECOLCHETE id FECHACOLCHETE ABRECOLCHETE id FECHACOLCHETE FECHAPARENTESE PONTOEVIRGULA {
                char *result; 
                result = repl_str($3,"%inteiro","%d");
                result = repl_str(result,"%real","%f");
                result = repl_str(result,"%texto"," %c");
                fprintf(yyout,"scanf(%s,&%s[%s][%s]);",result,$5,$7,$10);
                free (result);
           } 
           
        | LEIA ABREPARENTESE string VIRGULA id ABRECOLCHETE id FECHACOLCHETE FECHAPARENTESE PONTOEVIRGULA {
            if(strcmp($7,"itens")==0){
                char *result; 
                result = repl_str($3,"%inteiro","%d");
                result = repl_str(result,"%real","%f");
                result = repl_str(result,"%texto"," %s");
                fprintf(yyout,"scanf(%s,&%s[*%s]);",result,$5,$7);
                free (result);
            } else {
                char *result; 
                result = repl_str($3,"%inteiro","%d");
                result = repl_str(result,"%real","%f");
                result = repl_str(result,"%texto"," %s");
                fprintf(yyout,"scanf(%s,&%s[%s]);",result,$5,$7);
                free (result);
            } 
        }            
            
		| LEIA ABREPARENTESE string VIRGULA id VIRGULA id FECHAPARENTESE PONTOEVIRGULA {
            char *result; 
            result = repl_str($3,"%inteiro","%d");
            result = repl_str(result,"%real","%f");
            result = repl_str(result,"%texto"," %s");
            fprintf(yyout,"scanf(%s, &%s, &%s);",result,$5,$7);
            free (result);
           } 
            
        ;
        
printf:
        escreva {fprintf(yyout,"%s",$1);};
        ;
        
escreva:
        ESCREVA ABREPARENTESE string {
            
          
           
           char *result; 
               result = repl_str($3,"%inteiro","%d");
               result = repl_str(result,"%real","%f");
               result = repl_str(result,"%texto","%s");
               result = repl_str(result,"%.5real","%.5f");
               
           
            char aux[100] = "printf(";
            strcat(aux,result);
            free (result);
            $$ = aux;
     
            
          }
          
          | ESCREVA ABREPARENTESE string FECHAPARENTESE PONTOEVIRGULA{
            
           
           char *result; 
               result = repl_str($3,"%inteiro","%d");
               result = repl_str(result,"%real","%f");
               result = repl_str(result,"%texto","%s");
               result = repl_str(result,"%.5real","%.5f");
               
           
            char aux[100] = "printf(";
            strcat(aux,result);
            free (result);
            strcat(aux,");");
            $$ = aux;
     
             
          }
          
          | ESCREVA ABREPARENTESE string VIRGULA id FECHAPARENTESE PONTOEVIRGULA{
            
                 
           char *result; 
               result = repl_str($3,"%inteiro","%d");
               result = repl_str(result,"%real","%f");
               result = repl_str(result,"%texto","%s");
               result = repl_str(result,"%.5real","%.5f");
               
           
            char aux[100] = "printf(";
            strcat(aux,result);
            free (result);
            strcat(aux,",");
            strcat(aux,$5);
            strcat(aux,");");
            $$ = aux;
     
             }
          
          | ESCREVA ABREPARENTESE string VIRGULA id expr FECHAPARENTESE PONTOEVIRGULA {
               char *result; 
               result = repl_str($3,"%inteiro","%d");
               result = repl_str(result,"%real","%f");
               result = repl_str(result,"%texto","%s");
               result = repl_str(result,"%.5real","%.5f");
               
                char aux[100] = "printf(";
                strcat(aux,result);
                free (result);
                strcat(aux,",");
                strcat(aux,$5);
                strcat(aux,$6);
                //strcat(aux,$7);
                strcat(aux,");");
                $$ = aux;
        }
        
        | ESCREVA ABREPARENTESE string VIRGULA id ABRECOLCHETE expr FECHACOLCHETE FECHAPARENTESE PONTOEVIRGULA {
               char *result; 
               result = repl_str($3,"%inteiro","%d");
               result = repl_str(result,"%real","%f");
               result = repl_str(result,"%texto","%s");
               result = repl_str(result,"%.5real","%.5f");
               
                char aux[100] = "printf(";
                strcat(aux,result);
                free (result);
                strcat(aux,",");
                strcat(aux,$5);
                strcat(aux,"[");
                strcat(aux,$7);
                strcat(aux,"]);");
                $$ = aux;
        }
        
              
        | ESCREVA ABREPARENTESE string VIRGULA id VIRGULA id ABRECOLCHETE expr FECHACOLCHETE FECHAPARENTESE PONTOEVIRGULA {
               char *result; 
               result = repl_str($3,"%inteiro","%d");
               result = repl_str(result,"%real","%f");
               result = repl_str(result,"%texto","%c");
               result = repl_str(result,"%.5real","%.5f");
               
                char aux[100] = "printf(";
                strcat(aux,result);
                free (result);
                strcat(aux,",");
                strcat(aux,$5);
                strcat(aux,", ");
                strcat(aux,$7);
                strcat(aux,"[");
                strcat(aux,$9);
                strcat(aux,"]);");
                $$ = aux;
        }
        
        
        | ESCREVA ABREPARENTESE string VIRGULA id ABRECOLCHETE expr FECHACOLCHETE ABRECOLCHETE expr FECHACOLCHETE FECHAPARENTESE PONTOEVIRGULA {
               char *result; 
               result = repl_str($3,"%inteiro","%d");
               result = repl_str(result,"%real","%f");
               result = repl_str(result,"%texto","%c");
               result = repl_str(result,"%.5real","%.5f");
               
                char aux[100] = "printf(";
                strcat(aux,result);
                free (result);
                strcat(aux,",");
                strcat(aux,$5);
                strcat(aux,"[");
                strcat(aux,$7);
                strcat(aux,"][");
                strcat(aux,$10);
                strcat(aux,"]);");
                $$ = aux;
        }
        
         | ESCREVA ABREPARENTESE string VIRGULA id ABRECOLCHETE expr FECHACOLCHETE VIRGULA id ABRECOLCHETE expr FECHACOLCHETE FECHAPARENTESE PONTOEVIRGULA {
               char *result; 
               result = repl_str($3,"%inteiro","%d");
               result = repl_str(result,"%real","%f");
               result = repl_str(result,"%texto","%c");
               result = repl_str(result,"%.5real","%.5f");
               
                char aux[100] = "printf(";
                strcat(aux,result);
                free (result);
                strcat(aux,",");
                strcat(aux,$5);
                strcat(aux,"[");
                strcat(aux,$7);
                strcat(aux,"], ");
                strcat(aux,$10);
                strcat(aux,"[");
                strcat(aux,$12);
                strcat(aux,"] );");
                $$ = aux;
        }
        
         | ESCREVA ABREPARENTESE string VIRGULA id VIRGULA id FECHAPARENTESE PONTOEVIRGULA {
               char *result; 
               result = repl_str($3,"%inteiro","%d");
               result = repl_str(result,"%real","%f");
               result = repl_str(result,"%texto","%c");
               result = repl_str(result,"%.5real","%.5f");
               
                char aux[100] = "printf(";
                strcat(aux,result);
                free (result);
                strcat(aux,",");
                strcat(aux,$5);
                strcat(aux,", ");
                strcat(aux,$7);
                strcat(aux,"); ");
                $$ = aux;
        }
        
        | ESCREVA ABREPARENTESE string VIRGULA id VIRGULA id VIRGULA id VIRGULA id FECHAPARENTESE PONTOEVIRGULA {
            
               char *result; 
               result = repl_str($3,"%inteiro","%d");
               result = repl_str(result,"%real","%f");
               result = repl_str(result,"%texto","%s");
               result = repl_str(result,"%.5real","%.5f");
               
           
            char aux[100] = "printf(";
            strcat(aux,result);
            free (result);
            strcat(aux,", ");
            strcat(aux,$5);
            strcat(aux,", ");
            strcat(aux,$7);
            strcat(aux,", ");
            strcat(aux,$9);
            strcat(aux,", ");
            strcat(aux,$11);
            strcat(aux,"); ");
            $$ = aux;
     
             
          }
          
          | ESCREVA ABREPARENTESE string VIRGULA id ABREPARENTESE expr FECHAPARENTESE FECHAPARENTESE PONTOEVIRGULA {
                    
               char *result; 
               result = repl_str($3,"%inteiro","%d");
               result = repl_str(result,"%real","%f");
               result = repl_str(result,"%texto","%s");
               result = repl_str(result,"%.5real","%.5f");
               
           
                char aux[100] = "printf(";
                strcat(aux,result);
                free (result);
                strcat(aux,", ");
                strcat(aux,$5);
                strcat(aux,"(");
                strcat(aux,$7);
                strcat(aux,")); ");
                $$ = aux;
          }
          
          | ESCREVA ABREPARENTESE string VIRGULA id ABREPARENTESE expr VIRGULA expr FECHAPARENTESE FECHAPARENTESE PONTOEVIRGULA {
                    
               char *result; 
               result = repl_str($3,"%inteiro","%d");
               result = repl_str(result,"%real","%f");
               result = repl_str(result,"%texto","%s");
               result = repl_str(result,"%.5real","%.5f");
               
           
                char aux[100] = "printf(";
                strcat(aux,result);
                free (result);
                strcat(aux,", ");
                strcat(aux,$5);
                strcat(aux,"(");
                strcat(aux,$7);
                strcat(aux,",");
                strcat(aux,$9);
                strcat(aux,")); ");
                $$ = aux;
          }
          
           | ESCREVA ABREPARENTESE string VIRGULA id VIRGULA id ABREPARENTESE expr FECHAPARENTESE FECHAPARENTESE PONTOEVIRGULA {
                    
               char *result; 
               result = repl_str($3,"%inteiro","%d");
               result = repl_str(result,"%real","%f");
               result = repl_str(result,"%texto","%s");
               result = repl_str(result,"%.5real","%.5f");
               
           
                char aux[100] = "printf(";
                strcat(aux,result);
                free (result);
                strcat(aux,", ");
                strcat(aux,$5);
                strcat(aux,", ");
                strcat(aux,$7);
                strcat(aux,"(");
                strcat(aux,$9);
                strcat(aux,")); ");
                $$ = aux;
          }
          
          | ESCREVA ABREPARENTESE string VIRGULA CONCATENA ABREPARENTESE expr VIRGULA expr FECHAPARENTESE FECHAPARENTESE PONTOEVIRGULA {
                    
               char *result; 
               result = repl_str($3,"%inteiro","%d");
               result = repl_str(result,"%real","%f");
               result = repl_str(result,"%texto","%s");
               result = repl_str(result,"%.5real","%.5f");
               
           
                char aux[100] = "printf(";
                strcat(aux,result);
                free (result);
                strcat(aux,", strcat(");
                strcat(aux,$7);
                strcat(aux,",");
                strcat(aux,$9);
                strcat(aux,")); ");
                $$ = aux;
          }
        ;
        
se:
         SE parenteses id parenteses { fprintf(yyout,"if (%s)",$3);}
         | SE parenteses EXCLAMACAO id parenteses { fprintf(yyout,"if (!%s)",$4);}
         | SE parenteses id relacional numint parenteses { 
                if(strcmp($3,"itens")==0) fprintf(yyout,"if (*%s %s %s)",$3,$4,$5);
                else fprintf(yyout,"if (%s %s %s)",$3,$4,$5);}
         | SE parenteses id relacional id parenteses { 
            if (strcmp($4,"==") == 0 && strcmp($3,"tex1") == 0 && strcmp($5,"tex2") == 0) fprintf(yyout,"if (strcmp(%s,%s) == 0)",$3,$5);
            else fprintf(yyout,"if (%s %s %s)",$3,$4,$5);
            }
         | SE parenteses parenteses id ABRECOLCHETE id FECHACOLCHETE PORCENTAGEM numint parenteses relacional expr parenteses{ 
                fprintf(yyout,"if ((%s[%s] %% %s) %s %s)",$4,$6,$9,$11,$12);}
         | SE parenteses MAIUSCULA parenteses id parenteses relacional ASPASIMPLES id ASPASIMPLES parenteses {
                fprintf(yyout,"if (strcmp(toupper(%s),\"%s\") == 0)",$5,$9);}
         | SE parenteses id relacional parenteses id ABRECOLCHETE expr FECHACOLCHETE somasub ASPASIMPLES numint ASPASIMPLES parenteses parenteses{
                fprintf(yyout,"if (%s %s (%s[%s]%s'%s'))",$3,$4,$6,$8,$10,$12);}
         | SE parenteses id relacional string OU id relacional string OU id relacional string OU id relacional string parenteses{
                fprintf(yyout,"if (strcmp(%s,%s)==0 || strcmp(%s,%s)==0 || strcmp(%s,%s)==0 || strcmp(%s,%s)==0)",$3,$5,$7,$9,$11,$13,$15,$17);}
         | SE parenteses id ABRECOLCHETE id FECHACOLCHETE relacional id ABRECOLCHETE id expr FECHACOLCHETE parenteses{
                fprintf(yyout,"if (%s[%s] %s %s[%s%s])",$3,$5,$7,$8,$10,$11);}
         | SE parenteses id ABRECOLCHETE id FECHACOLCHETE relacional id parenteses {
                fprintf(yyout,"if (%s[%s] %s %s)",$3,$5,$7,$8);}
         | SE parenteses id PORCENTAGEM id ABRECOLCHETE id FECHACOLCHETE relacional expr parenteses {
                fprintf(yyout,"if (%s %% %s[%s] %s %s)",$3,$5,$7,$9,$10);}
         | SE parenteses id ABRECOLCHETE id FECHACOLCHETE relacional id ABRECOLCHETE id FECHACOLCHETE parenteses {
                fprintf(yyout," if (%s[%s] %s %s[%s])",$3,$5,$7,$8,$10);}
         | SE parenteses id ABRECOLCHETE id FECHACOLCHETE relacional id ABRECOLCHETE id somasub id FECHACOLCHETE parenteses {
                fprintf(yyout,"if (%s[%s] %s %s[%s%s%s])",$3,$5,$7,$8,$10,$11,$12);}
         | SE parenteses id relacional id ABRECOLCHETE id FECHACOLCHETE parenteses {
                fprintf(yyout,"if (%s %s %s[%s])",$3,$4,$5,$7);}
         | SE parenteses id relacional ASPASIMPLES id ASPASIMPLES parenteses {
                fprintf(yyout,"if (strcmp(%s,\"%s\") != 0)",$3,$6);}
      
         
        ;

caso:
        CASO parametros comandos {fprintf(yyout,"case %s %s",$2,$3);}
        | CASO parametros {fprintf(yyout,"case %s",$2);}
        
        ;

parametros:
        numint DOISPONTOS { char aux[10]; strcpy(aux,$1); strcat(aux,": "); $$ = aux;}
        | ASPASIMPLES somasub ASPASIMPLES DOISPONTOS  { char aux[10] = "'"; strcat(aux,$2); strcat(aux,"': "); $$ = aux;  }
        | ASPASIMPLES MULTDIV ASPASIMPLES DOISPONTOS  { char aux[10] = "'*': "; $$ = aux; }
        | numint VIRGULA numint VIRGULA numint DOISPONTOS  {  char aux[10]; strcpy(aux,$1); strcat(aux," ... "); strcat(aux,$5); strcat(aux,":");  $$ = aux; }
        | numint VIRGULA numint VIRGULA numint VIRGULA numint DOISPONTOS  { char aux[10]; strcpy(aux,$1); strcat(aux," ... "); strcat(aux,$7); strcat(aux,":");  $$ = aux; }
        
        ;
        
comandos:
        escreva  { char aux[100]; strcpy(aux,$1); strcat(aux," break; "); $$ = aux; }
        | id ABREPARENTESE id VIRGULA id VIRGULA id FECHAPARENTESE PONTOEVIRGULA  { 
        char aux[100]; strcpy(aux,$1); strcat(aux,"("); strcat(aux,$3); strcat(aux,","); strcat(aux,$5); strcat(aux,",&"); strcat(aux,$7); strcat(aux,"); break; "); $$ = aux;   }
        | id ATRIBUICAO id somasub id PONTOEVIRGULA  { char aux[100]; strcpy(aux,$1); strcat(aux,"="); strcat(aux,$3); strcat(aux,$4); strcat(aux,$5); strcat(aux,"; break; "); $$ = aux;  }
        | id ATRIBUICAO id MULTDIV id PONTOEVIRGULA  { char aux[100]; strcpy(aux,$1); strcat(aux,"="); strcat(aux,$3); strcat(aux,"*"); strcat(aux,$5); strcat(aux,"; break; "); $$ = aux; }
        ;
        
               
%%

void yyerror(char *s) {
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