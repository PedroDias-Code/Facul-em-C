#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************");
    printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
    printf("\n* programa PHD 32 - Potência ao Quadrado (1 a 10)          *");
    printf("\n************************************************************");

    int i;

    printf("\n\nCálculo dos quadrados:\n");

    for (i = 1; i <= 10; i++) {
        printf("%d² = %d\n", i, i * i);
    }

    printf("\n------------------------------------------------------------\n");

    return 0;
}
