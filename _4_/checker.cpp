#include <iostream>
using namespace std;

double ConvertToInches(double numFeet) {
   return numFeet * 12.0;
}

/* Your solution goes here  */
double ConvertToInches(double numFeet, double numInches) {
    return (numFeet * 12.0) + numInches; // Convert feet to inches and add the extra inches
}

int main() {
   double totInches;

   totInches = ConvertToInches(4.0, 6.0);
   cout << "4.0, 6.0 yields " << totInches << endl;

   totInches = ConvertToInches(5.8);
   cout << "5.8 yields " << totInches << endl;
   return 0;
}
