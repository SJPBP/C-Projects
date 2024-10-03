/*
Name: Prabhdeep Singh
Date: 08/26/2024

Program:
C++ program that converts between Celsius and Fahrenheit temperatures based on user input. You can also add conversions for Kelvin.

# Breakdown:
1. Celsius to Fahrenheit calculation
Fahrenheit = (Celsius * 1.8) + 32

(https://www.metric-conversions.org/temperature/celsius-to-fahrenheit.htm)

2. Fahrenheit to Celsius calculation
Celsius = (Fahrenheit - 32) / 1.8

(https://www.metric-conversions.org/temperature/fahrenheit-to-celsius.htm)

3. Celsius to Kelvin calculation
Kelvin = Celsius + 273.15

(https://www.metric-conversions.org/temperature/celsius-to-kelvin.htm)

4. Fahrenheit to Kelvin calculation
Kelvin = ((Fahrenheit - 32) / 1.8) + 273.15

(https://www.metric-conversions.org/temperature/celsius-to-kelvin.htm)

Input:
Ask if user want to Converts:
1. Celsius to Fahrenheit
2. Fahrenheit to Celsius
3. Celsius to Kelvin
4. Fahrenheit to Kelvin

Inside each method ask for variables related to it

# Variable(s)
int choice
double Celsius
double Fahrenheit
double Kelvin

# Method
double Celsius_to_Fahrenheit(double Celsius)
double Fahrenheit_to_Celsius(double Fahrenheit)
double Celsius_to_Kelvin(double Celsius)
double Fahrenheit_to_Kelvin(double Fahrenheit)

Input:
Needed Input

Process:
Do the conversion

Output:
None

Return:
Result

Process:
Use switch to choose between which conversion to choose, then call the method releated to that conversion, then output result in switch body

# Dependency:
None

Output:
Output the result from calculation
*/
#include <iostream>

using namespace std;

double Celsius_to_Fahrenheit(double Celsius);
double Fahrenheit_to_Celsius(double Fahrenheit);
double Celsius_to_Kelvin(double Celsius);
double Fahrenheit_to_Kelvin(double Fahrenheit);

int main()
{
    int choice;
    double Celsius = 0;
    double Fahrenheit = 0;
    double Kelvin = 0;

    cout << "Please choose which conversion you want to do: " << "\n";

    cout << "1. Celsius to Fahrenheit" << "\n";
    cout << "2. Fahrenheit to Celsius" << "\n";
    cout << "3. Celsius to Kelvin" << "\n";
    cout << "4. Fahrenheit to Kelvin" << "\n";

    cout << "\nAnswer: ";
    cin >> choice;


    switch (choice) {
        // Celsius to Fahrenheit
        case 1:
            cout << "Please enter Celsius: ";
            cin >> Celsius;

            Fahrenheit = Celsius_to_Fahrenheit(Celsius);
            cout << "Celsius to Fahrenheit is " << Fahrenheit;

            break;

        // Fahrenheit to Celsius
        case 2:
            cout << "Please enter Fahrenheit: ";
            cin >> Fahrenheit;

            Celsius = Fahrenheit_to_Celsius(Fahrenheit);
            cout << "Fahrenheit to Celsius is " << Celsius;

            break;

        // Celsius to Kelvin
        case 3:
            cout << "Please enter Celsius: ";
            cin >> Celsius;

            Kelvin = Celsius_to_Kelvin(Celsius);
            cout << "Celsius to Kelvin is " << Kelvin;

            break;

        // Fahrenheit to Kelvin
        case 4:
            cout << "Please enter Fahrenheit: ";
            cin >> Fahrenheit;

            Kelvin = Fahrenheit_to_Kelvin(Fahrenheit);
            cout << "Celsius to Kelvin is " << Kelvin;

            break;

        default:
            cout << "Please choose valid options" << "\n";
            break;
    }

    return 0;
}

double Celsius_to_Fahrenheit(double Celsius) {

    double result;

    result = (Celsius * 1.8) + 32;

    return result;
}

double Fahrenheit_to_Celsius(double Fahrenheit) {

    double result;

    result = (Fahrenheit - 32) / 1.8;

    return result;

}

double Celsius_to_Kelvin(double Celsius) {

    double result;

    result = Celsius + 273.15;

    return result;

}

double Fahrenheit_to_Kelvin(double Fahrenheit) {

    double result;

    result = ((Fahrenheit - 32) / 1.8) + 273.15;

    return result;

}
