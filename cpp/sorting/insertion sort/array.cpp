#include <iostream>
using namespace std;

void insertion_sort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = temp;
    }
}


int main()
{
    int arr[1000], size;

    cout << "size of array : ";
    cin >> size;
    cout << "array elements : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    insertion_sort(arr, size);

    cout << "display : ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}