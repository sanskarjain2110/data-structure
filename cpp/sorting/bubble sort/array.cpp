#include <iostream>
using namespace std;

void bubble(int a[], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] < a[j])
            {
                swap(a[i], a[j]);
            }
        }
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

    bubble(arr,size);
    cout<<"display : ";

    for (int i = 0; i < size; i++)
    {
        cout<< arr[i] <<" ";
    }

}