#include <iostream>
using namespace std;

// Base class which will be a parent
class Employee {
    protected: /* Protected access specifier which  is similar to private 
                  but inhertance can still access it */
        int salary;
};  

// Dervied class which will be a child
class Programmer: public Employee {
    public:
        int bonus;
        void setSalary(int s) {
            salary = s;
        }
        int getSalary() {
            return salary;
        }
};

int main() {
    Programmer myObj;
    myObj.setSalary(50000);
    myObj.bonus = 15000;
    cout << "Salary: " << myObj.getSalary() << endl;
    cout << "Bous: " << myObj.bonus << endl;

    return 0;
}