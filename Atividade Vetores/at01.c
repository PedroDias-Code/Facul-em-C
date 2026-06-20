//Pedro Henrique Dias | Decremento
#include <stdio.h>

int main() {
    int v[5] = {1, 2, 3, 4, 5};
    int soma = 0;
    int i; 

    for(i = 0; i < 5; i++) {
        soma += v[i];
    }

    printf("A soma dos elementos do vetor e: %d\n", soma);

    return 0;
}
