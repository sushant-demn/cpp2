#include <iostream>
using namespace std;
int count = 0;
int count2 = 0;
void operation(int a[3], int b[3])
{
    for (int i = 0; i < 3; i++)
    {
        if (a[i] > b[i])
        {
            count++;
        };
        if (b[i] > a[i])
        {
            count2++;
        }
    }
};

int main()
{
    int arra[3];
    int arrb[3];
    int total[2] = {count, count2};

    for (int i = 0; i < 3; i++)
    {
        cin >> arra[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> arrb[i];
    }
    operation(arra, arrb);
    cout << count << " " << count2;

    return 0;
}
