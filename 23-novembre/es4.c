#include <stdio.h>

double moltiplicazione = 1;

int main() {
    int *num;
    FILE *file;
    file = fopen("C:/Users/Matteo/Documents/LEZIONI/C e C++/esercizi C/23-novembre/numbers.txt", "r");
    if(file != NULL) {
        while (!feof(file)) {
            fscanf(file, "%d", num);
            moltiplicazione *= *num;
        }
        printf("Moltiplicazione = %e\n", moltiplicazione);
        fclose(file);
    } else {
        printf("Impossibile aprire il file");
    }
    return 0;
}