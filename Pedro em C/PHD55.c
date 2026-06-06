#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************");
    printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
    printf("\n* programa PHD 55 - Identificador de Maior Valor Positivo  *");
    printf("\n************************************************************");

    float nota, maior = 0;

    printf("\n\nDigite as notas (ou um valor negativo para finalizar):\n");

    do {
        printf("Nota: ");
        scanf("%f", &nota);

        if (nota >= 0) {
            if (nota > maior) {
                maior = nota; 
            }
        }
    } while (nota >= 0); 

    printf("\n------------------------------------------------------------");
    printf("\nO maior número positivo informado foi: %.2f", maior);
    printf("\n------------------------------------------------------------\n");

    return 0;
}
