// Pedro Henrique Dias De Moura 0025842
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int N, i;
    int soma = 0;

    printf("Digite um numero N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        soma += i;
    }

    printf("A soma de 1 ate %d e: %d\n", N, soma);

    return 0;
}
