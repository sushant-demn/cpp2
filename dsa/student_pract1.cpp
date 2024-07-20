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
    cout << "The data after operations is: \n"
         << "Roll no.\tname\tsgpa\t\n";
    for (int i = 0; i < n; i++)
    {
        cout << s[i].roll << "\t" << s[i].name << "\t" << s[i].sgpa << "\n";
    }
}
void roll_sort(struct student s[], int n)
{
    /*bubble sort*/
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
void name_sort(struct student s[], int n)
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

void menu(struct student s[], int n)
{
    int x;
    while (x != 5)
    {
        cout << "Choose one of the given options:\n"
             << "1. Sort data w.r.t to roll no. in ascending (bubble sort)\n"
             << "2. Sort the data wrt Names (insertion sort)\n"
             << "5. Exit the program\n";
        cin >> x;
        switch (x)
        {
        case 1:
            roll_sort(s, n);
            break;
        case 2:
            name_sort(s, n);
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
