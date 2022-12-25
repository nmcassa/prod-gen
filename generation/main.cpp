#include <iostream>
#include <stdlib.h>
#include <time.h>

#include "methods.cpp"
#include "builder.cpp"

using namespace std;

int main() {
    printTable(retConvol(10,10), 10, 10);

    return 1;
}