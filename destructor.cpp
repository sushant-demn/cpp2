#include <iostream>
using namespace std;

class run
{
    int b;

public:
    run(int a) // This is the constructor run as the object is created
    {
        b = a;

        cout << "Constructor invoked for object"
             << "\n";
        cout << b << "\n";
    }

    ~run() // destructor used to destruct (destroy the object) runs at ending of the block
    {

        cout << "destructor invoked for object"
             << "\n";
        cout << b << "\n";
    }

    void display();
};

void run ::  display(){
    cout<<b<<"\n";
};
int main()
{ // main block
    run a(1);
    { // 2nd block {} is known as a
        cout << "block 2\n";
        run b(2), c(3);
        a.display(); //will be able to run as the object a gets destroyed at the end of main block 
        b.display();
    };
    a.display();
  //b.display();  wont be able to execute as the object b is destructed at the ending of the 2nd block
   
    return 0;
}

/*
notes
    1. destructor is use
*/