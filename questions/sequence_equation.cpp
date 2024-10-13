#include <bits/stdc++.h>
using namespace std;

vector<int> permutationEquation(vector<int> arr)
{
    // vector<int> vec = arr;
    vector<int> arr2;
    for (int i = 0; i < arr.size(); i++)
    {
        arr2.push_back(arr[arr[i]]);
    }
    return arr2;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr;
        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            arr.push_back(x);
        }
        for (int i = 0; i < arr.size(); i++)
        {
            cout << permutationEquation(arr)[i] << "\n";
        }
    }

    return 0;
}