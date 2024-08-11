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
        int ax = a + x;
        int bx = b + x;
        int cx = c + x;
        if ((ax == (b or c)) or (bx == (c or a)) or (cx == (b or a)))
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