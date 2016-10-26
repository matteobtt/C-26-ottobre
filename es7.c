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

    float somma = 0;
    int peso = 0;
    float prodottopeso = 0;
    int sommapesi = 0;
    float mediaponderata;


    for(i=0; i<6; i++) {
        peso = 5 - i;
        prodottopeso = array[i] * peso;
        sommapesi += peso;
        somma += prodottopeso;
    }

    mediaponderata = somma/sommapesi;

    printf("Media = %f\n", mediaponderata);

    return 0;
}