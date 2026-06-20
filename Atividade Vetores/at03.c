//Pedro Henrique Dias | Subtração
#include <stdio.h>
int main() {
	int i;
    int v[5] = {100, 105, 110, 115, 120};
    for( i = 0; i < 5; i++) v[i] -= 5;
    for( i = 0; i < 5; i++) 
	printf("v[%d] = %d\n", i, v[i]);
    return 0;
}
