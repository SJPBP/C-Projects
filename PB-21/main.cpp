/*
Name: Prabhdeep Singh
Date: 08/28/2024

Program:
C++ Program to find if the entered year is a leap year or not.

# Breakdown:
1. Check year is a leap year or not
If
    year % 400 equals 0
then
    year is a leap year
else If
    year % 100 equals 0
then
    year is not a leap year
else If
    year % 4 equals 0
then
    year is a leap year

(https://www.mathsisfun.com/leap-years.html)

2. How to use if statement
if( expression ) {
 // code
}
else {
    // code
}

(https://drive.google.com/file/d/1Q_I6H8qBTTIFMHEPbbpKVrg_E5N6cFtg/view)
(https://www.w3schools.com/cpp/cpp_conditions_elseif.asp)


Input:
year

# Variable(s)
int year = user

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
1. Ask for year from user
2. If
        isYear_A_Leap_Year(year) == true
    then
        Output year is a leap year
    else
        Output year is not a leap year

# Dependency:
None

Output:
year is a leap year or not
*/
#include <iostream>

using namespace std;

bool isYear_A_Leap_Year(int year);

int main()
{
    int year;

    // Get year from user
    cout << "Please enter a year: ";
    cin >> year;
    cout << "\n";

    // Check if the year is a leap year
    if( isYear_A_Leap_Year(year) == true ) {

        cout << "Year " << year << " is a leap year" << "\n";

    }
    else {

        cout << "Year " << year << " is not a leap year" << "\n";

    }

    return 0;
}


bool isYear_A_Leap_Year(int year) {

    if( year % 400 == 0 ) {

        return true;

    }
    else if( year % 100 == 0 ) {

        return false;

    }
    else if( year % 4 == 0 ) {

        return true;

    }
}
