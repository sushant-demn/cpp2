#include <bits/stdc++.h>
using namespace std;

int fullfillorders(vector<int> orders, int k)
{
    int max = 0;
    int m = k;
    int i = 0;
    while (k > 0 && i < orders.size())
    {
        m = m - orders[i];
        i++;
        if (m >= 0)
        {
            max++;
        }
    }
    return max;
}

int main()
{
    int n;
    cin >> n;
    vector<int> order;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        order.push_back(x);
    }
    int k;
    cin >> k;
    cout << fullfillorders(order, k);
    return 0;
}