#include <stdio.h>

void funzioneIte(int n){
    int risultato = 0;
    for(int i=1; i<=n; i++){
        risultato = ((i)*(i+1)/2);
        printf("Somma Iterativa fino a %d: %d\n", i, risultato);
    }
}

int funzioneRic(int n){
    if(n==0)
        return 0;
    
    int risultato = 0;
    risultato = n + funzioneRic(n-1);
    
    printf("Somma Ricorsiva fino a %d: %d\n", n, risultato);
    
    return risultato;
}

int main(){
    int n;
    printf("Dammi n: ");
    scanf("%d", &n);
    
    funzioneIte(n);
    funzioneRic(n);
}