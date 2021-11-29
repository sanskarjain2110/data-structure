#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

// link list node
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL;

void create_link_list()
{
    int nodeNum;
    cout << "enter number of nodes to create : ";
    cin >> nodeNum;

    struct node *ptr = new struct node();
    cout << "data : ";
    cin >> ptr->data;
    if (ptr == NULL)
    {
        cout << "Node not allocated" << endl;
        return;
    }
    else
    {
        head = ptr;
        ptr->next = NULL;
        ptr->prev = NULL;
        struct node *pointer = head;

        while (nodeNum > 1)
        {
            struct node *ptr = new struct node();
            cout << "data : ";
            cin >> ptr->data;
            if (ptr == NULL)
            {
                cout << "Node not allocated" << endl;
                return;
            }
            else
            {

                pointer->next = ptr;
                ptr->prev = pointer;
                ptr->next = NULL;

                pointer = ptr;
                nodeNum--;
            }
        }
        cout << "list created" << endl;
        return;
    }
}

void traverse()
{
    struct node *pointer = head;
    for (; pointer != NULL; pointer = pointer->next)
    {
        cout << pointer->data << " ";
    }
    cout << endl;
}

void reverse_traverse()
{
    struct node *pointer = head;
    while (pointer->next != NULL)
    {
        pointer = pointer->next;
    }
    traverse();
}

void insert_at_begning()
{
    struct node *pointer = head;
    struct node *ptr = new struct node();
    cout << "enter data : ";
    cin >> ptr->data;

    if (pointer == NULL)
    {
        return;
    }
    else
    {
        ptr->next = head;
        ptr->prev = NULL;
        head = ptr;
    }

    return;
}

void insert_at_end()
{
    struct node *pointer = head;
    if (pointer == NULL)
    {
        return;
    }
    else
    {
        while (pointer->next != NULL)
        {
            pointer = pointer->next;
        }
        struct node *ptr = new struct node();
        cin >> ptr->data;
        pointer->next = ptr;
        ptr->prev = pointer;
        ptr->next = NULL;
    }
    return;
}

void insert_at_position()
{
    struct node *ptr = new struct node();
    int position;
    cout << "position of insertion : ";
    cin >> position;
    cout << "enter data : ";
    cin >> ptr->data;

    struct node *pointer = head;
    if (pointer == NULL)
    {
        return;
    }
    else
    {
        if (head == NULL)
        {
            return;
        }
        else
        {
            while (position > 2)
            {
                pointer = pointer->next;
                position--;
            }
            ptr->prev = pointer;
            (pointer->next)->prev = ptr;
            ptr->next = pointer->next;
            pointer->next = ptr;
            return;
        }
    }
}

void deletion_at_begning()
{

    if (head == NULL)
    {
        return;
    }
    else
    {
        struct node *pointer = head;
        head = head->next;
        head->prev = NULL;
        free(pointer);
        return;
    }
}

void deletion_at_end()
{
    struct node *pointer = head;
    if (pointer = NULL)
    {
        return;
    }
    else
    {
        while ((pointer->next)->next != NULL)
        {
            pointer = pointer->next;
        }
        struct node *temp = pointer->next;
        pointer->next = NULL;
        free(temp);
    }
}

// solve by your brain
void deletion_at_specific_position()
{
    int position;
    cout << "position of insertion : ";
    cin >> position;
    struct node *pointer = head;
    if (pointer == NULL)
    {
        return;
    }
    else
    {
        if (head == NULL)
        {
            return;
        }
        else
        {
            while (position > 2)
            {
                pointer = pointer->next;
                position--;
            }
            struct node *temp = pointer->next;
            pointer->next = pointer->next->next;
            free(temp);
            return;
        }
    }
}

void search()
{
    int position = 1;
    struct node *pointer = head;
    int number;
    cin >> number;

    if (pointer == NULL)
    {
        return;
    }
    else
    {
        while (pointer->next != NULL)
        {
            if (pointer->data == number)
            {
                cout << number << " is present at " << position << " node" << endl;
                return;
            }
        }
        cout << number << " is not present" << endl;
        return;
    }
}

void cases()
{
    int input;
    cout << "enter input : ";
    cin >> input;

    switch (input)
    {
    case 1:
        create_link_list();
        break;
    case 2:
        traverse();
        break;
    case 3:
        reverse_traverse();
        break;
    case 4:
        insert_at_begning();
        break;
    case 5:
        insert_at_end();
        break;
    case 6:
        insert_at_position();
        break;
    case 7:
        deletion_at_begning();
        break;
    case 8:
        deletion_at_end();
        break;
    case 9:
        deletion_at_specific_position();
        break;
    case 10:
        search();
        break;
    case 11:
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
         << "1.create node" << endl
         << "2.traverse the list" << endl
         << "3.reverse traverse the list" << endl
         << "4.insertion at begning" << endl
         << "5.insertion at end" << endl
         << "6.insertion at any position" << endl
         << "7.deletion at begning" << endl
         << "8.deletion at end" << endl
         << "9.deletion at any position" << endl
         << "10.search at any number" << endl
         << "11.exit" << endl;

    cases();

    // create_link_list();
    // cout << pointer->next->prev->data;
}