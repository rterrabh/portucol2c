#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

 int fibIterativo ( int n ){ int i  , j  , k  , m ;i  =  1 ;j  =  0 ;for(k = 1; k <= n; k++){m  = i +j ;i  = j ;j  = m ;}return j ;} int  main (){ int n ;printf("Digite um numero ");scanf("%d",&n);printf("%d" , fibIterativo (n ));}