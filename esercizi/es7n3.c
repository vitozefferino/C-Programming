// calcolo prodotto scalare tra due array

#include <stdio.h>

int funzione(int a[], int b[], int n){
    int somma = 0;
    for(int i=0; i<n; i++){
        somma = somma + (a[i] * b[i]);
    }
    return somma;
}

void main(){
    int a [] = {2, 3, 5, 6, 7};
    int b [] = {1, 1, 3, 4, 5};
    int n = 5;
    int somma = funzione(a, b, n);
    printf("La somma del prodotto scalare è %d.", somma);
}