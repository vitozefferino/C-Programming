#include<stdio.h>

int main() {
  int n, k;
  printf("Inserire n: ");
  scanf("%d", &n);
  printf("Inserire k: ");
  scanf("%d", &k);
  int somma = 0;
  int tmp = k;

  for(int i = 1; i <= n; i++) {
    somma += tmp;
    tmp = tmp * k;
  }

  printf("Risultato sommatoria: %d\n", somma);
  return 0;
}
