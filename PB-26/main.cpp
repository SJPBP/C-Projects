/*
Name: Prabhdeep Singh
Date: 08/31/2024

Program:
Switch:

    Program to use 'switch' statement. Display Monday to Sunday.
    Program to display arithmetic operator using switch case.


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


- How to use switch
switch(expression) {
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
    // code block
}

(https://www.w3schools.com/cpp/cpp_switch.asp)

- Choose to display Monday to Sunday
switch (choice) {
    case '1':
        output Monday
    ....
    case '7':
        output Sunday
    default:
        output Please enter between 1-7
}

- Calculate using arithmetic operator
switch (choice) {
    case '*':
        Output "Result using +: " << num1 + num2
    ...
    default:
        Output "Please enter valid Operator (+, -, *, /)"
}

Input:
choice (char)

# Variable(s)
char choice

# Method 1
void displayDays()

Input:
day (int) = user

Process:
- Ask user to enter 1-7
- Use
switch (choice) {
    case '1':
        output Monday
    ....
    case '7':
        output Sunday
    default:
        output Please enter between 1-7
}

Output:
Day of the week Mon-Sun

Return:
None

# Method 2
void calculateNumber()

Input:
num1 (double) = user
num2 (double) = user
Operator (char) = user

Process:
- Ask user to enter num1, num2 and Operator
- Use
switch (Operator) {
    case '*':
        Output "Result using +: " << num1 * num2
    ...
    default:
        Output "Please enter valid Operator (+, -, *, /)"
}

Output:
Result of (+, -, *, /) operation on num1 and num2

Return:
None

Process:
- Ask user following:
1. Type 'w' to display Monday to Sunday:
2. Type 'a' to use arithmetic operator:

- Check
if
    choice is 'w'
then
    Run DisplayDays()
else if
    choice is 'a'
then
    Run calculateNumber()

# Dependency:
None

Output:
Display Monday to Sunday / Display arithmetic operation
*/
#include <iostream>

using namespace std;

void displayDays();
void calculateNumber();

int main()
{
    char choice;

    // Ask user which method they want to run
    cout << "Please chose from the following:" << "\n";

    cout << "Type 'w' to display Monday to Sunday" << "\n";
    cout << "Type 'a' to use arithmetic operator" << "\n";

    cout << "\nChoice: ";
    cin >> choice;

    if( choice == 'w' ) {

        displayDays();
    }
    else if ( choice == 'a' ) {

        calculateNumber();
    }
    else {

        cout << "Please enter 'w' or 'a'" << "\n";
    }
    return 0;
}

void displayDays() {

    int day;

    cout << "Please enter 1-7: ";
    cin >> day;


    switch (day) {
        case 1:
            cout << "Today is Monday" << "\n";
            break;
        case 2:
            cout << "Today is Tuesday" << "\n";
            break;
        case 3:
            cout << "Today is Wednesday" << "\n";
            break;
        case 4:
            cout << "Today is Thursday" << "\n";
            break;
        case 5:
            cout << "Today is Friday" << "\n";
            break;
        case 6:
            cout << "Today is Saturday" << "\n";
            break;
        case 7:
            cout << "Today is Sunday" << "\n";
            break;

        default:
            cout << "Please enter between 1-7" << "\n";
    }
}


void calculateNumber() {

    int num1, num2;
    char Operator;

    cout << "Please enter a number: ";
    cin >> num1;

    cout << "Please enter second number: ";
    cin >> num2;

    cout << "Please enter a operator (+, -, *, /): ";
    cin >> Operator;


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
            try {

                if (num2 != 0) {

                cout << "Result using /: " << num1 / num2;
                }
                else {
                    throw 101;
                    }
            }
            catch (int errorCode) {

                cout << "Error code: " << errorCode << "\n";
                cout << "User tried division by zero" << "\n";
            }
            break;
        default:
            cout << "Please enter valid Operator (+, -, *, /)\n";
    }
}
