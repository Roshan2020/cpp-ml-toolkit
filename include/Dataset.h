#ifndef DATASET_H
#define DATASET_H

#include <vector>
#include <string>

class Dataset {
private:
    std::vector<std::vector<double>> features;
    std::vector<double> labels;

public:
    // Load dataset from CSV file
    bool loadCSV(const std::string& filename);

    // Get features
    const std::vector<std::vector<double>>& getFeatures() const;

    // Get labels
    const std::vector<double>& getLabels() const;

    // Print dataset info
    void printInfo() const;
};

#endif