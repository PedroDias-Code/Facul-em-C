#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************");
    printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
    printf("\n* programa PHD 23 - Identificador de Maior Pontuação       *");
    printf("\n************************************************************");

    float pont1, pont2;

    printf("\n\nDigite a pontuação do primeiro atleta: ");
    scanf("%f", &pont1);
    printf("Digite a pontuação do segundo atleta: ");
    scanf("%f", &pont2);

    printf("\n--- Resultado da Comparação ---");

    if (pont1 > pont2) {
        printf("\nA maior pontuação é a do primeiro atleta: %.2f", pont1);
    } 
    else if (pont2 > pont1) {
        printf("\nA maior pontuação é a do segundo atleta: %.2f", pont2);
    } 
    else {
        printf("\nAmbos os atletas registraram a mesma pontuação: %.2f", pont1);
    }

    printf("\n------------------------------------------------------------\n");

    return 0;
}
