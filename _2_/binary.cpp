#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num = 17;
    int remainder;
    string binary = "";
    while (num > 0) {
        remainder = num % 2;
        binary = to_string(remainder) + binary;
        num /= 2;
    }

    cout << binary << endl;

    // Now, let's convert 10001000 to decimal
    string binaryNum = "10001000";
    int decimal = 0;
    int power = 0;
    for (int i = binaryNum.size() - 1; i >= 0; i--) {
        if (binaryNum[i] == '1') {
            decimal += pow(2, power);
        }
        power++;
    }

    cout << decimal << endl;

    // To convert a binary number to decimal, we start from the rightmost digit and multiply it by 2 raised to the power of 0
    // We then move to the next digit to the left and multiply it by 2 raised to the power of 1, we keep doing this until we reach the leftmost digit
    // We then add all the results together to get the decimal representation of the binary number

    return 0;
}
