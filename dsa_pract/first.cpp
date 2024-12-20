#include <bits/stdc++.h>
using namespace std;
struct student
{
    int roll;
    string name;
    float sgpa;
};
void display(struct student arr[], int size)
{
    cout << "The details of the students are: \n";
    cout << "Roll No. \t" << "\t Name \t" << "\t SGPA \t\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i].roll << "\t" << arr[i].name << "\t" << arr[i].sgpa << "\n";
    }
}
void bubblesort(struct student arr[], int t)
{
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t - i - 1; j++)
        {
            if (arr[j].roll > arr[j + 1].roll)
            {
                int x = arr[j].roll;
                string y = arr[j].name;
                float z = arr[j].sgpa;
                arr[j].roll = arr[j + 1].roll;
                arr[j].name = arr[j + 1].name;
                arr[j].sgpa = arr[j + 1].sgpa;
                arr[j + 1].roll = x;
                arr[j + 1].name = y;
                arr[j + 1].sgpa = z;
            }
        }
    }
    display(arr, t);
}
void insertionsort(struct student arr[], int t)
{
    for (int i = 0; i < t; i++)
    {
        string x = arr[i].name;
        int y = arr[i].roll;
        float z = arr[i].sgpa;
        int j = i - 1;
        while (j >= 0 && x < arr[j].name)
        {
            arr[j + 1].name = arr[j].name;
            arr[j + 1].roll = arr[j].roll;
            arr[j + 1].sgpa = arr[j].sgpa;
            j--;
        }
        arr[j + 1].name = x;
        arr[j + 1].roll = y;
        arr[j + 1].sgpa = z;
    }
    display(arr, t);
}

void binarysearch(string s, struct student arr[], int str, int lst)
{
    int mid = (str + lst) / 2;
    if (s == arr[mid].name)
    {
        cout << "The name exist in db\n";
        cout << arr[mid].roll << "\t" << arr[mid].name << "\t" << arr[mid].sgpa << "\n";
    }
    else if (s < arr[mid].name)
    {
        binarysearch(s, arr, str, mid);
    }
    else
    {
        binarysearch(s, arr, mid, lst);
    }
}

int main()
{
    int t;
    cout << "Enter total No. of Students: ";
    cin >> t;
    struct student arr[t];
    for (int i = 0; i < t; i++)
    {
        cout << "Enter student " << i + 1 << " details: \n";
        cout << "Roll No. : ";
        cin >> arr[i].roll;
        cout << "Name : ";
        cin >> arr[i].name;
        cout << "SGPA : ";
        cin >> arr[i].sgpa;
    }
    cout << "\n\nSorted\n";
    bubblesort(arr, t);
    cout << "insertion\n";
    insertionsort(arr, t);
    display(arr, t);
    string x;
    cout << "\n\nName to be searched: ";
    cin >> x;
    binarysearch(x, arr, 0, t);
    return 0;
}