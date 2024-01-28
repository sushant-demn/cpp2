#include <iostream>
using namespace std;

int main()
{
    int a, c = 0;
    static int count;
    cin >> a;
    int b[a];
    for (int i = 0; i < a; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < a; i++)
    {
        if (c < b[i])
        {
            c = b[i];
        }
    }
    for (int i = 0; i < a; i++)
    {
        if (c == b[i])
        {
            count++;
        }
    }
    cout << count;
    return 0;
}