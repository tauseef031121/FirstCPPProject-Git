#include <iostream>
using namespace std;

int main()
{

    int n = 17;

    for (int i = 2; i < n; i++)
    {

        if (n % i == 0)
        {

            cout << "Non prime" << endl;

            break;
        }
        if (i = n)
        {

            cout << "prime" << endl;
        }

        
    }
    cout << "outside for loop" << endl;
}