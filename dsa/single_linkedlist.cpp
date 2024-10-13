#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
} *head = NULL, *new_node;

void insertion() // insertion at beginning
{
    int new_data;
    cout << "\nEnter the Data to be added: \n";
    cin >> new_data;
    struct node *ptr = new node;
    ptr->data = new_data;
    ptr->next = head;
    head = ptr;
}

void insertion_end()
{
    int new_data;
    cout << "\nEnter the Data to be added: \n";
    cin >> new_data;

    new_node = new node;
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
        // new_node->next = NULL;
    }
}

void insertion_pos()
{
    int new_data, pos;
    cout << "\nEnter the Data to be added and its position: \n";
    cin >> new_data >> pos;
    new_node = new node;
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
        ptr = head;
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
        }
        new_node->next = ptr;
        prev->next = new_node;
    }
}
void cnt_node()
{
    int a = 0;
    struct node *ptr = head;
    while (ptr != NULL)
    {
        a++;
        ptr = ptr->next;
    }
    cout << "\nThe number of nodes are: " << a << "\n";
}

void display()
{
    struct node *ptr = head;
    cout << "\nThe elements in the list are: ";

    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << "\n\n\n";
}

void search()
{
    int n;
    cout << "Enter the element to be searched in the list\n";
    cin >> n;
    struct node *ptr = head;
    bool flag = false;
    int a = 0;

    while (ptr != NULL)
    {
        if (ptr->data == n)
        {
            flag = true;
            cout << "\nThe element is found at: " << a + 1 << "\n\n";
            break;
        }
        else
        {
            ptr = ptr->next;
            a++;
        }
    }
    if (flag == false)
    {
        cout << "\nElement not found in the list\n\n";
    }
}
void del_beg()
{
    struct node *ptr = head;
    head = ptr->next;
    delete ptr;
}
void del_end()
{
    struct node *ptr = head;
    struct node *prev;

    if (head == NULL)
    {

        head = ptr->next;
        delete ptr;
    }
    else
    {

        while (ptr->next != NULL)
        {
            prev = ptr;
            ptr = ptr->next;
        }
        delete ptr;
        prev->next = NULL;
    }
}
void del_pos()
{
    struct node *ptr = head;
    struct node *prev;
    int pos;
    cout << "\nEnter the position at which you want to delete: \n";
    cin >> pos;
    int count = 0;
    if (pos == 1)
    {
        head = ptr->next;
        delete ptr;
    }
    else
    {
        struct node *prev;
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
        }
        prev->next = ptr->next;
        delete ptr;
    }
}
void menu()
{
    int ch;
    while (ch != 10)
    {

        cout << "\nChoose one of the options: " << "\n"
             << "1. Insertion at the beggining of the nodes\n"
             << "2. Insertion at the end of the nodes\n"
             << "3. Insertion at position in the node\n"
             << "4. Count the number of nodes\n"
             << "5. Search element in the node \n"
             << "6. delete element in the node at the beggining \n"
             << "7. delete element in the node at the end \n"
             << "8. delete element in the node at the position \n"
             << "10. Exit the program";
        cout << "\n";
        cin >> ch;
        switch (ch)
        {

        case 1:
            insertion();
            cout << "\n";
            display();
            break;
        case 2:
            insertion_end();
            cout << "\n";
            display();
            break;
        case 3:
            insertion_pos();
            cout << "\n";
            display();
            break;
        case 4:
            cnt_node();
            break;

        case 5:
            search();
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
