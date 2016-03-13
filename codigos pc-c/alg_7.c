#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

 int  main (){ int a  , b  , result ;char operacao[100];printf("Digite o primeiro numero: ");scanf("%d",&a);printf("Digite a operacao (+,-,*): ");scanf(" %s",&operacao);printf("Digite o segundo numero: ");scanf("%d",&b); switch (operacao ){case '+':  result=a+b; break; case '-':  result=a-b; break; case '*':  result=a*b; break;  default :printf("Erro.");}printf("Resultado: %d" , result );}