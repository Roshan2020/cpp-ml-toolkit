#include "../include/LogisticRegression.h"
#include <iostream>
#include <cmath>

using namespace std;

LogisticRegression::LogisticRegression(double lr, int iter) {
    learningRate = lr;
    iterations = iter;
    bias = 0.0;
}

void LogisticRegression::initializeWeights(int n_features) {
    weights.assign(n_features, 0.0);
}

double LogisticRegression::sigmoid(double z) const {
    return 1.0 / (1.0 + exp(-z));
}

double LogisticRegression::predictProbability(const vector<double>& x) const {
    double z = bias;

    for (size_t i = 0; i < x.size(); i++) {
        z += weights[i] * x[i];
    }

    return sigmoid(z);
}

double LogisticRegression::predict(const vector<double>& x) const {
    return predictProbability(x) >= 0.5 ? 1.0 : 0.0;
}

void LogisticRegression::train(
    const vector<vector<double>>& X,
    const vector<double>& y
) {
    int n_samples = X.size();
    int n_features = X[0].size();

    initializeWeights(n_features);

    for (int iter = 0; iter < iterations; iter++) {

        vector<double> dw(n_features, 0.0);
        double db = 0.0;

        for (int i = 0; i < n_samples; i++) {

            double prediction = predictProbability(X[i]);
            double error = prediction - y[i];

            for (int j = 0; j < n_features; j++) {
                dw[j] += error * X[i][j];
            }

            db += error;
        }

        for (int j = 0; j < n_features; j++) {
            weights[j] -= learningRate * (dw[j] / n_samples);
        }

        bias -= learningRate * (db / n_samples);

        if (iter % 100 == 0) {
            cout << "Iteration " << iter << endl;
        }
    }
}

double LogisticRegression::computeAccuracy(
    const vector<vector<double>>& X,
    const vector<double>& y
) const {
    int correct = 0;
    int n = X.size();

    for (int i = 0; i < n; i++) {
        if (predict(X[i]) == y[i]) {
            correct++;
        }
    }

    return (double)correct / n;
}