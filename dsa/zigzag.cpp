#include <iostream>
#include <vector>
using namespace std;
vector<int> rotateLeft(int d, vector<int> arr)
{
    int i = d % (arr.size()) ;
    if (d <= (arr.size() / 2))
    {
        int y = 1;
        while (y < i)
        {   cout<<arr[0];
            arr.push_back(arr[0]);
            arr.erase(arr.begin());
            y++;
        }
    }
    return arr;
}

int main()
{
    std::vector<int> vec = {1, 2, 3, 4, 5};

    std::cout << "Size of vector: " << vec.size() << std::endl;
    int d = 4;
    vec = rotateLeft(d, vec);
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }

    return 0;
}
