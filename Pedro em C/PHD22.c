#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************");
    printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
    printf("\n* programa PHD 22 - Verificador de Par ou Ímpar            *");
    printf("\n************************************************************");

    int numero;

    printf("\n\nDigite um número inteiro: ");
    scanf("%d", &numero);

    printf("\n--- Resultado da Classificação ---");

    if (numero % 2 == 0) {
        printf("\nO número %d é Par.", numero);
    } 
    else {
        printf("\nO número %d é Ímpar.", numero);
    }

    printf("\n------------------------------------------------------------\n");

    return 0;
}
