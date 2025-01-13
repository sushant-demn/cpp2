#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> m;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string x;
        cin >> n >> x;
        if (n == 1)
        {
            int y;
            cin >> y;
            map<string, int>::iterator itr = m.find(x);
            if (itr == m.end())
            {
                m.insert({x, y});
            }
            else
            {
                int z = m[x] + y;
                m.erase(x);
                m.insert({x, z});
            }
        }
        else if (n == 2)
        {
            m.erase(x);
        }
        else if (n == 3)
        {
            cout << m[x] << "\n";
        }
    }
    return 0;
}