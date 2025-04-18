#include <iostream>
using namespace std;

class FamilyVacation {
   public:
      void  SetNumDays(int dayCount);
      void  SetNumPeople(int peopleCount);
      void  Print() const;
      FamilyVacation operator+(int moreDays);
   private:
      int   numDays;
      int   numPeople;
};

void FamilyVacation::SetNumDays(int dayCount) {
   numDays = dayCount;
}

void FamilyVacation::SetNumPeople(int peopleCount) {
   numPeople = peopleCount;
}

// Overload + operator
FamilyVacation FamilyVacation::operator+(int moreDays) {
   FamilyVacation newVacation;
   newVacation.numDays = this->numDays + moreDays; // Add moreDays to numDays
   newVacation.numPeople = this->numPeople;       // Copy numPeople
   return newVacation;
}

void FamilyVacation::Print() const {
   cout << "Days: " << numDays << ", People: " << numPeople << endl;
}

int main() {
   FamilyVacation firstVacation;
   FamilyVacation secondVacation;
   int userDays;
   int userPeople;

   cin >> userDays;
   cin >> userPeople;

   cout << "First vacation: ";
   firstVacation.SetNumDays(userDays);
   firstVacation.SetNumPeople(userPeople);
   firstVacation.Print();

   cout << "Second vacation: ";
   secondVacation = firstVacation + 5;
   secondVacation.Print();

   return 0;
}
