#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root = NULL;

void create_tree()
{
    int nodeNum;
    cout << "number of nodes : ";
    cin >> nodeNum;

    if (root == NULL)
    {
        struct node *ptr = new node();
        cout << "date : ";
        cin >> ptr->data;
        ptr->right = NULL;
        ptr->left = NULL;
        ptr = root;
    }

    for (int i = 1; i < nodeNum; i++)
    {
        struct node *pointer = root;
        struct node *ptr = new node();
        
        cout << "date : ";
        cin >> ptr->data;
        ptr->right = NULL;
        ptr->left = NULL;

        while (pointer->right != NULL || pointer->left != NULL)
        {
            if (pointer->data <= ptr->data)
            {
                pointer = pointer->left;
            }
            else if (pointer->data > ptr->data)
            {
                pointer = pointer->right;
            }
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
}

void traverse()
{
    cout << "traverse : ";
    if (root == NULL)
    {
        return;
    }
    else
    {
        cout << root->data << " ";
        root = root->left;
        traverse();
        root = root->right;
        traverse();
    }
    return;
}

int main()
{
    create_tree();
    cout << root->data;
    traverse();
}