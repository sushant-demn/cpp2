#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
} *head = NULL, *new_node, *ptr;

void add()
{
    int a;
    cout << "Enter Data to be added\n";
    cin >> a;
    new_node = new node;
    new_node->data = a;
    new_node->next = head;
    head = new_node;
}
void display()
{
    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << "\n";
        ptr = ptr->next;
    }
}
int main()
{
    int ch;
    while (ch != 10)
    {
        cout << "Enter choice\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            add();
            break;
        case 2:
            display();
            break;
        default:
            break;
        }
    }

    return 0;
}