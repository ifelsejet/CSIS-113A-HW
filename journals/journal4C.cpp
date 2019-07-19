#include <iostream>

using namespace std;
//All Functions
int getValue();
int cubeIt(int x);
double sumIt(double a, double b, double c);

//Main Function
int main() {
int num;
num = getValue();
int cube = cubeIt(num);
double sum = sumIt(num,num,num);
cout << "The cube of your value is " << cube << endl;
cout << "The sum of your values is " << sum << endl;
return 0;
}
int getValue()
{    int val;
     cout << "Enter a number " << endl;
     cin >> val;
     return val;
}
int cubeIt(int x)
{
    return x*x*x;
}
double sumIt(double a, double b, double c)
{
    return a+b+c;
}
