#include <stdio.h>

int potenza(int a, int b){
    if(b == 1)
        return a;
    else
        return a * potenza(a, b-1);
}

int funzione(int n){
    if(n == 1)
        return n;
    else
        return n + funzione(n-1);
}

int main(){
    int n;
    
    printf("Inserisci n: ");
    scanf("%d", &n);

    printf("Il risultato della sommatoria è: %d\n", potenza(2, n) * funzione(n));
}