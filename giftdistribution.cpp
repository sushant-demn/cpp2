#include <iostream>
using namespace std;
static int gift1 = 1;
static int gift2 = 1;
class gift
{
     int a = 0;
     int b = 0;

public:
    void func1(); // placing gift one
    void func2(); // placing gift two
    void display(gift &obj);
};

void gift ::func1()
{
    a = a + gift1;
};
void gift ::func2()
{
    b = b + gift2;
};

void gift ::display(gift &obj)
{
    cout << "The gift1 are: "<< a << ", The gift2 are: " << b << "\n";
}
int main()
{
    gift arr[4]{};
    int x = 7;
    int y = 10;

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            arr[j].func1();
            --x;
            
            if (x == 0)
            {   
                i = 7;
                break;
            };
        };
    }
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 4; j++)
        {
        
            arr[j].func2();
            --y;
            
            if (y == 0)
            {   
                i = 7;
                break;
            };
        };
    }

    for (int i = 0; i < 4; i++)
    {    cout<< "for person "<<i+1<<" ";    
        arr[i].display(arr[i]);
    }
    
   
    return 0;
}