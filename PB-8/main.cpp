/*
Name: Prabhdeep Singh
Date: 08/24/2024

Program:
C++ Program to Calculate the Area of a Scalene Triangle.

Source:
https://byjus.com/maths/area-of-scalene-triangle/
There are five ways to do calculations, I will user base and height formula

Input:
Base and height of the triangle

# Variable:
h (height) = from user
b (base) = from user

Process:
1/2 * b * h
1/2 = 0.5
0.5 * b * h

# Dependency:
None

Output:
Result of calculation
*/
#include <iostream>

using namespace std;

int main()
{
    double base, height;

    cout << "Please enter base of Scalene Triangle: ";
    cin >> base;

    cout << "Please enter height of Scalene Triangle: ";
    cin >> height;

    cout << endl;

    cout << "Area of a Scalene Triangle: " << 0.5 * (base * height) << endl;

    return 0;
}
