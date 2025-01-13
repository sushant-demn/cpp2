#include <bits/stdc++.h>

using namespace std;

void bubblesort(int arr[])
{
    int x = (sizeof(arr) / sizeof(arr[0]));
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int getMoneySpent(int arr1[], int arr2[], int b, int y)
{
    bubblesort(arr1);
    bubblesort(arr2);

    int i = (sizeof(arr1) / sizeof(arr1[0])) - 1;
    int j = (sizeof(arr2) / sizeof(arr2[0])) - 1;
    int x = arr1[i], y = arr2[j];
    while ((i && j) >= 0)
    {
        if ((x + y) <= b)
        {
            return (x + y);
            break;
        }
        else if (arr1[i - 1] < arr2[j - 1])
        {
            i--;
        }
        else if (arr1[i - 1] > arr2[j - 1])
        {
            j--;
        }
    }

    return -1;
}
int main()
{
    int x, y, z, arr[x], arr1[z];
    cin >> x >> y >> z;
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < z; i++)
    {
        cin >> arr1[i];
    }
    // cout << getMoneySpent(arr, arr1, x);
    return 0;
}