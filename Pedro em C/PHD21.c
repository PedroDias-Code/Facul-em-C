#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************");
    printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
    printf("\n* programa PHD 21 - Classificador de Lucros/Prejuízos      *");
    printf("\n************************************************************");

    float valor;

    printf("\n\nDigite o valor financeiro (positivo para lucro, negativo para prejuízo): ");
    scanf("%f", &valor);

    printf("\n--- Classificação do Registro ---");

    if (valor > 0) {
        printf("\nO valor %.2f representa um Lucro.", valor);
    } 
    else if (valor < 0) {
        printf("\nO valor %.2f representa um Prejuízo.", valor);
    } 
    else {
        printf("\nO valor é Zero (sem lucro ou prejuízo).");
    }

    printf("\n------------------------------------------------------------\n");

    return 0;
}
