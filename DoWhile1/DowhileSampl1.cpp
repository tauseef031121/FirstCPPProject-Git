//do while execute the statement atleast one time, while loop it will chack the condition true and execute the statement(one negative accept, next negative nummber terminate the loop
//Means atleast one time loop execute, where while loop terminate at first negative input value

#include <iostream>
using namespace std;

int main()
{

    int n;

    cin >> n;

    do
    {

        cout << n << endl;
        cin >> n;

    } while (n > 0);
}