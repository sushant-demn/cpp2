// https://codechef.com/practice/course/basic-math/BASICMATH/problems/CANDYSTORE
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z = 0;
        cin >> x >> y;
        for (int i = 1; i <= y; i++)
        {
            if (i <= x)
            {
                z = z + 1;
            }
            if (i > x)
            {
                z = z + 2;
            }
        }
        cout << z << "\n";
    }

    return 0;
}