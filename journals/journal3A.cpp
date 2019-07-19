#include <iostream>

using namespace std;

int main()
{
 for(int row=1; row <= 9; row++){ //multipication until 9 (1,2,3,4)

    for(int col=1; col <= 9; col++){

        cout << row*col << "\t";
    }
    cout << endl;
}

return 0;

}
