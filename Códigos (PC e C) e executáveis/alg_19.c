#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int  main (){int n,reverse=0 , temp;printf("Entre um numero para checar se e um palindromo ou nao\n");scanf("%d",&n);temp=n;while(temp != 0){reverse=reverse *10;reverse=reverse+temp%10;temp=temp /10;}if (n == reverse)printf("%d e um numero palindromo.\n",n);else printf("%d nao e um numero palindromo.\n",n);return 0;}