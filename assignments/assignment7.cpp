/*
Jatnael Montes

ID: 0508989

September 23, 2018

Assignment 7 - The For Loop

This is lab (assignment) 7 which will output the largest and smallest value entered from the user
*/

#include <iostream>

using namespace std;

int main()
{
	int numbers;
	int num;
	int min = 1000000;//a range was never speficied, thus such a need for such a large number
	int max = 0;


	cout << "How many numbers do you want to enter?" << endl;
	cin >> numbers;

	for (int i = 0; i < numbers; i++) {
		cout << "Enter a number " << endl;
		cin >> num;

		if (num > max) {//if number is greater than 0, set that to max number, then compare with incoming values as loop iterates
			max = num;
		}

		if (num < min) {//if number is less than 1000000, set that to min number, then compare with incoming values as loop iterates
			min = num;
		}

	}
	cout << "The largest number was " << max << endl;
	cout << "The smallest number was " << min << endl;
	cout << endl;
	system("pause");
	/* On my computer, everything worked fine until taking my code onto Microsoft Visual Studio, I kept getting error code
	0 which didn't allow me to read my output on the console window, the line of code allows me to see my output. Ideally, this isn't needed
	but for some odd reason, the "Press any key to continue" text would not show up whatsoever
	*/
	return 0;

}
