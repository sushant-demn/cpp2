#include <iostream>
using namespace std;

int main()
{   int a;
    cin>>a;
    string y = "#";
    int count  = a;

    for (int i = 0; i < a; i++)
    {
        
        for (int j = 0 ; j < (count - 1); j++)
        {
            cout << " ";
        }
            count--;
        cout << y << "\n";
        y = y + "#";
    }

    return 0;
}
