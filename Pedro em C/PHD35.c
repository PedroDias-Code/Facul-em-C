#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************");
    printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
    printf("\n* programa PHD 35 - Sequência de Fibonacci                 *");
    printf("\n************************************************************");

    int n, i;
    long long t1 = 0, t2 = 1, proximoTermo;

    printf("\n\nDigite quantos termos da sequência deseja ver: ");
    scanf("%d", &n);

    printf("\nSequência de Fibonacci: ");

    for (i = 1; i <= n; i++) {
        printf("%lld ", t1);
        proximoTermo = t1 + t2;
        t1 = t2;
        t2 = proximoTermo;
    }

    printf("\n\n------------------------------------------------------------\n");

    return 0;
}
