// https://www.hackerrank.com/challenges/electronics-shop/problem?isFullScreen=true

#include <iostream>
#include <vector>
using namespace std;
void getMoneySpent(vector<int> &v, vector<int> &v2, int b)
{
    int sum = 0;
    int i = v.size() - 1;
    int j = v2.size() - 1;

    while (1)
    {
        if ((v[i] + v2[j]) > b)
        {
            sum = -1;
            if (v[i] >= v2[j])
            {
                j--;
            }
            else
            {
                i--;
            }
        }
        else
        {
            sum = v[i] + v2[j];
            break;
        }
        if (i < 0 or j < 0)
        {
            break;
        }
    }
    cout << sum;
}
int main()
{
    int b, n, m;
    vector<int> vec1, vec2;
    cin >> b >> n >> m;
    for (size_t i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec1.push_back(x);
    }
    for (size_t i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        vec2.push_back(x);
    }
    for (int i = 0; i < vec1.size(); i++)
    {

        for (int j = i + 1; j < vec1.size(); j++)
        {
            if (vec1[i] > vec1[j])
            {
                int y = vec1[i];
                vec1[i] = vec1[j];
                vec1[j] = y;
            }
        }
    }
    for (int i = 0; i < vec2.size(); i++)
    {

        for (int j = i + 1; j < vec2.size(); j++)
        {
            if (vec2[i] > vec2[j])
            {
                int y = vec2[i];
                vec2[i] = vec2[j];
                vec2[j] = y;
            }
        }
    }

    getMoneySpent(vec1, vec2, b);
    return 0;
}
