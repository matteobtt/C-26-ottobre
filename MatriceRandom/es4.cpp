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

int main() {
    generaMatrice();

    int i = 0;
    int somma;
    for (i = 0; i < 10; i++) {
        int j = 0;
        somma = 0;
        for (j = 0; j < 10; j++) {
            cout << matrice[i][j] << "\t";
            somma+=matrice[i][j];
        }
        cout << "Somma = " << somma << endl;
    }
    cout << endl;

    return 0;
}