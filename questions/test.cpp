#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {0};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    // checking sum from all direction
    int sum[8] = {0};
    // all vertical
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            sum[i] = arr[j][i] + sum[i];
        }
    }
    // for all horizontal
    int x = 3;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[x] = arr[i][j] + sum[x];
        }
        x = x + 1;
    }
    // left diagonal
    for (int i = 0; i < 3; i++)
    {
        sum[6] = arr[i][i] + sum[6];
    }
    // right diagonal
    int y = 2;
    for (int i = 0; i < 3; i++)
    {
        sum[7] = arr[i][y] + sum[7];
        y--;
    }
    for (int i = 0; i < 8; i++)
    {
        cout<<sum[i]<<" ";
    }
    
    return 0;
}