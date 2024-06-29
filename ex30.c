#include <math.h>
#include <stdio.h>

int main() {
  double pi = 3.141592653589793;
  double R, volume;

  printf("Raio (em cm) | Volume (em cm³)\n");
  printf("-----------------------------\n");

  for (R = 0.0; R <= 20.0; R += 0.5) {
    volume = (4.0 / 3.0) * pi * pow(R, 3);
    printf("%8.1f     %10.2f\n", R, volume);
  }

  return 0;
}
