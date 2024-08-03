#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;

void insertion(int new_data) // insertion at beginning
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = new_data;
    ptr->next = head;
    head = ptr;
}

void insertion_end(int new_data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = new_data;
    if (head == NULL)
    {

        new_node->next = head;
        head = new_node;
    }
    else
    {

        struct node *ptr;
        ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = new_node;
        new_node->next = NULL;
    }
}

void insertion_pos(int new_data, int pos)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = new_data;
    int count = 0;
    if (pos == 1)
    {
        new_node->next = head;
        head = new_node;
    }
    else
    {
        struct node *prev;
        struct node *ptr;
        while (ptr != NULL)
        {
            count++;
            if (count == pos)
            {
                break;
            }
            else
            {
                prev = ptr;
                ptr = ptr->next;
            }
            new_node->next = ptr;
            prev->next = new_node;
        }
    }
}

void display()
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}

int main()
{
    insertion_end(5);
    insertion_end(6);
    insertion_end(7);
    insertion_pos(8, 1);
    insertion_pos(9, 3);

    display();
    return 0;
}