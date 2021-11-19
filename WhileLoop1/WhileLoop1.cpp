/*until the condition is true, continue the loop,take the input number from user, if positive nummber loop continues, otherwise(Negative) terminate the loop*/
#include <iostream>
using namespace std;

int main()
{

    int n;

    cin >> n;

    while (n > 0)
    {
        cout << n << endl;
        cin >>n;
    }
}
