#include <iostream>
using namespace std;

struct node
{
    int data;

    node *next;
    node *prev;
    node *up;
    node *down;
};
struct node *head = NULL;

class insertion
{
public:
    void first_insertion()
    {
        struct node *ptr = new node();
        ptr->next = NULL;
        ptr->prev = NULL;
        ptr->up = NULL;
        ptr->down = NULL;
        head = ptr;
    }
};
