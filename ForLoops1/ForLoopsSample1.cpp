#include <iostream>

using namespace std;

int main()
{

    int sum = 0;
    int n;

    cin >> n;

    for (int counter = 1; counter <= n; counter++)
    {

        sum = sum + counter;
    }

    cout << sum << endl;
}