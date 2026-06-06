#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************");
    printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
    printf("\n* programa PHD 43 - Soma de Pares (1 a 100) com While      *");
    printf("\n************************************************************");

    int i = 1, soma = 0;

    while (i <= 100) {
        if (i % 2 == 0) {
            soma += i; 
        }
        i++;
    }

    printf("\n\nA soma de todos os números pares entre 1 e 100 é: %d", soma);
    printf("\n\n------------------------------------------------------------\n");

    return 0;
}
