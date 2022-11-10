#include <stdio.h>

int potenza(int a, int b){
    int risultato = 1;
    for(int i=0; i<b; i++){
        risultato = risultato * a;
    }
    return risultato;
}

// semplice funzione che mi ritorna il numero di cifre di n
int estraiNumCifre(int n){
    int temp = n;
    int conta = 1;
    while(temp <= 0 || temp > 9){    // mentre il numero ha più di una cifra
        temp = temp / 10;    // il numero da analizzare perderà l'ultima cifra
        conta++;    // e il conta viene incrementato
    }
    return conta;
}

int funzioneIte(int n){
    int nCifre = estraiNumCifre(n);
    int temp = n;    // uso temp per lasciare n intatto
    int risultato = 0;
    for(int i=nCifre; i>0; i--){    // per ogni cifra presa a partire dall'ultima
        risultato = risultato + ((temp % 10) * potenza(10, i-1));    // la sommo moltiplicata per la potenza che le andrà ad appartenere
        temp = temp / 10;    // temp verrà troncata dell'ultima cifra
    }
    return risultato;
}

int funzioneRic(int n){
    int temp = n;
    if(n > 0 && n < 10)    // se n ha una cifra mi ritorna questa
        return n;
    return (temp % 10) * potenza(10, nCifre-1) + funzioneRic(n / 10);    // oppure l'ultima cifra di temp moltiplicata per la potenza giusta sommata alla funzione calcolata su n troncato dell'ultima cifra
}

int main(){
    int n;

    printf("Inserisci n: ");
    scanf("%d", &n);

    printf("Per Ite il numero capovolto è %d.\n", funzioneIte(n));
    printf("Per Ric il numero capovolto è %d.\n", funzioneRic(n));
}