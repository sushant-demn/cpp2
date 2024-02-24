// Multiple inheritance
#include <iostream>
using namespace std;

class school
{
    string a;

public:
    void setname();
    void getname();
    school()
    {
        setname();
    };
};
class employee : public school
{
public:
    virtual void getpost(){
        cout<<"There is no post for this employee";
    };
    employee();
};
class clerk : public employee
{

public:
    void getpost() override;
    clerk(){
        getpost();
    };
};
class teacher : public employee
{
public:
    void getpost() override;
    teacher(){
        getpost();
    }
};
void school ::setname()
{
    cout << "Enter the name of the employee: ";
    cin >> a;
};
// void school ::getname()
// {
//     cout << "The name of the employee is " << a << "\n";
// }
// void clerk::getpost()
// { cout<<"The post of the employee is clerk ";
// }
// void teacher::getpost()
// { cout<<"The post of the employee is teacher ";
// }
int main()
{
    teacher a;
    
    //school a;
    return 0;
}

/*
notes
1. mutliple inheritance consists of single derived class made from multiple base classes vice versa

*/