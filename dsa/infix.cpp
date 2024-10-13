#include<bits/stdc++.h>
using namespace std;

struct stack1
{
    char data;
    struct stack1 *next;
}*top1 = NULL , *new_node1;
struct stack2
{
    int data;
    struct stack2 *next;
}*top2 = NULL , *new_node2;
void push(char c){
    new_node1  = new stack1;
    new_node1 -> data = c;
    new_node1 ->next  = top1;
    top1 = new_node1;
}
void push2(int c){
    new_node2  = new stack2;
    new_node2 -> data = c;
    new_node2 ->next  = top2;
    top2 = new_node2;
}
char pop1(){
    struct stack1 *temp = top1;
    top1  = temp ->next;
    char c = temp ->data;
    delete temp;
    return c;
}
int pop2(){
    struct stack2*temp2 = top2;
    top2  = temp2 ->next;
    int c = temp2 ->data;
    delete temp2;
    return c;
}
int precedence(char x){
if(x == '^'){
    return 3;
}

else if (x == '*' or x == '/')
{
    return 2;
}
else if (x == '+' or x == '-')
{
    return 1;
}
else {
    return 0;
}
}

void infixtopost(string a){
string p;
int i = 0 , l;
push('(');
l = a.size();
a += ')';

while (top1 != NULL)
{
    if(a[i] == '('){
        push('(');
    }
    else if(precedence(a[i])){
        while (precedence(top1 ->data) >= precedence(a[i]))
        {
            p+=pop1();
        }
        push(a[i]);
        
    }
    else if(a[i] == ')'){
        while (top1->data != '(')
        {
            p += pop1();
        }
        struct stack1 *temp = top1;
        top1 = temp -> next;
        delete temp;
    }
    else{
        p+=a[i];
    }
    i++;
}
cout<<"\n The post fix expression is: "<<p<<"\n";
}

void evalpost(string x){
    int a=0 , b=0,c=0;
    int i = 0;

    x+=')';
    while (x[i] != ')')
    {
        if(isdigit(x[i])){
            push2(int(x[i]-'0'));
        }
        else{
            a=pop2();
            b=pop2();
        switch (x[i])
        {
        case '+':
            c = a + b;
            break;
        case '-':
            c = a - b;
            break;
        case '*':
            c = a * b;
            break;
        case '/':
            c = a / b;
            break;
        }
        push2(c);
        }
        i++;
    }
    cout<<"\n value of the expression is: "<<top2->data;

}
void infixtopre(string a){
    string p;
    stack1 *ptr;
    int i = a.size()-1;
    push(')');
    a[-1] = '(';
    while (top1 != NULL){
        
        if(a[i] == ')'){ push(')');}
        
        else if(precedence(a[i])){
            while (precedence(a[i]<=precedence(top1->data)))
            {
            p+=pop1();
            }
            push(a[i]);
        }
        else if(a[i] == '('){
            while (top1 ->data != ')')
            {
                p+=pop1();
            }
            ptr = top1;
            top1 = top1 ->next;
            delete ptr;
            
        }
        else{
            p+=a[i];
        }
        i--;
    }    
    for (int y= p.size()-1; y >= 0; y--)
    {
        cout<<p[y];
    }
}
void evalpre(string x){
    int i = x.size()-1 , a, b ,c;
    x[-1] = '(';
    while (x[i] != '('){
                if(isdigit(x[i])){
            push2(int(x[i]-'0'));
        }
        else{
            a=pop2();
            b=pop2();
        switch (x[i])
        {
        case '+':
            c = a + b;
            break;
        case '-':
            c = a - b;
            break;
        case '*':
            c = a * b;
            break;
        case '/':
            c = a / b;
            break;
        }
        push2(c);
        }
        i--;
    }
    cout<<"\n value of the expression is: "<<top2->data;
}
void menu(){
    int ch;
    string infix;
    string post;
    while (ch != 10)
    {          cout<<"\n"
                <<"1. Infix to Postfix\n"
                <<"2. Evaluate Postfix\n"
                <<"3. Infix to Prefix\n"
                <<"4. Evaluate Prefix\n"
                <<"10. Exit\n"
                <<"Select operation: \n";
                cin>>ch;
        switch (ch){
            case 1:
             cout<<"Enter Infix Expression: ";
                cin>>infix;
                infixtopost(infix);
                break;
            case 2:
                cout<<"Enter Postfix Expression: ";
                cin>>post;
                evalpost(post);
                break;
            case 3:
                cout<<"Enter Infix Expression: ";
                cin>>infix;
                infixtopre(infix);
                break;
            case 4:
                cout<<"Enter Prefix Expression: ";
                cin>>post;
                evalpre(post);
                break;
        }
        
    }
    

}

int main(){
    menu();
    return 0;
}