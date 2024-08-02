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
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = new_data;
    ptr->next = NULL;
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
    insertion(2);
    insertion(3);
    insertion(4);
    display();
    return 0;
}