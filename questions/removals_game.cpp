// https://codeforces.com/contest/2002/problem/B

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
        vector<int> al, bb;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            al.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            bb.push_back(x);
        }
    }

    return 0;
}