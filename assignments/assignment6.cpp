/*
Jatnael Montes

ID: 0508989

September 9, 2018

Assignment 6 - Using The Switch Structure

This is lab (assignment) 6 that will act like a calculator by taking in 2 numbers and 1 operation

*/
#include <iostream>

using namespace std;
int main()
{
	int number1;
	int number2;
	int result;
	char operation;

	cout << "Enter an expression" << endl;
	cin >> number1 >> operation >> number2;

	switch (operation) {
	case '+': //Add
		result = number1 + number2;
		cout << "The sum is " << result << endl;
		break;
	case '-'://Subtract
		result = number1 - number2;
		cout << "The difference is " << result << endl;
		break;
	case '*'://Multply
		result = number1 * number2;
		cout << "The product is " << result << endl;
		break;
	case '/'://Divide 
		result = number1 / number2;
		cout << "The quotient is " << result << endl;
		break;
	default: //not required but good to have 
		cout << "Invalid Operation" << endl;

	}
}