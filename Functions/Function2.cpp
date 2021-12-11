#include <iostream>
using namespace std;

void print1(int num)
{
    cout << num << endl;

    return;
}
int add(int x, int y)
{

    print1(x);
    print1(y);

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
