#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

 float media ( float numero1  ,  float numero2 ){return (numero1 +numero2 ) / 2 ;} int  main (){ float n1  , n2 ;printf("Digite dois numeros ");scanf("%f %f", &n1, &n2);printf("Media: %f" , media (n1  , n2 ));}