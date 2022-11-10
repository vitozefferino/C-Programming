#include <stdio.h>

int main() {
  float x;
  printf("Inserire x: ");
  scanf("%f", &x);

  if(x >= 0) {
    printf("%f è positivo\n", x);
    printf("Valore assoluto: %f\n", x);
  } 
  
  else {
    printf("%f è negativo\n", x);
    printf("Valore assoluto: %f\n", -x);
  }

  return 0;
}
