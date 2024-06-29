#include <stdio.h>

int main() {
  for (int i = 0; i < 10; ++i) {
    for (int j = i + 1; j < 10; ++j) {
      printf("(%d, %d)\n", i, j);
    }
  }
  return 0;
}
