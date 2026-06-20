//Pedro Henrique Dias | Contagem IF 
#include <stdio.h>
int main() {
	int i;
    int v[5] = {10, 5, 10, 8, 10}, cont = 0;
    for( i = 0; i < 5; i++) {
        if(v[i] == 10) cont++;
    }
    printf("Contagem do 10: %d\n", cont);
    return 0;
}
