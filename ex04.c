#include <stdio.h>

int quadradoPerfeito(int num) {
  if (num < 0)
    return 0;

  int sum = 0;
  for (int i = 1; sum < num; i += 2) {
    sum += i;
    if (sum == num)
      return 1;
  }
  return 0;
}

int main() {
  int num;

  while (1) {
    printf("Digite um numerro: (0 para terminar o programa) ");
    scanf("%d", &num);

    if (num <= 0) {
      break;
    }

    if (quadradoPerfeito(num)) {
      printf("%d e um quadrado perfeito.\n", num);
    } else {
      printf("%d não e um quadrado perfeito.\n", num);
    }
  }
  return 0;
}