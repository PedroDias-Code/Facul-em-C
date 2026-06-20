//Pedro Henrique Dias | Condicional IF pares
#include <stdio.h>
int main() {
	int i;
    int v[5] = {1, 2, 3, 4, 5};
    for( i = 0; i < 5; i++) {
        if(v[i] % 2 == 0) 
		printf("Par: v[%d] = %d\n", i, v[i]);
    }
    return 0;
}
