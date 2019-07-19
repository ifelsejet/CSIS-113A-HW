/*
Jatnael Montes

ID: 0508989

September 30, 2018

Assignment 8 - The While Loop

This is lab (assignment) 8 which uses a while loop to create a simple coin flip game
*/

#include <iostream>
#include <ctime>

using namespace std;
int main()
{   //Create variables
    char answer; //user's answer
    double bankAmount = 10;//Starting amount
    int zeroOne;//value we are looking for
    char guess;
    int heads = 0;//head is 0
    int tails = 1;//tails is 1


    srand(static_cast<unsigned int>(time(0))); //generate random numbers
    zeroOne = rand() % 2; // if random # is even, will result in 0, if odd, will result in 1
    //Priming loop
    cout << "Welcome to the coin flip game. It costs a dollar to play" << endl;
    cout << "If you guess correctly you will win $2.00" << endl;
    cout << "Do you want to play (y/n)?" << endl;
    cin >> answer;

    while(toupper(answer) == 'Y')
    {
        cout << "Your bank is $" << bankAmount << endl;
        cout << "Enter heads or tails" << endl;
        cin >> guess;

        zeroOne = rand() % 2;
        if (zeroOne == heads)
		{   bankAmount = bankAmount + 2;
			cout << "Winner, the coin flip came up heads" << endl;
			cout << "Do you want to play again (y/n)?" << endl;
			cin >> answer;
		}
		if (zeroOne == tails)
		{
			cout << "Sorry, you lose. The coin flip came up tails" << endl;
			cout << "Do you want to play again (y/n)?" << endl;
			cin >> answer;
		}

    }
    cout << "Thanks for playing, your bank is $" << bankAmount << endl;
    cout << "Please come again" << endl;
    return 0;
}
    
