#include <stdio.h>

int main() {
  int continuar;
  int numAlunos = 0;
  int totalAprovados = 0;
  int totalExame = 0;
  int totalReprovados = 0;
  float somaMedias = 0.0;

  float nota1, nota2, media;

  do {
    printf("Digite a primeira nota do aluno %d: ", numAlunos + 1);
    scanf("%f", &nota1);

    printf("Digite a segunda nota do aluno %d: ", numAlunos + 1);
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;
    somaMedias += media;

    printf("A media do aluno %d e: %.2f\n", numAlunos + 1, media);

    if (media <= 3) {
      printf("Status: Reprovado\n");
      totalReprovados++;
    } else if (media > 3 && media < 7) {
      printf("Status: Exame\n");
      totalExame++;
    } else {
      printf("Status: Aprovado\n");
      totalAprovados++;
    }

    numAlunos++;

    printf("Quer colocar mais alunos? 1 para sim 0 para nao ");
    scanf("%d", &continuar);

  } while (continuar == 1);

  float mediaClasse = (numAlunos > 0) ? somaMedias / numAlunos : 0;

  printf("\na) Total de alunos: %d\n", numAlunos);
  printf("b) Total de alunos aprovados: %d\n", totalAprovados);
  printf("c) Total de alunos de exame: %d\n", totalExame);
  printf("d) Total de alunos reprovados: %d\n", totalReprovados);
  printf("e) Media da classe: %.2f\n", mediaClasse);

  return 0;
}
