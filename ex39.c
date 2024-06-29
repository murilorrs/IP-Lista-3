#include <stdio.h>

int main() {
  int numero, numeroMaisGordo, numeroMaisMagro;
  float peso, pesoMaisGordo = 0, pesoMaisMagro = 999999;

  for (int i = 1; i <= 90; ++i) {
    printf("Boi %d:\n", i);
    printf("Numero de identificacao: ");
    scanf("%d", &numero);
    printf("Peso: ");
    scanf("%f", &peso);

    if (peso > pesoMaisGordo) {
      pesoMaisGordo = peso;
      numeroMaisGordo = numero;
    }

    if (peso < pesoMaisMagro) {
      pesoMaisMagro = peso;
      numeroMaisMagro = numero;
    }
  }

  printf("\nBoi mais gordo:\nNumero de identificacao: %d\nPeso: %.2f\n", numeroMaisGordo, pesoMaisGordo);
  printf("\nBoi mais magro:\nNumero de identificacao: %d\nPeso: %.2f\n", numeroMaisMagro, pesoMaisMagro);

  return 0;
}
