// Define a function named SortVector that takes a vector of integers as a parameter. Function SortVector() modifies the vector parameter by sorting the elements in descending order (highest to lowest). Then write a main program that reads a list of integers from input, stores the integers in a vector, calls SortVector(), and outputs the sorted vector. The first input integer indicates how many numbers are in the list.

// Ex: If the input is:

// 5 10 4 39 12 2
// the output is:

// 39,12,10,4,2,
// For coding simplicity, follow every output value by a comma, including the last one.

// Your program must define and call the following function:
// void SortVector(vector<int>& myVec)

#include <iostream>
#include <vector>
using namespace std;

void SortVector(vector<int>& myVec) {
    int i;
    int j;
    int temp;

    for (i = 0; i < myVec.size(); i++) {
        for (j = i + 1; j < myVec.size(); j++) {
            if (myVec.at(i) < myVec.at(j)) {
                temp = myVec.at(i);
                myVec.at(i) = myVec.at(j);
                myVec.at(j) = temp;
            }
        }
    }
}

int main() {
    /* Type your code here */
    int valCount;
    int inVal;
    vector<int> myVec;
    int i;

    cin >> valCount;

    for (i = 1; i <= valCount; i++) {
        cin >> inVal;
        myVec.push_back(inVal);
    }

    SortVector(myVec);

    for (i = 0; i < myVec.size(); i++) {
        cout << myVec.at(i) << ",";
    }
    cout << endl;

    return 0;
}
