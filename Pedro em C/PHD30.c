#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************");
    printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
    printf("\n* programa PHD 30 - Calculadora de Fatorial                *");
    printf("\n************************************************************");

    int n, i;
    long long fatorial = 1; 

    printf("\n\nDigite um número para calcular seu fatorial: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("\nNão existe fatorial de número negativo.");
    } else {
        for (i = 1; i <= n; i++) {
            fatorial *= i; 
        }
        printf("\nO fatorial de %d é: %lld", n, fatorial);
    }

    printf("\n------------------------------------------------------------\n");

    return 0;
}
