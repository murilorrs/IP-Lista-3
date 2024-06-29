#include <stdio.h>

int main() {
  int N;

  printf("Digite o valor de N: ");
  scanf("%d", &N);

  for (int i = 1; i <= N; ++i) {
    printf("%d ", i * i);
  }
  printf("\n");

  return 0;
}
