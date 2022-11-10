#include <stdio.h>

void funzione(int a, int b){
    int risultato = a;
    printf("%d\n", risultato);
    while(a <= b){
        if(risultato == b || risultato == b-1)
            break;
        else{
            risultato = risultato + 2;
            printf("%d\n", risultato);
        }
    }
}

int main(){
    int a, b;

    printf("Inserisci a: ");
    scanf("%d", &a);

    printf("Inserisci b: ");
    scanf("%d", &b);

    funzione(a, b);
}