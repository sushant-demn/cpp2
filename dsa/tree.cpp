#include <iostream>

using namespace std;
struct node
{
    int data;

    node *right, *left;
} *root = NULL, *new_node, *ptr;

void insertion(int da)
{
    new_node = new node;
    new_node->data = da;
    new_node->left = NULL;
    new_node->right = NULL;

    if (root == NULL)
    {
        root = new_node;
    }
    else
    {
        ptr = root;
        struct node *parent;
        while (ptr != NULL)
        {
            parent = ptr;
            if (da > (ptr->data))
            {
                ptr = ptr->right;
            }
            else
            {
                ptr = ptr->left;
            }
        }
        if (da > parent->data)
        {
            parent->right = new_node;
        }
        else
        {
            parent->left = new_node;
        }
    }
}

void inorder(struct node *pt = root)
{
    if (pt != NULL)
    {
        inorder(pt->left);
        cout << pt->data << " ";
        inorder(pt->right);
    }
}
void postorder(struct node *pt = root)
{
    if (pt != NULL)
    {
        inorder(pt->left);
        inorder(pt->right);
        cout << pt->data << " ";
    }
}
void preorder(struct node *pt = root)
{
    if (pt != NULL)
    {
        cout << pt->data << " ";
        inorder(pt->left);
        inorder(pt->right);
    }
}

int main()
{
    int ch, d;

    while (ch != 10)
    {
        cout << "\nSelect option from below \n"
             << "1 .Insert Data in Tree: \n"
             << "2. Traverse Tree\n"
             <<"10. Exit\n";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter Data to Inserted: ";
            cin >> d;
            insertion(d);
            break;
        case 2:
            cout << "inorder: ";
            inorder();
            cout << '\n';
            cout << "postorder: ";
            postorder();
            cout << '\n';
            cout << "preorder: ";
            preorder();
            break;
        default:
            break;
        }
    }

    return 0;
}