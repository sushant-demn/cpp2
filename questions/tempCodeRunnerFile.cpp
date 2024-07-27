#include <iostream>
#include <cmath>

using namespace std;

int viralAdvertising(int n)
{
    int x = 0;
    int ini = 5;
    for (int i = 0; i < n-1; i++)
    {
        ini = (floor(ini/2))*3;
    }
    return ini;
}
int main()
{
    int n;
    cin >> n;
    cout<<viralAdvertising(n);
    return 0;
}