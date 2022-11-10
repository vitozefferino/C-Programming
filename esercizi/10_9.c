#include <stdio.h>

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
    int somma = 0;
    int temp = n;    // temp viene usata per farci le operazioni (lascio n intatto)

    for(int i=0; i<nCifre; i++){    // per ogni cifra
        somma = somma + temp % 10;    // la somma diventa valore precente più ultima cifra di temp
        temp = temp / 10;    // a temp viene tolta l'ultima cifra (quella appena sommata)
    }
    return somma;
}

int funzioneRic(int n){
    int temp = n;    // temp viene usata per farci le operazioni (lascio n intatto)
    if(n > 0 && n < 10)    // se n ha una cifra mi ritorna questa
        return n;
    return temp % 10 + funzioneRic(n / 10);    //oppure l'ultima cifra più la funzione calcolata su n con ultima cifra troncata
}

int main(){
    int n;

    printf("Inserisci n: ");
    scanf("%d", &n);

    printf("Per Ite la somma delle cifre è %d.\n", funzioneIte(n));
    printf("Per Ric la somma delle cifre è %d.\n", funzioneRic(n));
}