/*
Name: Prabhdeep Singh
Date: 09/1/2024

Program:
C++ Program to Calculate the Sum of Natural Numbers.


# Breakdown:
- How to Calculate the Sum of Natural Numbers.

Sum of Natural Numbers Formula
S_n = n × (n + 1) /2

>S_100 = 100 * (100 + 1) / 2

(https://www.geeksforgeeks.org/sum-of-natural-numbers/)



Input:
number (double)

# Variable(s)
double number
double sum_of_natural_numbers

# Method
None

Input:


Process:


Output:


Return:


Process:
- Ask user for number
- Calculate the Sum of Natural Numbers
sum_of_natural_numbers = number × (number + 1) /2
- Output sum_of_natural_numbers

# Dependency:
None

Output:
Sum of Natural Numbers
*/

#include <iostream>

using namespace std;

int main()
{
    double number;
    double sum_of_natural_numbers;

    cout << "Please enter a number: ";
    cin >> number;
    cout << "\n";

    sum_of_natural_numbers = number * (number + 1) /2;

    cout << "The Sum of Natural Numbers for " << number << " is " << sum_of_natural_numbers << "\n";

    return 0;
}
