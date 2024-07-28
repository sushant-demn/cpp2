#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n - 1];
        vector<int> vec;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> arr[i];
        }
        int x = 0;
        while (n--)
        {
            if (n == n)
            {
                for (int i = 0; i <= 9; i++)
                {
                    for (size_t j = 0; j <= 9; j++)
                    {
                        if ((i & j) == arr[x] and (i and j != arr[x]))
                        {
                            vec.push_back(i);
                            vec.push_back(j);
                            break;
                        }
                    }
                }
                x++;
            }
            else
            {
                for (int i = 0; i <= 9; i++)
                {
                    if ((vec[vec.size() - 1] & i) == arr[x])
                    {
                        vec.push_back(i);
                        break;
                    }
                }
            }
        }
        for (int i = 0; i < vec.size(); i++)
        {
            cout << vec[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}