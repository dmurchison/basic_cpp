#include <iostream>
#include <iomanip>               //For setprecision
using namespace std;

int main() {

    /* Type your code here. */
    auto milesPerGallon = 0.0;
    auto dollarsPerGallon = 0.0;
    auto miles1 = 20;
    auto miles2 = 75;
    auto miles3 = 500;

    cin >> milesPerGallon;
    cin >> dollarsPerGallon;

    auto costOfGas1 = miles1 / milesPerGallon * dollarsPerGallon;
    auto costOfGas2 = miles2 / milesPerGallon * dollarsPerGallon;
    auto costOfGas3 = miles3 / milesPerGallon * dollarsPerGallon;

    cout << fixed << setprecision(2) << costOfGas1 << " " << costOfGas2 << " " << costOfGas3 << endl;

    return 0;
}
