#include <iostream>
using namespace std;
class data
{
    int a;
    int b;

public:
    /*The constructor is the special member fucntion with the same name as the class and is invoked
    as soon as the object of the class is created
    •) can be used to initialize any data
    •) is invoked for every object created 
    •) should be same name as the class 
    •) should be written in the puclic section as the function
    •) they dont have any written type as any other function
    •) cannot refer to its address
    */
    data(void) // constructor created and defined
    {
        cout << "Whats the first number\n";
        cin >> a;
        cout << "Whats the first number\n";
        cin >> b;
    };
    void printdata(void)
    {
        cout << "The first number is " << a << " and the second number is " << b << "\n";
    };
};

int main()
{
    data a;
    a.printdata();
    return 0;
}

/*this is a example of the default constructer which doesnt take any arguements*/