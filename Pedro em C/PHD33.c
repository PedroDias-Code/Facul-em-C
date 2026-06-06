#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************");
    printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
    printf("\n* programa PHD 33 - Múltiplos de 3 (1 a 30)                *");
    printf("\n************************************************************");

    int i;

    printf("\n\nNúmeros múltiplos de 3 entre 1 e 30:\n");

    for (i = 1; i <= 30; i++) {
        if (i % 3 == 0) {
            printf("%d ", i);
        }
    }

    printf("\n\n------------------------------------------------------------\n");

    return 0;
}
