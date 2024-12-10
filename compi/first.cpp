// https://www.codechef.com/START158D/problems/EVENODDDIV

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
        if (n % 2 != 0)
        {
            cout << -1 << "\n";
        }
        else if ((n / 2) % 2 != 0)
        {
            cout << 0 << '\n';
        }
        else
        {
            cout << 1 << '\n';
        }
    }
    return 0;
}