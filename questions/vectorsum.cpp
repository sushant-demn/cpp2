#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int arr[a];
    long int b = 0;
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < a; i++)
    {
        b = b + arr[i];
    }
    cout << b;
    return 0;
}