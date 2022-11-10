#include <stdio.h>

int potenzaIte(int a, int b){
    int risultato = 1;
    for(int i=0; i<b; i++){
        risultato = risultato * a;
    }
    return risultato;
}

int potenzaRic(int a, int b){
    if(b == 1)
        return a;
    return a * potenzaRic(a, b-1);
}

int main(){
    int a, b;
    
    printf("Dammi a: ");
    scanf("%d", &a);
    
    printf("Dammi b: ");
    scanf("%d", &b);
    
    printf("A elevato a B per Ite è uguale a: %d\n", potenzaIte(a, b));
    printf("A elevato a B per Ric è uguale a: %d\n", potenzaRic(a, b));
}