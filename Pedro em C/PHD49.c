#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************");
    printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
    printf("\n* programa PHD 49 - Controle de Acesso ao Laboratório      *");
    printf("\n************************************************************");

    int senha;
    int senhaCorreta = 1111;

    do {
        printf("\n\nDigite a senha de acesso: ");
        scanf("%d", &senha);

        if (senha != senhaCorreta) {
            printf("Senha incorreta. Tente novamente!");
        }
    } while (senha != senhaCorreta);

    printf("\n\n************************************************************");
    printf("\n* Acesso liberado! Bem-vindo ao laboratório.               *");
    printf("\n************************************************************\n");

    return 0;
}
