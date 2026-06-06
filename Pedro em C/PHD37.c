#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************");
    printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
    printf("\n* programa PHD 37 - Caixa de Mercado (Soma Dinâmica)       *");
    printf("\n************************************************************");

    float valor, soma = 0;

    printf("\n\n--- Sistema de Caixa ---");
    printf("\nDigite os valores dos produtos (ou 0 para finalizar):\n");

    do {
        printf("Valor: ");
        scanf("%f", &valor);
        soma += valor; 
    } while (valor != 0); 

    printf("\n------------------------------------------------------------");
    printf("\nO valor total da compra é: R$ %.2f", soma);
    printf("\n------------------------------------------------------------\n");

    return 0;
}
