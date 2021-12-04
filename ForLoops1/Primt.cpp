#include <iostream>
using namespace std;

int main()
{

    cout << "Enter number" << endl;

    int n;
    cin >> n;

    bool flag = 0;

    for (int i = 2; i < n; i++)
    {

        if (n % i == 0)
        {

            cout << "Non Prime number" << endl;
            bool flag = 1;

            break;
        }
    }

    if (flag == 0)

        cout << "Prime number" << endl;
}