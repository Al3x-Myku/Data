#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double calculateMean(const vector<double>& data) {
    double sum = 0.0;
    for (const double& value : data) {
        sum += value;
    }
    return sum / data.size();
}

double calculateStandardDeviation(const vector<double>& data, double mean) {
    double sumSquaredDiff = 0.0;
    for (const double& value : data) {
        double diff = value - mean;
        sumSquaredDiff += diff * diff;
    }
    double variance = sumSquaredDiff / data.size();
    return sqrt(variance);
}

int main() {
    int numDataPoints;

    cout << "Enter the number of data points: ";
    cin >> numDataPoints;

    if (numDataPoints <= 0) {
        cerr << "Invalid number of data points. Please enter a positive integer." << endl;
    }

    vector<double> data;
    for (int i = 0; i < numDataPoints; ++i) {
        double value;
        cout << "Enter data point " << i + 1 << ": ";
        cin >> value;
        data.push_back(value);
    }

    double mean = calculateMean(data);
    double stddev = calculateStandardDeviation(data, mean);

    cout << "Mean: " << mean << endl;
    cout << "Standard Deviation: " << stddev << endl;

    return 0;
}
