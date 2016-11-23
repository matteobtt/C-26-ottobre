#include <stdio.h>

int somma = 0;

int main() {
    int *num;
    FILE *file;
    file = fopen("C:/Users/Matteo/Documents/LEZIONI/C e C++/esercizi C/23-novembre/numbers.txt", "r");
    if(file != NULL) {
        while (!feof(file)) {
            fscanf(file, "%d", num);
            somma += *num;
        }
        printf("Somma = %d\n", somma);
        fclose(file);
    } else {
        printf("Impossibile aprire il file");
    }
    return 0;
}