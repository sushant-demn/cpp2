// https://www.codechef.com/problems/NOWINNER

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, x;
        cin >> a >> b >> c >> x;
        if (((a + x) == (b + x)) or ((b + x) == (c + x)) or ((a + x) == (x + c)))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}