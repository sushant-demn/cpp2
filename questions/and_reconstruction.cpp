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
        for (int k = 0; k < sizeof(arr) + 1; k++)
        {
            if (n > 0)
            {
                bool flag = false;
                for (int i = 0; i <= 9; i++)
                {
                    for (int j = 0; j <= 9; j++)
                    {
                        if ((i & j) == arr[x] and (i != j))
                        {
                            vec.push_back(i);
                            vec.push_back(j);
                            flag == true;
                            break;
                            n = 0;
                        }
                    }
                    if (flag == true)
                    {
                        break;
                    }
                }
                x++;
            }

            // else
            // {
            //     for (int i = 0; i <= 9; i++)
            //     {
            //         if ((vec[vec.size() - 1] & i) == arr[x])
            //         {
            //             vec.push_back(i);
            //             x++;
            //         }
            //     }
            // }
        }
        for (int i = 0; i < vec.size(); i++)
        {
            cout << vec[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}