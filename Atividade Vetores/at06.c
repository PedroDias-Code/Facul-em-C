//Pedro Henrique Dias | Condicional IF maiores que 50
#include <stdio.h>
int main() {
	int i;
    int v[5] = {10, 60, 30, 80, 5};
    for( i = 0; i < 5; i++) {
        if(v[i] > 50) 
		printf("Maior: v[%d] = %d\n", i, v[i]);
    }
    return 0;
}
