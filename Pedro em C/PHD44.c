#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************");
    printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
    printf("\n* programa PHD 44 - Contador de Dígitos                    *");
    printf("\n************************************************************");

    int numero, copiaNumero, contador = 0;

    printf("\n\nDigite um número positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("\nPor favor, digite apenas números positivos.");
    } else {
        copiaNumero = numero;
        
        if (copiaNumero == 0) {
            contador = 1;
        } else {
            while (copiaNumero > 0) {
                copiaNumero /= 10; 
                contador++;       
            }
        }

        printf("\nO número %d possui %d dígito(s).", numero, contador);
    }

    printf("\n\n------------------------------------------------------------\n");

    return 0;
}
