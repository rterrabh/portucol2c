#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

 int  main (){ int j  =  1  , k  , vb  , v [ 10 ] = { 88  ,  23  ,  92  ,  12  ,  56  ,  63  ,  10  ,  2  ,  29  ,  34 }; bool achou  =  false ;printf("Entre com o valor de busca: ");scanf("%d",&vb);do{ if(v [j ] == vb ){achou  = true ;} else {j ++;}}while((achou  == false ) && (j  <  10 )); if(achou ){printf("Achei %d na posicao %d\n" , vb  , j );} else {printf("Nao achei.\n");}}