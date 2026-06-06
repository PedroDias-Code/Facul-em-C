#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************");
    printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
    printf("\n* programa PHD 28 - Soma de 1 a 100                        *");
    printf("\n************************************************************");

    int i, soma = 0;

    for (i = 1; i <= 100; i++) {
        soma = soma + i;
    }

    printf("\n\nO resultado da soma dos números de 1 até 100 é: %d", soma);
    printf("\n\n------------------------------------------------------------\n");

    return 0;
}
