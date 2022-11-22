// pusha in un array i primi n numeri triangolari

#include <stdio.h>

void funzione(int n){
    int valore = 0;
    for(int i=1; i<=n; i++){
        valore = valore + i;
        printf("%d\n", valore);
    }
}

void main(){
    int n = 6;
    funzione(n);
}