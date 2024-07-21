#include <iostream>
#include <string.h>
using namespace std;
struct student
{
    int roll;
    char name[30];
    float sgpa;
};
void display(struct student s[], int n)
{
    cout << "\nThe data after operations is: \n"
         << " Sr. No.\tRoll no.\tname\tsgpa\t\n";
    for (int i = 0; i < n; i++)
    {
        cout << 1 + i << "\t" << s[i].roll << "\t" << s[i].name << "\t" << s[i].sgpa << "\n";
    }
}
void displaytop10(struct student s[], int n)
{
    if (n >= 10)
    {
        cout << "\nThe data after operations is: \n"
             << " Sr. No.\tRoll no.\tname\tsgpa\t\n";
        for (int i = 0; i < 10; i++)
        {
            cout << 1 + i << "\t" << s[i].roll << "\t" << s[i].name << "\t" << s[i].sgpa << "\n";
        }
    }
    else if (n < 10)
    {
        cout << "\nThe data after operations is: \n"
             << " Sr. No.\tRoll no.\tname\tsgpa\t\n";
        for (int i = 0; i < n; i++)
        {
            cout << 1 + i << "\t" << s[i].roll << "\t" << s[i].name << "\t" << s[i].sgpa << "\n";
        }
    }
}
void swap(int &a, int &b)
{
    int x = a;
    a = b;
    b = x;
}
void swap(float &a, float &b)
{
    float x = a;
    a = b;
    b = x;
}
void roll_sort(struct student s[], int n) // bubble sort to sort the data according to roll numbers
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (s[j].roll > s[j + 1].roll)
            {
                int x = s[j].roll;
                s[j].roll = s[j + 1].roll;
                s[j + 1].roll = x;

                float y = s[i].sgpa;
                s[i].sgpa = s[j + 1].sgpa;
                s[j + 1].sgpa = y;

                char z[30];
                strcpy(z, s[i].name);
                strcpy(s[i].name, s[j + 1].name);
                strcpy(s[j + 1].name, z);
            }
        }
    }
    display(s, n);
}
void name_sort(struct student s[], int n) // insertions sort based on names of the student
{

    for (int i = 1; i < n; i++)
    {
        char x[30];

        strcpy(x, s[i].name);
        int y = s[i].roll;
        float z = s[i].sgpa;
        int j = i - 1;
        while ((j >= 0) and (strcmp(s[j].name, x) > 0))
        {
            strcpy(s[j + 1].name, s[j].name);
            s[j + 1].roll = s[j].roll;
            s[j + 1].sgpa = s[j].sgpa;
            j--;
        }
        strcpy(s[j + 1].name, x);
        s[j + 1].roll = y;
        s[j + 1].sgpa = z;
    }
    display(s, n);
}
int partition(struct student s[], int lb, int ub)
{
    float pivot = s[lb].sgpa;
    int start = lb, end = ub;
    while (start < end)
    {
        while (s[start].sgpa >= pivot)
        {
            start++;
        }
        while (s[end].sgpa < pivot)
        {
            end--;
        }
        if (start < end)
        {
            swap(s[start].sgpa, s[end].sgpa);
            swap(s[start].roll, s[end].roll);
            char z[30];
            strcpy(z, s[start].name);
            strcpy(s[start].name, s[end].name);
            strcpy(s[end].name, z);
        }
    }
    swap(s[lb].sgpa, s[end].sgpa);
    swap(s[lb].roll, s[end].roll);
    char z[30];
    strcpy(z, s[lb].name);
    strcpy(s[lb].name, s[end].name);
    strcpy(s[end].name, z);
    return end;
}
void sgpa_sort(struct student s[], int lb, int ub) // quicksort on sgpa values
{
    if (lb < ub)
    {
        int loc = partition(s, lb, ub);
        sgpa_sort(s, loc + 1, ub);
        sgpa_sort(s, lb, loc - 1);
    }
}
void sgpa_search(struct student s[], int n)
{
    cout << "Enter the SGPA you want to search for: ";
    float x;
    cin >> x;
    bool flag = false;
    int y = 1;
    for (int i = 0; i < n; i++)
    {
        if (s[i].sgpa == x)
        {
            if (flag == false)
            {
                cout << " Sr. No.\tRoll no.\tname\tsgpa\t\n";
            }
            flag = true;
            cout << y << "\t" << s[i].roll << "\t" << s[i].name << "\t" << s[i].sgpa << "\n";
            y++;
        }
    }

    if (flag == false)
    {
        cout << "\nThere isn't a single student with the SGPA provided\n";
    }
}
void name_search(struct student s[], int n)
{
    cout << "\n Enter Name to be searched: ";
    char x[30];
    cin >> x;
    
}
void menu(struct student s[], int n)
{
    int x;
    while (x != 6)
    {
        cout << "\n\nChoose one of the given options:\n"
             << "1]. Sort data w.r.t to roll no. in ascending (bubble sort)\n"
             << "2]. Sort the data wrt Names (insertion sort)\n"
             << "3]. Sort the data wrt SGPA Score (quick sort)\n"
             << "4]. Search Student with SGPA Score (linear search)\n"
             << "6]. Exit the program\n";
        cin >> x;
        switch (x)
        {
        case 1:
            roll_sort(s, n);
            break;
        case 2:
            name_sort(s, n);
            break;
        case 3:
            sgpa_sort(s, 0, n - 1);
            displaytop10(s, n);
            break;
        case 4:
            sgpa_search(s, n);
            break;
        default:
            break;
        }
    }
}

int main()
{
    cout << "Enter no. of students data you want to insert: ";
    int n;
    cin >> n;
    struct student s[n];
    cout << "Enter the data of the student in format\n"
         << "Roll no.: | name: | sgpa: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].roll >> s[i].name >> s[i].sgpa;
    }
    menu(s, n);
    // name_sort(s, n);

    return 0;
}
