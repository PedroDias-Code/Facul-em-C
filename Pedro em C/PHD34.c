#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************");
    printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
    printf("\n* programa PHD 34 - Verificador de Números Primos          *");
    printf("\n************************************************************");

    int num, i, ehPrimo = 1; 

    printf("\n\nDigite um número inteiro: ");
    scanf("%d", &num);

    if (num <= 1) {
        ehPrimo = 0;
    } else {
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                ehPrimo = 0; 
                break;      
            }
        }
    }

    if (ehPrimo) {
        printf("\nO número %d é primo.", num);
    } else {
        printf("\nO número %d não é primo.", num);
    }

    printf("\n------------------------------------------------------------\n");

    return 0;
}
