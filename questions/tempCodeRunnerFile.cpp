#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
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
            if (count < c)
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