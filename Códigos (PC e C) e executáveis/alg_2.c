#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int  main (){ float xraiz , x1 , x2 , delta , a , b , c , b2;printf("Digite o valor de 'A': ");scanf("%f",&a);printf("Digite o valor de 'B': ");scanf("%f",&b);printf("Digite o valor de 'C': ");scanf("%f",&c);b2=b *b;xraiz=((4 *a) *c);delta=b2-xraiz;if (a == 0){printf("'A' tem que ser diferente de (0)");}else if (delta > 0){printf("Existem duas raizes 'possiveis'\n");x1=((-b+ sqrt(delta)) /(2 *a));x2=((-b- sqrt(delta)) /(2 *a));printf("A Primeira raiz X': %f\n",x1);printf("A Segunda raiz X'': %f\n",x2);}else if (delta == 0){printf("As Duas raizes sao iguais \n");x1=(-b+ sqrt(delta)) /(2 *a);x2=(-b- sqrt(delta)) /(2 *a);printf("A Primeira raiz X': %f\n",x1);printf("A Segunda raiz X'': %f\n",x2);}else {printf("Nao pertence aos numeros reais");}}