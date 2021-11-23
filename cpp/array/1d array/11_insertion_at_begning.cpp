#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int extra_value;
    int array[10];
    cout << "enter array value : " <<"\n";

    for (int i = 0; i < 9; i++)
    {
        cin >> array[i];
    }

    cout << "enter new array value : ";
    cin >> extra_value;

    for (int i = 10; i > 0; i--)
    {
        array[i] = array[i - 1];
    }
    array[0] = extra_value;

    cout << "output array value" << "\n";
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << "\n";
    }
}