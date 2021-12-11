#include <iostream>
using namespace std;

int add(int x, int y)
{

    int sum = x + y;

    return sum;
}

int main()
{

    int x = 10;
    int y = 30;
    cout << add(x, y) << endl;

    return 0;
}
