#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************");
    printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
    printf("\n* programa PHD 40 - Tabuada com While                      *");
    printf("\n************************************************************");

    int numero, contador = 1;

    printf("\n\nDigite o número para ver sua tabuada: ");
    scanf("%d", &numero);

    printf("\n--- Tabuada do %d ---", numero);

    while (contador <= 10) {
        printf("\n%d x %d = %d", numero, contador, numero * contador);
        contador++; 
    }

    printf("\n------------------------------------------------------------\n");

    return 0;
}
