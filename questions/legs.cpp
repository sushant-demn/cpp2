// https://codeforces.com/contest/1996/problem/A
#include <iostream>
using namespace std;
int checklegs(int n)
{
    int x = 0;
    while (n >= 2)
    {
        if (n >= 4)
        {
            n = n - 4;
            x++;
        }
        else if (n >= 2 and n < 4)
        {
            n = n - 2;
            x++;
        }
    }
    return x;
}
int main()
{
    int t;
    cin >> t;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < t; i++)
    {
        cout << checklegs(arr[i])<<'\n';
    }

    return 0;
}