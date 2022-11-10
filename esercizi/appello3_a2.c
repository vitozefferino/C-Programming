#include <stdio.h>
#include <stdbool.h>

bool isPari(int n){
    if(n % 2 == 0)
        return true;
    return false;
}

float funzione (int n){
    int a1 = 2, a2 = 1;
  
    printf ("a_1 = %d\n", a1);
    printf ("a_2 = %d\n", a2);

    int a_i , a_n_1 = a2, a_n_2 = a1;
    
    for(int i=3; i<=n; i++){
        if(isPari(a_n_1) == true){
            a_i = (i - a_n_1) * a_n_2;
            printf("a_%d = %d\n", i, a_i);
        }
        else{
            a_i = (i + a_n_2) * a_n_1;
            printf("a_%d = %d\n", i, a_i);
        }
        a_n_2 = a_n_1;
        a_n_1 = a_i;
    }
}

int main(){
    int n;

    printf("Inserisci n: ");
    scanf("%d", &n);
    funzione(n);
}