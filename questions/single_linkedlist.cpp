#include<iostream>

using namespace std;
struct node
{
    int data;
    struct node *next;    
};
struct node* head = NULL;  

void insertion(int a){
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    new_node -> data = a;
    new_node -> next = head;
    head = new_node; 

}

void display()
{
    struct node* ptr;
    ptr = head;
    while (ptr != NULL)
    {
        cout<<ptr -> data<<" ";
        ptr = ptr -> next;
    }
}

int main()
{
for (int i = 1; i <= 10; i++)
{
    insertion(i);
}

display();

return 0;

}