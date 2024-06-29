#include <stdio.h>

int main() {
  int total_quadrados = 64;
  long long int graos = 1LL;

  for (int i = 1; i <= total_quadrados; ++i) {
    printf("%lld\n", graos);
    graos *= 2LL;
  }

  return 0;
}
