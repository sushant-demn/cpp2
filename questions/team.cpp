#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int arr[t][3];
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    int y = 0;
    for (int i = 0; i < t; i++)
    {
        int x = 0;
        for (int j = 0; j < 3; j++)
        {
            x = x + arr[i][j];
        }
        if (x >= 2)
        {
            y++;
        }
    }
    cout << y;

    return 0;
}
