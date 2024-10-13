#include <iostream>

using namespace std;
int t;

int main(){
    cin>>t;
    int arr2[t];
    int x = 0;
while (t--)
{   bool flag = false;
    int n, d , b = 0;
    cin>>n>>d;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > d and flag == false)
        {   flag = !flag;
            b++;
        }
        else if (arr[i] <= d and flag == true)
        {   flag = !flag;
            b++;
        }
        
        
    }
    arr2[x] = b;
    x++;
    
}

for (int i = 0; i < sizeof(t); i++)
{
    cout<<arr2[i]<<"\n";
}

    return 0;
}