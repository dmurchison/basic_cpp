#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string userCode;

    getline(cin, userCode);

    for (int i = 0; i < userCode.length(); i++) {
        if (isalpha(userCode[i])) {
            userCode[i] = '=';
        }
    }

    cout << userCode << endl;
    cout << userCode.length() << endl;
    cout << userCode.size() << endl;


    return 0;
}
