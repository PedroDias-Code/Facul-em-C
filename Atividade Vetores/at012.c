//Pedro Henrique Dias | Inversão de sinal
#include <stdio.h>
int main() {
	int i; 
    int v[5] = {5, -10, 15, -20, 25};
    for( i = 0; i < 5; i++) v[i] -= (v[i] * 2);
    for( i = 0; i < 5; i++) 
	printf("v[%d] = %d\n", i, v[i]);
    return 0;
}
