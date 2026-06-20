//Pedro Henrique Dias | Atribuição 
#include <stdio.h>
int main() {
	int i;
    int A[3] = {10, 20, 30}, B[3];
    for( i = 0; i < 3; i++) B[i] = A[i];
    for( i = 0; i < 3; i++)
	 printf("B[%d] = %d\n", i, B[i]);
    return 0;
}
