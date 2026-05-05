#include "../include/Dataset.h"
#include "../include/LinearRegression.h"
#include "../include/LogisticRegression.h"

#include <iostream>

using namespace std;

void displayMenu() {
    cout << "\n===== Machine Learning Toolkit =====" << endl;
    cout << "1. Load Dataset" << endl;
    cout << "2. Normalize Features" << endl;
    cout << "3. Train Linear Regression" << endl;
    cout << "4. Train Logistic Regression" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter choice: ";
}

int main() {

    Dataset dataset;

    bool datasetLoaded = false;
    bool normalized = false;

    int choice;

    while (true) {

        displayMenu();
        cin >> choice;

        switch (choice) {

        case 1: {
            string filename;

            cout << "Enter CSV file path: ";
            cin >> filename;

            if (dataset.loadCSV(filename)) {
                dataset.printInfo();
                datasetLoaded = true;
            }

            break;
        }

        case 2: {

            if (!datasetLoaded) {
                cout << "Load dataset first!" << endl;
                break;
            }

            dataset.normalizeFeatures();

            cout << "Features normalized successfully!" << endl;

            normalized = true;

            break;
        }

        case 3: {

            if (!datasetLoaded) {
                cout << "Load dataset first!" << endl;
                break;
            }

            LinearRegression model(0.01, 1000);

            model.train(
                dataset.getFeatures(),
                dataset.getLabels()
            );

            double mse = model.computeMSE(
                dataset.getFeatures(),
                dataset.getLabels()
            );

            cout << "Linear Regression Training Complete!" << endl;
            cout << "Final MSE: " << mse << endl;

            break;
        }

        case 4: {

            if (!datasetLoaded) {
                cout << "Load dataset first!" << endl;
                break;
            }

            LogisticRegression model(0.1, 1000);

            model.train(
                dataset.getFeatures(),
                dataset.getLabels()
            );

            double accuracy = model.computeAccuracy(
                dataset.getFeatures(),
                dataset.getLabels()
            );

            cout << "Logistic Regression Training Complete!" << endl;
            cout << "Accuracy: "
                 << accuracy * 100
                 << "%" << endl;

            break;
        }

        case 5:
            cout << "Exiting program..." << endl;
            return 0;

        default:
            cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}