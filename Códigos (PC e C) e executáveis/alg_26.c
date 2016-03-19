#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int  main (){char time[100];printf("Entre com o nome de um time de futebol:");scanf(" %s",&time);if (strcmp(time,"Fluminense")==0 || strcmp(time,"Flamengo")==0 || strcmp(time,"Vasco")==0 || strcmp(time,"Botafogo")==0){printf("E um time carioca.");}else if (strcmp(time,"Sao Paulo")==0 || strcmp(time,"Palmeiras")==0 || strcmp(time,"Santos")==0 || strcmp(time,"Corinthians")==0){printf("E um time paulista.");}else printf("E de outro estado.");}