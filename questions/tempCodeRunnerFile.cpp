#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float count1 = 0.000000, count2 = 0.000000, count3 = 0.000000;
    int a;
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    };
for (int i = 0; i < a; i++)
{
    if (arr[i]>0)
    {
        count1++;
    }
    
}
for (int i = 0; i < a; i++)
{
    if (arr[i]==0)
    {
        count2++;
    }
    
}
for (int i = 0; i < a; i++)
{
    if (arr[i]<0)
    {
        count3++;
    }
    
}
count1 = count1 / a;
count2 = count2 / a;
count3 = count3 / a;
cout<<fixed<<setprecision(6)<<count1<<"\n";
cout<<fixed<<setprecision(6)<<count2<<"\n";
cout<<fixed<<setprecision(6)<<count3<<"\n";

    return 0;
}
