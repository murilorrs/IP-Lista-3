#include <stdio.h>

int mdc(int a, int b) {
  int resto;
  while (b != 0) {
    resto = a % b;
    a = b;
    b = resto;
  }
  return a;
}

int mmc(int a, int b) { return (a * b) / mdc(a, b); }

int main() {
  int N1, N2;

  printf("Digite o primeiro numero inteiro positivo: ");
  scanf("%d", &N1);

  printf("Digite o segundo numero inteiro positivo: ");
  scanf("%d", &N2);

  if (N1 <= 0 || N2 <= 0) {
    printf("Os numeros fornecidos nao sao positivos.\n");
    return 1;
  }

  int resultado = mmc(N1, N2);
  printf("O MMC de %d e %d eh: %d\n", N1, N2, resultado);

  return 0;
}
