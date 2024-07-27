// https://www.hackerrank.com/challenges/strange-advertising/problem?isFullScreen=true
#include <iostream>
#include <cmath>

using namespace std;

int viralAdvertising(int n)
{
    int x = 0;
    int ini = 5;
    for (int i = 0; i < n; i++)
    {
        int y = floor(ini / 2);
        ini = (floor(ini / 2)) * 3;
        x = y + x;
    }
    return x;
}
int main()
{
    int n;
    cin >> n;
    cout << viralAdvertising(n);
    return 0;
}