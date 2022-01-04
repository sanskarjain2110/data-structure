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

Node *insertion(Node *pointer)
{
    struct Node *point = pointer;
    struct Node *ptr = new Node();
    if (ptr == NULL)
    {
        cout << "error";
        return point;
    }
    else
    {
        cout << "date : ";
        cin >> ptr->data;
        ptr->right = NULL;
        ptr->left = NULL;
    }
    while (pointer->right != NULL || pointer->left != NULL)
    {
        if (pointer->data <= ptr->data)
        {
            if (pointer->right != NULL)
            {
                pointer = pointer->right;
            }
            else
            {
                break;
            }
        }
        else
        {
            if (pointer->left != NULL)
            {
                pointer = pointer->left;
            }
            else
            {
                break;
            }
        }
    }

    if (pointer->data <= ptr->data)
    {
        pointer->right = ptr;
    }
    else if (pointer->data >= ptr->data)
    {
        pointer->left = ptr;
    }

    return point;
}

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
        root = insertion(root);
    }
}

void searching(Node *ptr, int key)
{
    if (ptr == NULL)
    {
        cout << " element is not found" << endl;
        return;
    }
    else
    {
        if (ptr->data > key)
        {
            searching(ptr->left, key);
        }
        else if (ptr->data < key)
        {
            searching(ptr->right, key);
        }
        else
        {
            cout << "element is found" << endl;
            return;
        }
    }
}

Node *findmin(Node *ptr)
{
    if (ptr == NULL)
    {
        Node *point = new Node();
        point->data = -101;
        return point;
    }
    else
    {
        while (ptr->left != NULL)
        {
            ptr = ptr->left;
        }
        return ptr;
    }
}

Node *deletion(Node *pointer, int item)
{
    if (pointer == NULL)
    {
        cout << "not found in tree";
    }
    else if (item < pointer->data)
    {
        pointer->left = deletion(pointer->left, item);
    }
    else if (item > pointer->data)
    {
        pointer->right = deletion(pointer->right, item);
    }
    else
    {
        if (pointer->left == NULL && pointer->right == NULL)
        {
            delete pointer;
            pointer = NULL;
        }
        else
        {
            if (pointer->right == NULL)
            {
                Node *temp = pointer;
                pointer = pointer->left;
                delete temp;
            }
            else if (pointer->left == NULL)
            {
                Node *temp = pointer;
                pointer = pointer->right;
                delete temp;
            }
            else
            {
                Node *temp = findmin(pointer->right);
                pointer->data = temp->data;
                pointer->right = deletion(pointer->right, temp->data);
            }
        }
    }
    return pointer;
}

void pre_order_treversing(Node *ptr)
{
    if (ptr == NULL)
    {
        return;
    }
    else
    {
        cout << ptr->data << " ";
        pre_order_treversing(ptr->left);
        pre_order_treversing(ptr->right);
    }
}

void in_order_treversing(Node *ptr)
{
    if (ptr == NULL)
    {
        return;
    }
    else
    {
        in_order_treversing(ptr->left);
        cout << ptr->data << " ";
        in_order_treversing(ptr->right);
    }
}

void post_order_treversing(Node *ptr)
{
    if (ptr == NULL)
    {
        return;
    }
    else
    {
        in_order_treversing(ptr->left);
        in_order_treversing(ptr->right);
        cout << ptr->data << " ";
    }
}

void cases()
{
    int input;
    cout << endl
         << "enter input : ";
    cin >> input;

    Node *ptr = root;

    switch (input)
    {
    case 1:
        create_tree();
        break;
    case 2:
        root = insertion(root);
        break;
    case 3:
        int key;
        cout << "enter value : ";
        cin >> key;
        searching(ptr, key);
        break;
    case 4:
        pre_order_treversing(ptr);
        break;
    case 5:
        in_order_treversing(ptr);
        break;
    case 6:
        post_order_treversing(ptr);
        break;
    case 7:
        cout << "enter value : ";
        cin >> key;
        root = deletion(root, key);
        break;
    case 8:
        cout << findmin(ptr)->data << endl;
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
    cout << "enter number to perform task in list " << endl
         << "1.create binary search tree" << endl
         << "2.insertion" << endl
         << "3.search" << endl
         << "4.Pre Order Treversing" << endl
         << "5.In Order Treversing" << endl
         << "6.Post Order Treversing" << endl
         << "7.Deletion" << endl
         << "8.find min" << endl
         << "0.exit" << endl;

    cases();
}