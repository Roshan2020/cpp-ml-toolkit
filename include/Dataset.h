#ifndef DATASET_H
#define DATASET_H

#include <vector>
#include <string>

class Dataset {
private:
    std::vector<std::vector<double>> features;
    std::vector<double> labels;

    // Store min/max values for normalization
    std::vector<double> featureMin;
    std::vector<double> featureMax;

public:
    // Load dataset from CSV file
    bool loadCSV(const std::string& filename);

    // Normalize feature values
    void normalizeFeatures();

    // Get features
    const std::vector<std::vector<double>>& getFeatures() const;

    // Get labels
    const std::vector<double>& getLabels() const;

    // Print dataset info
    void printInfo() const;
};

#endif