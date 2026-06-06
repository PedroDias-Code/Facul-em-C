// Pedro Henrique Dias De Moura 0025842
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float media, km, consumo;

    printf("A distância percorrida do automóvel: ");
    scanf("%.1f", &km);

    printf("O total gasto de combustível: ");
    scanf("%.1f", &consumo);

    media = km / consumo;

    printf("O consumo total foi %.2f L/km\n", media);

    return 0;
}
