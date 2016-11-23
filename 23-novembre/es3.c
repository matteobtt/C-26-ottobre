#include <stdio.h>

int sottrazione = 0;

int main() {
    int *num;
    FILE *file;
    file = fopen("C:/Users/Matteo/Documents/LEZIONI/C e C++/esercizi C/23-novembre/numbers.txt", "r");
    if(file != NULL) {
        while (!feof(file)) {
            fscanf(file, "%d", num);
            sottrazione -= *num;
        }
        printf("Sottrazione = %d\n", sottrazione);
        fclose(file);
    } else {
        printf("Impossibile aprire il file");
    }
    return 0;
}