#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************");
    printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
    printf("\n* programa PHD 58 - Calculadora de Bolso (4 Operações)     *");
    printf("\n************************************************************");

    float num1, num2, resultado;
    char operacao;

    printf("\n\nDigite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite a operação (+, -, *, /): ");
    scanf(" %c", &operacao);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    switch(operacao) {
        case '+':
            resultado = num1 + num2;
            printf("\nResultado: %.2f + %.2f = %.2f\n", num1, num2, resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("\nResultado: %.2f - %.2f = %.2f\n", num1, num2, resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("\nResultado: %.2f * %.2f = %.2f\n", num1, num2, resultado);
            break;
        case '/':
           
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("\nResultado: %.2f / %.2f = %.2f\n", num1, num2, resultado);
            } else {
                printf("\nErro: Divisão por zero não permitida!\n");
            }
            break;
        default:
            printf("\nOperação matemática não reconhecida.\n");
    }

    printf("\n------------------------------------------------------------\n");

    return 0;
}
