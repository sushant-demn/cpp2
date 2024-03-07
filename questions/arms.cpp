
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string a;
    int sum = 0;
    cin >> a;
    int x = a.length();
    int y = stoi(a);
    string arr[x];
    int arr2[x];
    for (int i = 0; i < x; i++)
    {
        arr[i] = a.at(i);
    }
    for (int i = 0; i < x; i++)
    {
        int b;
        b = stoi(arr[i]);
        arr2[i] = b;
    }
    for (int i = 0; i < x; i++)
    {
        int h = 0;
        h = pow(arr2[i], x);
        sum = sum + h;
    }
    if (y == sum)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
