#include <stdio.h>

void funzione(int n){
    double a_n = 0.5;    // caso base
    printf("a_1: %f\n", a_n);

    for(int i=2; i<=n; i++){
        a_n = (a_n + 1) / 2;
        printf("a_%d: %f\n", i, a_n);
    }
}

int main(){
    int n;
    
    printf("Inserisci n: ");
    scanf("%d", &n);
    
    funzione(n);
}