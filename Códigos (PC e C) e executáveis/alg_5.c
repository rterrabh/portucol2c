#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int busca_binaria (int v[], int chave){int ini = 0, fim = 9, meio, result = -1;while(fim >= ini){meio=(ini+fim) /2;if (chave == v[meio]){result=meio;fim=0;}else if (chave < v[meio]){fim=meio-1;}else if (chave > v[meio]){ini=meio+1;}}return result;}int  main (){int v[10], posi, num, i;printf("Digite o numero a ser procurado: ");scanf("%d",&num);for(i = 0; i <= 9; i++){v[i]=i+2;}posi=busca_binaria(v , num);printf("Posicao %d",posi);}