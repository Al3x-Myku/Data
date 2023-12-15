#ifndef MEAN_AND_STD_DEVIATION_H
#define MEAN_AND_STD_DEVIATION_H

#include <vector>
#include <cmath>

template <typename ReturnType = double, typename T = double>
ReturnType calculateMean(const std::vector<T>& data) {
    T sum = 0;
    for (const T& value : data) {
        sum += value;
    }
    return sum / data.size();
}

template <typename ReturnType = double, typename T = double>
ReturnType calculateStandardDeviation(const std::vector<T>& data, const T& mean) {
    T sumSquaredDiff = 0;
    for (const T& value : data) {
        T diff = value - mean;
        sumSquaredDiff += diff * diff;
    }
    T variance = sumSquaredDiff / data.size();
    return sqrt(variance);
}

#endif