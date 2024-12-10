// https://codeforces.com/contest/2024/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int c = b;
        int i = 0;
        while (c > a && a > 0)
        {
            c = b;
            a--;
            i++;
            c = c - 2 * i;
        }
        cout << a << "\n";
    }

    return 0;
}