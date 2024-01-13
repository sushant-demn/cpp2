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
    data(void) // constructor created and defined, this consturctor is default constructor as it doesnt take any parameters
    {
        a = 50;
        b = 100;
    };
    void printdata(void)
    {
        cout << "The first number is " << a << " and the second number is " << b << "\n";
    };
};

/*properites 
* constructor overloading: having multiple constructor for same class but taking diff arguements
and compiler will decide which to execute on the basis of the arguements given
*/
class spatula{
    public:
     spatula(int a){
        cout<<"This is due to the arguement given as a integer "<<a;
    }
};
int main()
{
    data a;
    a.printdata();
    return 0;
}

/*this is a example of the default constructer which doesnt take any arguements*/