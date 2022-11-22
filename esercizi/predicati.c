#include <stdio.h>

int f1(int a[], int n){
    int i = 0;
    while(i < n && a[i] < 0){
        i++;
        if(i == n)
            return 1;
    }
        return 0;
}

int f2(int a[], int n){
    return !f1(a, n);
}

int main(){
    int a[] = {-1, 2, -3, -4};
    int n = 4;
    if(f1(a, n) == 1)
        printf("Primo predicato vero\n");
    else
        printf("Primo predicato falso\n");
}