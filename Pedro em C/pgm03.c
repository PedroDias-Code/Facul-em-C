// Pedro Henrique Dias De Moura 0025842
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    int idade;
	float idade_dias;

	printf("programa que calcula a idade em dias\n");
	printf("Qual e a sua idade?");
	scanf("%d",&idade);
	
idade_dias = idade *365.25;	
	
	
printf("sua idade em dias e: %.2f\n.",idade_dias);
return 0;
}
