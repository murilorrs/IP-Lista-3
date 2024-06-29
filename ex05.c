#include <stdio.h>

int main() {
  int idade, acimaDe50 = 0, entre10e20 = 0, PesoMenor40 = 0;
  int totalPessoas = 0;
  float altura, peso, somaAltura10To20 = 0.0;
  int continuar;

  do {
    // Entrada de dados
    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    printf("Digite o peso (em quilos): ");
    scanf("%f", &peso);

    if (idade > 50) {
      acimaDe50++;
    }

    if (idade >= 10 && idade <= 20) {
      somaAltura10To20 += altura;
      entre10e20++;
    }

    if (peso < 40) {
      PesoMenor40++;
    }

    totalPessoas++;

    printf("Deseja continuar inserindo dados? (1 - Sim, Outro valor - Nao): ");
    scanf("%d", &continuar);

  } while (continuar == 1);

  float mediaAltura10To20 = (entre10e20 > 0) ? somaAltura10To20 / entre10e20 : 0;

  float porcentagemPesoMenor40 = ((float)PesoMenor40 / totalPessoas) * 100;

  printf("Quantidade de pessoas com idade superior a 50 anos: %d\n", acimaDe50);
  printf("Media das alturas das pessoas com idade entre 10 e 20 anos: %.2f metros\n", mediaAltura10To20);
  printf("Porcentagem de pessoas com peso inferior a 40 quilos: %.2f%%\n", porcentagemPesoMenor40);

  return 0;
}
