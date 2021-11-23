#include <iostream>
using namespace std;

int binary_search(int arr[], int beg, int end, int num)
{
    int mid = (end + beg) / 2;

    if (arr[mid] == num)
    {
        cout << "number " << num << " is found at position " << mid + 1 << endl;
        return mid + 1;
    }
    else if (arr[mid] > num)
    {

        return binary_search(arr, beg, mid, num);
    }
    else
    {
        return binary_search(arr, mid + 1, end, num);
    }
}

int sort(){

    // impportant in binary_search
    return 0;
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

    sort();
    binary_search(arr, 0, size - 1, num);
}