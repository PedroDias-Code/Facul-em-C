#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n************************************************************");
    printf("\n* Aluno: Pedro Henrique Dias de Moura                      *");
    printf("\n* programa PHD 15 - Capacidade de Carga                    *");
    printf("\n************************************************************");

    float largCaminhao, compCaminhao, altCaminhao;
    float largCaixa, compCaixa, altCaixa;
    float volCaminhao, volCaixa;
    int qtdCaixas;

    printf("\n\n--- Dimensões do Caminhão ---\n");
    printf("Largura (cm): ");
    scanf("%f", &largCaminhao);
    printf("Comprimento (cm): ");
    scanf("%f", &compCaminhao);
    printf("Altura (cm): ");
    scanf("%f", &altCaminhao);

    printf("\n--- Dimensões da Caixa \n");
    printf("Largura (cm): ");
    scanf("%f", &largCaixa);
    printf("Comprimento (cm): ");
    scanf("%f", &compCaixa);
    printf("Altura (cm): ");
    scanf("%f", &altCaixa);

    volCaminhao = largCaminhao * compCaminhao * altCaminhao;
    volCaixa = largCaixa * compCaixa * altCaixa;

    qtdCaixas = (int)(volCaminhao / volCaixa);

    printf("\n------------------------------------------------------------");
    printf("\nVolume do Caminhão: %.2f cm", volCaminhao);
    printf("\nVolume da Caixa: %.2f cm", volCaixa);
    printf("\nQuantidade máxima teórica de caixas: %d", qtdCaixas);
    printf("\n------------------------------------------------------------\n");

    return 0;
}
