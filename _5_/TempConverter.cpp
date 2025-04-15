#include <iostream>
#include <fstream>
#include <string>
using namespace std;

double ConvertToCelsius(int fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0; // Fahrenheit to Celsius conversion formula
}

int main() {
    // Using the ifstream and ofstream classes to read from and write to files
    ifstream inputFile("FahrenheitTemperature.txt");
    ofstream outputFile("CelsiusTemperature.txt");

    // Check if the files are opened successfully, if not, print an error message
    if (!inputFile.is_open()) {
        cerr << "Error: Could not open FahrenheitTemperature.txt" << endl;
        return 1;
    }
    if (!outputFile.is_open()) {
        cerr << "Error: Could not open CelsiusTemperature.txt" << endl;
        return 1;
    }

    // Variables to hold the city name and temperature in Fahrenheit
    string city;
    int fahrenheitTemp;

    // While there are still lines to read from the input file, read the city and temperature
    // and convert the temperature to Celsius, then write to the output file
    while (inputFile >> city >> fahrenheitTemp) {
        double celsiusTemp = ConvertToCelsius(fahrenheitTemp);
        outputFile << city << " " << celsiusTemp << endl;
    }

    // Close the files
    inputFile.close();
    outputFile.close();

    return 0;
}
