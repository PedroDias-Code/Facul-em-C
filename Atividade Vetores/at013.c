//Pedro Henrique Dias | Comparação IF
#include <stdio.h>
int main() {
	int i;
    int v[5] = {1, 2, 0, 4, 5};
    for( i = 0; i < 5; i++) {
        if(v[i] == 0) 
		printf("Zero em v[%d]\n", i);
    }
    return 0;
}
