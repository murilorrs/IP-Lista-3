#include <stdio.h>

int main() {
  int num;
  int triangular = 0;

  printf("Digite um numero inteiro positivo: ");
  scanf("%d", &num);

  for (int i = 1; i * (i + 1) * (i + 2) <= num; i++) {
    if (i * (i + 1) * (i + 2) == num) {
      triangular = 1;
      break;
    }
  }

  if (triangular) {
    printf("%d e um número triangular.\n", num);
  } else {
    printf("%d não e um número triangular.\n", num);
  }

  return 0;
}
