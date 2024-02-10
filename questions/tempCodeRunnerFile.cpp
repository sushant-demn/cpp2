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
    // for (int i = 0; i < a; i++)
    // {
    //     for (int j = 0; j < a; j++)
    //     {
    //         cout<< arr[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    cout<<right(arr, a) - left(arr, a);
    // left(arr, a);
    // right(arr, a);
    return 0;
}