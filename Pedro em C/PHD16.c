#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************");
    printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
    printf("\n* programa PHD 16 - Promoção Lanchonete                    *");
    printf("\n************************************************************");

    int numeroPedido;

    printf("\n\nDigite o número do pedido: ");
    scanf("%d", &numeroPedido);

    printf("\n--- Resultado da Promoção ---");

    if (numeroPedido % 3 == 0 && numeroPedido % 5 == 0) {
        printf("\nParabéns! Você ganhou um refrigerante e uma sobremesa!");
    } 
    else if (numeroPedido % 3 == 0) {
        printf("\nParabéns! Você ganhou um refrigerante!");
    } 
    else if (numeroPedido % 5 == 0) {
        printf("\nParabéns! Você ganhou uma sobremesa!");
    } 
    else {
        printf("\nPedido não contemplado com brindes desta vez.");
    }
    
    printf("\n------------------------------------------------------------\n");

    return 0;
}

