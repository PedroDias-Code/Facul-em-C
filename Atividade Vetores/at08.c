//Pedro Henrique Dias | Soma condicional
#include <stdio.h>
int main() {
	int i;
    int v[5] = {10, -5, 20, -1, 30}, soma = 0;
    for( i = 0; i < 5; i++) {
        if(v[i] > 0) soma += v[i];
    }
    printf("Soma positivos: %d\n", soma);
    return 0;
}
