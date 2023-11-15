#include <iostream>
using namespace std;
class data
{
    int a;
    int b;

public:
    
    data(int y, int x) /* constructor created and defined, This is a parameterized constructor as it takes arguements to operate*/ 
    {
        a = y;
        b = x;
    };
    void printdata(void)
    {
        cout << "The first number is " << a << " and the second number is " << b << "\n";
    };
};

int main()
{
    data a(3,6);/*this is a implicit call*/
    data b = data(8,16); /*This is a explicit call*/
    a.printdata();
    b.printdata();
    return 0;
}