#include <iostream>
#include <random> // for std::mt19937

int absolute(int num);

int** createTable(int row, int col, int seed);

void printTable(int** table, int row, int col);

int** retConvol(int row, int col);