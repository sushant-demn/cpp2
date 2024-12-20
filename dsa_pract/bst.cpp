#include <bits/stdc++.h>
using namespace std;

struct node
{
    int value;
    struct node *right;
    struct node *left;
} *root = NULL, *newnode, *ptr;

void insert()
{
    newnode = new node;
    cout << "Enter the value of newnode: ";
    cin >> newnode->value;
    newnode->right = NULL;
    newnode->left = NULL;
    if (root == NULL)
    {
        root = newnode;
    }
    else
    {
        node *ptr = root;
        node *parent_ptr;
        while (ptr != NULL)
        {
            parent_ptr = ptr;
            if (ptr->value < newnode->value)
            {
                ptr = ptr->right;
            }
            else
            {
                ptr = ptr->left;
            }
        }
        if (parent_ptr->value < newnode->value)
        {
            parent_ptr->right = newnode;
        }
        else
        {
            parent_ptr->left = newnode;
        }
    }
}
void inorder(struct node *ptr)
{
    if (ptr->left != NULL)
    {
        inorder(ptr->left);
    }
    cout << ptr->value << " ";
    if (ptr->right != NULL)
    {
        inorder(ptr->right);
    }
}
node *findinmin(node *root)
{
    while (root && root->left)
    {
        root = root->left;
    }
    return root;
}

node *remove(node *root, int key)
{
    if (root->value > key)
    {
        root->left = remove(root->left, key);
    }
    else if (root->value < key)
    {
        root->right = remove(root->right, key);
    }
    else
    {
        if (!root->right && !root->left)
        {
            delete root;
            return nullptr;
        }
        else if (!root->left)
        {
            ptr = root->left;
            delete root;
            return ptr;
        }
        else if (!root->right)
        {
            ptr = root->right;
            delete ptr;
            return ptr;
        }
        else if (root->right && root->left)
        {
            ptr = findinmin(root->right);
            root->value = ptr->value;
            root->right = remove(root->right, ptr->value);
        }
    }
    return root;
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
            insert();
            break;
        case 2:
            inorder(root);
            break;
        case 3:
            cout << "Enter the value to be removed:";
            int x;
            cin >> x;
            remove(root, x);
            break;
        case 10:
            break;
        default:
            cout << "Not an option\n";
            break;
        }
    }
    return 0;
}