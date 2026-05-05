#ifndef LOGISTIC_REGRESSION_H
#define LOGISTIC_REGRESSION_H

#include "Model.h"
#include <vector>

class LogisticRegression : public Model {
private:
    std::vector<double> weights;
    double bias;
    double learningRate;
    int iterations;

public:
    LogisticRegression(double lr = 0.01, int iter = 1000);

    void train(
        const std::vector<std::vector<double>>& X,
        const std::vector<double>& y
    ) override;

    double predict(
        const std::vector<double>& x
    ) const override;

    double predictProbability(
        const std::vector<double>& x
    ) const;

    double computeAccuracy(
        const std::vector<std::vector<double>>& X,
        const std::vector<double>& y
    ) const;

private:
    void initializeWeights(int n_features);

    double sigmoid(double z) const;
};

#endif