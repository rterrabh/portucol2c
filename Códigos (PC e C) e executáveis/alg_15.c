#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int  main (){int v[20] = {88 , 23 , 92 , 12 , 56 , 63 , 10 , 2 , 29 , 34 , 4 , 49 , 75 , 52 , 17 , 92 , 65 , 22 , 33 , 98} , j , k , i , temp;for(j = 0; j <= 18; j++){k=j;for(i = j+1; i <= 19; i++){ if (v[i] < v[k]){k=i;}}if (k > j){temp=v[j];v[j]=v[k];v[k]=temp;}}for(j = 0; j <= 19; j++){printf("%d ",v[j]);}}