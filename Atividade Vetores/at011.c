//Pedro Henrique Dias | Média Simples
#include <stdio.h>
int main() {
	int i;
    int v[3] = {10, 20, 30}, soma = 0;
    for( i = 0; i < 3; i++) soma += v[i];
    printf("Media: %.2f\n", (float)soma / 3);
    return 0;
}
