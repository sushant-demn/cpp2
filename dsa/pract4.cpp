// Circular array 


#include <bits/stdc++.h>

using namespace std;

class Circular_q{
    public:    
    int arr[30] , n;
    int front = -1 ,rear = -1;
    Circular_q(){
        cout<<"Enter the size of array: ";
        cin>>n;
    }
    void disp(){
        int i  = front;
        if(rear == -1){
            cout<<"Queue is empty\n";
        }
        else{
            cout<<"Queue: ";
        while (i != rear+1)
        {
            cout<<arr[i]<<" ";
            i = (i+1)%n;
        }
        }
    }
    void enque(){
        cout<<"Enter the number to be enqued: ";
        int a; cin>>a;
        if(front == -1 and rear == -1){
            arr[0] = a;
            front = 0 ;rear = 0;
        }
        else if((rear + 1) % n == 0){
            cout<<"Overflow\n";
        }
        else{
            rear = rear + 1 %n;
            arr[rear] = a;
        }
    }
    void deque(){
        if(front == -1){
            cout<<"Underflow\n";
        }
        else if(front == rear){
            front = -1;
            rear = -1;
        }
        else{
            arr[front] = 0;
            front = (front + 1) % n;
        }
    }
};



int main(){
    Circular_q n;
    int ch;
    while (ch != 4)
    {
         cout<<"\n"
                <<"1. Display Queue\n"
                <<"2. Enque Queue\n"
                <<"3. Deque Queue\n"
                <<"4. Exit\n"
                <<"Select operation: \n";
                cin>>ch;
        switch (ch)
        {
        case 1:
            n.disp();
            break;
        case 2:
            n.enque();
            break;
        case 3:
            n.deque();
            break;
        default:
            cout<<"Select Correct Option\n";
            break;
        }
    }
    
    return 0;
}

