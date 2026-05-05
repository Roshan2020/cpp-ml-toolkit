#include "../include/Dataset.h"
#include "../include/LinearRegression.h"
#include "../include/LogisticRegression.h"

#include <iostream>

using namespace std;

int main() {

    Dataset dataset;

    if (!dataset.loadCSV("../data/sample.csv")) {
        return 1;
    }

    dataset.normalizeFeatures();

    dataset.printInfo();

    LinearRegression model(0.01, 1000);

    model.train(dataset.getFeatures(), dataset.getLabels());

    double mse = model.computeMSE(
        dataset.getFeatures(),
        dataset.getLabels()
    );

    cout << "Final MSE: " << mse << endl;

    // ---- Logistic Regression Test ----
    LogisticRegression model1(0.1, 1000);

    model1.train(dataset.getFeatures(), dataset.getLabels());

    double acc = model1.computeAccuracy(
        dataset.getFeatures(),
        dataset.getLabels()
    );

    cout << "Final Accuracy: " << acc << endl;

    return 0;
}