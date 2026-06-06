#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************");
    printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
    printf("\n* programa PHD 20 - Verificador de Ano Bissexto            *");
    printf("\n************************************************************");

    int ano;

    printf("\n\nDigite o ano: ");
    scanf("%d", &ano);

    printf("\n--- Resultado da Verificação ---");

    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        printf("\nO ano %d é bissexto (366 dias).", ano);
    } 
    else {
        printf("\nO ano %d não é bissexto (365 dias).", ano);
    }

    printf("\n------------------------------------------------------------\n");

    return 0;
}
