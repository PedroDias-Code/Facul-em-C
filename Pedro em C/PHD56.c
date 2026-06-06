#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************");
    printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
    printf("\n* programa PHD 56 - Totem de Autoatendimento da Lanchonete *");
    printf("\n************************************************************");

    int opcao;

    printf("\n\n--- MENU DE COMBOS ---");
    printf("\n1 - Combo Hambúrguer + Batata + Refri - R$ 30,00");
    printf("\n2 - Combo Pizza Brotinho + Refri - R$ 25,00");
    printf("\n3 - Combo Salada + Suco Natural - R$ 22,00");
    printf("\n4 - Combo Balde de Frango + Molho - R$ 35,00");
    printf("\n\nDigite o número do seu pedido: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("\nPedido escolhido: Combo Hambúrguer + Batata + Refri\nValor: R$ 30,00");
            break;
        case 2:
            printf("\nPedido escolhido: Combo Pizza Brotinho + Refri\nValor: R$ 25,00");
            break;
        case 3:
            printf("\nPedido escolhido: Combo Salada + Suco Natural\nValor: R$ 22,00");
            break;
        case 4:
            printf("\nPedido escolhido: Combo Balde de Frango + Molho\nValor: R$ 35,00");
            break;
        default:
            printf("\nOpção inválida! Escolha de 1 a 4.");
    }

    printf("\n\n------------------------------------------------------------\n");

    return 0;
}
