<<<<<<< HEAD
// https://codeforces.com/contest/2024/problem/A
=======
// https://www.hackerrank.com/challenges/permutation-equation/problem?isFullScreen=true
>>>>>>> ab1238b1bdd22c754ad7d65c8d4f35a41ac60c27
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
<<<<<<< HEAD
        int a, b;
        cin >> a >> b;
        int c = b;
        int i = 0;
        while (c > a && a > 0)
        {
            c = b;
            a--;
            i++;
            c = c - 2 * i;
        }
        cout << a << "\n";
=======
        cin >> x;
        // cout << x;
        arr.push_back(x);
    }
    vector<int> result = permutationEquation(arr);
    for (int i = 0; i < result.size() - 1; i++)
    {
        cout << result[i] << "\n";
>>>>>>> ab1238b1bdd22c754ad7d65c8d4f35a41ac60c27
    }

    return 0;
}