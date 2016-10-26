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
    float valoreMin = array[0];
    float valoreMax = array[0];

    for(i=1; i<6; i++) {
        if(array[i] > valoreMax) {
            valoreMax = array[i];
        }
        if(array[i] < valoreMin) {
            valoreMin = array[i];
        }

        somma += array[i];
    }

    media = somma/6;

    printf("valoreMin = %f\n", valoreMin);
    printf("valoreMax = %f\n", valoreMax);
    printf("Media = %f\n", media);

    return 0;
}