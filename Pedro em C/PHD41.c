#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************");
    printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
    printf("\n* programa PHD 41 - Verificador de Primos com While        *");
    printf("\n************************************************************");

    int num, i = 2, contDivisores = 0;

    printf("\n\nDigite um número para verificar se é primo: ");
    scanf("%d", &num);

    while (i <= num) {
        if (num % i == 0) {
            contDivisores++;
        }
        i++;
    }

    if (num > 1 && contDivisores == 1) {
        printf("\nO número %d é primo.", num);
    } else {
        printf("\nO número %d não é primo.", num);
    }

    printf("\n------------------------------------------------------------\n");

    return 0;
}
