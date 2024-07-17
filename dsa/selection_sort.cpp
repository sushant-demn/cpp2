#include <iostream>
#include <vector>
using namespace std;

void selection_sort(vector<int> vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = i + 1; j < vec.size(); j++)
        {
            if (vec[i] > vec[j])
            {
                int x = vec[i];
                vec[i] = vec[j];
                vec[j] = x;
            }
        }
    }
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
}

int main()
{
    cout << "Enter the number of element: ";
    int n;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }

    selection_sort(vec);

    return 0;
}