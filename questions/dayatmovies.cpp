// https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem?isFullScreen=true

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
bool isWholeNumber(double number)
{
    double intPart;
    double fracPart = modf(number, &intPart);
    return fracPart == 0.0;
}
int beautifulDays(int i, int j, int k)
{
    int btdays = 0;
    vector<int> vec;
    for (int x = i; x <= j; x++)
    {
        vec.push_back(x);
    }
    for (int i = 0; i < vec.size(); i++)
    {
        double x;
        int n = vec[i];
        double r = 0;
        while (n != 0)
        {
            int x = n % 10;
            r = r * 10 + x;
            n = floor(n / 10);
        }
        if (r <= vec[i])
        {
            x = vec[i] - r;
        }
        else
        {
            x = r - vec[i];
        }
        double y = x / k;
        if (isWholeNumber(y))
        {
            btdays++;
        }
    }

    return btdays;
}
int main()
{
    int i, j, k;
    cin >> i >> j >> k;
    cout << beautifulDays(i, j, k);

    return 0;
}