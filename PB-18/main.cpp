/*
Name: Prabhdeep Singh
Date: 08/28/2024

Program:
C++ Program to Check Whether a Number is Positive or Negative.

# Breakdown:
1. How to use if statement and else if statement
if( expression ) {
 // code
}
else if ( expression ) {
    // code
}
else {
    // code
}

(https://drive.google.com/file/d/1Q_I6H8qBTTIFMHEPbbpKVrg_E5N6cFtg/view)
(https://www.w3schools.com/cpp/cpp_conditions_elseif.asp)

2. Check Whether a Number is Positive, Neutral or Negative
if
    number > 0
then
    number is Positive
else if
    number == 0
then
    number is Neutral
else
    number is Negative

(https://www.programiz.com/python-programming/examples/positive-negative-zero)


Input:
Ask for integer number

# Variable(s)
int number
char numberStatus

# Method
char isNumber_Postive_Neutral_Negative(int number)

Input:
integer number (e.g. 2) = parameter

Process:
Check if
    int number > 0
then
    number is postive
therefore
    return char 'p'
else if
    int number == 0
then
    number is neutral
therefore
    return char 'u'
else
    return char 'n'

Output:
None

Return:
char e.g. 'p'/'u'/'n'

Process:
1. Ask for input
2. use isNumber_Postive_Neutral_Negative with int number
3. Put method result to char numberStatus
4. use switch to check char numberStatus
    if
        char numberStatus is 'p', output number is postive
    if
        char numberStatus is 'u', output number is neutral
    if
        char numberStatus is 'n', output number is negative

# Dependency:
None

Output:
Number is postive/neutral/negative
*/
#include <iostream>

using namespace std;

char isNumber_Postive_Neutral_Negative(int number);

int main()
{
    int number;
    char numberStatus;

    // Get number from user
    cout << "Please enter a number: ";
    cin >> number;
    cout << "\n";

    // Check number is pos, neu, or neg
    numberStatus = isNumber_Postive_Neutral_Negative(number);

    // Output based on pos, neu, or neg
    switch(numberStatus) {
        case 'p':
            cout << "Number is Postive\n";
            break;
        case 'u':
            cout << "Number is Neutral\n";
            break;
        case 'n':
            cout << "Number is Negative\n";
            break;
    }

    return 0;
}

char isNumber_Postive_Neutral_Negative(int number) {

    if( number > 0 ) {

        return 'p';

    }
    else if( number == 0 ) {

        return 'u';

    }
    else {

        return 'n';

    }
}
