/*
Name: Prabhdeep Singh
Date: 08/23/2024

Program:
C++ Program to Add/Subtract/Multiply/Divide Two Integers entered by the user.

Input:
Two integers
One Operator (+, -, *, /)

Process:
Check for type of Operator using switch

Output:
Result of Operation of two integer
OR
Errors:
1. Division by zero
2. Not choosing correct Operator

*/

#include <iostream>

using namespace std;

int main()
{

    int num1, num2;
    char Operator;

    cout << "Please enter a number: ";
    cin >> num1;

    cout << "Please enter second number: ";
    cin >> num2;

    cout << "Please enter a operator (+, -, *, /): ";
    cin >> Operator;

    cout << endl;

    switch (Operator) {

        case '+':
            cout << "Result using +: " << num1 + num2;
            break;

        case '-':
            cout << "Result using -: " << num1 - num2;
            break;

        case '*':
            cout << "Result using *: " << num1 * num2;
            break;

        case '/':
            if (num2 != 0) {

                cout << "Result using /: " << num1 / num2;

            } else {

                cout << "Error: Division by zero!!!";
            }
            break;

        default:
            cout << "Please enter valid Operator (+, -, *, /)\n";
    }

    return 0;
}
