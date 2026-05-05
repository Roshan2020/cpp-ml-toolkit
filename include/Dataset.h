#ifndef DATASET_H
#define DATASET_H

#include <vector>
#include <string>

using namespace std;

class Dataset {
private:
    vector<vector<double>> features;
    vector<double> labels;

public:
    // Load dataset from CSV file
    bool loadCSV(const string& filename);

    // Get features
    const vector<vector<double>>& getFeatures() const;

    // Get labels
    const vector<double>& getLabels() const;

    // Print dataset info
    void printInfo() const;
};

#endif