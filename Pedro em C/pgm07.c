// Pedro Henrique Dias De Moura 0025842
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float numero;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    if (numero > 0) {
        printf("O numero e positivo\n");
    } else if (numero < 0) {
        printf("O numero e negativo\n");
    } else {
        printf("O numero e zero\n");
    }

    return 0;
}
