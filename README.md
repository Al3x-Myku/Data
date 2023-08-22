# Data Analysis Tool

This C++ program is a simple data analysis tool that calculates the mean and standard deviation of a set of numeric data points. It utilizes the `<iostream>` and `<vector>` libraries for input and data storage, as well as the `<cmath>` library for mathematical calculations.

## Features

1. **Input**: The program prompts the user to input the number of data points they have. It ensures that a valid positive integer is entered; otherwise, it provides an error message and terminates.

2. **Data Collection**: After obtaining the number of data points, the program asks the user to input each data point. The data is stored in a vector for subsequent analysis.

3. **Mean Calculation**: The program calculates the mean (average) of the provided data points using the formula: `sum of all data points / number of data points`.

4. **Standard Deviation Calculation**: The standard deviation, a measure of the dispersion of data points from the mean, is calculated using the formula: `sqrt(sum of squared differences from the mean / number of data points)`.

## Usage

1. Compile the program using a C++ compiler.
 g++ program.cpp -o data_analysis
2. Run the compiled executable.
./data_analysis

3. Enter the number of data points when prompted.

4. Enter each data point one by one as requested.

5. The program will output the calculated mean and standard deviation of the provided data points.

## Example
Enter the number of data points: 5

Enter data point 1: 10

Enter data point 2: 12

Enter data point 3: 8

Enter data point 4: 15

Enter data point 5: 11

## Notes

- The program validates input to ensure it adheres to the requirements for positive integers.
- This tool is designed for basic data analysis and may not handle extremely large data sets efficiently.
- Feel free to modify and adapt the code for more advanced analysis or user interface improvements.

## Author

This data analysis tool was created by [Al3x-Myku](https://github.com/Al3x-Myku).



