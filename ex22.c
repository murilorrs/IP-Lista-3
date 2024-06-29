#include <stdio.h>

int main() {
  double S = 0.0;

  for (int i = 37, j = 1; i >= 1; --i, ++j) {
    S += (i * (i + 1)) / (double)j;
  }

  printf("O valor da soma S e: %.2f\n", S);

  return 0;
}
