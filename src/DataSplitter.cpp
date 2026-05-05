#include "../include/DataSplitter.h"

using namespace std;

void DataSplitter::trainTestSplit(
    const vector<vector<double>>& X,
    const vector<double>& y,

    vector<vector<double>>& X_train,
    vector<vector<double>>& X_test,

    vector<double>& y_train,
    vector<double>& y_test,

    double trainRatio
) {

    int totalSamples = X.size();

    int trainSize = static_cast<int>(
        totalSamples * trainRatio
    );

    // Split features
    for (int i = 0; i < totalSamples; i++) {

        if (i < trainSize) {
            X_train.push_back(X[i]);
            y_train.push_back(y[i]);
        }
        else {
            X_test.push_back(X[i]);
            y_test.push_back(y[i]);
        }
    }
}