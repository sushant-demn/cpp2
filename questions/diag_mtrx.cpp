#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int left(int b[100][100], int a)
{
    int y = 0;
    for (int i = 0; i < a; i++)
    {
        y = y + b[i][i];
    }

    return y;
}
int right(int b[100][100], int a)
{
    int y = 0;
    int x = a - 1;
    for (int i = 0; i < a; i++)
    {
        y = y + b[i][x];
        x--;
    }

    return y;
}
int main()
{
    int a;
    cin >> a;
    int arr[100][100];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cin >> arr[i][j];
        }
    }

    int y = right(arr, a) - left(arr, a);
    if (0 > y)
    {
        cout << -y;
    }
    else
    {
        cout << y;
    }

    return 0;
}