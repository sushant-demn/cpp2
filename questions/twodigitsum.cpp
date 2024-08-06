// https://codeforces.com/contest/1999/problem/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        cout << (floor(n / 10)) + (n % 10)<<"\n";
    }

    return 0;
}