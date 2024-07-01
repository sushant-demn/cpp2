// https://www.hackerrank.com/challenges/utopian-tree/problem?isFullScreen=true

#include <iostream>
#include <vector>
using namespace std;
int utopianTree(int n)
{
    bool flag = false;
    int h = 0;
    if (n == 0)
    {
        return 1;
    }
    else
    {
        for (int i = 0; i <= n; i++)
        {
            if (flag == false)
            {
                h = h + 1;
            }
            if (flag == true)
            {
                h = h + h;
            }
            flag = !flag;
        }
        return h;
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << utopianTree(v[i]) << "\n";
    }

    return 0;
}