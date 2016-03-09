#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main () {
    int vet[10] = {10,9,8,7,6,5,4,3,2,1}, tamanho = 10, aux, i, j, r;
    for(i = tamanho-1; i >= 1; i--){
        for(j = 0; j <= i-1; j++){
            if (vet[j] > vet[j+1]) {
                aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;
            }
        }
    }
    for(r = 0; r <= 9; r++){
        printf ("%d ", vet[r]);
    }
}