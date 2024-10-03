/*
Name: Prabhdeep Singh
Date: 09/07/2024

Program:
C++ program to Calculate the Power of a Number.

# Breakdown:
- How to Calculate the Power of a Number
2^2 = 4
2 * 2 = 4

2^3 = 8
2 * 2 * 2 = 8

(https://youtu.be/WU-amPDdxGk)

- How to use pow
pow(a, b) = a^b

(https://www.programiz.com/cpp-programming/library-function/cmath/pow)

- Do/While Loop
do {
  // code block to be executed
}
while (condition);
(https://www.w3schools.com/cpp/cpp_do_while_loop.asp)

Input:
power (int)

# Variable(s)
int power, number=2

# Method
None

Input:


Process:


Output:


Return:


Process:
- Inside a do/while loop
    - Ask user for power which between 0 and 100
        Please enter power between 0 and 100:
- Check in while until following conditions is false
    > power needs to less than 0
    OR
    > power needs to bigger than 100
    power < 0 || power > 100
- Output 2^power
    2^power = result
    2^3 = 8

# Dependency:
#include <cmath>

Output:
Result of 2^power
*/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int power;
    int number = 2;

    do {

        cout << "Please enter power between 0 and 100: ";
        cin >> power;
    }
    while ( power < 0 || power > 100 );

    cout << number << "^" << power << " = " << pow(number, power);

    return 0;
}
