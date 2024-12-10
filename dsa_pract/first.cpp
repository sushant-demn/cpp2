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
    display(arr, t);
    cout << "\n\nSorted\n";
    bubblesort(arr, t);
    return 0;
}