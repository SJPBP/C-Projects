/*
Name: Prabhdeep Singh
Date: 08/25/2024

Program:
C++ Program to Calculate the Area and Perimeter of a Square.

# Breakdown:
1. Formula of Area of an Square
Area = length * width

(https://www.youtube.com/watch?v=SWLtr8Yvu_w)

2. Formula of Perimeter of an Square
Perimeter = side + side + side + side

OR
Perimeter = 4 * side

(https://www.youtube.com/watch?v=WIsznpyp360)

Input:
Ask for a length and width of a Square

# Variable(s)
length (length of Square) = from user
width (width of Square) = from user

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

    cout << "Please enter the length of the Square: ";
    cin >> length;

    cout << "Please enter the width of the Square: ";
    cin >> width;

    cout << "\nArea: " << length * width << "\n";
    cout << "\Perimeter: " << length + width + length + width << "\n";

    return 0;
}
