#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n************************************************************");
	printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
	printf("\n* programa PHD 14 - Tipo de Triângulo                      *");
	printf("\n************************************************************");
	
    float ladoA, ladoB, ladoC;

    printf("Digite o valor do primeiro lado: ");
    scanf("%f", &ladoA);
    printf("Digite o valor do segundo lado: ");
    scanf("%f", &ladoB);
    printf("Digite o valor do terceiro lado: ");
    scanf("%f", &ladoC);
 
    if ((ladoA + ladoB > ladoC) && (ladoA + ladoC > ladoB) && (ladoB + ladoC > ladoA)) {
 
        if (ladoA == ladoB && ladoB == ladoC) {
            printf("\nResultado: Triangulo Equilatero (todos os lados iguais).\n");
        } 
        else if (ladoA == ladoB || ladoA == ladoC || ladoB == ladoC) {
            printf("\nResultado: Triangulo Isosceles (dois lados iguais).\n");
        } 
        else {
            printf("\nResultado: Triangulo Escaleno (todos os lados diferentes).\n");
        }
        
    }

    return 0;
}
