#include <stdio.h>

float potenza(int a, int b){
    if(b == 1)
        return a;
    return a * potenza(a, b-1);
}

float funzione(int n, int k){
    
    float num = n * (potenza(k, n+1));
    
    float den = potenza(3, n);

    float result = num / den;
    
    if(n == 1)
        return result;
    
    return (result + funzione(n-1, k));
}

int main(){
    int n, k;
    
    printf("Inserisci n: ");
    scanf("%d", &n);
    
    printf("Inserisci k: ");
    scanf("%d", &k);
    
    printf("Il risultato della sommatoria è: %f", funzione(n, k));
}