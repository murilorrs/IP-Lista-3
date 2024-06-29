#include <stdio.h>

int main() {
    int soma = 0, countagemNumeros = 0;

    for (int i = 50; i <= 70; i++) {
        if (i % 2 == 0) {
            soma += i;
            countagemNumeros++;
            printf("%d\n\n", i);
        }
    }

    float media = (float)soma / countagemNumeros;

    printf("Soma dos valores pares: %d\n", soma);
    printf("Media aritmetica:: %.2f\n", media);

    return 0;
}
