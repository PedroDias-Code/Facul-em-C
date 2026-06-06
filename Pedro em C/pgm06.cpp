//Pedro Henrique Dias De Moura 0025842
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    float TF, TP, TA, PF, PP;
printf("Digite o total de faltas: ");
scanf("%f", &TF);
printf(" Digite o total de presenças: ");
scanf("%f", &TP);
    TA = TF + TP;
    PF = TF / TA;
    PP = TP / TA;
    
    printf("\n O toatl de faltas foi %.1f", PF *100," %");
    printf("\n O total de presença foi %.1f", PP *100, "%");
    
    
    
}
