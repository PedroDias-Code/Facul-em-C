#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************");
    printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
    printf("\n* programa PHD 25 - Verificador de Situação Escolar        *");
    printf("\n************************************************************");

    float media;

    printf("\n\nDigite a média final do aluno: ");
    scanf("%f", &media);

    printf("\n--- Resultado da Avaliação ---");

    if (media >= 7.0) {
        printf("\nSituação: Aprovado!");
    } 
    else if (media >= 5.0) {
        printf("\nSituação: Em Recuperação.");
    } 
    else {
        printf("\nSituação: Reprovado.");
    }

    printf("\n------------------------------------------------------------\n");

    return 0;
}
