#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

 int  main (){ int nota ;printf("Entre com a nota do aluno:");scanf("%d",&nota); switch (nota ){case 0 ... 2: printf("Reprovado.\n"); break; case 4 ... 7: printf("Em final.\n"); break; case 8 ... 10: printf("Aprovado.\n"); break;  default :printf("Nota invalida.\n");}}