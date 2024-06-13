// https://www.hackerrank.com/challenges/picking-numbers/problem?isFullScreen=true

#include <iostream>
#include <vector>
using namespace std;
void pickingNumbers(vector<int> vec, int n)
{
    vector<int> vec1, vec2;
    for (int i = 0; i < n - 1; i++)
    {
        int y;
        vec1.push_back(vec[i]);
        int x = i + 1;
        while ((vec[i] == vec[x]) or (vec[x] - vec[i] <= 1))
        {
            vec1.push_back(vec[x]);
            x++;
        }
        vec2.push_back(vec1.size());
        vec1.clear();
    }
    for (int i = 0; i < vec2.size(); i++)
    {
        for (int j = i; j < vec2.size(); j++)
        {
            if (vec2[i] > vec2[j])
            {
                int x = vec2[i];
                vec2[i] = vec2[j];
                vec2[j] = x;
            }
        }
    }
    
    for (int i = 0; i < vec2.size(); i++)
    {
        cout<<vec2[i]<<" ";
    }
    
    // return vec2[vec2.size() - 1];
};
int main()
{
    int n;
    cin >> n;

    vector<int> vec, vec1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }

    // sorting vector
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < n; j++)
    //     {
    //         if (vec[i] > vec[j])
    //         {
    //             int x = vec[i];
    //             vec[i] = vec[j];
    //             vec[j] = x;
    //         }
    //     }
    // }
    // cout<<"sorted array of input: \n";
    // for (int i = 0; i < vec.size(); i++)
    // {
    //     cout<<vec[i]<<" ";
    // }
    // cout<<"\n\n\n\n\n\n\n\n";
    // cout << 
    pickingNumbers(vec, n);
    return 0;
}