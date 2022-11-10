#include <stdio.h>

void main(){
    int n;

    printf("Inserisci un numero intero: ");
    scanf("%d", &n);
    
    for(int i = 0; i <= n; i++){
        printf("%d al quadrato = %d\n", i, i*i);
    }
}