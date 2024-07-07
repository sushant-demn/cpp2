#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int r = 0;
    while (n != 0)
    {
        int x = n % 10;
        r = r * 10 + x;
        n = floor(n / 10);
    }
    cout << r;
    return 0;
}