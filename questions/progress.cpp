#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    int x;
    cin >> a >> b >> c;
    x = ((0.01) * (a * b)) * c;
    int arr[a];
    int count = 0;
    for (int i = 0; i < a; i++)
    {
        arr[i] = 0;
    }

    for (int j = 0; j < a; j++)
    {
        while (arr[j] < b)
        {
            if (count < x)
            {
                arr[j] = arr[j] + 1;
                count++;
            }
            else
            {
                break;
            }
        }
    }

    for (int i = 0; i < a; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}