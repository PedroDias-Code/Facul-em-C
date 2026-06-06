#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************");
    printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
    printf("\n* programa PHD 18 - Acesso à Biblioteca Digital            *");
    printf("\n************************************************************");

    char usuarioDigitado[20], senhaDigitada[20];
    char usuarioCorreto[] = "Pedrolindo";
    char senhaCorreta[] = "1234";

    printf("\n\nDigite o nome de usuário: ");
    scanf("%s", usuarioDigitado);
    printf("Digite a senha: ");
    scanf("%s", senhaDigitada);

    printf("\n--- Resultado do Acesso ---");

    if (strcmp(usuarioDigitado, usuarioCorreto) == 0 && strcmp(senhaDigitada, senhaCorreta) == 0) {
        printf("\nAcesso permitido! Seja bem-vindo à biblioteca.");
    } 
    else {
        printf("\nAcesso negado! Usuário ou senha incorretos.");
    }

    printf("\n------------------------------------------------------------\n");

    return 0;
}
