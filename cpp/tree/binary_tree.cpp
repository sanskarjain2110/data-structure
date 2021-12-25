#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct BstNode
{
    int data;
    struct BstNode *left;
    struct BstNode *right;
};
struct BstNode *root = NULL;

void create_tree()
{
    int BstNodeNum;
    cout << "number of BstNodes : ";
    cin >> BstNodeNum;

    struct BstNode *ptr = new BstNode();
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

    struct BstNode *pointer = root;
    for (int i = 1; i < BstNodeNum; i++)
    {
        struct BstNode *ptr = new BstNode();
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
        else if (pointer->data > ptr->data)
        {
            pointer->right = ptr;
        }
    }
    return;
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
         << "1.create tree" << endl
         << "12.exit" << endl;

    cases();
}