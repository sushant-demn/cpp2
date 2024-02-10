// protected access modifier

#include <iostream>
#include <vector>
using namespace std;
class base // base class
{
protected:  //protected members
    int a;

public:
    base(){};
    int b, c;
    void setdata();
    void getdata();
    int getdata1();
};
void base ::setdata()
{
    cin >> a >> b >> c;
}
void base ::getdata()
{
    cout << "The data 1 is " << a << "\nThe data 2 is " << b << "\nThe data3 is " << c << "\n";
}
int base ::getdata1()
{
    return a;
};
class derived : public base // derived class from base class uses public member of base class as public member of derived class
{
    int data;

public:
    derived(){};
    void process(); // squares int a
    void display();
};
void derived ::process()
{
    data = getdata1() * getdata1();
}
void derived ::display()
{
    cout << "The square of data 1 " << data << "\n";
}
int main()
{
    derived der;
    der.setdata();
    der.getdata();
    der.process();
    der.display();
//    der.a; cannot be accessed as the member is protected type

cout<<"\n"<<der.b<<" "<<der.c; //can be accessed as the members are public

    return 0;
}

/*notes
.Used to give access of a "secure" member to other derived class from the base by using protected member type

Protected member type:  give access of the member init to the other derived class but not to elsewhere

derivation type ➡️      private     protected    public
membertype ⬇️
private                   N/A           N/A         N/A
protected               private      protected    protected
public                  private      protected      public
*/