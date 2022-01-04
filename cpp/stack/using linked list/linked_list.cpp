#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
node *top = NULL;

void peek()
{
    if (top == NULL)
    {
        cout << "empty stack " << endl;
    }
    else
    {
        cout << top->data << " is on top of stack " << endl;
    }
}

void push()
{
    node *new_node = new node();
    cout << "enter number : ";
    cin >> new_node->data;
    new_node->next = NULL;

    if (new_node == NULL)
    {
        cout << "number not inserted" << endl
             << "due to some error" << endl;
        return;
    }
    else
    {
        if (top == NULL)
        {
            top = new_node;
        }
        else
        {
            new_node->next = top;
            top = new_node;
        }
        cout << "number inserted" << endl;
        return;
    }
}

void pop()
{
    if (top == NULL)
    {
        cout << "empty stack" << endl;
        return;
    }
    else
    {
        node *temp = top;
        top = top->next;
        free(temp);
        cout << "number poped" << endl;
        return;
    }
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