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
}

int main() {
    generaMatrice();
    stampaMatrice();

    int j = 0;
    int somma = 0;
    cout << "\xb3\t\xb3\t\xb3\t\xb3\t\xb3\t\xb3\t\xb3\t\xb3\t\xb3\t\xb3\t" << endl;
    cout << "V\tV\tV\tV\tV\tV\tV\tV\tV\tV\t" << endl;

    for (j = 0; j < 10; j++) {
        int i = 0;
        somma = 0;
        for (i = 0; i < 10; i++) {
            somma+=matrice[i][j];
        }
        cout << somma << "\t";
    }


    return 0;
}