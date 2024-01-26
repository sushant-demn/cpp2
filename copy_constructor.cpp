#include <iostream>
using namespace std;

class secret
{
    int b;

public:
    secret(); // null constructor
    void display();
    secret(int a)
    { // This is a default constructor
        b = a;
        cout << "\n";
        display();
    };
    secret(secret &obj)// refrence of object of class secret is given as an arguement
    { b = obj.b; //The variable b of the initial object is passed to the copying object
        cout<<"Copy constuctor invoked\n\n";
        display();
    };
};
void secret ::display()
{
    cout << b<<"\n\n";
}
int main()
{
    secret y(9), m(6); // y, m is initial (to be copied) object 
    secret z(y); // z is copying object using y object as arguements
}



/*
notes:
    1. When no copy constructor is provided the compiler uses the default one by itself
    2. To invoke the copy constructor the copying object should be declared after the initial object


*/