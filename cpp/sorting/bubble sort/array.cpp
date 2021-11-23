#include <iostream>
using namespace std;

void selection_sort(int a[], int n)
{
    int min;
    for (int i = 0; i < n; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                min = j;
            }
        }
        swap(a[min], a[i]);
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

    selection_sort(arr, size);
    cout << "display : ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}