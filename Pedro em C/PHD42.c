#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************");
    printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
    printf("\n* programa PHD 42 - Contagem de números ímpares            *");
    printf("\n************************************************************");

    int i, numero, contadorImpares = 0;

    printf("\n\nPor favor, digite 10 números inteiros:\n");

    for (i = 1; i <= 10; i++) {
        printf("%dº número: ", i);
        scanf("%d", &numero);

        if (numero % 2 != 0) {
            contadorImpares++;
        }
    }

    printf("\n------------------------------------------------------------");
    printf("\nForam encontrados %d números ímpares.", contadorImpares);
    printf("\n------------------------------------------------------------\n");

    return 0;
}
