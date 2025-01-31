/*
Name: Prabhdeep Singh
Date: 08/31/2024

Program:
C++ Program to Find all Roots of a Quadratic equation.


# Breakdown:
- How to use pow
> Need <cmath>

> pow(a, b) = a^b

(https://www.programiz.com/cpp-programming/library-function/cmath/pow)

- How to use sqrt
> Need <cmath>

> sqrt(x) = √x

(https://www.programiz.com/cpp-programming/library-function/cmath/sqrt)

- Find all Roots of a Quadratic equation
> First calculate the discriminant
discriminant = (pow(b,2)) - (4 * a * c)

> Then check
if
    discriminant > 0
then
    root1 = (-b + (sqrt((pow(b,2)) - (4 * a * c))))/2*a
    root2 = (-b - (sqrt((pow(b,2)) - (4 * a * c))))/2*a
else if
    discriminant == 0
then
    root1 = root2 = -b/2*a
else
    root1 = (-b/2*a) + (i * ((sqrt((pow(b,2)) - (4 * a * c)))/2*a))
    root2 = (-b/2*a) - (i * ((sqrt((pow(b,2)) - (4 * a * c)))/2*a))

(https://www.programiz.com/cpp-programming/examples/quadratic-roots)


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
a (double)
b (double)
c (double)

# Variable(s)
double root1, root2, discriminant
double a, b. c
double part_a, part_b

# Method
None

Input:


Process:


Output:


Return:


Process:
- Ask user for coefficients a to c
- Calculate the discriminant
    (pow(b,2)) - (4 * a * c)
- Check
if
    discriminant > 0
then
    root1 = (-b + (sqrt((pow(b,2)) - (4 * a * c))))/2*a
    root2 = (-b - (sqrt((pow(b,2)) - (4 * a * c))))/2*a

    Output root1 and root2
else if
    discriminant == 0
then
    part_a = -b/2*a

    Output root1 and root2 equal part_a / root1 = root2 = part_a
else
    part_a = (-b/2*a)
    part_b = ((sqrt((pow(b,2)) - (4 * a * c)))/2*a)


    Output root1 = part_a + part_b"i"
    And root2 = part_a - part_b"i"

# Dependency:
<cmath>

Output:
Output roots of a Quadratic Equation
*/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    double root1, root2, discriminant;
    double a, b, c;
    double part_a, part_b;

    cout << "Please enter coefficients: " << "\n";
    cout << "a: ";
    cin >> a;

    cout << "b: ";
    cin >> b;

    cout << "c: ";
    cin >> c;
    cout << "\n";

    // Calculate the discriminant
    discriminant = (b * b) - (4 * a * c);
    cout << "discriminant = " << discriminant << "\n";

    // Calculate for different discriminants
    if( discriminant > 0 ) {

        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);

        cout << "Root 1 is " << root1 << "\n";
        cout << "Root 2 is " << root2 << "\n";
    }
    else if ( discriminant == 0 ) {

        part_a = -b / (2*a);

        cout << "Root 1 = Root 2 = " << part_a << "\n";
    }
    else {

        part_a = -b / (2*a);
        part_b = sqrt(discriminant) / (2*a);

        cout << "Root 1 = " << part_a << " + " << part_b << "i" << "\n";
        cout << "Root 2 = " << part_a << " - " << part_b << "i" << "\n";
    }
    return 0;
}
