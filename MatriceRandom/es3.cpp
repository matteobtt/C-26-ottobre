#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int matrice[10][10];

void generaMatrice() {
    srand((unsigned)time(NULL));
    int i = 0;
    for (i = 0; i < 10; i++) {
        int j = 0;
        for (j = 0; j < 10; j++) {
            matrice[i][j] = rand() % 50;
        }
    }
}

void stampaMatrice() {
    int i = 0;
    for (i = 0; i < 10; i++) {
        int j = 0;
        for (j = 0; j < 10; j++) {
            cout << matrice[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    generaMatrice();
    stampaMatrice();

    int i = 0;
    int somma = 0;
    double media = 0;
    for (i = 0; i < 10; i++) {
        int j = 0;
        for (j = 0; j < 10; j++) {
            somma+=matrice[i][j];
        }
    }
    media = (double)somma / (sizeof(matrice) / sizeof(matrice[0][0]));
    cout << "Media = " << media;
    return 0;
}