#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************");
    printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
    printf("\n* programa PHD 47 - Tabuada com do...while                 *");
    printf("\n************************************************************");

    int numero, contador = 1;

    printf("\n\nDigite o número para ver sua tabuada: ");
    scanf("%d", &numero);

    printf("\n--- Tabuada do %d ---\n", numero);

    do {
        printf("%d x %d = %d\n", numero, contador, numero * contador);
        contador++;
    } while (contador <= 10);

    printf("\n------------------------------------------------------------\n");

    return 0;
}
