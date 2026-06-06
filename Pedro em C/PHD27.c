#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************");
    printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
    printf("\n* programa PHD 27 - Gerador de Tabuada                     *");
    printf("\n************************************************************");

    int numero, i;

    printf("\n\nDigite o número para ver sua tabuada: ");
    scanf("%d", &numero);

    printf("\n--- Tabuada do %d ---", numero);

    for (i = 1; i <= 10; i++) {
        printf("\n%d x %d = %d", numero, i, numero * i);
    }

    printf("\n------------------------------------------------------------\n");

    return 0;
}
