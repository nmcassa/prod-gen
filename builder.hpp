#include <random>

int** createBase(int row, int col);

int checkAround(int row, int col, int** arr, int cRow, int cCol, int iter);

int** buildLayer(int row, int col, int** arr, int iter);