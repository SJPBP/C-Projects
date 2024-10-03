/*
Name: Prabhdeep Singh
Date: 08/24/2024

Program:
C++ Program to Calculate the Area and Circumference of a Circle.

Input:
Get radius of circle from user

# Variables:
radius = from user
pi = 3.14159265

Process:
Calculate area of circle:
pi * r^2

Calculate circumference of circle:
2 * pi * r

# Dependency:
Need #include<cmath> to raise number to power using:
pow(number, power_to)

pow(2,3) = 2^3 = 8

Output:
Result of calculation
*/

#include <iostream>
#include<cmath>

using namespace std;

int main()
{

    double pi = 3.14159265, radius;

    cout << "Please enter radius of circle: ";
    cin >> radius;

    // Calculate Area and output it
    cout << "Area of Circle: " << pi * (pow(radius, 2)) << endl;

    // Calculate circumference and output it
    cout << "Area of Circle: " << 2 * pi * radius << endl;

    return 0;
}
