/*
Jatnael Montes

ID: 0508989

December 2, 2018

Assignment 18 - Using Pointers

This is lab (assignment) 18 which uses pointers to remove all occurances of a given character and return the number of
occurances of the character within the string and the modified string
*/

#include <iostream>
#include <ctime>

using namespace std;
int removeChars(char *str, char change);


int main()
{
    char str[100];
    char remove = 'a'; //temporary value
    cout << "Enter a string" << endl;
    cin.getline(str,99);
    cout << "Enter a character to remove" << endl;
    cin >> remove ;

    int cnt = removeChars(str, remove);
    cout << "Removed " << cnt  << " " << remove << " characters. Your string is now:" << endl;
    cout << str << endl;

   return 0;
}



int removeChars(char *str, char change){
  //for reading
  char *p = str;
  //for editing
  char *pq = str;
    int count = 0;
    while(*p){
        *pq = *p++;
        if(*pq != change){
        pq += (*pq != change);
        count++;
        }

    }
   *pq = '\0';
    return count-1;
}
