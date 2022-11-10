#include <stdio.h>

void funzione(float n, float p){
    float a_n = p;    //caso base
    printf("a_1 = %f\n", a_n);
    for(int i = 2; i<=n; i++){
        a_n = 0.5 * (a_n + (p/a_n));
        printf("a_%d = %f\n", i, a_n);
    }
}

int main(){
    float n, p;

    printf("Inserisci n: ");
    scanf("%f", &n);
    printf("Inserisci p: ");
    scanf("%f", &p);

    funzione(n, p);
    
    printf("Il risultato per n>> converge alla radice quadrata di p.");
}