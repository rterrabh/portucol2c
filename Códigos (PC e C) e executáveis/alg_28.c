#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int  main (){int Avet[10], Bvet[10], Cvet[10]; int i,x; bool k;char dc[100];char *espaco;k= true ;espaco="       ";x=10;do{printf("Digite quantos numeros : \n");scanf("%d",&x);if (x == 0)k= false ;}while((x < 0) || (x > 10));while(k){printf("Digite os (%d) numeros: \n",x);for(i = 0; i <= x; i++){printf("Numero [%d] : ",i);scanf("%d",&Avet[i]);if ((Avet[i] % 2) == 0){Bvet[i]=Avet[i];Cvet[i]=0;}else {Bvet[i]=0;Cvet[i]=Avet[i];}}printf("Os numeros sao:\n");printf("Vetor - Entrados - Pares - Impares \n");printf("===================================\n");for(i = 0; i <= x-1; i++){printf("Avet[%d]= ",i);printf("%d",Avet[i]);printf("%s",espaco);printf("%d",Bvet[i]);printf("%s",espaco);printf("%d\n",Cvet[i]);}printf("\n");printf("Deseja continuar <S/N> ? \n");scanf(" %s",&dc);if (strcmp(toupper(dc),"N") == 0)k= false ;}}