// https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem?isFullScreen=true

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
vector<int> beautifulDays(int i, int j, int k)
{
    vector<int> btdays;
    vector<int> vec;
    for (int x = i; x <= j; x++)
    {
        vec.push_back(x);
    }
    for (int i = 0; i < vec.size(); i++)
    {
        int n = vec[i];
        int r = 0;
        while (n != 0)
        {
            int x = n % 10;
            r = r * 10 + x;
            n = floor(n / 10);
        }
    }

    return btdays;
}
int main()
{
    int i, j, k;
    cin >> i >> j >> k;

    return 0;
}