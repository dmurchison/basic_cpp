/*
 * Calculator.cpp
 *
 *  Date: [3/19/2025]
 *  Author: [Duncan Murchison]
 */

#include <iostream>

using namespace std;

int main() {
    char statement[100];
    int op1, op2;
    char operation;
    char answer='Y';

    while (answer == 'Y') {
        cout << "Enter expression" << endl;
        cin >> op1 >> operation >> op2;

        if (operation == '+') {
            cout << op1 << " + " << op2 << " = " << op1 + op2 << endl;
        } else if (operation == '-') {
            cout << op1 << " - " << op2 << " = " << op1 - op2 << endl;
        } else if (operation == '*') {
            cout << op1 << " * " << op2 << " = " << op1 * op2 << endl;
        } else if (operation == '/') {
            if (op2 == 0) {
                cout << "Division by zero is not allowed" << endl;
            } else {
                cout << op1 << " / " << op2 << " = " << op1 / op2 << endl;
            }
        } else {
            cout << "Invalid operation" << endl;
        }

        cout << "Do you wish to evaluate another expression? (Enter Y/N)" << endl;
        cin >> answer;

        if (answer == 'N') {
            cout << "Program Finished." << endl;
        }
        
        answer = toupper(answer);
    }

    return 0;
}
