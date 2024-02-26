#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a, b;
    cin >> a;
    int arr[a];

    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < a; i++)
    {
        if (arr[i] < 40)
        {
            continue;
        }
        else
        { //cout<<"pass "<<arr[i];
            int c = arr[i];
            for (int i = 0; i < 6; i++)
            {
                c = c + i;
                if (c % 5 == 0)
                {
                    if ((c - arr[i]) < 3)
                    {
                        arr[i] = c;
                        continue;
                        cout<<"pass";
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