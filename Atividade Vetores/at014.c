//Pedro Henrique Dias | Soma total
#include <stdio.h>
int main() {
	int i;
    int v[5] = {1, 2, 3, 4, 5}, total = 0;
    for(i = 0; i < 5; i++) total += v[i];
    printf("Soma total: %d\n", total);
    return 0;
}
