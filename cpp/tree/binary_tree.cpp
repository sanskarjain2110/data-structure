#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

// link list node
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *head = NULL;

void create_node()
{
    if (head == NULL)
    {
        struct node *ptr = new struct node();
        cin >> ptr->data;
        ptr->left = NULL;
        ptr->right = NULL;
    }
    else
    {
        struct node *pointer = head;
        struct node *ptr = new struct node();
        if (pointer->left == NULL)
        {
            cin >> ptr->data;
            pointer->left = ptr;
            ptr->left = NULL;
            ptr->right = NULL;
        }
        else if (pointer->right == NULL)
        {
            cin >> ptr->data;
            pointer->right = ptr;
            ptr->left = NULL;
            ptr->right = NULL;
        }
    } 
}