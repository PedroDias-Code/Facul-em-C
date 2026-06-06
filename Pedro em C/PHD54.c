#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************");
    printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
    printf("\n* programa PHD 54 - Validação de Nível de Dificuldade      *");
    printf("\n************************************************************");

    int nivel;

    do {
        printf("\n\nEscolha o nível de dificuldade (1 a 5): ");
        scanf("%d", &nivel);

        if (nivel < 1 || nivel > 5) {
            printf("Opção inválida! Por favor, escolha um número entre 1 e 5.");
        }
    } while (nivel < 1 || nivel > 5); 

    printf("\n------------------------------------------------------------");
    printf("\nNível %d selecionado. Bom jogo!", nivel);
    printf("\n------------------------------------------------------------\n");

    return 0;
}
