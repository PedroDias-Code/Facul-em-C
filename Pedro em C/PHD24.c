#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************");
    printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
    printf("\n* programa PHD 24 - Verificador de Idade Eleitoral         *");
    printf("\n************************************************************");

    int idade;

    printf("\n\nDigite a sua idade: ");
    scanf("%d", &idade);

    printf("\n--- Resultado da Verificação ---");

    if (idade >= 16) {
        printf("\nVocê já possui idade para votar!");
    } 
    else {
        printf("\nVocê ainda não possui idade para votar.");
    }

    printf("\n------------------------------------------------------------\n");

    return 0;
}
