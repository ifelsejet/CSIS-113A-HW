include <iostream>

using namespace std;
void printName();
void printDate();

int main()
{
  printName();
  return 0;
}
void printName()
{
    cout << "Hello from Jatnael" << endl;
    printDate();
    return;
}
void printDate()
{
    cout << "The date is October 7 2018" << endl;
    return;
}
