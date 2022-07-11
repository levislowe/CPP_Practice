//C++ Syntax
#include <iostream>
//this is the header file library
#include <string>
//this includes the string library
#include <cmath>
//this includes the cmath library
using namespace std;
//allows the use of names and objects from standard library

int main() {
//main() is used to execute
    //C++ Print Text
    cout << "Hello world!" << endl;
    //this line prints the words Hello world!
    cout << "My name is George," << endl;

    cout << endl;
    // endl causes a line break

    //New lines
    cout << "I am learning C++ right now.\n";
    // \n is another way to cause a line break

    cout << endl;

    //Escape Sequences
    cout << "I need to improve\t" << endl;
    // \t creates a horizontal tab
    cout << "so I am learning as many new ways of coding \\" << endl;
    // \\ inserts a single (\)
    cout << "as possible\" so i can improve" << endl;
    // \" inserts a "

    cout << endl;

    //Single-line Comments
    //Using these I can type as many comments as much as I want (Used for short comments)

    //Multi-line Comments
    /*Now I can comment as much as I want (Used for long comments)
    even if I push enter and go to a new line */

    //Variables
    //Integers can hold whole numbers without decimals
    int myInt = 15;
    //This creates the integer variable myInt which is defined as 15
    cout << "myInt = " << myInt << endl;
    //This will display the contents in variable myInt
    myInt = 9;
    //This redefines the variable myInt as 9
    cout << "Now myInt = " << myInt << endl;

    //Doubles can hold floating point numbers with decimals
    double myDouble = 3.12;
    //This creates the double variable myDouble which is defined as 3.12
    cout << "myDouble = " << myDouble << endl;
    myDouble = 3.95;
    //This redefines the variable myDouble as 3.95
    cout << "Now myDouble = " << myDouble << endl;

    //Floats can hold floating point numbers with decimals
    float myFloat = 5.75;
    //This creates the float variable myFloat which is defined as 5.75
    cout << "myFloat = " << myFloat << endl;

    //Characters can hold a single character
    char myChar = 'F';
    //This creates the character variable  myChar which is defined as F
    cout << "myChar = " << myChar << endl;

    //Strings can hold a string of text
    string myString = "Work it";
    //This creates the string variable myString which is defined as Work it
    cout << "myString = " << myString << endl;

    //Booleans can hold either true or false
    bool myBoolean = true;
    //This creates the boolean variable myBool which is defined as true
    cout << "(True = 1, False = 2: myBoolean = " << myBoolean << endl;
    //When true or false is printed is comes out as 1 or 0 respectively

    //Adding Variables Together
    int x = 5;
    int y = 10;
    int z = 25;
    int sum = x + y;
    //Adding the contents of both variables x and y together
    cout << "x = " << x << "and y = 10, there sum is " << sum << endl;

    cout << endl;

    //Declare Many Variables
    (x = 5, y = 6, z = 50);
    //Defines all three variables in one command
    cout << "x = 5, y = 6, z = 50, there sum is " << x + y + z << endl;
    //Adds all three variables together

    //One Value to Multiple Variables
    x = y = z = 50;
    //Defines all three variables as the same number in one command
    cout << "x, y, and z = 50, there sum is " << x + y + z << endl;

    cout << endl;

    //Identifiers
    /* Naming variables in detail can be important to understand what they do.
    Names cannot have specials characters and must start with either a letter or underscore.*/

    //Constants
    const int constantVari = 15;
    //constantVari will always be 15 and cannot be redefined
    cout << constantVari << endl;

    cout << endl;
/*
    //User Input
    cout << "Type a number: ";
    cin >> x;
    // cin allows the user to define a variable from the terminal
    cout << "Your number is: " << x << endl;

    cout << endl;
*/
/*
    cout << "This is a calculator!" <<endl;
    cout << "Type in a number: ";
    cin >> x;
    cout << "Type another number: ";
    cin >> y;
    sum = x + y;
    cout << "The sum of " << x << " and " << y << " is " << sum << endl;

    cout << endl;
*/
    //Operators
    sum = 100 + 50;
    //adding 100 and 50 together and setting 150 as the variable of sum
    int sum2 = sum + 250;
    //adding the variable in sum to 250 and setting 400 as the variable of sum2
    int sum3 = sum2 + sum2;
    //adding the variable of sum2 to sum2 and setting 800 as the variable of sum3
    cout << sum << endl;
    cout << sum2 << endl;
    cout << sum3 << endl;

    cout << endl;

    //Arithmetic Operations
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "x + y = " << x + y << endl;
    //adding variables x and y
    cout << "x - y = " << x - y << endl;
    //subtracting variable y from variable x
    cout << "x * y = " << x * y << endl;
    //multiply variables x and y
    cout << "x / y = " << x / y << endl;
    //divide variable y with variable x
    cout << "x % y = " << x % y << endl;
    //produce the remainder from dividing variable y with variable x
    cout << "++x = " << ++x << endl;
    //adding 1 to variable x
    cout << "--y = " << --x << endl;
    //subtracting 1 from variable y

    cout << endl;

    //Assignment Operators
    x = 5;
    //Define x as 5
    cout << "x = " << x << endl;
    x += 3;
    //Add 3 to x
    cout << "x + 3 is " << x << endl;
    x -= 2;
    //Subtract 2 from x
    cout << "x - 2 is " << x << endl;
    x *= 5;
    //Multiple x by 5
    cout << "x * 5 is " << x << endl;
    x /= 2;
    //Divide x by 2
    cout << "x / 2 is " << x << endl;
    x %= 8;
    //Give the remainder of x divided by 8
    cout << "x % 8 is " << x << endl;
    x &= 5;
    //bitwise AND assignment between x and 5
    cout << "x & 5 is " << x << endl;
    x |= 1;
    //bitwise OR assignment between x and 1
    cout << "x | 1 is " << x << endl;
    x ^= 5;
    //bitwise XOR assignment between x and 5
    cout << "x ^ 5 is " << x << endl;
    x >>= 4;
    //bitwise left shift assignment between x and 4
    cout << "x >> 4 is " << x << endl;
    x <<= 6;
    //bitwise right shift assignment between x and 6
    cout << "x << 6 is " << x << endl;

    cout << endl;

    //Comparison Operators
    x = 4;
    y = 3;
    //True (1) and false (0)
    cout << "x == y is " << (x == y) << endl;
    //checks to see if x is equal to y (false)
    cout << "x != y is " << (x != y) << endl;
    //checks to see if x is not equal to y (true)
    cout << "x > y is " << (x > y) << endl;
    //checks to see if x is greater than y (true)
    cout << "x < y is " << (x < y) << endl;
    //checks to see if x is less than y (false)
    cout << "x >= y is " << (x >= y) << endl;
    //checks to see if x is greater than or equal to y (true)
    cout << "x <= y is " << (x <= y) << endl;
    //checks to see if x is less than or equal to y (false)

    cout << endl;

    //Logical Operators
    cout << "x < 5 and x < 10 is " << (x < 5 && x < 10) << endl;
    //checks to see if x is less than 5 and 10 (true)
    cout << "x < 5 and x > 10 is " << (x < 5 && x > 10) << endl;
    //checks to see if x is less than 5 and greater than 10 (false)
    cout << "x > 5 and x < 10 is " << (x > 5 && x < 10) << endl;
    //checks to see if x is greater than 5 and less than 10 (false)
    cout << "x > 5 and x > 10 is " << (x > 5 && x > 10) << endl;
    //checks to see if x is greater than 5 and 10 (false)
    cout << "x < 5 or x < 4 is " << (x < 5 || x < 4) << endl;
    //checks to see if x is less than 5 or 10 (true)
    cout << "x < 5 or x > 4 is " << (x < 5 || x > 4) << endl;
    //checks to see if x is less than or greater than 10 (true)
    cout << "x > 5 or x < 4 is " << (x > 5 || x < 4) << endl;
    //checks to see if x is greater than 5 or less than 10 (false)
    cout << "x > 5 or x > 4 is " << (x > 5 || x > 4) << endl;
    //checks to see if x is greater than 5 or 10 (false)
    cout << "not x < 5 and x < 10 is " << !(x < 5 && x < 10) << endl;
    //checks to see if x is less than 5 and 10 and then reverses the result (false)

    cout << endl;

    //Strings
    string greeting = "Hello!";
    //creates a string variable that is defined as Hello!
    cout << greeting << endl;

    cout << endl;

    //String Concatenation
    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName + lastName;
    //taking the firstName and lastName variables and creating fullName
    cout << "Creating fullName with +: " << fullName << endl;
    fullName = firstName.append(lastName);
    //uses the append function join first and last name to create fullName
    cout << "Creating fullName with .append function: " << fullName << endl;

    cout << endl;

    //Number and Strings
    /*The + operation is used for addition for integer variables and
    concatenation for string variables */
    x = 10;
    y = 20;
    z = x + y;
    cout << "int x = " << x << endl;
    cout << "int y = " << y << endl;
    cout << "int x + y = " << z << endl;
    //using + with integer variables adds the numbers together

    cout << endl;

    string a = "10";
    string b = "20";
    string c = a + b;
    cout << "string a = " << a << endl;
    cout << "string b = " << b << endl;
    cout << "string a + b = " << c << endl;
    //using + with string variables concatenates them together

    cout << endl;

    //String Length
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt variable is: " << txt.length() << endl;
    //uses the function .length to tell how many characters are in the string txt

    cout << endl;

    //Access Strings
    myString = "Hello";
    cout << myString << endl;
    cout << myString[0] << endl;
    //using [0] outputs the character that is defined at index number 0 (H)
    cout << myString[1] << endl;

    //Change String Character
    myString[0] = 'J';
    //redefining the H in Hello to J using access strings
    cout << myString << endl;

    cout << endl;
/*
    //User Input Strings
    cout << "Type in you first name: ";
    cin >> firstName;
    cout << "Your first name is " << firstName << endl;

    cout << endl;
*/
    cout << "Type your full name: ";
    getline (cin, fullName); //Using getline to display the multiple lines as an input
    cout << "Your full name is: " << fullName << endl;

    cout << endl;
/*
    //Omitting Namespace
    std::string greeting = "Hello"; //Using std:: allows you not use namespace std at the beginning
    std::cout << greeting;

    cout << endl;
*/
    //Math
    x = 5;
    y = 10;
    cout << max(x, y) << endl; //max() returns the highest value of the variables inside
    cout << min(x, y) << endl; //min() returns the lowest value of the variables inside
    //functions below come from the library cmath
    x = 64;
    cout << sqrt(x) << endl; //sqrt() returns the square root of x
    x = 2.6;
    cout << round(x) << endl; //round() returns the rounded integer of x
    x = 2;
    cout << log(x) << endl; //log() returns the log of x
    x = -5;
    cout << abs(x) << endl; //abs() returns the absolute value of x
    x = 3.14/6;
    cout << acos(x) << endl; //acos() returns the arccosine of x
    cout << asin(x) << endl; //asin() returns the arcsine of x
    cout << atan(x) << endl; //atan() returns the arctangent of x
    x = 6;
    cout << cbrt(x) << endl; //cbrt() returns the cube root of x
    cout << ceil(x) << endl; //ceil() returns the value of x rounded up
    cout << cos(x) << endl; //cos() returns the cosine of x
    cout << cosh(x) << endl; //cosh() returns the hyperbolic cosine of x
    cout << exp(x) << endl; //exp() returns the value of E to the x
    cout << expm1(x) << endl; //expm1() returns the value of E to the x -1
    cout << fabs(x) << endl; //fabs() returns the absolute value of a floating x variable
    cout << fdim(x, y) << endl; //fdim() returns the positive difference between x and y
    cout << floor(x) << endl; //floor() returns the value of x rounded down
    cout << hypot(x, y) << endl; //returns the square root of x squared + y squared without intermediate overflow or underflow
    cout << fma(x, y, z) << endl; //returns x * y + z without losing precision
    cout << fmax(x, y) << endl; //returns the highest value of a floating x and y
    cout << fmin(x, y) << endl; //returns the lowest value of a floating x and y
    cout << fmod(x, y) << endl; //returns the floating point remainder of x / y
    cout << pow(x, y) << endl; //returns the value of x to the power of y
    cout << sin(x) << endl; //returns the sine of x
    cout << sinh(x) << endl; //returns the hyperbolic sine of x
    cout << tan(x) << endl; //returns the tangent of x
    cout << tanh(x) << endl; //returns the hyperbolic tangent of x

    return 0;
}

