#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

 int  main (){ float x  , raiz  , li =0 , ls  , mult  , dif ;printf("Digite um numero maior que um : \n");scanf("%f",&x);if (x > 1){ls =x ;raiz =(li +ls ) /2;mult =raiz  *raiz ;dif =x -mult ;if (dif < 0)dif =-dif ;while(dif  >  0.00001 ){if (mult > x){ls =raiz ;} else li =raiz ;raiz =(li +ls ) /2;mult =raiz  *raiz ;dif =x -mult ;if (dif < 0)dif =-dif ;}printf("A raiz quadrada calculada de %.5f e %.5f\n" , x  , raiz );printf("A funcao raiz quadrada de %.5f e %.5f\n" , x  , sqrt (x ));} else printf("Digite um numero maior que 1 \n");}