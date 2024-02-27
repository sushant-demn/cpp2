#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    for (int i = 0; i < 6; i++)
    {
        int b = a + i;
        cout << b << "\n";
        if (b % 5 == 0)
        {
            cout << "Pass";
            if ((b - a)<3){
                a = b;
                cout<<"\npass2\n"<<a;
            }
            
            break;
        }
    }

    return 0;
}