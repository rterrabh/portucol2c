#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

 int  main (){ int j  , valor  , p [10]={2 , 3 , 5 , 7 , 11 , 13 , 17 , 19 , 23 , 29} , ex [10];for(j = 0; j <= 9; j++){ex [j ]=0;}do{scanf("%d",&valor);}while(valor  < 0);for(j = 0; j <= 9; j++){do{if (valor % p[j] == 0){valor =valor  /p [j ];ex [j ]=ex [j ]+1;}}while(valor %p [j ] == 0);}for(j = 0; j <= 9; j++){printf("%d %d\n" , p [j ] , ex [j ]);}}