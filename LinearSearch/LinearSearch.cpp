#include <iostream>
using namespace std;

int LinearSearch(int array[], int n, int key)
{

    for (int i = 0; i < n; i++)
    {
        if (array[i] == key)
        {

            return i;
        }
    }

    return -1;
}

int main()
{

    int n;
    cout << "Enter array: " << endl;
    cin >> n;
    int array[n];
    cout << "Enter array values: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int key;
    cout << "Enter key: " << endl;
    cin >> key;

    cout << LinearSearch(array, n, key) << endl;

    return 0;
}