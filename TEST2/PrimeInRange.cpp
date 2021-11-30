#include <iostream>
using namespace std;

int main()
{
    //Rangelist, Prime numbers in between 10 to 60
    int a = 10;
    int b = 18;
    for (int num = a; num < b; num++)
    {

        int i;
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                cout <<num<< endl;
                break;
            }
        }

        if (i == num)
        {

            cout <<num<< endl;
        }
    }
}