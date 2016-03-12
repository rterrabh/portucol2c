#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

 int fatrecursivo ( int n ){ if(n  ==  0 )return  1 ; else  if(n  ==  1 )return  1 ; else return n  *fatrecursivo (n  -1 );} int  main (){ int n ;printf("Digite um numero ");scanf("%d",&n);printf("%d" , fatrecursivo (n ));}