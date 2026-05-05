#include "../include/Dataset.h"

#include <iostream>
#include <fstream>
#include <sstream>
#include <limits>

using namespace std;

bool Dataset::loadCSV(const string& filename) {
    ifstream file(filename);

    if (!file.is_open()) {
        cerr << "Error: Could not open file "
             << filename << endl;
        return false;
    }

    features.clear();
    labels.clear();

    string line;

    while (getline(file, line)) {
        stringstream ss(line);
        string value;

        vector<double> row;

        while (getline(ss, value, ',')) {
            row.push_back(stod(value));
        }

        // Last value = label
        labels.push_back(row.back());

        // Remove label from features
        row.pop_back();

        features.push_back(row);
    }

    file.close();

    return true;
}

const vector<vector<double>>&
Dataset::getFeatures() const {
    return features;
}

const vector<double>&
Dataset::getLabels() const {
    return labels;
}

void Dataset::printInfo() const {
    cout << "Dataset Loaded Successfully!" << endl;

    cout << "Samples: "
         << features.size() << endl;

    if (!features.empty()) {
        cout << "Features per sample: "
             << features[0].size()
             << endl;
    }
}

void Dataset::normalizeFeatures() {
    if (features.empty()) return;

    int n_features = features[0].size();

    featureMin.assign(n_features, numeric_limits<double>::max());
    featureMax.assign(n_features, numeric_limits<double>::lowest());

    // Find min and max
    for (const auto& row : features) {
        for (int j = 0; j < n_features; j++) {
            featureMin[j] = min(featureMin[j], row[j]);
            featureMax[j] = max(featureMax[j], row[j]);
        }
    }

    // Apply scaling
    for (auto& row : features) {
        for (int j = 0; j < n_features; j++) {

            if (featureMax[j] == featureMin[j]) {
                row[j] = 0; // avoid divide-by-zero
            } else {
                row[j] =
                    (row[j] - featureMin[j]) /
                    (featureMax[j] - featureMin[j]);
            }
        }
    }
}