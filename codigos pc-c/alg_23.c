#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main () {
    int i, j, v[10] = {10,9,8,7,6,5,4,3,2,1}, min, aux, tam = 10;
    for(i = 0; i <= tam-2; i++){
      min = i;
      for(j = i+1; j <= tam-1; j++){
        if (v[j] < v[min])
           min=j;
      }
      aux = v[i];
      v[i] = v[min];
      v[min] = aux;
    }
    for(i = 0; i <= tam-1; i++){
        printf ("%d ", v[i]);
    }
}