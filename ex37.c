#include <math.h>
#include <stdio.h>

int main() {
  int octal, decimal = 0, i = 0;

  printf("Digite um numero inteiro positivo na base 8: ");
  scanf("%o", &octal);

  if (octal <= 0) {
    printf("O numero fornecido nao e positivo.\n");
    return 1;
  }

  while (octal != 0) {
    decimal += (octal % 10) * pow(8, i);
    octal /= 10;
    i++;
  }

  printf("O equivalente na base 10: %d\n", decimal);

  return 0;
}
