#include <stdio.h>
#include <time.h>
#include <stdlib.h>



void randomGenerate() {
    int number;
    srand(time(NULL));
    FILE *fileR;
    fileR = fopen("C:/Users/Matteo/Documents/LEZIONI/C e C++/esercizi C/23-novembre/random.txt", "w");
    if (fileR != NULL) {
        for (int j = 0; j < 100; j++) {
            number = rand()%1000+1;
            fprintf(fileR, "%d", number);
        }
    }
}


int main() {
    char *str;
    FILE *file;
    file = fopen("C:/Users/Matteo/Documents/LEZIONI/C e C++/esercizi C/23-novembre/numbers.txt", "r");
    if(file != NULL) {
        while (!feof(file)) {
            fscanf(file, "%s", str);
            printf("%s\n", str);
        }
        fclose(file);
    } else {
        printf("Impossibile aprire il file");
    }
    return 0;
}