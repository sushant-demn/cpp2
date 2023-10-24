#include <iostream>
using namespace std;
int sum(int b, int a ){
    for (int i = 0; i < 5; i++)
    {
        b = b + a[i];
        cout << b;
    }
    
    }
int main()
{
    int b = 0;
    int scores[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> scores[i];
    }

   

    return 0;
} 