#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************");
    printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
    printf("\n* programa PHD 26 - Chamada de Alunos (1 a 10)             *");
    printf("\n************************************************************");

    int i;

    printf("\n\nNúmeros da chamada:\n");

    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
    }

    printf("\n\n------------------------------------------------------------\n");

    return 0;
}
