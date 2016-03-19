#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int  main (){char tex1[100], tex2[100];int num;printf("Texto 1: \n");scanf(" %s",&tex1);printf("Texto 2: \n");scanf(" %s",&tex2);printf("1 para concatenar. \n");printf("2 para comparar. \n");scanf("%d",&num);if (num == 1){printf("%s\n", strcat(tex1,tex2)); }else {if (strcmp(tex1,tex2) == 0){printf("Os textos sao iguais");}else printf("Os textos sao diferentes");}}