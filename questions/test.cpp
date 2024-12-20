// https://www.hackerrank.com/challenges/permutation-equation/problem?isFullScreen=true
#include <bits/stdc++.h>
using namespace std;
int linearsearch(int a, vector<int> vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == a)
        {
            return i;
            break;
        }
    }
    return 0;
}
vector<int> permutationEquation(vector<int> arr)
{
    // vector<int> vec = arr;
    vector<int> arr2;
    for (int i = 1; i <= arr.size(); i++)
    {
        arr2.push_back(linearsearch(linearsearch(i, arr), arr));
    }
    return arr2;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    arr.push_back(0);
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        // cout << x;
        arr.push_back(x);
    }
    vector<int> result = permutationEquation(arr);
    for (int i = 0; i < result.size() - 1; i++)
    {
        cout << result[i] << "\n";
    }

    return 0;
}