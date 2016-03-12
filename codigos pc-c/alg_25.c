#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

 int  main (){ int vet [ 2 ][ 2 ] = {{ 1  ,  2 } , { 3  ,  4 }} , vet2 [ 2 ][ 2 ] = {{ 5  ,  6 } , { 7  ,  8 }} , soma [ 2 ][ 2 ] , i  , j ;for(i = 0; i <= 1; i++){for(j = 0; j <= 1; j++){soma [i ][j ] = vet [i ][j ]+vet2 [i ][j ];printf("%d " , soma [i ][j ]);}printf("\n");}}