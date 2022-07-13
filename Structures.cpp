#include <iostream>
using namespace std;

//Create a structure variable called myStructure
struct { //Structure declaration
    int myNum; //myNum is an int variable member
    string myString; //myString is a string variable member
} myStructure; //The variables that call the structure

struct {
    string brand;
    string model;
    int year;
} myCar1, myCar2; //Add multiple variables that are seperated with commas

//Declare this structure as dog
struct dog {
    string type;
    int age;
};

int main() {
    //Asign values to members of myStructure
    myStructure.myNum = 1;
    myStructure.myString = "Hello World!";

    //Print members of myStructure
    cout << myStructure.myNum << endl;
    cout << myStructure.myString << endl;

    //Put data into the first structure
    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 1999;

    //Put data into the second structure
    myCar2.brand = "Ford";
    myCar2.model = "Mustang";
    myCar2.year = 1969;

    //Print the structure members
    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << endl;
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << endl;

    //Create a dog structure and store it in myDog1;
    dog myDog1;
    myDog1.type = "Poodle";
    myDog1.age = 3;

    //Create another dog structure and store it in myDog2
    dog myDog2;
    myDog2.type = "Pit Bull";
    myDog2.age = 6;

    // Print thhe structure members
    cout << myDog1.type << " " << myDog1.age << endl;
    cout << myDog2.type << " " << myDog2.age << endl;

    return 0;
}