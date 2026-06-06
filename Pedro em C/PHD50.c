#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************");
    printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
    printf("\n* programa PHD 50 - Validação de Depósito Bancário         *");
    printf("\n************************************************************");

    float valor;

    do {
        printf("\n\nDigite o valor do depósito: R$ ");
        scanf("%f", &valor);

        if (valor <= 0) {
            printf("Erro: O valor deve ser positivo para realizar o depósito.");
        }
    } while (valor <= 0);

    printf("\n------------------------------------------------------------");
    printf("\nSucesso! Depósito de R$ %.2f realizado com sucesso.", valor);
    printf("\n------------------------------------------------------------\n");

    return 0;
}
