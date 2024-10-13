// https://www.codechef.com/practice/course/basic-math/BASICMATH/problems/FLOW006

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c;
    cin >> c;
    while (c--)
    {
        int sum = 0;
        int n;
        cin >> n;
        while (n != 0)
        {
            sum = (n % 10 + sum);
            n = floor(n / 10);
        }
        std::cout << sum << std::endl;
    }
}