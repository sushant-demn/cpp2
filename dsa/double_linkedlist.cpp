#include <bits/stdc++.h>
using namespace std;
int main();
struct node
{
    int data;
    struct node *next;
    struct node *prev;
} *head = NULL, *new_node;

void display()
{
    struct node *ptr = head;
    cout << "The elements in the list are: ";
    while (ptr->next != head)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << ptr->data << '\n';
}
void display_rev()
{
    node *ptr = head->prev;
    while (ptr->prev != head->prev)
    {
        cout << ptr->data << " ";
        ptr = ptr->prev;
    }
    cout << ptr->data << '\n';
}
void insert_beg()
{
    int new_data;
    cout << "Enter the Data to be added: \n";
    cin >> new_data;
    new_node = new node;
    new_node->data = new_data;

    if (head == NULL)
    {
        new_node->next = new_node->prev = new_node;
        head = new_node;
    }
    else
    {
        new_node->next = head;
        new_node->prev = head->prev;
        head->prev->next = new_node;
        head->prev = new_node;
        head = new_node;
    }
}
void insert_end()
{
    int new_data;
    cout << "Enter the Data to be added: \n";
    cin >> new_data;
    new_node = new node;
    new_node->data = new_data;

    if (head == NULL)
    {
        new_node->next = new_node->prev = new_node;
        head = new_node;
    }
    else
    {
        new_node->next = head;
        new_node->prev = head->prev;
        head->prev->next = new_node;
        head->prev = new_node;
    }
}

void insert_pos()
{
    int new_data, pos;
    cout << "Enter the Data to be added and position: \n";
    cin >> new_data >> pos;
    new_node = new node;
    new_node->data = new_data;
    if (pos == 1)
    {
        new_node->next = head;
        new_node->prev = head->prev;
        head->prev->next = new_node;
        head->prev = new_node;
        head = new_node;
    }
    else
    {
        bool flag = false;
        int c = 0;
        node *ptr = head;
        while (ptr->next != head)
        {
            c++;
            if (c == pos)
            {
                flag = true;
                break;
            }
            else
            {
                ptr = ptr->next;
            }
        }
        if (flag == false)
        {
            cout << "\nPosition out of bound\n"
                 << ptr->data;
        }
        else
        {
            new_node->next = ptr;
            new_node->prev = ptr->prev;
            ptr->prev->next = new_node;
            ptr->prev = new_node;
        }
    }
}
void del_beg()
{
    node *ptr = head;
    head->next->prev = head->prev;
    head->prev->next = head->next;
    head = head->next;
    delete ptr;
}
void del_end()
{
    node *ptr = head->prev;
    ptr->prev->next = ptr->next;
    ptr->next->prev = ptr->prev;
    delete ptr;
}
void del_pos()
{
    int pos;
    cout << "Enter the position to be deleted: ";
    cin >> pos;
    node *ptr = head;
    if (pos == 1)
    {
        head->next->prev = head->prev;
        head->prev->next = head->next;
        head = head->next;
        delete ptr;
    }
    else
    {
        bool flag = false;
        int c = 0;
        while (ptr->next != head)
        {
            c++;
            if (c == pos)
            {
                flag = true;
                break;
            }
            else
            {
                ptr = ptr->next;
            }
        }
        if (flag == false)
        {
            cout << "\nPosition out of bound\n"
                 << ptr->data;
        }
        else
        {
            ptr->next->prev = ptr->prev;
            ptr->prev->next = ptr->next;
            delete ptr;
        }
    }
}

void menu()
{
    int ch;
    while (ch != 9)
    {

        cout << "\nChoose one of the options: " << "\n"
             << "1. Insertion at the beggining of the nodes\n"
             << "2. Insertion at the end of the nodes\n"
             << "3. Insertion at position in the node\n"
             << "4. Display list in reverse\n"
             << "5. Search element in the node \n"
             << "6. delete element in the node at the beggining \n"
             << "7. delete element in the node at the end \n"
             << "8. delete element in the node at the position \n"
             << "9. Exit the program";
        cout << "\n";
        cin >> ch;
        switch (ch)
        {

        case 1:
            insert_beg();
            cout << "\n";
            display();
            break;
        case 2:
            insert_end();
            cout << "\n";
            display();
            break;
        case 3:
            insert_pos();
            cout << "\n";
            display();
            break;
        case 4:
            display_rev();
            break;

        case 5:
            main();
            break;
        case 6:
            del_beg();
            display();
            break;
        case 7:
            del_end();
            display();
            break;
        case 8:
            del_pos();
            display();
            break;
        }
    }
}
int main()
{
    menu();
    return 0;
}