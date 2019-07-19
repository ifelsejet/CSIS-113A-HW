#include <iostream>

using namespace std;
int main()
{
   int x, y;

   cout << "Please enter two numbers " << endl;
   cin >> x >> y;

   int sum = x + y;
   int difference = x - y;
   int product = x * y;
   int quotient = x / y;
   int remainder = x % y;

   cout << "The sum of your values is " << sum << endl;
   cout << "The difference of your values is " << difference << endl;
   cout << "The product of your values is " << product << endl;
   cout << "The quotient of your values is " << quotient << endl;
   cout << "The remainder of your values is " << remainder << endl;

  return 0;
}
