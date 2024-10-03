/*
Name: Prabhdeep Singh
Date: 08/31/2024

Program:
Write a program to calculate taxes, with the following conditions:

    If the salary is less than $1500, then there are no taxes
    If the salary is from 1501 to 3000 $ (1501<= salary < 3000) then the tax should be 10%
    If the salary is from 3001 to 5000 $ (3001 <= salary < 5000) then the tax should be 20%
    If the salary is above $5000, then the tax should be 30%

Hint: Formula for finding tax (salary * percentage) / 100

You must output:

    Tax percentage
    Salary after taxes



# Breakdown:
- How to use if statement
if( expression ) {
 // code
}
else {
    // code
}

(https://drive.google.com/file/d/1Q_I6H8qBTTIFMHEPbbpKVrg_E5N6cFtg/view)
(https://www.w3schools.com/cpp/cpp_conditions_elseif.asp)


- How to apply 10%
To get 10% of 200

First move decimal point 1 right of 200.0 -> 20.0
So 10% of 200 is 20.0

Second to get 1%, move 1 right of 20.0 -> 2.0
so 1% of 200 is 2.0

Or using calculator
200 * (10/100) = 20.0

(https://youtu.be/WYWPuG-8U5Q)

- Logical Operators e.g. OR, AND, NOT
&&  	Logical and
||  	Logical or
! 	    Logical not

(https://www.w3schools.com/cpp/cpp_operators_logical.asp)

- Check different amount of taxes
if
    salary < 1500
then
    there is no tax
else if
    1501 <= salary < 3000
then
    tax is 10%
else if
    3001 <= salary < 5000
then
    tax is 20%
else if
    5000 < salary
then
    tax is 30%

- Calculate Salary after taxes
salary = salary * (tax / 100.0)

> salary = 2000 * (10 / 100.0)

Input:
salary (int)

# Variable(s)
int salary
int tax

# Method
double calculateTaxes(int salary, int tax)

Input:
int salary
int tax

Process:
salary = salary * (tax / 100.0)

Output:
None

Return:
salary

Process:
- Ask user for their salary
- Check
if
    salary < 1500
then
    Output there is no tax
    And original salary
else if
    1501 <= salary < 3000
then
    Output tax is 10%
    And result of calculateTaxes(salary, tax)

else if
    3001 <= salary < 5000
then
    Output tax is 20%
    And result of calculateTaxes(salary, tax)
else if
    5000 < salary
then
    Output tax is 30%
    And result of calculateTaxes(salary, tax)

# Dependency:
None

Output:
No tax/tax
salary/salary with taxes
*/

#include <iostream>

using namespace std;

double calculateTaxes(int salary, int tax);

int main()
{
    int salary;
    int tax;

    // Get salary from user
    cout << "Please enter you're salary: ";
    cin >> salary;
    cout << "\n";

    // Check user tax status
    if( salary < 1500 ) {

        cout << "There is no taxes" << "\n";
        cout << "You're salary is " << salary << "\n";
    }
    else if ( 1501 <= salary && salary < 3000 ) {

        tax = 10;
        cout << "You're given " << tax << "% taxes." << "\n";

        salary = calculateTaxes(salary, tax);
        cout << "You're salary after tax is " << salary << "\n";
    }
    else if ( 3001 <= salary && salary < 5000 ) {

        tax = 20;
        cout << "You're given " << tax << "% taxes." << "\n";

        salary = calculateTaxes(salary, tax);
        cout << "You're salary after tax is " << salary << "\n";
    }
    else if ( 5000 < salary) {

        tax = 30;
        cout << "You're given " << tax << "% taxes." << "\n";

        salary = calculateTaxes(salary, tax);
        cout << "You're salary after tax is " << salary << "\n";
    }

    return 0;
}

double calculateTaxes(int salary, int tax) {

    salary = salary * (tax / 100.0);
    return salary;
}
