#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

 int  main (){ int ano [ 10 ] , i  , a  , x ; float med  , xm ;printf("Digite os anos com 4 numeros '9999' ou 0 para encerrar\n");for(i = 0; i <= 3; i++){printf("Digite o ano da pessoa (%d): " , i  +1 );scanf("%d",&a); if(a  >  0 ){ano [i ] =  2015 -a ;}}for(x = 0; x <= i; x++){printf("A idade da %d pessoa e: %d\n" , x  , ano [x ]);med  = med +ano [x ];}xm  = med  /i ;printf("Soma total das idades e: %f\n" , med );printf("Numero Total de pessoas: %d\n" , i );printf("A idade media calculada: %f\n" , xm );}