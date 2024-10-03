/*
Name: Prabhdeep Singh
Date: 08/28/2024

Program:
C++ Program to Check Whether a Number is Even or Odd.

# Breakdown:
1. How to use if statement
if( expression ) {
 // code
}

(https://drive.google.com/file/d/1Q_I6H8qBTTIFMHEPbbpKVrg_E5N6cFtg/view)

2. How to check if number is Even or Odd
if
    number % 2 equals 0
then
    number is even
else
    number is odd

(https://stackoverflow.com/questions/160930/how-do-i-check-if-an-integer-is-even-or-odd)
(https://www.geeksforgeeks.org/check-whether-given-number-even-odd/)


Input:
Ask for integer number

# Variable(s)
int number

# Method
bool isNumberEven(int number)

Input:
integer number (e.g. 2) = parameter

Process:
Check if
    int number % 2 equal zero
then
    number is even
therefore
    return true
else
    return false

Output:
None

Return:
bool e.g. true/false

Process:
1. Ask for input
2. check if
    input number is even using isNumberEven
    if true print number is even
else
    print number is odd

# Dependency:
None

Output:
Number is even or odd
*/
#include <iostream>

using namespace std;

bool isNumberEven(int number);

int main()
{
    int number;

    // Get number from user
    cout << "Please enter a number: ";
    cin >> number;
    cout << "\n";

    if( isNumberEven(number) == true ) {

        cout << "Number: " << number << " is Even" << "\n";
    }
    else {

        cout << "Number: " << number << " is Odd" << "\n";

    }

    return 0;

}

bool isNumberEven(int number) {

    if( number % 2 == 0 ) {

        return true;

    }
    else {

        return false;

    }
}
