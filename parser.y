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

%token WS QUEBRALINHA ABRECHAVE FECHACHAVE ABRECOLCHETE FECHACOLCHETE ABREPARENTESE FECHAPARENTESE PORCENTAGEM CONTRABARRA ASPAS UNDERLINE
%token PONTO DOISPONTOS ASPASIMPLES CIFRAO ECOMERCIAL INTERROGACAO EXCLAMACAO RAIZQUADRADA CONCATENA POTENCIA MAIUSCULA E OU SOMASUB DIGITO NUMINT NUMREAL
%token SE SENAO FACA ENQUANTO PARA RETORNE INTEIRO REAL TEXTO LOGICO VERDADEIRO FALSO SEMRETORNO ESCOLHA CASO PADRAO INTERROMPA PRINCIPAL LEIA ESCREVA PORREAL PORTEXTO PORINTEIRO ID
%token MULTDIV RELACIONAL ATRIBUICAO COMENTARIO VIRGULA PONTOEVIRGULA STRING OTHER

%%
programs : programs program
          | program
          ;

program:
		WS {fprintf(yyout," ");}
		| QUEBRALINHA {fprintf(yyout,"\n");}
		| ID {fprintf(yyout,"%s ",yytext);}
		| id
		| ABRECHAVE {fprintf(yyout,"%s",yytext);}
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
        | string
		| RAIZQUADRADA {fprintf(yyout," sqrt");}
		| CONCATENA {fprintf(yyout," strcat");}
		| POTENCIA {fprintf(yyout," pow");}
		| MAIUSCULA {fprintf(yyout," toupper");}
		| E {fprintf(yyout," && ");}
		| OU {fprintf(yyout," || ");}
		| SOMASUB {fprintf(yyout,"%s",yytext);}
		| somasub
		| NUMINT {fprintf(yyout," %s ",yytext);}
		| numint
		| NUMREAL {fprintf(yyout," %s ",yytext);}
		| SE {fprintf(yyout," if");}
		| SENAO {fprintf(yyout," else ");}
		| FACA {fprintf(yyout,"do");}
		| ENQUANTO {fprintf(yyout,"while");}
		| para
		| RETORNE {fprintf(yyout,"return ");}
		| INTEIRO {fprintf(yyout," int ");}
		| REAL {fprintf(yyout," float ");}
		| TEXTO {fprintf(yyout," char ");}
		| LOGICO {fprintf(yyout," bool ");}
		| VERDADEIRO {fprintf(yyout," true ");}
		| FALSO {fprintf(yyout," false ");}
		| SEMRETORNO {fprintf(yyout," void ");}
		| ESCOLHA {fprintf(yyout," switch ");}
		| CASO {fprintf(yyout," case ");}
		| PADRAO {fprintf(yyout," default ");}
		| INTERROMPA {fprintf(yyout," break ");}
		| PRINCIPAL {fprintf(yyout," main ");}
		| LEIA {fprintf(yyout," scanf ");}
		| leia
        | ESCREVA {fprintf(yyout," printf ");}
        | escreva
		| PORREAL {fprintf(yyout," %%f");}
		| PORTEXTO {fprintf(yyout," %%c");}
		| PORINTEIRO {fprintf(yyout," %%d");}
		| MULTDIV {fprintf(yyout," %s",yytext);}
		| RELACIONAL {fprintf(yyout," %s ",yytext);}
		| ATRIBUICAO {fprintf(yyout," %s ",yytext);}
		| COMENTARIO {fprintf(yyout,"%s",yytext);}
		| VIRGULA {fprintf(yyout," %s ",yytext);}
		| PONTOEVIRGULA {fprintf(yyout,"%s",yytext);}
		| OTHER //{fprintf(yyout,"Invalido. Input -> \"%s\"",yytext); }
		;

expr:   
        
         id 
        | numint
        ;
        
para:	
        PARA ABREPARENTESE id ATRIBUICAO expr PONTOEVIRGULA expr PONTOEVIRGULA expr FECHAPARENTESE {
			int temp = atoi($9);
			if(temp >= 0 ) 
				fprintf(yyout,"for(%s = %s; %s <= %s; %s++)",$3,$5,$3,$7,$3);	
			else 
				fprintf(yyout,"for(%s = %s; %s >= %s; %s--)",$3,$5,$3,$7,$3);
			}
         
        | PARA ABREPARENTESE id ATRIBUICAO expr expr PONTOEVIRGULA expr PONTOEVIRGULA expr FECHAPARENTESE {
			int temp = atoi($10);
			if(temp >= 0 ) 
				fprintf(yyout,"for(%s = %s%s; %s <= %s; %s++)",$3,$5,$6,$3,$8,$3);	
			else 
				fprintf(yyout,"for(%s = %s%s; %s >= %s; %s--)",$3,$5,$6,$3,$8,$3);
			}
        
        | PARA ABREPARENTESE id ATRIBUICAO expr PONTOEVIRGULA id somasub expr PONTOEVIRGULA expr FECHAPARENTESE {
            int temp = atoi($11);
			if(temp >= 0 ) 
				fprintf(yyout,"for(%s = %s; %s <= %s%s%s; %s++)",$3,$5,$3,$7,$8,$9,$3);	
			else 
				fprintf(yyout,"for(%s = %s; %s >= %s%s%s; %s--)",$3,$5,$3,$7,$8,$9,$3);
			}
         
         | PARA ABREPARENTESE id ATRIBUICAO expr PONTOEVIRGULA id expr PONTOEVIRGULA expr FECHAPARENTESE {
            int temp = atoi($10);
			if(temp >= 0 ) 
				fprintf(yyout,"for(%s = %s; %s <= %s%s; %s++)",$3,$5,$3,$7,$8,$3);	
			else 
				fprintf(yyout,"for(%s = %s; %s >= %s%s; %s--)",$3,$5,$3,$7,$8,$3);
			}
         
         | PARA ABREPARENTESE id ATRIBUICAO id somasub id numint PONTOEVIRGULA expr PONTOEVIRGULA expr FECHAPARENTESE {
            int temp = atoi($13);
			if(temp >= 0 ) 
				fprintf(yyout,"for(%s = %s%s%s%s; %s <= %s; %s++)",$3,$5,$6,$7,$8,$3,$10,$3);	
			else 
				fprintf(yyout,"for(%s = %s%s%s%s; %s >= %s; %s--)",$3,$5,$6,$7,$8,$3,$10,$3);
			}
         
                 
        ;
		
numint:
		NUMINT {$$ = strdup(yytext);
		}
		;

/*portipo:
        portexto
        | porinteiro
        | porreal
        ;

portexto:
        PORTEXTO {$$ = "%c";}
        ;

porinteiro:
        PORINTEIRO {$$ = "%d";}
        ;
 
porreal:
        PORREAL {$$ = "%f";}
        ;
*/

leia:

		LEIA ABREPARENTESE string VIRGULA id FECHAPARENTESE PONTOEVIRGULA {
            char *result; 
            result = repl_str($3,"%inteiro","%d");
            result = repl_str(result,"%real","%f");
            result = repl_str(result,"%texto","%c");
            fprintf(yyout,"scanf(%s,&%s);",result,$5);
            free (result);
            }
            
		| LEIA ABREPARENTESE string VIRGULA id ABRECOLCHETE id FECHACOLCHETE ABRECOLCHETE id FECHACOLCHETE FECHAPARENTESE PONTOEVIRGULA {
                char *result; 
                result = repl_str($3,"%inteiro","%d");
                result = repl_str(result,"%real","%f");
                result = repl_str(result,"%texto","%c");
                fprintf(yyout,"scanf(%s,&%s[%s][%s]);",result,$5,$7,$10);
                free (result);
           } 
           
        | LEIA ABREPARENTESE string VIRGULA id ABRECOLCHETE id FECHACOLCHETE FECHAPARENTESE PONTOEVIRGULA {
            char *result; 
            result = repl_str($3,"%inteiro","%d");
            result = repl_str(result,"%real","%f");
            result = repl_str(result,"%texto","%c");
            fprintf(yyout,"scanf(%s,&%s[%s]);",result,$5,$7);
            free (result);
           } 
            
            
		| LEIA ABREPARENTESE string VIRGULA id VIRGULA id FECHAPARENTESE PONTOEVIRGULA {
            char *result; 
            result = repl_str($3,"%inteiro","%d");
            result = repl_str(result,"%real","%f");
            result = repl_str(result,"%texto","%c");
            fprintf(yyout,"scanf(%s, &%s, &%s);",result,$5,$7);
            free (result);
           } 
            
            
        
                
		;
        

/*leia:

		LEIA ABREPARENTESE ASPAS portipo ASPAS VIRGULA id FECHAPARENTESE PONTOEVIRGULA {
            fprintf(yyout,"scanf(\"%s\",&%s);",$4,$7);}
            
		| LEIA ABREPARENTESE ASPAS portipo ASPAS VIRGULA id ABRECOLCHETE id FECHACOLCHETE FECHAPARENTESE PONTOEVIRGULA {
            fprintf(yyout,"scanf(\"%s\",&%s[%s]);",$4,$7,$9);}
            
		| LEIA ABREPARENTESE ASPAS portipo portipo ASPAS VIRGULA id VIRGULA id FECHAPARENTESE PONTOEVIRGULA {
            fprintf(yyout,"scanf(\"%s %s\", &%s, &%s);",$4,$5,$8,$10);}
            
        | LEIA ABREPARENTESE ASPAS portipo ASPAS VIRGULA id ABRECOLCHETE expr VIRGULA expr FECHACOLCHETE FECHAPARENTESE PONTOEVIRGULA {
                fprintf(yyout,"scanf(\"\\n%s\",&%s[%s,%s]);",$4,$7,$9,$11);}
		;
*/
id:
		ID {$$ = strdup(yytext);}
			
		;
somasub:
		SOMASUB {$$ = strdup(yytext);}
			
		;
        
string:
		STRING {$$ = strdup(yytext);}
			
		;
        
escreva:
        ESCREVA ABREPARENTESE string {
            
           char *result; 
               result = repl_str($3,"%inteiro","%d");
               result = repl_str(result,"%real","%f");
               result = repl_str(result,"%texto","%c");
               result = repl_str(result,"%.5real","%.5f");
               
            fprintf(yyout,"printf(%s",result);
            free (result);
           
            
         }
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
	fprintf(yyout,"\n");
	yyin = fopen(argv[1], "r");
	yyparse();
    return 0;
}