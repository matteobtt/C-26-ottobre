#include <stdio.h>
#include <limits.h>

int somma = 0;
float media = 0;
int valoreMin = INT_MAX;
int valoreMax = 0;
int elements = 0;

int main() {
    int *num;
    FILE *file;
    file = fopen("C:/Users/Matteo/Documents/LEZIONI/C e C++/esercizi C/23-novembre/numbers.txt", "r");
    if(file != NULL) {
        while (!feof(file)) {
            fscanf(file, "%d", num);
            somma += *num;
            if (*num < valoreMin) {
                valoreMin = *num;
            }
            if (*num > valoreMax) {
                valoreMax = *num;
            }
            elements++;
        }
        media = (float) somma / (float) elements;
        printf("Maggiore = %d\n", valoreMax);
        printf("Minore = %d\n", valoreMin);
        printf("Media = %f\n", media);
        fclose(file);
    } else {
        printf("Impossibile aprire il file");
    }
    return 0;
}