#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

 int  main (){ float sobe  =  0  , desce  =  0.5 ; int dias  =  0  , total  =  10 ;printf("Um dia um caracol estava andando e caio em um poco\n");printf("Calcular o tempo que ele levaria pra sair desse poco\n");printf("========================================================\n\n");for(dias = 0; dias <= total-1; dias++){ if(sobe  <= total ){sobe  = sobe + 2 -desce ;printf("Subiu 2 mts p/dia e baixou %f mts a noite, ficando %f mts\n" , desce  , sobe );} else { break ;}}printf("\n");printf("O caracol levou %d dias\n" , dias );printf("\n");}