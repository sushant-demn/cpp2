#include <iostream>

using namespace std;

int main()
{

    string y = "*";
    for (int i = 10; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << y;
        }
        cout << "\n";
    };
    return 0;
}