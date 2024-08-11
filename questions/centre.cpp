#include <bits/stdc++.h>
using namespace std;
int sum_arr(vector<int> v)
{
    return accumulate(v.begin(), v.end(), 0);
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;
        vector<int> vx, vy;

        for (int i = 0; i < k; i++)
        {
            vx.push_back(0);
            vy.push_back(0);
        }
        int xa = x, ya = y;
        int i = 0, j = 0;

        while (accumulate(vx.begin(), vx.end(), 0) != k * x)
        {
            
        }
    }

    return 0;
}