#include "../include/LinearRegression.h"
#include <iostream>
#include <cmath>

using namespace std;

LinearRegression::LinearRegression(double lr, int iter) {
    learningRate = lr;
    iterations = iter;
    bias = 0.0;
}

void LinearRegression::initializeWeights(int n_features) {
    weights.assign(n_features, 0.0);
}

double LinearRegression::predict(const vector<double>& x) const {
    double result = bias;

    for (size_t i = 0; i < x.size(); i++) {
        result += weights[i] * x[i];
    }

    return result;
}

void LinearRegression::train(
    const vector<vector<double>>& X,
    const vector<double>& y
) {
    int n_samples = X.size();
    int n_features = X[0].size();

    initializeWeights(n_features);

    for (int iter = 0; iter < iterations; iter++) {

        vector<double> dw(n_features, 0.0);
        double db = 0.0;

        // Compute gradients
        for (int i = 0; i < n_samples; i++) {
            double prediction = predict(X[i]);
            double error = prediction - y[i];

            for (int j = 0; j < n_features; j++) {
                dw[j] += error * X[i][j];
            }

            db += error;
        }

        // Update weights
        for (int j = 0; j < n_features; j++) {
            weights[j] -= learningRate * (dw[j] / n_samples);
        }

        bias -= learningRate * (db / n_samples);

        // Optional: print loss every 100 iterations
        if (iter % 100 == 0) {
            cout << "Iteration " << iter << endl;
        }
    }
}

double LinearRegression::computeMSE(
    const vector<vector<double>>& X,
    const vector<double>& y
) const {
    double mse = 0.0;
    int n = X.size();

    for (int i = 0; i < n; i++) {
        double error = predict(X[i]) - y[i];
        mse += error * error;
    }

    return mse / n;
}