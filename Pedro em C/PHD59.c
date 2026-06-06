#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************");
    printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
    printf("\n* programa PHD 59 - Sistema de Navegação do Robô           *");
    printf("\n************************************************************");

    char direcao;

    printf("\n\nDigite a letra da direção (N, S, L, O): ");
    scanf(" %c", &direcao);

    switch(direcao) {
        case 'N':
            printf("\nComando: \"Seguir para o Norte.\"");
            break;
        case 'S':
            printf("\nComando: \"Seguir para o Sul.\"");
            break;
        case 'L':
            printf("\nComando: \"Virar à Leste (Direita).\"");
            break;
        case 'O':
            printf("\nComando: \"Virar à Oeste (Esquerda).\"");
            break;
        default:
            printf("\nComando inválido! Pare o robô.");
    }

    printf("\n\n------------------------------------------------------------\n");

    return 0;
}
