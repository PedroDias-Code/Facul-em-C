#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************");
    printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
    printf("\n* programa PHD 60 - Sistema de Controle de Acesso        *");
    printf("\n************************************************************");

    int dia;

    printf("\n\nDigite o número do dia da semana (1 - Domingo, 7 - Sábado): ");
    scanf("%d", &dia);

    switch(dia) {
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            printf("\n>> Dia Útil. Acesso liberado para o trabalho.");
            break;
            
        case 1:
        case 7:
            printf("\n>> Fim de Semana. Prédio fechado.");
            break;
            
        default:
            printf("\n>> Número de dia inválido.");
    }

    printf("\n\n------------------------------------------------------------\n");

    return 0;
}
