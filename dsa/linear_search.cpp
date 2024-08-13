#include <iostream>
#include <vector>

using namespace std;
void linearsearch(int a, vector<int> vec)
{

    bool flag = false;
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == a)
        {
            cout << "Found element at " << i + 1;
            flag = true;
            break;
        }
    }
    if (flag == false)
    {
        cout << "Element not found";
    }
}
int main()
{

    vector<int> vec;
    int n, a;
    cout << "Enter element to find: ";
    cin >> a;
    cout << "Enter the number of elements + all elements: \n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    linearsearch(a, vec);

    return 0;
}