#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "methods.cpp"

using namespace std;

int** createBase(int row, int col) {
    srand (time(NULL));

    int** base = new int*[row];
    for (int i = 0; i < row; i++) {
        base[i] = new int[col];
        for (int j = 0; j < col; j++) {
            if (rand() % 10 > 3) {
                base[i][j] = 1;
            } else {
                base[i][j] = 0;
            }
        }
    }

    return base;
}

int main() {
    srand (time(NULL));

    int seed = rand();

    int** table = createTable(5, 5, seed);
    printTable(table, 5, 5);

    cout << endl;

    int** base = createBase(5, 5);
    printTable(base, 5, 5);

    return 1;
}