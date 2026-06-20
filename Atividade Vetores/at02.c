//Pedro Henrique Dias | Acumulador 
#include <stdio.h>

int main() {
    int v[5] = {10, 20, 30, 40, 50};
	int i;
    for( i = 0; i < 5; i++) {
        v[i]++; 
    }

    printf("Valores apos o incremento:\n");
    for(i = 0; i < 5; i++) {
        printf("v[%d] = %d\n", i, v[i]);
    }

    return 0; 
}
