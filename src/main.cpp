#include "../include/Dataset.h"

#include <iostream>

using namespace std;

int main() {
    Dataset dataset;

    if (dataset.loadCSV("../data/sample.csv")) {
        dataset.printInfo();
    }

    return 0;
}