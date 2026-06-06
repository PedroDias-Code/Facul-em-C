#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************");
    printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
    printf("\n* programa PHD 19 - Classificação de Pontuação             *");
    printf("\n************************************************************");

    float n1, n2, n3, temp;

    printf("\n\nDigite a primeira pontuação: ");
    scanf("%f", &n1);
    printf("Digite a segunda pontuação: ");
    scanf("%f", &n2);
    printf("Digite a terceira pontuação: ");
    scanf("%f", &n3);

    if (n1 > n2) { temp = n1; n1 = n2; n2 = temp; }
    if (n1 > n3) { temp = n1; n1 = n3; n3 = temp; }
    if (n2 > n3) { temp = n2; n2 = n3; n3 = temp; }

    printf("\n--- Ordem Crescente ---");
    printf("\nPontuações: %.2f, %.2f, %.2f\n", n1, n2, n3);
    printf("------------------------------------------------------------\n");

    return 0;
}
