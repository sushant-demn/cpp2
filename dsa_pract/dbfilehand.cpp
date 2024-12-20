#include <bits/stdc++.h>
#include <fstream>
using namespace std;
class student
{
    int roll;
    char name[30];
    char add[30];
    char div;

public:
    void getinfo()
    {
        cout << "\nEnter Roll no. :";
        cin >> roll;
        cout << "\nEnter Division: ";
        cin >> div;
        cout << "\nEnter Name : ";
        cin >> name;
        cout << "\nEnter Address : ";
        cin >> add;
    }
    void display()
    {
        cout << " " << roll << "\t" << div << "\t" << name << "\t" << add << endl;
    }
    int getroll()
    {
        return roll;
    }
};

void display()
{

    student s;
    ifstream fin("Studentdb.txt");
    while (fin.read((char *)&s, sizeof(s)))
    {
        s.display();
    }
    fin.close();
}

void insert()
{
    int n;
    ofstream fout("Studentdb.txt", ios::ate);
    cout << "Enter the number of the students: ";
    cin >> n;
    student s;
    for (int i = 0; i < n; i++)
    {
        cout << "Student " << i << "\n";
        s.getinfo();
        fout.write((char *)&s, sizeof(s));
    }
    fout.close();
}
void append()
{
    student s;
    ofstream fout("Studentdb.txt", ios::app);
    s.getinfo();
    fout.write((char *)&s, sizeof(s));
    fout.close();
}
void update()
{
    bool flag = false;
    int roll;
    cout << "enter the roll number you want to update: ";
    cin >> roll;
    student s;
    ofstream fout("temps.txt");
    ifstream fin("Studentdb.txt");
    while (fin.read((char *)&s, sizeof(s)))
    {
        if (s.getroll() == roll)
        {
            flag = true;
            cout << "Enter the new info: \n";
            s.getinfo();
            fout.write((char *)&s, sizeof(s));
        }
        else
        {
            fout.write((char *)&s, sizeof(s));
        }
    }
    fout.close();
    remove("Studentdb.txt");
    rename("temps.txt", "Studentdb.txt");
    if (flag == false)
    {
        cout << "record doesnt exist";
    }
}

int main()
{
    int r, ch = 0;

    while (ch != 7)
    {
        cout << "\n1) Add new record\n2) Append an entry\n3) Display all\n4) Search by rollno\n5) Update an entry\n6) Delete an entry\n7) Exit.";
        cout << "\nEnter choice :";
        cin >> ch;

        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            append();
            break;
        case 3:
            display();
            break;
        // case 4:
        //     cout << "\nEnter roll to search:";
        //     cin >> r;
        //     search(r);
        //     break;
        case 5:
            update();
            break;
        // case 6:
        //     cout << "\nEnter roll to Del:";
        //     cin >> r;
        //     delRec(r);
        //     break;
        case 7:
            cout << "Exited";
            break;
        }
    }
    return 0;
}