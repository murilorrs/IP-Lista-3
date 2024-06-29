#include <stdbool.h>
#include <stdio.h>

bool ehPrimo(int num) {
  if (num <= 1) {
    return false;
  }
  for (int i = 2; i * i <= num; ++i) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int N1, N2;

  printf("Digite o primeiro número natural (N1): ");
  scanf("%d", &N1);
  printf("Digite o segundo número natural (N2): ");
  scanf("%d", &N2);

  if (N1 > N2) {
    int temp = N1;
    N1 = N2;
    N2 = temp;
  }

  printf("Números primos entre %d e %d:\n", N1, N2);
  for (int i = N1; i <= N2; ++i) {
    if (ehPrimo(i)) {
      printf("%d ", i);
    }
  }
  printf("\n");

  return 0;
}
