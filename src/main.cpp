#include "../include/Dataset.h"
#include "../include/LinearRegression.h"

#include <iostream>

using namespace std;

int main() {

    Dataset dataset;

    if (!dataset.loadCSV("../data/sample.csv")) {
        return 1;
    }

    dataset.printInfo();

    LinearRegression model(0.01, 1000);

    model.train(dataset.getFeatures(), dataset.getLabels());

    double mse = model.computeMSE(
        dataset.getFeatures(),
        dataset.getLabels()
    );

    cout << "Final MSE: " << mse << endl;

    return 0;
}