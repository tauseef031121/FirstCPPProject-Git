#include <iostream>
using namespace std;

int main()
{

    char button;

    cout << "Input a char" << endl;
    cin >> button;

    switch (button)
    {

    case 'a':
        cout << "print a" << endl;
        break;

    case 'b':
        cout << "print b" << endl;
        break;

    case 'c':

        cout << "print c" << endl;
        break;

    default:

        cout << "print default" << endl;
        break;
    }

    return 0;
}