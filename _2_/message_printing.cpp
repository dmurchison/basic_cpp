#include <iostream>
using namespace std;

int main() {
    char a;
    char b;
    char c;

    cin >> a;
    cin >> b;
    cin >> c;

    /* Your solution goes here  */
    cout << a << b << c << endl;
    cout << a << c << b << endl;
    cout << b << a << c << endl;
    cout << b << c << a << endl;
    cout << c << a << b << endl;
    cout << c << b << a << endl;


    return 0;
}
