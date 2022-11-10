#include <stdio.h>

void main(){

    int i = 0;
    int n;
    float somma = 0;

    do{
        printf("Inserisci il numero: ");
        scanf("%d", &n);
        somma = somma + n;
        i++;
    }
    while(n != 0);
    printf("La media dei numeri inseriti è %f\n", somma / (i-1));
}