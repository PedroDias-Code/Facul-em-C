#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************");
    printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
    printf("\n* programa PHD 36 - Contagem de 1 a 10 com while           *");
    printf("\n************************************************************");

    int i = 1; 

    printf("\n\nContando com while:\n");

    while (i <= 10) { 
        printf("%d ", i);
        i++; 
    }

    return 0;
}
