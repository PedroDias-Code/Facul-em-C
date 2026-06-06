// Pedro Henrique Dias De Moura 0025842
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    float ta,te,vp;
    printf(" Insira o valor da taxa de água: ");
    scanf("%f", &ta);
    
    te = (0.8*ta);
    vp = (ta+te);
    printf(" O valor a ser pago é de %.1f",vp, " reais ");

	}
