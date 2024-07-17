#include <iostream>
#include <vector>
using namespace std;
void insertionsort(vector<int> vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        int x = vec[i];
        int j = i - 1;
        while (j >= 0 and x < vec[j])
        {
            vec[j + 1] = vec[j];
            j--;
        }
        vec[j + 1] = x;
    }
    cout << "Sorted data: \n";
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
    insertionsort(vec);
    return 0;
}


/*
ref: https://www.geeksforgeeks.org/insertion-sort-algorithm/
Insertion sort works as considering one element as sorted at starting then comparing the elements to right as unsorted
by considering left side as sorted the elements in right side that is unsorted side can be placed one by one correctly to there resp index by comparing 
it to each element in sorted side one by one and findind the place where the element is greater than the compared elements while this other elements are shhifted to one position right
*/