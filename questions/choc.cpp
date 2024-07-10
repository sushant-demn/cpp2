// https://www.codechef.com/practice/course/basic-math/BASICMATH/problems/CCHOCOLATES

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    int x, y, z, l;
    cin >> x >> y >> z;
    x = x * 5;
    y = y * 10;
    l = x + y;
    cout << (l / z)<<"\n";

    }
    return 0;
}