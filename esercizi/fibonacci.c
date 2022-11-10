#include <stdio.h>

void fibonacciIte(int n){
    int f0 = 0, f1 = 1;
    
    printf("f_0 = %d\n", f0);
    printf("f_1 = %d\n", f1);

    int f_i, f_i_1 = f1, f_i_2 = f0;
    for(int i=2; i<=n; i++){
        f_i = f_i_1 + f_i_2;
        printf("f_%d = %d\n", i, f_i);
        f_i_2 = f_i_1;
        f_i_1 = f_i;
    }
}

int fibonacciRic(int n){
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return fibonacciRic(n-1) + fibonacciRic(n-2);
}

int main(){
    int n;
    
    printf("Inserisci n: ");
    scanf("%d", &n);

    fibonacciIte(n);
    
    printf("Per Ric f_%d = %d", n, fibonacciRic(n));
}