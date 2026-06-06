// Pedro Henrique Dias De Moura 0025842
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    if (n1 > n2) {
        printf("O maior numero e: %.2f\n", n1);
    } else if (n2 > n1) {
        printf("O maior numero e: %.2f\n", n2);
    } else {
        printf("Os dois numeros sao iguais\n");
    }

    return 0;
}
