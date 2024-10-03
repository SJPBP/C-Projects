/*
Name: Prabhdeep Singh
Date: 08/30/2024

Program:
C++ program that allows the user to perform basic arithmetic operations
(addition, subtraction, multiplication, division) on two numbers.
You can also add error handling for division by zero.

# Breakdown:
- Perform basic arithmetic operations
On two double numbers

- How to do Error handling
try {
  // Block of code to try
  throw exception; // Throw an exception when a problem arise
}
catch () {
  // Block of code to handle errors
}

(https://www.w3schools.com/cpp/cpp_exceptions.asp)

- How to use if statement
if( expression ) {
 // code
}
else {
    // code
}

(https://drive.google.com/file/d/1Q_I6H8qBTTIFMHEPbbpKVrg_E5N6cFtg/view)
(https://www.w3schools.com/cpp/cpp_conditions_elseif.asp)


Input:
number1
number2
Operator

# Variable(s)
double number1 = user
dobule number2 = user
char Operator

# Method
bool isYear_A_Leap_Year

Input:
year

Process:
If
    year % 400 equals 0
then
    return true
else If
    year % 100 equals 0
then
    return false
else If
    year % 4 equals 0
then
    return true

Output:
None

Return:
Bool True/False

Process:
- Ask for user for two number e.g. 5 and 0
- Then ask for which Operator to use
- Use Switch to choose between Operator
- Error Handling:
    In division case,
        check if second number is 0.
        if yes,
            then throw error 101
        else
            do the division

# Dependency:
None

Output:
year is a leap year or not
*/
#include <iostream>

using namespace std;

int main()
{
    double number1;
    double number2;
    char Operator;

    cout << "Please enter a number: ";
    cin >> number1;

    cout << "Please enter second number: ";
    cin >> number2;

    cout << "Please enter a operator (+, -, *, /): ";
    cin >> Operator;

    cout << endl;

    switch (Operator) {

        case '+':
            cout << "Result using +: " << number1 + number2;
            break;

        case '-':
            cout << "Result using -: " << number1 - number2;
            break;

        case '*':
            cout << "Result using *: " << number1 * number2;
            break;

        case '/':
            try {

                if (number2 != 0) {

                cout << "Result using /: " << number1 / number2;

            } else {

                throw 101;
                }
            }
            catch (int errorCode) {

                cout << "Error code: " << errorCode << "\n";
                cout << "User tried division by zero" << "\n";
            }

            break;

        default:
            cout << "Please enter valid Operator (+, -, *, /)\n";
    }

    return 0;
}
