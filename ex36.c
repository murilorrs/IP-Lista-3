#include <stdio.h>

int main() {
  int decimal, resto, quociente, i = 0;
  char hexa[32];

  printf("Digite um numero inteiro positivo na base 10: ");
  scanf("%d", &decimal);

  if (decimal <= 0) {
    printf("O numero fornecido nao e positivo.\n");
    return 1;
  }

  quociente = decimal;

  while (quociente != 0) {
    resto = quociente % 16;
    quociente = quociente / 16;
    if (resto < 10) {
      hexa[i] = resto + '0';
    } else {
      hexa[i] = resto - 10 + 'A';
    }
    i++;
  }

  printf("O equivalente na base 16: ");
  for (int j = i - 1; j >= 0; j--) {
    printf("%c", hexa[j]);
  }
  printf("\n");

  return 0;
}
