#include <random>

int** createBase(int row, int col);

int checkAround(int row, int col, int** arr, int cRow, int cCol, int iter);

int gatherAround(int row, int col, int** arr, int cRow, int cCol);

int** buildLayer(int row, int col, int** arr, int iter);

int** convol(int row, int col, int** arr);