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

int checkAround(int row, int col, int** arr, int cRow, int cCol) {
    //out of 20
    int ret = 5;
    
    for (int i = cRow - 1; i <= cRow + 1; i++) {
        for (int j = cCol - 1; j <= cCol + 1; j++) {
            if (i == -1 || j == -1 || i == row || j == col) {
                continue;
            } else {
                if (arr[i][j] >=  1) {
                    ret += 1;
                }
            }
        }
    }

    return ret;
}

int** buildLayer(int row, int col, int** arr) {
    srand (time(NULL));

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            int chance = checkAround(row, col, arr, i, j);
            if (rand() % 20 < chance) {
                arr[i][j] += 1;
            }
        }
    }

    return arr;
}

int main() {
    srand (time(NULL));

    int seed = rand();

    //int** table = createTable(5, 5, seed);
    //printTable(table, 5, 5);

    //cout << endl;

    int** base = createBase(5, 5);
    printTable(base, 5, 5);

    cout << endl;

    base = buildLayer(5, 5, base);
    base = buildLayer(5, 5, base);
    base = buildLayer(5, 5, base);
    base = buildLayer(5, 5, base);
    base = buildLayer(5, 5, base);
    
    printTable(base, 5, 5);

    return 1;
}