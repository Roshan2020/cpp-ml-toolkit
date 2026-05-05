#ifndef MODEL_H
#define MODEL_H

#include <vector>

using namespace std;

class Model {
public:
    // Virtual destructor
    virtual ~Model() = default;

    // Train the model
    virtual void train(
        const vector<vector<double>>& X,
        const vector<double>& y
    ) = 0;

    // Predict output
    virtual double predict(
        const vector<double>& x
    ) const = 0;
};

#endif