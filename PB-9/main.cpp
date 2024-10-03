/*
Name: Prabhdeep Singh
Date: 08/25/2024

Program:
C++ Program to Calculate the Area of an Equilateral Triangle.

# Breakdown:
1. Formula of Area of an Equilateral Triangle
Area = sqrt(3)/4 * (Side of triangle)^2

(https://www.youtube.com/watch?v=vIlWlauZV7E)

Input:
Ask for a side of triangle

# Variable(s)
side (side of triangle) = from user

Process:
((sqrt(3))/4) * (pow(side, 2))


# Dependency:
<cmath>

Output:
Output the result from calculation
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double side;

    cout << "Please enter a side of an Equilateral Triangle: ";
    cin >> side;

    cout << "\nArea: " << ((sqrt(3))/4) * (pow(side, 2)) << "\n";

    return 0;
}
