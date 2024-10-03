/*
Name: Prabhdeep Singh
Date: 08/25/2024

Program:
C++ Program to Calculate the Area of Right Angle Triangle.

# Breakdown:
1. Formula of Area of an Right Angle Triangle
Area = (base * height)/2

(https://www.youtube.com/watch?v=egcm1lR6Ayk)

Input:
Ask for a base and height of a triangle

# Variable(s)
base (base of triangle) = from user
height (height of triangle) = from user

Process:
(base * height)/2

# Dependency:
None

Output:
Output the result from calculation
*/


#include <iostream>

using namespace std;

int main()
{
    double base, height;

    cout << "Please enter the base of the triangle: ";
    cin >> base;

    cout << "Please enter the height of the triangle: ";
    cin >> height;

    cout << "\nArea: " << (base * height)/2 << " cm" << "\n";
    return 0;
}
