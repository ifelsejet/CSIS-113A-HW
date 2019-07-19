#include <iostream>

using namespace std;
int main()
{
    char letterGrade;
    cout << "Enter your letter grade " << endl;
    cin >> letterGrade;

    if(letterGrade == 'A')
    { //for the following conditions, we assume that we are taking in captial letters, to fix this we COULD use tbe toupper function, but it was never directly stated that we needed to
     cout << "You have a 90 percent or above in the class" << endl;
    }
    else if(letterGrade == 'B')
    {
     cout << "You have between an 80 percent and a 89 percent in the class" << endl;
    }
    else if(letterGrade == 'C')
    {
     cout << "You have between an 70 percent and a 79 percent in the class" << endl;
    }
    else if(letterGrade == 'D')
    {
     cout << "You have between an 60 percent and a 69 percent in the class" << endl;
    }
    else if(letterGrade == 'F')
    {
     cout << "You have below a 59 percent in the class" << endl;
    }//we should put an else statement in case the user inputs a char such as E so that the user inputs one of the following characters within the if statements

  return 0;
}
