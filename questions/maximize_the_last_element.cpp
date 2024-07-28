// https://codeforces.com/contest/1991/problem/A
#include <iostream>
#include <vector>
using namespace std;
void insertionsort(vector<int> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        int x = vec[i];
        int j = i - 1;
        while (j >= 0 and x < vec[j])
        {
            vec[j + 1] = vec[j];
            j--;
        }
        vec[j + 1] = x;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        vector<int> arr2;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (((i + 1) % 2) != 0)
            {
                arr2.push_back(arr[i]);
            }
        }
        insertionsort(arr2);

        cout << arr2[arr2.size() - 1] << "\n";
    }

    return 0;
}