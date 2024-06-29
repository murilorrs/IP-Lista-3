#include <stdio.h>

int main() {
  int N;
  int fatorial = 1;

  printf("Digite um numero inteiro para calcular o fatorial: ");
  scanf("%d", &N);

  if (N < 0) {
    printf("O fatorial de numeros negativos neo e definido.\n");
    return 1;
  }

  for (int i = 1; i <= N; ++i) {
    fatorial *= i;
  }

  printf("O fatorial de %d e: %d\n", N, fatorial);

  return 0;
}
