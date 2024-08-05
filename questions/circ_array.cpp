// https://www.hackerrank.com/challenges/circular-array-rotation/problem?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

void circularArrayRotation(vector<int> a, int k, vector<int> queries)
{
    int crc[a.size()];
    int inipos = 0;
    while (k > 0)
    {
        if (k < a.size())
        {
            inipos = inipos + k;
            k = 0;
        }
        else
        {

            k = k - a.size();
        }
    }
    for (int i = 0; i < a.size(); i++)
    {
        if (inipos < a.size())
        {
            crc[inipos] = a[i];
            inipos++;
        }
        else
        {
            inipos = 0;
            crc[inipos] = a[i];
            inipos++;
        }
    }
    for (int i = 0; i < queries.size(); i++)
    {
        cout << crc[queries[i]] << "\n";
    }
}

int main()
{
    int n, r, q;
    cin >> n >> r >> q;
    vector<int> vec;
    vector<int> que;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        que.push_back(x);
    }

    circularArrayRotation(vec, r, que);

    return 0;
}