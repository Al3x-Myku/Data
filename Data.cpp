#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Function to calculate the mean of a vector of values
double calculateMean(const vector<double>& data) {
    double sum = 0.0;
    for (const double& value : data) {
        sum += value;
    }
    return sum / data.size();
}

// Function to calculate the standard deviation of a vector of values
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

    // Validate input for the number of data points
    if (numDataPoints <= 0) {
        cerr << "Invalid number of data points. Please enter a positive integer." << endl;
        return 1; // Exit with an error code
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
