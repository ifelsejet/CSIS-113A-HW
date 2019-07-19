/*
Jatnael Montes

ID: 0508989

August 26, 2018

Assignment 3 - Simple Math Operators

This is lab (assignment) 3 that will take in the number of degrees in Fahrenheit and output that value as both Celsius and Kelvin onto the screen.
*/
#include <iostream>
using namespace std;
int main()
{
    //Create Temperature Variables
    int Fahrenheit; //assuming we take in a whole # as shown in the provided example
    int Celsius;
    double Kelvin; // going off the example, the end result is a decimal


    //User Input
    cout << "Please enter the number of degrees in Farhrenheit to convert " << endl;
    cin >> Fahrenheit; //gets user input and assigns it to Fahren.

    //Math
    Celsius = (Fahrenheit - 32) * 5/9;
    Kelvin = (Fahrenheit - 32) * 5/9 + 273.15;

    //Output
    cout << "In Celsius the temperature is " << Celsius << endl;
    cout << "In Kelvin the temperature is " << Kelvin << endl;

 return 0;
}
