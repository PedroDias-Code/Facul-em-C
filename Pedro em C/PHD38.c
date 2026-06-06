#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************");
    printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
    printf("\n* programa PHD 38 - Validação de Acesso (Senha)            *");
    printf("\n************************************************************");

    char senhaCorreta[] = "pedrolindo";
    char senhaDigitada[20];

    do {
        printf("\n\nDigite a senha para acessar o sistema: ");
        scanf("%s", senhaDigitada);

        if (strcmp(senhaDigitada, senhaCorreta) != 0) {
            printf("Senha incorreta! Tente novamente.");
        }
    } while (strcmp(senhaDigitada, senhaCorreta) != 0);

    printf("\n\n--- Acesso Autorizado ---");
    printf("\nBem-vindo ao sistema, Pedro!\n");
    printf("------------------------------------------------------------\n");

    return 0;
}
