//https://www.hackerrank.com/challenges/magic-square-forming/problem?isFullScreen=true
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
            ign[i][j] = true;
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
                ign[i - 3][j] = false;
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
    // left diagonal
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
// check place rows
int *plcr(bool ign[3][3], int arr[3][3], int a)
{
    int *plcr = new int[2];
    int x[3];
    int y[3];
    for (int i = 0; i < 3; i++)
    {
        y[i] = i;
        x[i] = arr[i][a];
    }
    //sort to max
    return 0;
};
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

    // finding difference for each coloum nd row
    // all coloums
    for (int i = 0; i < 3; i++)
    {
        int *sumx = sum(arr);
        bool **ignx = ign(sumx);
        if (15 - sumx[i] < 15)
        {
        }
        else if (15 - sumx[i] == 0)
        {
            cout << "no diff " << i << "\n";
        }
    }
    // for rows
    for (int i = 3; i < 6; i++)
    {
        int *sumx = sum(arr);
        bool **ignx = ign(sumx);
        if (15 - sumx[i] < 15)
        {
            cout << "diff" << " " << i << " " << 15 - sumx[i] << "\n";
        }
        else if (15 - sumx[i] == 0)
        {
            cout << "no diff " << i << "\n";
        }
    }
    // for right diagonal
    int *sumx = sum(arr);
    if (15 - sumx[6] < 15)
    {
        cout << "diff" << " " << 6 << " " << 15 - sumx[6] << "\n";
    }
    sumx = sum(arr);
    if (15 - sumx[7] < 15)
    {
        cout << "diff" << " " << 7 << " " << 15 - sumx[7] << "\n";
    }

    return 0;
}