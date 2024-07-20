#include <iostream>
#include <vector>
using namespace std;
int save_prisoner(int n, int m, int s)
{
    for (int i = 0; i < m - 1; i++)
    {
        if (s >= n)
        {
            s = 1;
        }
        else
        {
            s++;
        }
    }
    return s;
}
int main()
{
    int t;
    cin >> t;
    vector<vector<int>> arr;

    for (int i = 0; i < t; i++)
    {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }
    for (int i = 0; i < t; i++)
    {
        cout << save_prisoner(arr[i][0], arr[i][1], arr[i][2]) << "\n";
    }

    return 0;
}