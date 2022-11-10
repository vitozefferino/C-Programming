#include <stdio.h>

int fattorialeIte(int n){
    int risultato = 1;
    
    for(int i=1; i<=n; i++){
        risultato = risultato * i;
    }
    return risultato;
}

int fattorialeRic(int n){
    if(n==1)
        return 1;
    return n * fattorialeRic(n-1);
}

int main(){
    int n;
    printf("Dammi n: ");
    scanf("%d", &n);
    
    printf("Fattoriale di N per Ite è uguale a: %d\n", fattorialeIte(n));
    printf("Fattoriale di N per Ric è uguale a: %d\n", fattorialeRic(n));

}