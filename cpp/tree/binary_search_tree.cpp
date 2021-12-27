#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
struct Node *root = NULL;

void create_tree()
{
    int NodeNum;
    cout << "number of Nodes : ";
    cin >> NodeNum;

    struct Node *ptr = new Node();
    if (ptr == NULL)
    {
        cout << "error";
        return;
    }
    else
    {
        cout << "date : ";
        cin >> ptr->data;
        ptr->right = NULL;
        ptr->left = NULL;
        root = ptr;
    }

    struct Node *pointer = root;
    for (int i = 1; i < NodeNum; i++)
    {
        struct Node *ptr = new Node();
        if (ptr == NULL)
        {
            cout << "error";
            return;
        }
        else
        {
            cout << "date : ";
            cin >> ptr->data;
            ptr->right = NULL;
            ptr->left = NULL;
        }

        while (pointer->data <= ptr->data && pointer->left != NULL)
        {
            pointer = pointer->left;
        }
        while (pointer->data > ptr->data && pointer->right != NULL)
        {
            pointer = pointer->right;
        }

        if (pointer->data <= ptr->data)
        {
            pointer->left = ptr;
        }
        else if (pointer->data >= ptr->data)
        {
            pointer->right = ptr;
        }
    }
    return;
}

void insertion()
{
    struct Node *ptr = new Node();
    if (ptr == NULL)
    {
        cout << "error";
        return;
    }
    else
    {
        cout << "date : ";
        cin >> ptr->data;
        ptr->right = NULL;
        ptr->left = NULL;
    }

    struct Node *pointer = root;
    while (pointer->data <= ptr->data && pointer->left != NULL)
    {
        pointer = pointer->left;
    }
    while (pointer->data > ptr->data && pointer->right != NULL)
    {
        pointer = pointer->right;
    }

    if (pointer->data <= ptr->data)
    {
        pointer->left = ptr;
    }
    else if (pointer->data >= ptr->data)
    {
        pointer->right = ptr;
    }

    return;
}

void pre_order_treversing(Node *ptr)
{
    if (ptr == NULL)
    {
        return;
    }
    cout << ptr->data << " ";
    pre_order_treversing(ptr->left);
    pre_order_treversing(ptr->right);
}

void cases()
{
    int input;
    cout << "enter input : ";
    cin >> input;

    switch (input)
    {
    case 1:
        create_tree();
        break;
    case 2:
        pre_order_treversing(root);
        break;
    case 3:
        insertion();
        break;
    case 12:
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
    cout << "enter number to perform task in list " << endl
         << "1.create binary search tree" << endl
         << "2.Pre Order Treversing" << endl
         << "3.insertion" << endl
         << "12.exit" << endl;

    cases();
}