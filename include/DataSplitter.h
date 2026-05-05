#ifndef DATA_SPLITTER_H
#define DATA_SPLITTER_H

#include <vector>

class DataSplitter {
public:

    static void trainTestSplit(
        const std::vector<std::vector<double>>& X,
        const std::vector<double>& y,

        std::vector<std::vector<double>>& X_train,
        std::vector<std::vector<double>>& X_test,

        std::vector<double>& y_train,
        std::vector<double>& y_test,

        double trainRatio = 0.8
    );
};

#endif