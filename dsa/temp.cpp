#include <bits/stdc++.h>
using namespace std;
void triangle(int arr[], int y, int n)
{
    int x = n;
    int arr2[x];
    for (int i = 0; i < x; i++)
    {
        arr2[i] = arr[i];
    }

    while (x != y)
    {

        for (int i = 0; i < x-1; i++)
        {
            arr2[i] = arr2[i] + arr2[i + 1];
        }
        x--;
    }
    for (int i = 0; i < y; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << "\n";
}
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n + 1; i++)
    {
        triangle(arr, i , n);
    }
    return 0;
}