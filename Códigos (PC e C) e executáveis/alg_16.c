#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int  main (){char matriz[4][4];int i,x;for(i = 0; i <= 3; i++){for(x = 0; x <= 3; x++){printf("Linha: %d ",i+1);printf("Coluna: %d ",x+1);scanf("  %c",&matriz[x][i]);}printf("\n");}printf("\n");printf(" Mostrando so a coluna 3 \n");printf("\n");for(i = 0; i <= 3; i++){printf("%c",matriz[2][i]);}}