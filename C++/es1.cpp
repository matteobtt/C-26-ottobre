#include <iostream>

using namespace std;

int main() {
    int array[10];
    int i = 0;

    array[0] = 54;
    array[1] = 88;
    array[2] = 45;
    array[3] = 78;
    array[4] = 37;
    array[5] = 12;
    array[6] = 85;
    array[7] = 48;
    array[8] = 92;
    array[9] = 24;

    for(i=0; i<10; i++) {
        cout << "[" << i << "] = " << array[i] << endl;
    }

    return 0;
}