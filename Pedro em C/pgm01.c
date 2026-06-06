// Pedro Henrique Dias De Moura 0025842
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
 float DIN;

printf("Quanto de dinheiro você tem?");
scanf("%.1f", &DIN);

if (DIN > 50) {
	printf("amigão vai ao cinema, você esta RICO\n");
} else{
	
printf("amigão fique em casa assistindo FAUSTAO\n");	
}

}
