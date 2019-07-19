/*
Jatnael Montes

ID: 0508989

October 7, 2018

Assignment 10 - Functions

This is lab (assignment) 10 which will convert other temperature types to Farenheit and will exit when "X" is entered
*/

#include <iostream>
#include <ctime>

using namespace std;
double C2F(double cel);
double K2F(double kel);
double N2F(double newt);

int main()
{
    double value = 0;
    double result = 0;
    char temp = 'A';
    cout << "This temperature conversion program converts other temperature types to Farenheit" << endl;
    cout << "The temperature types are :" << endl;
    cout << "C - Celcius" << endl;
    cout << "K - Kelvin" << endl;
    cout << "N - Newton" << endl;
    cout << "X - Exit" << endl;
    cout << "To use the converter you must input a value and one of the temperature types. " << endl;
    cout << "For example 32 C converts 32 degrees from Celsius to Farenheit" << endl;
    cout << "Please enter a value and it's type to be converted" << endl;
    cin >> value >> temp;
    while(temp != 'X')
    {
        cout << "Please enter a value and it's type to be converted" << endl;
        cin >> value >> temp;
            switch(temp)
            {
                case 'C':
                //C to F math
                result = C2F(value);
                    break;
                case 'K':
                //K to F math
                result = K2F(value);
                    break;
                case 'N' :
                //N to F math
                result = N2F(value);
                    break;
                default :
                    break;
            }
            cout << value << temp << " is " << result << " in Fahrenheit." << endl;
    }
    return 0;
}
double C2F(double cel)
    {
        return cel * 9/5 + 32;
    }
double K2F(double kel)
    {
        return (kel - 273.15) * 1.8000 + 32;
    }
double N2F(double newt)
    {
        return newt * 60 / 11 + 32;
    }
