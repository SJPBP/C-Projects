/*
Name: Prabhdeep Singh
Date: 08/31/2024

Program:
Nested condition
> Get the 'age' and 'membership_status' as user input.
  'membership_status' can be only 'Y' or 'y'.
  So, if the age is bigger or equal to 18 and if the user is a member of our shop, we provide a 10% discount, else we charge fully.

> Write a simple chatbot program using nested conditions.


# Breakdown:
- What is chatbot program
A chatbot is a computer program that simulates human conversation to solve customer queries.

(https://www.forbes.com/advisor/business/software/what-is-a-chatbot/)


- How to use if statement
if( expression ) {
 // code
}
else {
    // code
}

(https://drive.google.com/file/d/1Q_I6H8qBTTIFMHEPbbpKVrg_E5N6cFtg/view)
(https://www.w3schools.com/cpp/cpp_conditions_elseif.asp)


- Constant
const type varaibleName

> const char vowels[5]

(https://www.w3schools.com/cpp/cpp_variables_constants.asp)


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


- How to get 10% discount or charged fully.
if
    age >= 18 && membership_status == 'Y" || membership_status == 'y'
then
    User get discount on payment using:
    payment = payment * (10/100)
else
    Pay payment fully


Input:
age (int)
membership_status (char)
payment (double)

# Variable(s)
int age = user
double payment = user
char membership_status = user
double discount_percent = 10.0

# Method
None

Input:


Process:


Output:


Return:


Process:
- Ask for age and membership_status and payment
- Check
if
    age >= 18 && membership_status == 'Y" || membership_status == 'y'
then
    Calculate payment with 10% discount
    payment = payment * (10.0/100.0)
    Output discounted payment
else
    Output Full payment without any discount

# Dependency:
None

Output:
payment with/without 10% discount
*/
#include <iostream>

using namespace std;

int main()
{
    int age;
    double payment;
    char membership_status;
    double discount_percent = 10.0;

    // Get age, membership_status, and payment from user
    cout << "Please enter you're age (1-100): ";
    cin >> age;

    cout << "Please enter you're membership_status ('Y'/'y'): ";
    cin >> membership_status;

    cout << "Please enter you're payment (1-10000): ";
    cin >> payment;
    cout << "\n";

    // Check if user is eligible for 10% discount
    if( age >= 18 && (membership_status == 'Y' || membership_status == 'y' )) {

        cout << "Your payment with 10% discount is " << payment * (discount_percent / 100.0) << "\n";

    } else {

        cout << "Your full payment is " << payment << "\n";

    }

    return 0;
}
