#include <iostream>
#include <ctime>

using namespace std;
int main()
{   //Create variables
   char answer;
   int count = 1;
   srand(static_cast<unsigned int>(time(0)));
   int num = rand() % 10 +1;
   int guess;


   //Prime loop
   cout << "Would you like to play (y/n) ? " << endl;
   cin >> answer;
  // cout << "Guess a number between 1 and 10 " << endl;
  // cin >> guess;

   while(toupper(answer) == 'Y')
   {
       cout << "Guess a number between 1 and 10 " << endl;
   c    in >> guess;
       while(guess != num)
       {
           count++;

           cout << "Guess a number between 1 and 10 " << endl;
            cin >> guess;
       }
   cout << "It took you " << count << " times to guess correctly" <<endl;
   cout << "Would you like to play (y/n) ? " << endl;
   cin >> answer;
   }
    return 0;
}
