#include <stdio.h>

int main() {
  int N;
  int somatorio = 0;

  printf("Digite um numero inteiro positivo N: ");
  scanf("%d", &N);

  for (int i = 1; i <= N; ++i) {
    somatorio += i;
  }

  printf("O somatorio de todos os numeros de 1 a %d e: %d\n", N, somatorio);

  return 0;
}
