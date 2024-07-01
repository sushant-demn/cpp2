// https://www.hackerrank.com/challenges/angry-professor/problem?isFullScreen=trues
#include <iostream>
#include <vector>
using namespace std;
string angryProfessor(vector<int> kids, int k)
{
    int x = 0;
    for (int i = 0; i < kids.size(); i++)
    {
        if (kids[i] <= 0)
        {
            x = x + 1;
        }
    }
    if (x >= k)
    {
        return "NO";
    }
    else
    {
        return "YES";
    }
}
int main()
{

    int n;
    cin >> n;
    vector<string> str;
    for (int i = 0; i < n; i++)
    {
        int m, k;
        cin >> m >> k;
        vector<int> kids;
        for (int i = 0; i < m; i++)
        {
            int z;
            cin >> z;
            kids.push_back(z);
        }
        str.push_back(angryProfessor(kids, k));
    }
    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i] << "\n";
    }

    return 0;
}