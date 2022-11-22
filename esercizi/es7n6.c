// dato k appartenente a [1, n], ritorna k-esimo elemento più piccolo

#include <stdio.h>

int funzione(int a[], int n, int k){
    int valore = 0;
    int tmp = 0;
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++){
            if (a[i] > a[j]){
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    valore = a[k-1];
    return valore;
}

void main(){
    int a [] = {22, 87, 5, 6, 13};
    int n = 5;
    int k = 1;
    int valore = funzione(a, n, k);
    printf("Il k-esimo elemento più piccolo è %d", valore);
}