#include <stdio.h>

int main() {
  double salarioCarlos, salarioJoao;
  double valorCarlos, valorJoao;
  const double rendimentoPoupanca = 0.02;
  const double rendimentoFundo = 0.05;
  int meses = 0;

  printf("Digite o salário de Carlos: ");
  scanf("%lf", &salarioCarlos);

  salarioJoao = salarioCarlos / 3.0;

  valorCarlos = salarioCarlos;
  valorJoao = salarioJoao;

  while (valorJoao <= valorCarlos) {
    valorCarlos += valorCarlos * rendimentoPoupanca;
    valorJoao += valorJoao * rendimentoFundo;
    meses++;
  }

  printf("João precisará de %d meses para igualar ou ultrapassar o valor de Carlos.\n", meses);

  return 0;
}