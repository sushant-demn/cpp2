#include <iostream>
#include <vector>
using namespace std;
void max_min(long int arr[5])
{
    long int c = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (c < arr[i])
        {
            c = arr[i];
        }
    }
    long int d = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (d > arr[i])
        {
            d = arr[i];
        }
    }
    cout << d << " " << c;
}
int main()

{
    vector<long int> vec1;
    long int a;
    for (int i = 0; i < 5; i++)
    {

        cin >> a;
        vec1.push_back(a);
    }
    long int arr[vec1.size()];
    for (int i = 0; i < vec1.size(); i++)
    {
        long int b = 0;
        for (int j = 0; j < vec1.size(); j++)
        {
            if (j == i)
            {
                continue;
            }
            else
            {
                b = b + vec1[j];
            }
        }
        arr[i] = b;
    }
    max_min(arr);
    

    return 0;
}