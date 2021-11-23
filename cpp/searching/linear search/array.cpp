#include <iostream>
using namespace std;

int linear_search(int arr[], int num, int size)
{
    size--;
    while (size >= 0)
    {
        if (num == arr[size])
        {
            cout << "number " << num << " is found at position " << size+1 << endl;
            return size;
        }
        size --;
    }
    cout << "number " << num << "is not found";
    return -1;
}

int main()
{
    int arr[100];
    int size, num;

    cout << "enter size of array : ";
    cin >> size;

    cout << "enter data :" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "enter number to find : ";
    cin >> num;

    linear_search(arr, num, size);
}