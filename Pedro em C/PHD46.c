#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************");
    printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
    printf("\n* programa PHD 46 - Contagem de 1 a 10 com do...while      *");
    printf("\n************************************************************");

    int i = 1;

    printf("\n\nContagem de 1 a 10:\n");

    do {
        printf("%d\n", i);
        i++;             
    } while (i <= 10);     

    printf("\n------------------------------------------------------------\n");

    return 0;
}
