#include <stdio.h>

double fatorial(int n) {
  if (n <= 1) {
    return 1.0;
  }
  double result = 1.0;
  for (int i = 2; i <= n; ++i) {
    result *= i;
  }
  return result;
}

int main() {
  double X;
  double soma = 0.0;
  int termos = 20;

  printf("Digite um numero real X: ");
  scanf("%lf", &X);

  for (int n = 0; n < termos; ++n) {
    double fat = fatorial(n);
    double termo = (n % 2 == 0) ? X / fat : -X / fat;
    soma += termo;
  }

  printf("O somatorio S e: %.10lf\n", soma);

  return 0;
}
