
<a name="readme-top"></a>

[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]
[![commits](https://flat.badgen.net/github/commits/Al3x-Myku/Data/master?scale=1.4)](https://github.com/Al3x-Myku/Data/commits/master?icon=github&color=green&style=for-the-badge)

<h3 align="center">Data</h3>

  <p align="center">
   This C++ program is a simple data analysis tool that calculates the mean and standard deviation of a set of numeric data points. It utilizes the <iostream> and <vector> libraries for input and data storage, as well as the <cmath> library for mathematical calculations.
    <br />
    <a href="https://github.com/Al3x-Myku/Data/blob/master/README.md"><strong>Explore the docs »</strong></a>
    <br />
    <br />
    <a href="https://github.com/Al3x-Myku/Data/issues">Report Bug</a>
    ·
    <a href="https://github.com/Al3x-Myku/Data/issues">Request Feature</a>
  </p>
</div>




<!-- Features -->
## Features

1. **Input**: The program prompts the user to input the number of data points they have. It ensures that a valid positive integer is entered; otherwise, it provides an error message and terminates.

2. **Data Collection**: After obtaining the number of data points, the program asks the user to input each data point. The data is stored in a vector for subsequent analysis.

3. **Mean Calculation**: The program calculates the mean (average) of the provided data points using the formula: `sum of all data points / number of data points`.

4. **Standard Deviation Calculation**: The standard deviation, a measure of the dispersion of data points from the mean, is calculated using the formula: `sqrt(sum of squared differences from the mean / number of data points)`.
5. **Histogram Generation**: The program generates a histogram of the data points using the GNU Plot library. The histogram provides a visual representation of the data distribution.





### Built With

* ![C++](https://img.shields.io/badge/C++-3670A0?style=for-the-badge&logo=c%2B%2B&logoColor=white)
* ![Gnuplot](https://img.shields.io/badge/Gnuplot-yellow?style=for-the-badge&logo=alwaysdata&logoColor=white)
  
  
  
  





<!-- Installation and Usage -->
## Installation and Usage


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

Mean: 11.2

Standard Deviation: 2.48998




## Notes

- The program validates input to ensure it adheres to the requirements for positive integers.
- This tool is designed for basic data analysis and may not handle extremely large data sets efficiently.
- GNU Plot is used for generating histograms, and its installation is required.
- Feel free to modify and adapt the code for more advanced analysis or user interface improvements.
    

See the [open issues](https://github.com/Al3x-Myku/Data/issues) for a full list of proposed features (and known issues).





<!-- CONTRIBUTING -->
## Contributing
If you have a suggestion that would make this better, please fork the repo and create a pull request. You can also simply open an issue with the tag "enhancement".
Don't forget to give the project a star! Thanks again!

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request




<!-- CONTACT -->
## Contact

Al3x-Myku - [mail](mailto:micu.georgealexandru@gmail.com) 





<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[contributors-shield]: https://img.shields.io/github/contributors/Al3x-Myku/Data.svg?style=for-the-badge
[contributors-url]: https://github.com/Al3x-Myku/Data/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/Al3x-Myku/Data.svg?style=for-the-badge
[forks-url]: https://github.com/Al3x-Myku/Data/network/members
[stars-shield]: https://img.shields.io/github/stars/Al3x-Myku/Data.svg?style=for-the-badge
[stars-url]: https://github.com/Al3x-Myku/Data/stargazers
[issues-shield]: https://img.shields.io/github/issues/Al3x-Myku/Data.svg?style=for-the-badge
[issues-url]: https://github.com/Al3x-Myku/Data/issues
