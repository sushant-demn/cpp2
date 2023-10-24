#include <iostream>
using namespace std;
class something
{
    int b;
    static int count;

public:
    void takeid(void)
    { cout<<"enter the object id"<<"\n";
        cin >> b;
        count++; 
    }
    void idk(void){
        cout<<"The object id is "<< b <<" and the object number is ";
    }
    static void idgive(void)
    {   
        cout << count;
    }

};
int something :: count;
int main()
{
something niggas;
niggas.takeid();
niggas.idk();
niggas.idgive();
    return 0;
}