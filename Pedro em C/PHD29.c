#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************");
    printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
    printf("\n* programa PHD 29 - Exibição de Números Pares (0 a 50)     *");
    printf("\n************************************************************");

    int i;

    printf("\n\nNúmeros pares entre 0 e 50:\n");

    for (i = 0; i <= 50; i += 2) {
        printf("%d ", i);
    }

    printf("\n\n------------------------------------------------------------\n");

    return 0;
}
