#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

 int  main (){ int divisor  , numero  , primo  , resposta ; bool flag ;printf("Deseja saber os numeros primos ate qual numero: ");scanf("%d",&numero);printf("\n");for(primo = 2; primo <= numero-1; primo++){divisor =2;flag =false ;while(divisor  <  sqrt(primo )){resposta =primo %divisor ;divisor ++;if (resposta == 0){flag =true ;}}if (!flag){printf("%d " , primo );}}}