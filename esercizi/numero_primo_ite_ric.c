#include <stdio.h>
#include <stdbool.h>

bool primoRic(int n, int m){
    if(m == 1)
        return true;
    if(n % (m) == 0)
        return(false);
    return(primoRic(n, m-1));
}

bool primoIte(int n){
    for(int i=2; i<n; i++){
        if(n % i == 0)
            return false;
    }
    return true;
}


int main(){

    int n = 100;
    int m = n-1;

    for(int i=2; i<=n; i++){
        if(primoRic(i,i-1) == true)
            printf("Per Ric %d è primo\n", i);

        if(primoIte(i) == true)
            printf("Per Ite %d è primo\n", i);
    }
    
    /*if(primoRic(n,m) == true)
        printf("Per Ric %d è primo", n);
    else
        printf("Per Ric %d non è primo", n);

    if(primoIte(n) == true)
        printf("Per Ite %d è primo", n);
    else
        printf("Per Ite %d non è primo", n);*/
}