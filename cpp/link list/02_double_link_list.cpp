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
struct node *head, *pointer = head, *temp;

void create_link_list()
{
    pointer = head;
    int nodeNum;

    cout << "enter number of nodes to create : ";
    cin >> nodeNum;

    struct node *ptr = (struct node *)malloc(sizeof(struct node *));
    if (ptr == NULL)
    {
        return;
    }
    else
    {

        cout << "data : ";
        cin >> ptr->data;

        head = ptr;
        ptr->next = NULL;
        ptr->prev = NULL;

        pointer = head;
        for (int i = 2; i <= nodeNum; i++)
        {
            struct node *ptr = (struct node *)malloc(sizeof(struct node *));
            cout << "data : ";
            cin >> ptr->data;

            pointer->next = ptr;
            ptr->prev = pointer;
            ptr->next = NULL;

            pointer = pointer->next;
        }
    }
}

void traverse()
{
    pointer = head;
    for (; pointer != NULL; pointer = pointer->next)
    {
        cout << pointer->data << "--> ";
    }
    cout << endl;
}

void reverse_traverse()
{
    pointer = head;
    while (pointer->next != NULL)
    {
        pointer = pointer->next;
    }

    for (; pointer != NULL; pointer = pointer->prev)
    {
        cout << pointer->data << "--> ";
    }
    cout << endl;
}

void insert_at_begning()
{
    pointer = head;
    struct node *ptr = (struct node *)malloc(sizeof(struct node *));
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
    pointer = head;
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
        struct node *ptr = (struct node *)malloc(sizeof(struct node *));
        cin >> ptr->data;
        pointer->next = ptr;
        ptr->prev = pointer;
        ptr->next = NULL;
    }
    return;
}

void insert_at_position()
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node *));
    int position;
    cout << "position of insertion : ";
    cin >> position;
    cout << "enter data : ";
    cin >> ptr->data;

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
        pointer = head;
        head = head->next;
        head->prev = NULL;
        free(pointer);
        return;
    }
}

void deletion_at_end()
{
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
        temp = pointer->next;
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
            temp = pointer->next;
            pointer->next = pointer->next->next;
            free(temp);
            return;
        }
    }
}

void search()
{
    int position = 1;
    pointer = head;
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
         << "3.insertion at begning" << endl
         << "4.insertion at end" << endl
         << "5.insertion at any position" << endl
         << "6.deletion at begning" << endl
         << "7.deletion at end" << endl
         << "8.deletion at any position" << endl
         << "9.search at any number" << endl
         << "10.exit" << endl;

    cases();
}