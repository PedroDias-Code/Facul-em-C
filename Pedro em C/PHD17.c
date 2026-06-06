#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************");
    printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
    printf("\n* programa PHD 17 - Sistema de Segurança Montanha-Russa    *");
    printf("\n************************************************************");

    float altura;

    printf("\n\nDigite a altura da criança em centímetros: ");
    scanf("%f", &altura);

    printf("\n--- Resultado do Sensor ---");

    if (altura >= 140) {
        printf("\nLuz Verde: Acesso liberado!");
    } 
    else {
        printf("\nLuz Vermelha: Acesso barrado!");
    }

    printf("\n------------------------------------------------------------\n");

    return 0;
}
