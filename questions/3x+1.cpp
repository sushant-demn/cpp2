#include <iostream>
#include <ctime>
using namespace std;

// void opr(int a,)
// {
//     if (a % 2 == 0)
//     {
//         a = a / 2;
//         cout << a << ", ";
//     }
//     if (a % 2 != 0)
//     {
//         a = ((a * 3) + 1);
//         cout << a << ", ";
//     }
// }
int main()
{
    clock_t start_time,end_time;
	start_time = clock();
    int a;
    cout << "Enter a number: ";

    cin >> a;
    while (a>0)
    {
        if (a == 1)
        {
            break;
        }
        else
        {
            if (a % 2 == 0)
            {
                a = a / 2;
                cout << a << ", ";
            }
            else
            {
                a = ((a * 3) + 1);
                cout << a << ", ";
            }
        }
    }
end_time = clock();
	cout<<"Time Taken"<<(end_time - start_time)/CLOCKS_PER_SEC<<endl;
    return 0;
}