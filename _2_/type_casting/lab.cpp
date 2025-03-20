#include <iostream>
using namespace std;

int main() {
    int numKidsA;
    int numKidsB;
    int numKidsC;
    int numFamilies;
    double avgKids;

    cin >> numKidsA;
    cin >> numKidsB;
    cin >> numKidsC;
    cin >> numFamilies;

    /* Your solution goes here  */
    avgKids = (numKidsA + numKidsB + numKidsC) / static_cast<double>(numFamilies);

    cout << avgKids << endl;

    // Print the number 51 in binary, (show math using c++)
    int num = 51;
    int remainder;
    string binary = "";
    while (num > 0) {
        remainder = num % 2;
        binary = to_string(remainder) + binary;
        num /= 2;
    }

    cout << binary << endl;
    
    // To convert a number to binary, we divide the number by 2 and keep track of the remainder, This is because binary is base 2
    // So we have 51, and we divide it by 2, we get 25 with a remainder of 1, we keep track of the remainder and divide 25 by 2
    // We get 12 with a remainder of 1, we keep track of the remainder and divide 12 by 2, we get 6 with a remainder of 0
    // We keep track of the remainder and divide 6 by 2, we get 3 with a remainder of 0, we keep track of the remainder and divide 3 by 2
    // We get 1 with a remainder of 1, we keep track of the remainder and divide 1 by 2, we get 0 with a remainder of 1
    // The list of remainders in reverse order is 110011, which is the binary representation of 51

    return 0;


}
