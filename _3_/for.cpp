#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int valCount;
    double inVal;
    double highestVal;
    int i;

    cin >> valCount;

    /* Your code goes here */
    for (i = 1; i <= valCount; i++) {
        cin >> inVal;
        highestVal = (inVal > highestVal) ? inVal : highestVal;
        cout << "Value read: " << inVal << endl;
    }

    // This cannot be scientific notation, how to fix?
    cout << fixed << setprecision(2) << "Highest value read: " << highestVal << endl;


    return 0;
}

