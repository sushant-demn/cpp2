#include <iostream>
using namespace std;
bool **ign(int sum[8])
{
    bool **ign = new bool *[3];
    for (int i = 0; i < 3; i++)
    {
        ign[i] = new bool[3];
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            ign[i][j] == true;
        }
    }
    // for coloums
    for (int i = 0; i < 3; i++)
    {
        if (sum[i] == 15)
        {
            for (int j = 0; j < 3; j++)
            {
                ign[j][i] = false;
            }
        }
        else
        {
            continue;
        }
    }
    // for rows
    for (int i = 3; i < 6; i++)
    {
        if (sum[i] == 15)
        {
            for (int j = 0; j < 3; j++)
            {
                ign[i][j] = false;
            }
        }
        else
        {
            continue;
        }
    }
    // right diagonal
    if (sum[6] == 15)
    {
        for (int i = 0; i < 3; i++)
        {
            ign[i][i] = false;
        }
    }
    if (sum[7] == 15)
    {
        int y = 2;
        for (int i = 0; i < 3; i++)
        {
            ign[i][y] = false;
            y--;
        }
    }
    return ign;
}
int *sum(int arr[3][3])
{
    int *sum = new int[8]; // Dynamically allocate an array of integers

    // checking sum from all direction
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
    return sum;
}
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
    int *sumx = sum(arr);
    bool **ignx = ign(sumx);
    for (int i = 0; i < 8; i++)
    {
        cout << sumx[i] << " ";
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << ignx[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}