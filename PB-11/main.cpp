/*
Name: Prabhdeep Singh
Date: 08/25/2024

Program:
C++ Program to Calculate the Area and Perimeter of a Rectangle.

# Breakdown:
1. Formula of Area of an Rectangle
Area = length * width

(https://www.youtube.com/watch?v=vqJmXGIF_1w)

2. Formula of Perimeter of an Rectangle
Perimeter = side + side + side + side

(https://www.youtube.com/watch?v=9HPWB8UX8GQ)

Input:
Ask for a length and width of a Rectangle

# Variable(s)
length (length of Rectangle) = from user
width (width of Rectangle) = from user

Process:
1. length * width

2. length + length + width + width

# Dependency:
None

Output:
Output the result from calculation
*/

#include <iostream>

using namespace std;

int main()
{
    double length, width;

    cout << "Please enter the length of the Rectangle: ";
    cin >> length;

    cout << "Please enter the width of the Rectangle: ";
    cin >> width;

    cout << "\nArea: " << length * width << "\n";
    cout << "\Perimeter: " << length + width + length + width << "\n";

    return 0;
}
