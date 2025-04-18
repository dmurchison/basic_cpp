#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Employee {
public:
   void SetName(string employeeName) {
      name = employeeName;
   }

   virtual void PrintInfo() {
      cout << name << endl;
   }

protected:
   string name;
};

class Designer : public Employee {
public:
   void SetObject(string setObject) {
      object = setObject;
   }

   void PrintInfo() {
      cout << name << " designs " << object << endl;
   }

private:
   string object;
};

class Professor : public Employee {
public:
   void SetSubject(string setSubject) {
      subject = setSubject;
   }

   void PrintInfo() {
      cout << name << " teaches " << subject << endl;
   }

private:
   string subject;
};

int main() {
   Employee* person1;
   Designer* person2;
   Professor* person3;

   vector<Employee*> personList;
   unsigned int i;

   person1 = new Employee();
   person1->SetName("Joe");

   person2 = new Designer();
   person2->SetName("Amy");
   person2->SetObject("clothes");

   person3 = new Professor();
   person3->SetName("Liam");
   person3->SetSubject("Math");

   personList.push_back(person1);
   personList.push_back(person2);
   personList.push_back(person3);

   for (i = 0; i < personList.size(); ++i) {
      personList.at(i)->PrintInfo();
   }

   return 0;
}
