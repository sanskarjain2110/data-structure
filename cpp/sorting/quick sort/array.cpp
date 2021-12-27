#include <iostream>
using namespace std;

int partition (int a[], int start, int end)  
{  
    int pivot = a[end];
    int i = start - 1;  
  
    for (int j = start; j < end; j++)  
    {  
        if (a[j] < pivot)  
        {  
            i++; 
            int t = a[i];  
            a[i] = a[j];  
            a[j] = t;  
        }  
    }  
    int t = a[i+1];  
    a[i+1] = a[end];  
    a[end] = t;  
    return (i + 1);  
}  
void quicksort(int a[], int start, int end)
{
    if (start < end)
    {
        int p = partition(a, start, end);
        quicksort(a, start, p - 1);
        quicksort(a, p + 1, end);
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

    quicksort(arr, 0, size-1);

    cout << "display : ";

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}