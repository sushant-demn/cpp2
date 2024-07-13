#include <iostream>
#include <vector>
using namespace std;
void binarysearch(vector<int> vec, int a)
{
    int l = 0, r = (vec.size() - 1), mid = 0;
    bool flag = false;
    while (l <= r)
    {
        mid = (r + l) / 2;

        if (vec[mid] == a)
        {
            flag = true;
            break;
        }
        else if (a > vec[mid])
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    if (flag == true)
    {
        cout << "Element found at " << mid + 1 << "\n";
    }
    else
    {
        cout << "Element doesnt exist in this data";
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
    binarysearch(vec, a);

    return 0;
}

/*
binary seach is method to search and element with in a data set which is already sorted by dividing the
data into left and right part and comparing the element to be found with the mid element if found the stopping the process or by comparing deciding to continue with
either left or right part of the data which take less time than linear search
*/