#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

 int  main (){ int n  , p  , t  , u  =  1 ;printf("Numero : ");scanf("%d",&n);printf("Taxa : ");scanf("%d",&p);for(t = n-p+1; t <= n; t++){u  = u  *t ;}for(t = 2; t <= p; t++){u  = u  /t ;}printf("Combinacao %d elementos %d a %d = %d" , n  , p  , p  , u );}