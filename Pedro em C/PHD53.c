#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************");
    printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
    printf("\n* programa PHD 53 - Menu com Repetição Condicional         *");
    printf("\n************************************************************");

    char opcao;

    do {
        printf("\n\n--- Sistema de Cadastro ---");
        printf("\nOperação realizada com sucesso!");
        
        printf("\n\nDeseja sair do sistema? (Digite 's' para sair ou qualquer outra tecla para continuar): ");
       
        scanf(" %c", &opcao);

    } while (opcao != 's' && opcao != 'S');
    printf("\n------------------------------------------------------------");
    printf("\nEncerrando o sistema. Até logo!");
    printf("\n------------------------------------------------------------\n");

    return 0;
}
