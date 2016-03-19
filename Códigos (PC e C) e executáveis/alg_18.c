#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int  main (){char s[100], c[100];int i,x;printf("Digite um nome : ");scanf(" %s",&s);x=strlen(s);int j = 0;for(i = x-1; i >= 0; i--){c[j]=s[i];j++;}c[j]='\0';printf("%s",c);}