#include <stdio.h>

int main() {
    int array[10];
    int i = 0;

    array[0] = 54;
    array[1] = 88;
    array[2] = 45;
    array[3] = 78;
    array[4] = 37;
    array[5] = 12;
    array[6] = 85;
    array[7] = 48;
    array[8] = 92;
    array[9] = 24;
	
	int differenza = array[0];

    for(i=1; i<10; i++) {
        differenza -= array[i];
    }

    printf("Differenza = %d\n", differenza);

    return 0;
}