#include <iostream>
#include <vector>
using namespace std;
void bubblesort(vector<int>& vec)
{

    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec.size() - 1 - i; j++)
        {
            if (vec[j] > vec[j + 1])
            {
                int x = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = x;
            }
        }
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
    bubblesort(vec);
        cout << "Sorted data: \n";
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    return 0;
}

/*bubble sort is used to sort data in ascending or decending order
bubble sort sorts the data by sorting the greatest first then another then another with multiple iterations

*/