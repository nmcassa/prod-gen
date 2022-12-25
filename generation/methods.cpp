#include "methods.hpp"
#include "builder.hpp"

using namespace std;

int absolute(int num) {
    if (num < 0) {
        return num * -1;
    }
    return num;
}

int** createTable(int row, int col, int seed) {
    int** table = new int*[row];
    for (int i = 0; i < row; i++) {
        table[i] = new int[col];
        for (int j = 0; j < col; j++) {
            table[i][j] = (seed % 5);
            seed = (seed / 2);
        }
    }
    return table;
}

void printTable(int** table, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << table[i][j] << "\t";
        }
        cout << endl;
    }
}

int** retConvol(int row, int col) {
    srand (time(NULL));

    int seed = rand();

    int** base = createBase(10, 10);

    for (int i = 1; i <= 20; i++) {
        base = buildLayer(10, 10, base, i);
    }

    return convol(10, 10, base);
}