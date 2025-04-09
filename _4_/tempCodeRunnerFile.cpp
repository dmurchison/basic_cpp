#include <iostream>
using namespace std;

void PrintInfo(string name, int age) {
   cout << name << ", " << age << endl;
}

int main() {
   string userName1 = "Sam";
   string userName2 = "Max";
   int userAge1 = 18;
   int userAge2 = 25;

   PrintInfo(userName1, userAge1);
   PrintInfo(userName2, userAge2);

   return 0;
}
