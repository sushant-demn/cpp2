// multi level inheritance

#include <iostream>
using namespace std;
class school
{
    string a;

public:
    void setname();
    void getname();
    school(){};
};
class division : public school
{
protected:
    int roll;

public:
    void setroll();
    void getroll();
};

class student : protected division
{
public:
    student();
};

void school ::setname()
{
    cout << "Whats the name of student ";
    cin >> a;
}
void school ::getname()
{
    cout << "The name of the student is " << a<<"\n";
}
void division ::setroll()
{
    cout << "Whats the roll number of the student: ";
    cin >> roll;
}
void division ::getroll()
{
    cout << "The roll number of the student is " << roll<<"\n";
}
student::student() //defulter for student class 
{
    setname(); //derived from division which is derived from school
    setroll(); //derived from division 
    cout << "The roll number of student is " << roll<<"\n"; //int roll is derived from division
    getname(); //derived from division which is derived from school
}
int main()
{
 student a;
    return 0;
}

/*
notes

multilevel inheritance is about deriving class from another derived class


*/