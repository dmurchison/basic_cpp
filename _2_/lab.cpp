#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int totalDollars;
    int numFifties;
    int numTwenties;
    int numOnes;

    cin >> totalDollars;

    /* Your code goes here */
    numFifties = totalDollars / 50;
    totalDollars = totalDollars % 50;

    numTwenties = totalDollars / 20;
    totalDollars = totalDollars % 20;
    
    numOnes = totalDollars;

    cout << "50-dollar bills: " << numFifties << endl;
    cout << "20-dollar bills: " << numTwenties << endl;
    cout << "One-dollar bills: " << numOnes << endl;

    return 0;
}
