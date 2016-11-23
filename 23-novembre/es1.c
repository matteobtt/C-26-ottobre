#include <stdio.h>

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