#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int  main (){int cont,dv1 , dv2 , s1=0 , s2=0;char cpf[100];printf("Digite CPF:\n");scanf(" %s",&cpf);for(cont = 0; cont <= 8; cont++)s1=s1+(cont+1) *(cpf[cont]-'0');dv1=s1%11;if (dv1 == 10)dv1=0;if (dv1 == (cpf[9]-'0')){for(cont = 0; cont <= 9; cont++)s2+=(cont) *(cpf[cont]-'0');dv2=s2%11;if (dv2 == 10)dv2=0;if (dv2 == (cpf[10]-'0')){printf("valido\n");}else {printf("invalido\n");}}else {printf("invalido\n");}}