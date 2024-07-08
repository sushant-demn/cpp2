#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    for (int i = 0; i < vec.size(); i++)
    {
        cout << (vec[i] * 2) * 5 << "\n";
    }
    return 0;
}
