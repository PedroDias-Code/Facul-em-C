#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************");
    printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
    printf("\n* programa PHD 52 - Acumulador com Parada em Múltiplo de 10*");
    printf("\n************************************************************");

    int valor, soma = 0;

    printf("\n\nDigite os valores para a pontuação (digite um múltiplo de 10 para parar):\n");

    do {
        printf("Valor: ");
        scanf("%d", &valor);
        
        if (valor % 10 != 0) {
            soma += valor;
        }
    } while (valor % 10 != 0);

    printf("\n------------------------------------------------------------");
    printf("\nSoma total dos valores (excluindo o múltiplo de 10): %d", soma);
    printf("\n------------------------------------------------------------\n");

    return 0;
}
