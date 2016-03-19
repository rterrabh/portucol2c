#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int  main (){ float nota1 , nota2 , nota3 , nota4 , nota5 , media;char aluno[100];printf("Digite o nome do aluno: ");scanf(" %s",&aluno);printf("Digite a primeira nota: ");scanf("%f",&nota1);printf("Digite a segunda nota: ");scanf("%f",&nota2);printf("Digite a terceira nota: ");scanf("%f",&nota3);printf("Digite a quarta nota: ");scanf("%f",&nota4);printf("Digite a quinta nota: ");scanf("%f",&nota5);media=(nota1+nota2+nota3+nota4+nota5) /5;if (media >= 7){printf("O aluno %s passou",aluno);}else {printf("O aluno %s reprovou",aluno);}}