// controlla che esista un valore del primo che è uguale alla somma degli elementi del secondo

#include <stdio.h>

int somma(int b[], int m){
    int somma = 0;
    for(int i=0; i<m; i++){
        somma = somma + b[i];
    }
    return somma;
}

int funzione(int a[], int b[], int n, int m){
    int somma_b = somma(b, m);
    for(int i=0; i<n; i++){
        if(a[i] == somma_b)
            return 1;
    }
    return 0;
}

void main(){
    int a [] = {2, 3, 5, 12, 7};
    int b [] = {1, 1, 3, 4, 5};
    int n = 5;
    int m = 5;
    int trovato = funzione(a, b, n, m);
    if(trovato == 0)
        printf("Il predicato è falso");
    else
        printf("Il predicato è vero");
}