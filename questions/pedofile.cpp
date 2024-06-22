// https://www.hackerrank.com/challenges/designer-pdf-viewer/problem?isFullScreen=true

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    vector<int> height;
    for (int i = 0; i < 26; i++)
    {
        int x;
        cin >> x;
        height.push_back(x);
    }
    string n;
    cin >> n;
    vector<int> x;
    for (int i = 0; i < n.size(); i++)
    {
        for (int j = 0; j < alpha.size(); j++)
        {
            if (n[i] == alpha[j])
            {
                x.push_back(height[j]);
            }
        }
    }
    // sorting
    for (int i = 0; i < x.size(); i++)
    {
        for (int j = i; j < x.size(); j++)
        {
            if (x[i] < x[j])
            {
                int y = x[i];
                x[i] = x[j];
                x[j] = y;
            }
        }
    }

cout<<(x[0]*n.size());
    return 0;
}