#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        vector<int> vec;
        for (int a = 0; a < 3; a++)
        {
            int x;
            cin >> x;
            vec.push_back(x);
        }
        for (int y = 0; y < vec.size(); y++)
        {
            for (int j = y + 1; j < vec.size(); j++)
            {
                if (vec[j] > vec[y])
                {
                    int l = vec[y];
                    vec[y] = vec[j];
                    vec[j] = l;
                }
            }
        }

        v.push_back(vec[1]);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\n";
    }

    return 0;
}