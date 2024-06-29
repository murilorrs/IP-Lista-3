#include <stdio.h>

unsigned long long fatorial(int n) {
  unsigned long long resultado = 1;
  for (int i = 1; i <= n; ++i) {
    resultado *= i;
  }
  return resultado;
}

int main() {
  double soma = 0.0;
  int numerador = 100;

  for (int i = 0; i < 20; ++i) {
    soma += (double)numerador / fatorial(i);
    numerador -= 1;
  }

  printf("A soma dos 20 primeiros termos da serie e: %.10f\n", soma);

  return 0;
}
