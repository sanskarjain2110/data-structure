#include <iostream>
using namespace std;

void merge(int a[], int start, int mid, int end)
{
    int temp[start + end + 1];
    int i = start;
    int j = mid + 1;
    int k = start;

    while (i <= mid && j <= end)
    {
        if (a[i] < a[j])
        {
            temp[k] = a[i];
            i++;
        }
        else
        {
            temp[k] = a[j];
            j++;
        }
        k++;
    }
    if (i > mid)
    {
        while (j <= end)
        {
            temp[k] = a[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i <= mid)
        {
            temp[k] = a[i];
            i++;
            k++;
        }
    }
    for (int n = start; n <= end; n++){
        a[n] = temp[n];
    }
}
void mergesort(int a[], int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        mergesort(a, start, mid);
        mergesort(a, mid + 1, end);
        merge(a, start, mid, end);
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

    mergesort(arr, 0, size - 1);

    cout << "display : ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}