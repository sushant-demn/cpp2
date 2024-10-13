#include<bits/stdc++.h>
using namespace std;

struct stack1
{
    char data;
    struct stack1 *next;
}*top = NULL , *new_node;

void display(){
    struct stack1 *ptr = top;
    cout<<"\nThe elements in Stack are: ";
    while (ptr != NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr -> next;
    }
}

void push(){
    char new_data;
    cout<<"Enter data you want to enter: ";
    cin>>new_data;

    new_node  = new stack1;
    new_node -> data = new_data;
    new_node ->next  = top;
    top = new_node;
}
void pop(){
    struct stack1 *temp = top;
    top  = temp ->next;
    delete temp;
}

void menu(){
    int ch;
    while (ch != 4)
    {cout<<"Enter choice: ";
    cin>>ch;

        switch (ch)
        {
        case 1: 
            push();
            display();
            break;
        
        case 2:
            pop();
            display();
            break;

        }

    }
    
}
int main(){
menu();
    return 0;
}