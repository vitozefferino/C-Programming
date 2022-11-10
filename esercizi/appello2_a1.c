#include <stdio.h>

float successione (int n){
    int a0 = 1, a1 = 2;
  
    printf ("a_0 = 1\n");
    printf ("a_1 = 2\n");

    float a_i , a_n_1 = a1, a_n_2 = a0;

    for (int i=2; i <= n; i++){
        if (i % 2 == 0){
            a_i = (i + 3 * (a_n_2 - 2)) / a_n_1;
            printf ("a_%d = %f\n", i, a_i);
            a_n_2 = a_n_1;
            a_n_1 = a_i;
        }
            else{
                a_i = (i + 3 * (a_n_1 - 2)) / a_n_2;
                printf ("a_%d = %f\n", i, a_i);
                a_n_2 = a_n_1;
                a_n_1 = a_i;
            }
          }
    }

int main(){
    int n;

    printf("Inserisci n: ");
    scanf("%d", &n);
    successione(n);
}