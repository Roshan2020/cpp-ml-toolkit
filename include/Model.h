#ifndef MODEL_H
#define MODEL_H

#include <vector>

class Model {
public:
    // Virtual destructor
    virtual ~Model() = default;

    // Train the model
    virtual void train(
        const std::vector<std::vector<double>>& X,
        const std::vector<double>& y
    ) = 0;

    // Predict output
    virtual double predict(
        const std::vector<double>& x
    ) const = 0;
};

#endif