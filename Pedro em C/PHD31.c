#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************");
    printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
    printf("\n* programa PHD 31 - Contagem Regressiva para a Largada     *");
    printf("\n************************************************************");

    int i;

    printf("\n\nIniciando contagem regressiva:\n");

    for (i = 10; i >= 1; i--) {
        printf("%d... ", i);
    }

    printf("LARGADA!\n");
    printf("------------------------------------------------------------\n");

    return 0;
}
