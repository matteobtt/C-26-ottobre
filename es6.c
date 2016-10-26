#include <stdio.h>

int main() {
    float array[6];
    int i = 0;

    array[0] = 35.4;
    array[1] = 46.7;
    array[2] = 77.55;
    array[3] = 11.1;
    array[4] = 9.04;
    array[5] = 0.75;

    float somma;
    float media;


    for(i=0; i<6; i++) {
        somma += array[i];
    }

    media = somma/6;

    printf("Media = %f\n", media);

    return 0;
}