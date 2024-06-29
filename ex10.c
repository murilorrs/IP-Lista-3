#include <stdio.h>

int main() {
  int N;

  printf("Digite o numero de termos da sequencia");
  scanf("%d", &N);

  if (N < 3) {
    printf("Numero invalido. N deve ser maior ou igual a 3.\n");
    return 1;
  }

  int primeiro = 0, segundo = 1;
  int proximo;

  printf("%d, %d, ", primeiro, segundo);

  for (int i = 3; i <= N; i++) {
    proximo = primeiro + segundo;
    printf("%d", proximo);

    if (i < N) {
      printf(", ");
    }

    primeiro = segundo;
    segundo = proximo;
  }

  printf("\n");

  return 0;
}
