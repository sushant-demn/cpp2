#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec1;
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int b;
        cin >> b;
        vec1.push_back(b);
    }

    int c = 0;
    for (int i = 0; i < vec1.size(); i++)
    {
         c = (c + vec1[i]);
    }
    cout << c;
    return 0;
}