#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "methods.cpp"

using namespace std;

int main() {
    srand (time(NULL));

    int seed = rand();

    cout << seed << endl;

    int** table = createTable(5, 5, seed);
    printTable(table, 5, 5);

    return 1;
}