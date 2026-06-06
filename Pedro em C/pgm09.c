// Pedro Henrique Dias De Moura 0025842
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numero, i, quantidade;

    printf("Quantos numeros deseja verificar? ");
    scanf("%d", &quantidade);

    for (i = 1; i <= quantidade; i++) {
        printf("Digite o %d numero: ", i);
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            printf("Par\n");
        } else {
            printf("Impar\n");
        }
    }

    return 0;
}
