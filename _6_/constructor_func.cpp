#include <iostream>
using namespace std;

class CarRecord {
   public:
      void   SetYearMade(int originalYear);
      void   SetVehicleIdNum(int vehIdNum);
      void   Print() const;
      CarRecord();
   private:
      int    yearMade;
      int    vehicleIdNum;
};

// FIXME: Write constructor, initialize year to 0, vehicle ID num to -1.

/* Your solution goes here  */
CarRecord::CarRecord() { // A constructor is a special member function,
                        // which is automatically called when an object of the class is created
   // It initializes the object's data members
   // to default values
   // In this case, we initialize yearMade to 0 and vehicleIdNum to -1
   // This is done to ensure that the object has valid values
   // before any other member functions are called
   // A constructor function always has the same name as the class
   // and does not have a return type
   yearMade = 0; // Initialize yearMade to 0
   vehicleIdNum = -1; // Initialize vehicleIdNum to -1
}

void CarRecord::SetYearMade(int originalYear) {
   yearMade = originalYear;
}

void CarRecord::SetVehicleIdNum(int vehIdNum) {
   vehicleIdNum = vehIdNum;
}

void CarRecord::Print() const {
   cout << "Year: " << yearMade << ", VIN: " << vehicleIdNum << endl;
}

int main() {
   CarRecord familyCar;

   familyCar.Print();
   familyCar.SetYearMade(2009);
   familyCar.SetVehicleIdNum(444555666);
   familyCar.Print();

   return 0;
}
