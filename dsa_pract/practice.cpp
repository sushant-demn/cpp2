#include <iostream>
#include <ctype.h>
#include <fstream>
using namespace std;
class Student
{
    int roll;
    char div, name[30], addr[30];

public:
    void accept()
    {
        cout << "\nEnter Roll no. :";
        cin >> roll;
        cout << "\nEnter Division: ";
        cin >> div;
        cout << "\nEnter Name : ";
        cin >> name;
        cout << "\nEnter Address : ";
        cin >> addr;
    }
    void display()
    {
        cout << " " << roll << "\t" << div << "\t" << name << "\t" << addr << endl;
    }

    int getroll()
    {
        return roll;
    }
};

void addRecord()
{
    int n;
    ofstream obj("Student.txt");
    Student s;
    cout << "Enter no of student :";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        s.accept();
        obj.write((char *)&s, sizeof(s));
    }
    obj.close();
}

void append()
{
    Student s;
    ofstream obj("Student.txt", ios::app);
    s.accept();
    obj.write((char *)&s, sizeof(s));
    obj.close();
}

void displayAll()
{
    Student s;
    ifstream obj("Student.txt");
    cout << "Roll\t div\tName\tAddress\n";
    while (obj.read((char *)&s, sizeof(s)))
    {
        s.display();
    }
    obj.close();
}

void search(int r)
{
    int flag = 0;
    Student s;
    ifstream obj("Student.txt");
    while (obj.read((char *)&s, sizeof(s)))
    {
        if (s.getroll() == r)
        {
            flag = 1;
            cout << "Roll\t div\tName\tAddress\n";
            s.display();
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Record not found.";
    }
}

void delRec(int r)
{
    int flag = 0;
    Student s;
    ifstream obj1("Student.txt");
    ofstream obj2("temp.txt");

    while (obj1.read((char *)&s, sizeof(s)))
    {
        if (s.getroll() == r)
        {
            flag = 1;
            cout << "YES found it \n";
            s.display();
            cout << "Deleted successfully.";
        }
        else
        {
            cout << "NOPE \n";
            obj2.write((char *)&s, sizeof(s));
        }
    }
    if (flag == 0)
    {
        cout << "NOT FOUND.";
    }
    obj2.close();
    remove("Student.txt");
    rename("temp.txt", "Student.txt");
}

void update(int r)
{
    int flag = 0;
    Student s;
    ifstream obj("Student.txt");
    ofstream obj1("temp.txt");
    while (obj.read((char *)&s, sizeof(s)))
    {
        if (s.getroll() == r)
        {
            flag = 1;
            cout << "Enter new info:\n";
            s.accept();
            obj1.write((char *)&s, sizeof(s));
        }
        else
        {
            obj1.write((char *)&s, sizeof(s));
        }
    }
    if (flag == 0)
    {
        cout << "NOt found.....";
    }
    obj1.close();
    remove("Student.txt");
    rename("temp.txt", "Student.txt");
}

int main()
{
    int r, ch = 0;
    Student s;

    while (ch != 7)
    {
        cout << "\n1) Add new record\n2) Append an entry\n3) Display all\n4) Search by rollno\n5) Update an entry\n6) Delete an entry\n7) Exit.";
        cout << "\nEnter choice :";
        cin >> ch;

        switch (ch)
        {
        case 1:
            addRecord();
            break;
        case 2:
            append();
            break;
        case 3:
            displayAll();
            break;
        case 4:
            cout << "\nEnter roll to search:";
            cin >> r;
            search(r);
            break;
        case 5:
            cout << "\nEnter roll to UPDATE    :";
            cin >> r;
            update(r);
            break;
        case 6:
            cout << "\nEnter roll to Del:";
            cin >> r;
            delRec(r);
            break;
        case 7:
            cout << "Exited";
            break;
        }
    }
    return 0;
}