#include <iostream>
#include <vector>
#include <cmath>
#include <fstream>

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
        return 1; 
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

    ofstream dataFile("data.txt");
    for (const double& value : data) {
        dataFile << value << endl;
    }
    dataFile.close();

 
    ofstream gnuplotScript("plot_script.gnu");
    gnuplotScript << "set title 'Data Histogram'\n";
    gnuplotScript << "set xlabel 'Value'\n";
    gnuplotScript << "set ylabel 'Frequency'\n";
    gnuplotScript << "set style fill solid\n";
    gnuplotScript << "set boxwidth 0.9 relative\n"; 
    gnuplotScript << "set style histogram clustered\n"; 
    gnuplotScript << "set style data histograms\n";
    gnuplotScript << "set ytics\n";
    gnuplotScript << "set grid y\n"; 
    gnuplotScript << "plot 'data.txt' using 1:($0+1) with boxes title 'Histogram'\n";
    gnuplotScript.close();

    system("gnuplot -persist plot_script.gnu");

    return 0;
}
//App made by Al3x-Myku
