#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int array[10];
    cout << "enter array value";

    for (int i = 0; i < 9; i++)
    {
        cin >> array[i];
    }

    cout << "enter new array value";
    cin >> array[10];

    cout << "output array value";
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << "\n";
    }
}