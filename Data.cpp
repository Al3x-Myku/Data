#include <iostream>
#include <fstream>
#include "mean_and_std_deviation.h"

int main() {
    int numDataPoints;

    std::cout << "Enter the number of data points: ";
    std::cin >> numDataPoints;

    if (numDataPoints <= 0) {
        std::cerr << "Invalid number of data points. Please enter a positive integer." << std::endl;
        return 1;
    }

    std::vector<double> data;
    for (int i = 0; i < numDataPoints; ++i) {
        double value;
        std::cout << "Enter data point " << i + 1 << ": ";
        std::cin >> value;
        data.push_back(value);
    }

    double mean = calculateMean(data);
    double stddev = calculateStandardDeviation(data, mean);

    std::cout << "Mean: " << mean << std::endl;
    std::cout << "Standard Deviation: " << stddev << std::endl;

    std::ofstream dataFile("data.txt");
    for (const double& value : data) {
        dataFile << value << std::endl;
    }


    std::ofstream gnuplotScript("plot_script.gnu");
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
