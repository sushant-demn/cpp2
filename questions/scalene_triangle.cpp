// https://www.codechef.com/practice/course/basic-math/BASICMATH/problems/SCALENE
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a != b and a != c) and (b != a and b != c) and (c != b and c != a))
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