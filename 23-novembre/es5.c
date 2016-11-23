#include <stdio.h>

int somma = 0;
float media = 0;
int elements = 0;

int main() {
    int *num;
    FILE *file;
    file = fopen("C:/Users/Matteo/Documents/LEZIONI/C e C++/esercizi C/23-novembre/numbers.txt", "r");
    if(file != NULL) {
        while (!feof(file)) {
            fscanf(file, "%d", num);
            somma += *num;
            elements++;
        }
        media = (float) somma / (float) elements;
        printf("Media = %f\n", media);
        fclose(file);
    } else {
        printf("Impossibile aprire il file");
    }
    return 0;
}