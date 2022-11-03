#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "methods.cpp"
#include "builder.cpp"

using namespace std;

int main() {
    srand (time(NULL));

    int seed = rand();

    //int** table = createTable(5, 5, seed);
    //printTable(table, 5, 5);

    //cout << endl;

    int** base = createBase(10, 10);

    for (int i = 1; i <= 20; i++) {
        base = buildLayer(10, 10, base, i);
    }
    
    printTable(base, 10, 10);

    return 1;
}