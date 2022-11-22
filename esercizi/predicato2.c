#include <stdio.h>

int f1(int a[], int n){
    int i = 1;
    int j = i-1;
    while(i < n){
        if(a[j] < a[i])
            return 0;
        i++;
        j++;
    }
        return 1;
}

int main(){
    int a[] = {4, 2, 3, 1};
    int n = 4;
    if(f1(a, n) == 1)
        printf("Predicato vero\n");
    else
        printf("Predicato falso\n");
}