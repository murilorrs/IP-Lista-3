#include <math.h>
#include <stdio.h>

int main() {
  double S = 0.0;
  int sinal = 1;

  for (int i = 0; i < 51; ++i) {
    double termo = (double)sinal / pow(2 * i + 1, 3);
    S += termo;
    sinal = -sinal;
  }

  double pi = cbrt(32 * S);

  printf("O valor aproximado de pi com 51 termos da serie e: %.51lf\n", pi);

  return 0;
}
