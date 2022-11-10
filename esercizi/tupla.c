#include <stdio.h>

void funzione(int *p, int *q){
    int somma = *p + *q;
    int prodotto = *p * *q;
    
    *p = somma;
    *q = prodotto;
}

int main(){
    int x = 5;
    int y = 10;
    
    printf("Inserisci x: ");
    scanf("%d", &x);
    printf("Inserisci y: ");
    scanf("%d", &y);
    
    funzione(&x, &y);
    
    printf("Somma: %d - Prodotto: %d", x, y);
}