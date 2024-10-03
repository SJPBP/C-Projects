/*
Name: Prabhdeep Singh
Date: 08/25/2024

Program:
C++ Program to Find ASCII Value of a Character.

# Breakdown:
1. ASCII Value table
ASCII stands for American Standard Code for Information Interchange,
A character encoding standard that assigns unique numerical values to letters, digits, punctuation marks, and other symbols.

H is 72

(https://www.geeksforgeeks.org/ascii-table/#)

Input:
Ask for a character

# Variable(s)
char character = from user
int asciiValue

Process:
asciiValue = character

# Dependency:
None

Output:
output character
*/


#include <iostream>

using namespace std;

int main()
{
    char character;
    int asciiValue;

    cout << "Please enter a Character ('a', '2'): ";
    cin >> character;

    asciiValue = character;

    cout << "\nASCII Value: " << asciiValue << "\n";
    return 0;
}
