// controlla che non ci siano duplicati nell'array

#include <stdio.h>

int funzione(int a[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int trovato = 0;
            if(i != j && a[i] == a[j]){
                return 1;
            }
        }
    }
    return 0;
}

void main(){
    int a [] = {22, 87, 5, 6, 13};
    int n = 5;
    int trovato = funzione(a, n);
    if(trovato == 1)
        printf("Il predicato è falso.");
    else
        printf("Il predicato è vero");
}