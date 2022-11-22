// somma degli elementi pari in un array

#include <stdio.h>

int funzione(int a[], int n){
    int somma = 0;
    for(int i=0; i<n; i++){
        if(a[i] % 2 == 0)
            somma = somma + a[i];
    }
    return somma;
}

void main(){
    int a [] = {4, 6, 5, 87, 22};
    int n = 5;
    int somma = funzione(a, n);
    printf("La somma dei numeri pari presenti è %d.", somma);
}