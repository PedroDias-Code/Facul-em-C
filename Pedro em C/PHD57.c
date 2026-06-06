#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************");
    printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
    printf("\n* programa PHD 57 - Lógica do Urso de Pelúcia Eletrônico   *");
    printf("\n************************************************************");

    char cor[20];

    printf("\n\nDigite a cor que acendeu na barriga do urso (Verde, Amarelo, Vermelho): ");
    scanf("%s", cor);

    if (strcmp(cor, "Verde") == 0) {
        printf("\nO urso diz: \"Vamos brincar lá fora!\"");
    } 
    else if (strcmp(cor, "Amarelo") == 0) {
        printf("\nO urso diz: \"Estou ficando com soninho...\"");
    } 
    else if (strcmp(cor, "Vermelho") == 0) {
        printf("\nO urso diz: \"Estou com fome, hora do lanche!\"");
    } 
    else {
        printf("\nCor desconhecida. (O urso apenas pisca as luzes)");
    }

    printf("\n\n------------------------------------------------------------\n");

    return 0;
}
