#include <ctime>

using namespace std;
int main()
{
    int min, max;
    srand((unsigned int) time(0));

    cout << "Enter your min value " << endl;
    cin >> min;

    cout << "Enter your max value " << endl;
    cin >> max;

    for(int j =0; j < 10; j++)
    {
        for(int i=0; i < 10; i++)
        {
            cout << (rand() % (1 + max - min) + min) << "\t";
        }//end of "i" for loop
        cout << endl;
    }//end of "j" for loop
    return 0;
}
