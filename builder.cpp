#include "builder.hpp"

using namespace std;

int** createBase(int row, int col) {
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

int checkAround(int row, int col, int** arr, int cRow, int cCol, int iter) {
    //out of 20
    int ret = 4;
    
    for (int i = cRow - 1; i <= cRow + 1; i++) {
        for (int j = cCol - 1; j <= cCol + 1; j++) {
            if (i == -1 || j == -1 || i == row || j == col) {
                continue;
            } else {
                if (arr[i][j] >=  1) {
                    ret += (arr[i][j] / iter) * 2;
                }
            }
        }
    }

    return ret;
}

int** buildLayer(int row, int col, int** arr, int iter) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            int chance = checkAround(row, col, arr, i, j, iter);
            if (rand() % 20 < chance) {
                arr[i][j] += 1;
            }
        }
    }

    return arr;
}

//should be improved so that it convolutes correctly beyond
//the boundaries of the row
//THis will create a larger row that can then be shrunk on 
//either side
//this currently starts at index 2 instead of 0
int** convol(int row, int col, int** arr) {
    for (int i = 0; i < row; i++) {
        for (int j = 2; j < col - 2; j++) {
            int sum = (arr[i][j] + arr[i][j-1] + arr[i][j-2]
                        + arr[i][j+1] + arr[i][j+2]) / 5;

            arr[i][j] = sum;
        }
    }

    return arr;
}