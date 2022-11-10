#include <stdio.h>
#include <stdbool.h>

bool isPrimo(int n, int m){    // n è il numero, m sarà il primo tentativo di divisione (n-1)
    if(m == 1)    // se n=2 è primo
        return true;
    if(n % m == 0)    // se il resto della divisione è 0, n non è primo
        return false;
    return isPrimo(n, m-1);    // rifai un tentativo su un numero più piccolo
}

int funzione(int x, int y){
    int conta = 0;
    for(int i=x+1; i<y; i++){
        if(isPrimo(i, i-1) == true)
            conta++;
    }
    return conta;
}

int main(){
    int x, y;

    printf("Inserisci x: ");
    scanf("%d", &x);

    printf("Inserisci y: ");
    scanf("%d", &y);

    printf("I numeri primi da %d a %d sono %d.", x, y, funzione(x, y));
}