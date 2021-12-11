#include <iostream>
#include <cmath>

using namespace std;

bool IsPrime(int num)
{

    for (int k = 2; k < sqrt(num); k++)
    {

        if (num % k == 0)
        {

            return false;
        }
    }

    return true;
}

int main()
{

    int a = 10;
    int b = 40;

    for (int i = a; i < b; i++)
    {

        if (IsPrime (i))
        {

            cout << i << endl;
        }
    }
    return 0;
}