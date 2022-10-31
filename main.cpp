#include <iostream>
#include <random> // for std::mt19937

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

int main() {
    mt19937 mt;

    int seed = absolute(mt());

    cout << seed << endl;

    int** table = createTable(5, 5, seed);

    printTable(table, 5, 5);

    return 1;
}