#include <iostream>
using namespace std;
class employee
{ // base class
    float salary;
    int id;

public:
    string name;
    employee(){};
};
/*Deriving class*/
/*syntax
class {{derived class name}} : {{visibility mode}} {{base class name}} {
 // class code
}
*/
class ceo : employee
{
public:
    ceo(string a)
    {   
        name  = a;
    }
    void names()
    {
        cout << "The name of the ceo is " << name;
    }
};

int main()
{
    string a;
    cin>>a;
    ceo n(a);
    n.names();
    // n.name; cannot be executed as the visiblity mode is pvt
    
    return 0;
}

/*
1. visibility mode:  can be either public or private depending on the use case
        a. if public than the public members of the base class become public member of derived class
        b. if pvt than the puclic members of the base class become private member of derived class
            (By default the visibility mode is pvt)
        c. The pvt members of the base cannot be inherited by any means in derived class

a default constructor should be created in the base class as the derived class call the constructor of the base class 
*/