/*
Name: Prabhdeep Singh
Date: 08/30/2024

Program:
BMI Calculator: Create a program that calculates a person's Body Mass Index (BMI) based on their weight and height input.
Provide a classification of whether the person is underweight, normal weight, overweight, or obese.
Use cin, cout. Formula: bmi = weight / (height * height)

bmi < 18.5 	| Underweight
bmi < 24.9 	| Normal Weight
bmi < 29.9 	| Overweight
Otherwise 	| Obese


# Breakdown:
- Calculate BMI
BMI = weight / (height * height)

- Check classification of whether
if
    BMI < 18.5
then
    Person is Underweight
else if
    BMI < 24.9
then
    Person is Normal Weight
else if
    BMI < 29.9
then
    Person is Overweight
else
    Person is Obese

- How to use if statement
if( expression ) {
 // code
}
else {
    // code
}

(https://drive.google.com/file/d/1Q_I6H8qBTTIFMHEPbbpKVrg_E5N6cFtg/view)
(https://www.w3schools.com/cpp/cpp_conditions_elseif.asp)


Input:
weight (double)
height (double)

# Variable(s)
double weight = user
double height = user

double BMI = weight / (height * height)

const double underweight = 18.5
const double normal_Weight = 24.9
const double overweight = 29.9


# Method
None

Input:


Process:


Output:


Return:


Process:
- Ask for weight and height
- Calculate BMI
- Check
if
    BMI < 18.5
then
    Output Person is Underweight
else if
    BMI < 24.9
then
    Output Person is Normal Weight
else if
    BMI < 29.9
then
    Output Person is Overweight
else
    Output Person is Obese


# Dependency:
None

Output:
Output underweight/normal weight/overweight/obese

*/
#include <iostream>

using namespace std;

int main()
{
    double weight, height;

    double BMI;

    const double underweight = 18.5;
    const double normal_Weight = 24.9;
    const double overweight = 29.9;

    cout << "Please enter you're weight: ";
    cin >> weight;

    cout << "Please enter you're height: ";
    cin >> height;

    BMI = weight / (height * height);
    cout << "\nBMI " << BMI << "\n";

    if( BMI < underweight ) {

        cout << "You're underweight" << "\n";

    } else if( BMI < normal_Weight ) {

        cout << "You're normal weight" << "\n";

    } else if( BMI < overweight ) {

        cout << "You're overweight" << "\n";

    } else {

        cout << "You're obese" << "\n";

    }

    return 0;
}
