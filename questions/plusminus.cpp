#include <iostream>
using namespace std;

int main()
{
    float count1 = 0, count2 = 0, count3 = 0;
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



    return 0;
}
