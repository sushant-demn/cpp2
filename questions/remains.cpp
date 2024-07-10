// https://www.codechef.com/practice/course/basic-math/BASICMATH/problems/FLOW002
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float x, y, z, q = 0.00, d;
        cin >> x >> y;
        d = y;
        while (d <= x)
        {
            d = d + y;
            q++;
        }
        cout << x - (q * y) << "\n";
    }

    return 0;
}