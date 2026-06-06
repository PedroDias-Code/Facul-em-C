#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************");
    printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
    printf("\n* programa PHD 45 - Menu de Caixa Eletrônico               *");
    printf("\n************************************************************");

    int opcao;

    do {
        printf("\n\n--- MENU DO CAIXA ELETRÔNICO ---");
        printf("\n1 - Consultar Saldo");
        printf("\n2 - Realizar Saque");
        printf("\n3 - Depósito");
        printf("\n0 - Sair");
        printf("\nEscolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("\n>> Saldo atual: R$ 1.500,00\n");
                break;
            case 2:
                printf("\n>> Operação de Saque selecionada.\n");
                break;
            case 3:
                printf("\n>> Operação de Depósito selecionada.\n");
                break;
            case 0:
                printf("\n>> Encerrando o sistema. Até logo!\n");
                break;
            default:
                printf("\n>> Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 0);

    printf("\n------------------------------------------------------------\n");

    return 0;
}
