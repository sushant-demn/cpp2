// https://www.hackerrank.com/challenges/vector-erase/problem?isFullScreen=false
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, str, end;
    vector<int> vec;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    cin >> k;
    vec.erase(vec.begin() + (k - 1));
    cin >> str >> end;
    vec.erase(vec.begin() + (str - 1), vec.begin() + (end - 1));
    cout << vec.size() << "\n";
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }

    return 0;
}