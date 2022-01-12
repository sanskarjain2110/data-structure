#include <iostream>
using namespace std;

int arr[1000];
static int top = -1;

void peek()
{
    if (top < 0)
    {
        cout << "empty stack " << endl;
    }
    else
    {
        cout << arr[top] << " is on top of stack " << endl;
    }
}

void push()
{
    if (top == 1000)
    {
        cout << "stack is full" << endl;
        return;
    }
    else
    {
        int num;
        cout << "enter number" << endl;
        cin >> num;
        top += num;
        arr[top] = num;

        cout << "number inserted" << endl;
        return;
    }
}

void pop()
{
    if (top >= 0)
    {
        top -= 1;
        cout << "number poped" << endl;
        return;
    }
    cout << "empty stack" << endl;
    return;
}

void cases()
{
    int input;
    cout << endl
         << "enter input : ";
    cin >> input;

    switch (input)
    {
    case 1:
        peek();
        break;
    case 2:
        push();
        break;
    case 3:
        pop();
        break;
    case 0:
        exit(0);
    default:
        cout << "invalid input!!!" << endl;
        cases();
        break;
    }
    cases();
    return;
}

int main()
{
    cout << "enter number to perform task in stack " << endl
         << "1.top most element" << endl
         << "2.insert element" << endl
         << "3.delete element" << endl
         << "0.exit" << endl;
    cases();
}