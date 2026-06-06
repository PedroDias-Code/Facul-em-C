#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************");
    printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
    printf("\n* programa PHD 51 - Contagem Regressiva com do...while     *");
    printf("\n************************************************************");

    int i = 10;

    printf("\n\nPreparar...\n");

    do {
        printf("%d... ", i);
        i--; 
    } while (i >= 1); 

    printf("LARGADA!\n");
    printf("\n------------------------------------------------------------\n");

    return 0;
}
