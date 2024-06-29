#include <stdio.h>

int main() {
  float precoInicial = 6.00;
  float precoFinal = 1.00;
  float decremento = 0.60;
  int ingressosInicial = 130;
  float despesas = 300.00;

  float precoAtual = precoInicial;
  int ingressosVendidos;
  float lucroMaximo = 0.0;
  float precoLucroMaximo = precoInicial;
  int ingressosLucroMaximo = ingressosInicial;

  printf("Tabela de lucro esperado:\n");
  printf("---------------------------------\n");
  printf(" Preco   Ingressos     Lucro   \n");
  printf("---------------------------------\n");

  while (precoAtual >= precoFinal) {
    // Calcula os ingressos esperados para o preço atual
    if (precoAtual == precoInicial) {
      ingressosVendidos = ingressosInicial;
    } else {
      ingressosVendidos = ingressosInicial + (precoInicial - precoAtual) / decremento * 30;
    }

    // Calcula o lucro esperado
    float lucro = (precoAtual * ingressosVendidos) - despesas;

    // Atualiza o lucro máximo e os valores correspondentes
    if (lucro > lucroMaximo) {
      lucroMaximo = lucro;
      precoLucroMaximo = precoAtual;
      ingressosLucroMaximo = ingressosVendidos;
    }

    // Imprime a linha da tabela
    printf("| R$ %.2f |    %3d     | R$ %8.2f |\n", precoAtual, ingressosVendidos, lucro);

    // Atualiza o preço atual para o próximo decremento
    precoAtual -= decremento;
  }

  printf("---------------------------------\n");

  // Imprime o lucro máximo esperado e seus detalhes
  printf("\nLucro maximo esperado:\n");
  printf("Preco: R$ %.2f\n", precoLucroMaximo);
  printf("Ingressos: %d\n", ingressosLucroMaximo);
  printf("Lucro: R$ %.2f\n", lucroMaximo);

  return 0;
}
