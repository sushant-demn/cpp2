#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    cout << "\n";
    for (int i = 0; i < a; i++)
    {
        int c = arr[i];
        for (int j = 0; j <= 5; j++)
        {
            c = arr[i] + j;
            if (c % 5 == 0)
            {

                if (c - arr[i] < 3)
                {
                    if (c >= 40)
                    {
                        arr[i] = c;
                    }
                }
            }
        }
    }
    for (int i = 0; i < a; i++)
    {
        cout << arr[i] << "\n";
    }

    return 0;
}