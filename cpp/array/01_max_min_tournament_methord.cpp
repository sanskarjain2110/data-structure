#include <iostream>
#include <stdio.h>
using namespace std;

class Max_Min
{
public:
    int max[100];
    int min[100];

    void max_min(int a[], int n)
    {
        int max_value, min_value;
        if (n < 1)
        {
            cout << "error";
        }

        else
        {
            if (n == 1)
            {
                max_value = a[0];
                min_value = a[0];
            }

            else
            {
                for (int i = 0; i < n / 2; i++)
                {
                    if (a[2 * i] > a[2 * i + 1])
                    {
                        max[i] = a[2 * i];
                        min[i] = a[2 * i + 1];
                    }
                    else
                    {
                        max[i] = a[2 * i + 1];
                        min[i] = a[2 * i];
                    }
                }

                max_value = max[0];
                min_value = min[0];
                for (int i = 0; i < n / 2; i++)
                {
                    if (max[i] > max_value)
                    {
                        max_value = max[i];
                    }
                    if (min[i] < min_value)
                    {
                        min_value = min[i];
                    }
                }
            }
            cout << "max value: " << max_value << endl;
            cout << "min value: " << min_value << endl;
        }
    }
};

int main()
{
    int n;
    int a[100];
    cout << "enter number of elements :-";
    cin >> n;
    cout << "enter elements :-" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    Max_Min obj;
    obj.max_min(a, n);
}