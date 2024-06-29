#include <stdio.h>

int main() {
  int N;
  double S = 0.0;

  printf("Digite o numero de termos N (N > 0): ");
  scanf("%d", &N);

  if (N <= 0) {
    printf("Numero de termos invalido. N deve ser maior que 0.\n");
    return 1;
  }

  for (int i = 1, num = 1000; i <= N; ++i, num -= 3) {
    if (i % 2 == 1) {
      S += (double)num / i;
    } else {
      S -= (double)num / i;
    }
  }

  printf("O resultado da serie com %d termos e: %.2f\n", N, S);

  return 0;
}
