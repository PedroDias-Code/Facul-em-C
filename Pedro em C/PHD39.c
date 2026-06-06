#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************");
    printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
    printf("\n* programa PHD 39 - Validação de Valores Financeiros       *");
    printf("\n************************************************************");

    float valor;

    do {
        printf("\n\nDigite um valor positivo para cadastro: ");
        scanf("%f", &valor);

        if (valor <= 0) {
            printf("Erro: O valor deve ser maior que zero!");
        }
    } while (valor <= 0);

    printf("\n--- Valor aceito com sucesso: R$ %.2f ---\n", valor);
    printf("------------------------------------------------------------\n");

    return 0;
}
