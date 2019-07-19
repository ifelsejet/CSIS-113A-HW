#include <iostream>

using namespace std;

int getValue();
int squareValue();

int main()
{
    int num;
    int numSquared;
    num = getValue();
    numSquared = squareValue();
    cout << "The number entered is " << num << endl;
    cout << "The number squared is " << numSquared << endl;
    return 0;
}

int getValue()
{
   int val;
   cout << "Enter a number " << endl;
   cin >> val;
   return val;
}

int squareValue()
{
    int val2 = getValue();
    val2 = val2*val2;
    return  val2;
}
