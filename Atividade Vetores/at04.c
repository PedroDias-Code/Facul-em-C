//Pedro Henrique Dias | Divisão
#include <stdio.h>
int main() {
	int i;
    int v[4] = {10, 20, 30, 40};
    for( i = 0; i < 4; i++) v[i] /= 2;
    for( i = 0; i < 4; i++) 
	printf("v[%d] = %d\n", i, v[i]);
    return 0;
}
