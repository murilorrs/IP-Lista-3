#include <stdio.h>

int calculaPotencia(int base, int expoente) {
    int resultado = 1;
    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    return resultado;
}

int main() {
    int base, expoente;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    int resultado = calculaPotencia(base, expoente);

    printf("Resultado: %d\n",resultado);
    
    return 0;
}
