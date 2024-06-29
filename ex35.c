#include <stdio.h>

int main() {
  int decimal, resto, quociente, binario[32], i = 0;

  printf("Digite um numero inteiro positivo na base 10: ");
  scanf("%d", &decimal);

  if (decimal <= 0) {
    printf("O numero fornecido nao e positivo.\n");
    return 1;
  }

  quociente = decimal;

  while (quociente != 0) {
    resto = quociente % 2;
    quociente = quociente / 2;
    binario[i] = resto;
    i++;
  }

  printf("O equivalente na base 2: ");
  for (int j = i - 1; j >= 0; j--) {
    printf("%d", binario[j]);
  }
  printf("\n");

  return 0;
}
