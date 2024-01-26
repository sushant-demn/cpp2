#include<bits/stdc++.h>
using namespace std;

class Book
{

    public:
        char name[50];
        int cost;

        void getdetails();

        void putdetails();
};

void Book::getdetails()
{

    cout << "Enter Name : ";
    cin >> name;
    cout << "Enter Cost : ";
    cin >> cost;

}

void Book::putdetails()
{

    cout << name << " ";
    cout << cost << " ";
    cout << endl;

}

int main()
{

    Book bk[100];
    int n, i;

    cout << "Enter Number of Books - ";
    cin >> n;

    for(i = 0; i < n; i++){
        bk[i].getdetails();
    }

    cout << "Details of Books - " << endl;

    for(i = 0; i < n; i++){
        bk[i].putdetails();
    }

    return 0;

}

