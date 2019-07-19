#include <iostream>

using namespace std;
int main()
{
    int x, y; //two variables
    cout << "Enter two values " << endl;
    cin >> x >> y;

    bool isLessThan = x < y; //checks if x is less than y
    if(isLessThan == true) { //if x is less than y is true, print text to screen..going based off the video, this seems sufficient unless the condition returns false
        cout << x << " is the smaller number" << endl;
    }

  return 0;
}
