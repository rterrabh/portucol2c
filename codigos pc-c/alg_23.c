#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

 int  main (){ int vet [10]={29 , 11 , 87 , 15 , 22 , 90 , 34 , 66 , 72 , 53}; float shrink = 1.247330950103979 ; int i  , temp  , gap =10; bool swapped = true ;while((gap  > 1) || swapped ){if (gap > 1)gap =gap  /shrink ;swapped = false ;i =0;while(i +gap  < 10){if (vet[i] > vet[i+gap]){temp =vet [i ];vet [i ]=vet [i +gap ];vet [i +gap ]=temp ;swapped = true ;}i =i +1;}}for(i = 0; i <= 9; i++)printf("%d " , vet [i ]);}