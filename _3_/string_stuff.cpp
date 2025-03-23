#include <iostream>
#include <string>
using namespace std;

int main() {
    string strVar;
    int beginPos;
    int substrLen;
    string strSelection;

    getline(cin, strVar);
    cin >> beginPos;
    cin >> substrLen;

    // Given string strVar on one line, integer beginPos on a second line, and integer substrLen on a third line, output the substring of strVar starting at position beginPos and with length substrLen. End with a newline.
    cout << strVar.substr(beginPos, substrLen) << endl;


    return 0;
}
