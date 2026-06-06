// Pedro Henrique Dias De Moura 0025842
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
     float raio, area;
    
    printf("INFORME O RAIO DO CIRCULO: ");
    scanf("%f", &raio);
    
    area = 3.14 * (raio * raio);
    
    printf("A AREA DO CIRCULO E: %.2f\n", area);
   
    
}
