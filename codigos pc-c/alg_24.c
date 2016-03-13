#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

 int  main (){ int num  , aux  , resto  , soma =0;printf("Digite um numero: ");scanf("%d",&num);aux =num ;while(aux  != 0){resto =aux %10;soma =soma +resto ;aux =aux  /10;}printf("Soma dos algarismos: %d\n" , soma );return 0;}