// https://www.hackerrank.com/challenges/picking-numbers/problem?isFullScreen=true

#include <iostream>
#include <vector>
using namespace std;
int pickingNumbers()
{
    return 0;
};
int main()
{
    int n;
    cin >> n;
    vector<int> vec1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec1.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<vec1[i]<<" ";
    }
    

    return 0;
}