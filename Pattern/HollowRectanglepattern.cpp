#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter number of rows and columns to create a hollow rectangle: ";
    cin >> row >> col;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (i == 1 || i == row || j == 1 || j == col) // you can either use a single loop or use elseif with it.
            {
                cout << "*";
            }
            // else if (j == 1 || j == col)
            // {
            //     cout << "*";
            // }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}