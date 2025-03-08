#include <iostream>
#include <iomanip>

using namespace std;

int main() {
   cout << setfill('#') << left;
   cout << setw(7) << "Joe" << endl;
   cout << setw(7) << "Shawn" << endl;

   return 0;
}
