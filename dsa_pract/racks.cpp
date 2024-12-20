#include <bits/stdc++.h>
using namespace std;

struct node
{
    char value;
    node *next;
} *top = NULL, *newnode;
struct node2
{
    string value;
    node2 *next;
} *top2 = NULL, *newnode2;

void display()
{
    node *ptr = top;
    while (ptr != NULL)
    {
        cout << ptr->value << "\n";
        ptr = ptr->next;
    }
}

void push(char a)
{
    newnode = new node;
    newnode->value = a;
    newnode->next = top;
    top = newnode;
}
void push2(string a)
{
    newnode2 = new node2;
    newnode2->value = a;
    newnode2->next = top2;
    top2 = newnode2;
}
string pop2()
{
    node2 *temp = top2;
    top2 = temp->next;
    string c = temp->value;
    delete temp;
    return c;
}
char pop()
{
    node *temp = top;
    top = temp->next;
    char c = temp->value;
    delete temp;
    return c;
}
int precedence(char a)
{
    if (a == '-' or a == '+')
    {
        return 1;
    }
    else if (a == '*' or a == '/')
    {
        return 2;
    }
    else if (a == '^')
    {
        return 3;
    }
    else
    {
        return 0;
    }
}
void postfix(string a)
{
    string p;
    int l = a.size();
    int i = 0;
    a += ')';
    push('(');

    while (top != NULL)
    {
        if (a[i] == '(')
        {
            push('(');
        }
        else if (precedence(a[i]))
        {

            while (precedence(top->value) >= precedence(a[i]))
            {
                p += pop();
            }
            push(a[i]);
        }
        else if (a[i] == ')')
        {

            while (top->value != '(')
            {
                p += pop();
            }
            char temp = pop();
            temp = '\0';
        }
        else
        {

            p += a[i];
        }
        i++;
    }
    cout << "The postfix Expression is : " << p;
}
void prefix(string a)
{
    string p;
    int i = a.size() - 1;
    a[-1] = '(';
    push(')');

    while (top != NULL)
    {
        if (a[i] == ')')
        {
            push(')');
        }
        else if (precedence(a[i]))
        {

            while (precedence(top->value) >= precedence(a[i]))
            {
                p += pop();
            }
            push(a[i]);
        }
        else if (a[i] == '(')
        {

            while (top->value != ')')
            {
                p += pop();
            }
            char temp = pop();
            temp = '\0';
        }
        else
        {

            p += a[i];
        }
        i--;
    }
    cout << "The prefix Expression is : ";
    for (int i = 0; i < p.size(); i++)
    {
        cout << a[p.size() - i - 1];
    }
    cout << "\n";
}
void evalpost(string a)
{
    string x, b, c, p;

    int i = 0;
    a += ')';
    while (a[i] != ')')
    {
        cout << i << "\n";
        if (!precedence(a[i]))
        {
            string y = "";
            y = a[i];
            cout << y << "\n";
            push2(y);
        }
        else
        {
            x = (pop2() + ')');
            b = ('(' + pop2());

            c = b + a[i] + x;
            cout << c << "\n";
            push2(c);
            p = c;
        }
        if (a[i] == ')')
        {
            break;
        }
        i++;
    }
    cout << "The evalpost is " << p;
}

int main()
{
    string a;
    cin >> a;
    // postfix(a);
    // prefix(a);
    // cin >> a;
    evalpost(a);
    return 0;
}