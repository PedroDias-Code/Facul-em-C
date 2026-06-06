#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************");
    printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
    printf("\n* programa PHD 48 - Menu com do...while                    *");
    printf("\n************************************************************");

    int opcao;

    do {
        printf("\n\n--- MENU ---");
        printf("\n1 - Mensagem");
        printf("\n2 - Sair");
        printf("\nEscolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("\n>> Você escolheu a mensagem!\n");
        } else if (opcao == 2) {
            printf("\n>> Saindo do programa. Até logo!\n");
        } else {
            printf("\n>> Opção inválida! Tente novamente.\n");
        }

    } while (opcao != 2);

    printf("\n------------------------------------------------------------\n");

    return 0;
}
