//Pedro Henrique Dias | Subtração IF =
#include <stdio.h>
int main() {
	int i;
    int v[5] = {-5, 10, -2, 8, -1};
    for( i = 0; i < 5; i++) {
        if(v[i] < 0) v[i] = 0;
    }
    for(i = 0; i < 5; i++) 
	printf("v[%d] = %d\n", i, v[i]);
    return 0;
}
