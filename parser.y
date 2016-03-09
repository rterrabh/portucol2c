%{
    #include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <stdbool.h>
	#define YYSTYPE char*
    int yylex(void);
    void yyerror(char *);
	extern FILE *yyin, *yyout;
	extern char* yytext;
	bool mudar = false;
	
%}


%token WS QUEBRALINHA ABRECHAVE FECHACHAVE ABRECOLCHETE FECHACOLCHETE ABREPARENTESE FECHAPARENTESE PORCENTAGEM CONTRABARRA ASPAS UNDERLINE
%token PONTO DOISPONTOS ASPASIMPLES CIFRAO ECOMERCIAL INTERROGACAO EXCLAMACAO SQRT STRCAT POW TOUPPER AND OR SOMA DIGITO NUMINT NUMREAL
%token IF ELSE DO WHILE FOR RETURN INT FLOAT CHAR BOOL TRUE FALSE VOID SWITCH CASE DEFAULT BREAK MAIN PRINTF SCANF F C I ID
%token MULT RELACIONAL ATRIBUICAO COMENTARIO VIRGULA PONTOEVIRGULA OTHER

%%
programs : programs program
          | program
          ;

program:
		WS {fprintf(yyout," ");}
		| QUEBRALINHA {fprintf(yyout,"\n");}
		| ID {fprintf(yyout,"%s",yytext);}
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
		| SQRT {fprintf(yyout,"sqrt");}
		| STRCAT {fprintf(yyout,"strcat");}
		| POW {fprintf(yyout,"pow");}
		| TOUPPER {fprintf(yyout,"toupper");}
		| AND {fprintf(yyout,"&&");}
		| OR {fprintf(yyout,"||");}
		| SOMA {fprintf(yyout,"%s",yytext);}
		| soma
		| NUMINT {fprintf(yyout,"%s",yytext);}
		| numint
		| NUMREAL {fprintf(yyout,"%s",yytext);}
		| IF {fprintf(yyout,"if");}
		| ELSE {fprintf(yyout,"else");}
		| DO {fprintf(yyout,"do");}
		| WHILE {fprintf(yyout,"while");}
		| for
		| RETURN {fprintf(yyout,"return");}
		| INT {fprintf(yyout,"int");}
		| FLOAT {fprintf(yyout,"float");}
		| CHAR {fprintf(yyout,"char");}
		| BOOL {fprintf(yyout,"bool");}
		| TRUE {fprintf(yyout,"true");}
		| FALSE {fprintf(yyout,"false");}
		| VOID {fprintf(yyout,"void");}
		| SWITCH {fprintf(yyout,"switch");}
		| CASE {fprintf(yyout,"case");}
		| DEFAULT {fprintf(yyout,"default");}
		| BREAK {fprintf(yyout,"break");}
		| MAIN {fprintf(yyout,"main");}
		| PRINTF {fprintf(yyout,"printf");}
		| scanf
		| F {fprintf(yyout,"%%f");}
		| C {fprintf(yyout,"%%c");}
		| I {fprintf(yyout,"%%d");}
		| MULT {fprintf(yyout,"%s",yytext);}
		| RELACIONAL {fprintf(yyout,"%s",yytext);}
		| ATRIBUICAO {fprintf(yyout,"%s",yytext);}
		| COMENTARIO {fprintf(yyout,"%s",yytext);}
		| VIRGULA {fprintf(yyout,"%s",yytext);}
		| PONTOEVIRGULA {fprintf(yyout,"%s",yytext);}
		| OTHER {fprintf(yyout,"Invalido. Input -> \"%s\"",yytext); }
		;

expr:   id | numint

for:	FOR ABREPARENTESE id ATRIBUICAO expr PONTOEVIRGULA id PONTOEVIRGULA expr FECHAPARENTESE ABRECHAVE {
			int temp = atoi($9);
			if(temp >= 0 ) 
				fprintf(yyout,"for(%s = %s; %s <= %s; %s++){",$3,$5,$3,$7,$3);	
			else 
				fprintf(yyout,"for(%s = %s; %s >= %s; %s--){",$3,$5,$3,$7,$3);
			}
		
        ;

numint:
		NUMINT {$$ = strdup(yytext);
		}
		;

tipo_entrada:   F
                | C
                | I
                ;

scanf: SCANF ABREPARENTESE ASPAS tipo_entrada ASPAS VIRGULA id FECHAPARENTESE PONTOEVIRGULA
        {fprintf(yyout,"scanf(\"", $4 ,"\",&", $7 ,");"); }
/*
		SCANF ABREPARENTESE ASPAS C ASPAS VIRGULA id FECHAPARENTESE PONTOEVIRGULA {fprintf(yyout,"scanf(\"%%c\",&%s);",$7);}
		| SCANF ABREPARENTESE ASPAS F ASPAS VIRGULA id FECHAPARENTESE PONTOEVIRGULA {fprintf(yyout,"scanf(\"%%f\",&%s);",$7);}
		| SCANF ABREPARENTESE ASPAS I ASPAS VIRGULA id FECHAPARENTESE PONTOEVIRGULA {fprintf(yyout,"scanf(\"%%d\",&%s);",$7);}
		| SCANF ABREPARENTESE ASPAS C ASPAS VIRGULA id ABRECOLCHETE id FECHACOLCHETE FECHAPARENTESE PONTOEVIRGULA {fprintf(yyout,"scanf(\"%%c\",&%s[%s]);",$7,$9);}
		| SCANF ABREPARENTESE ASPAS F ASPAS VIRGULA id ABRECOLCHETE id FECHACOLCHETE FECHAPARENTESE PONTOEVIRGULA {fprintf(yyout,"scanf(\"%%f\",&%s[%s]);",$7,$9);}
		| SCANF ABREPARENTESE ASPAS I ASPAS VIRGULA id ABRECOLCHETE id FECHACOLCHETE FECHAPARENTESE PONTOEVIRGULA {fprintf(yyout,"scanf(\"%%d\",&%s[%s]);",$7,$9);}
		| SCANF WS ABREPARENTESE ASPAS C ASPAS VIRGULA WS id FECHAPARENTESE PONTOEVIRGULA {fprintf(yyout,"scanf(\"%%c\",&%s);",$9);}
		| SCANF WS ABREPARENTESE ASPAS F ASPAS VIRGULA WS id FECHAPARENTESE PONTOEVIRGULA {fprintf(yyout,"scanf(\"%%f\",&%s);",$9);}
		| SCANF WS ABREPARENTESE ASPAS I ASPAS VIRGULA WS id FECHAPARENTESE PONTOEVIRGULA {fprintf(yyout,"scanf(\"%%d\",&%s);",$9);}
		| SCANF WS ABREPARENTESE ASPAS C ASPAS VIRGULA WS id ABRECOLCHETE id FECHACOLCHETE FECHAPARENTESE PONTOEVIRGULA {fprintf(yyout,"scanf(\"%%c\",&%s[%s]);",$9,$11);}
		| SCANF WS ABREPARENTESE ASPAS F ASPAS VIRGULA WS id ABRECOLCHETE id FECHACOLCHETE FECHAPARENTESE PONTOEVIRGULA {fprintf(yyout,"scanf(\"%%f\",&%s[%s]);",$9,$11);}
		| SCANF WS ABREPARENTESE ASPAS I ASPAS VIRGULA WS id ABRECOLCHETE id FECHACOLCHETE FECHAPARENTESE PONTOEVIRGULA {fprintf(yyout,"scanf(\"%%d\",&%s[%s]);",$9,$11);}
		| SCANF WS ABREPARENTESE ASPAS WS C ASPAS VIRGULA WS id FECHAPARENTESE PONTOEVIRGULA {fprintf(yyout,"scanf(\"%%c\",&%s);",$10);}
		| SCANF WS ABREPARENTESE ASPAS WS C ASPAS VIRGULA WS id ABRECOLCHETE id VIRGULA id FECHACOLCHETE FECHAPARENTESE PONTOEVIRGULA {fprintf(yyout,"scanf(\" %%c\",&%s[%s,%s]);",$10,$12,$14);}
		| SCANF WS ABREPARENTESE ASPAS F WS F ASPAS VIRGULA WS id VIRGULA WS id FECHAPARENTESE PONTOEVIRGULA {fprintf(yyout,"scanf(\"%%f %%f\", &%s, &%s);",$11,$14);}
*/
        ;
id:
		ID {$$ = strdup(yytext);}
			
		;
soma:
		SOMA {$$ = strdup(yytext);}
			
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