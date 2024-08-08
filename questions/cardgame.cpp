// https://codeforces.com/contest/1999/problem/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[4];
        float x = 0;
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
        }

        if (arr[0] > arr[2] and arr[1] > arr[3])
        {

            x = x + 2;
        }
        if (arr[0] > arr[3] and arr[1] > arr[2])
        {

            x = x + 2;
        }

        cout << x << "\n";
    }

    return 0;
}