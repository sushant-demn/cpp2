#include <bits/stdc++.h>

using namespace std;

struct sll
{
    int value;
    struct sll *right;
} *HEAD = NULL, *newnode;

void display()
{
    struct sll *ptr = HEAD;
    while (ptr != NULL)
    {
        cout << ptr->value << " ";
        ptr = ptr->right;
    }
}
void insert_beg()
{
    newnode = new sll;
    newnode->right = NULL;
    cout << "Enter the value to be added: ";
    cin >> newnode->value;

    if (HEAD == NULL)
    {
        HEAD = newnode;
    }
    else
    {
        newnode->right = HEAD;
        HEAD = newnode;
    }
}
void insert_at()
{
    int pos;
    cout << "Which position you want to add at: ";
    cin >> pos;
    newnode = new sll;
    newnode->right = NULL;
    cout << "Enter the value to be added: ";
    cin >> newnode->value;
    try
    {
        if (pos == 1)
        {
            newnode->right = HEAD;
            HEAD = newnode;
        }
        else
        {
            struct sll *ptr = HEAD;
            for (int i = 2; i < pos; i++)
            {
                ptr = ptr->right;
            }
            newnode->right = ptr->right;
            ptr->right = newnode;
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}
void insert_end()
{
    newnode = new sll;
    newnode->right = NULL;
    cout << "Enter the value to be added: ";
    cin >> newnode->value;

    if (HEAD == NULL)
    {
        HEAD = newnode;
    }
    else
    {
        struct sll *ptr = HEAD;
        while (ptr->right != NULL)
        {
            ptr = ptr->right;
        }
        ptr->right = newnode;
    }
}

int main()
{
    int ch = 0;

    while (ch != 10)
    {
        cout << "\nChoose from the options \n";
        cout << "1. Add at the beginning of linked list\n";
        cout << "2. Add at the ending of linked list\n";
        cout << "3. Add at position on linked list\n";
        cout << "9. Display the linked list\n";
        cout << "10. Exit\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            insert_beg();
            break;
        case 2:
            insert_end();
            break;
        case 3:
            insert_at();
            break;
        case 9:
            display();
            break;
        case 10:
            break;
        default:
            cout << "Not an option\n";
            break;
        }
    }
}
