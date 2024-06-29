#include <stdio.h>

int main() {
  int b, n;
  long long resultado = 1;

  printf("Digite o valor de b (>= 2): ");
  scanf("%d", &b);

  printf("Digite o valor de n (> 1): ");
  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
    resultado *= b;
  }

  printf("O valor de %d^%d e: %lld\n", b, n, resultado);

  return 0;
}
