#include <iostream>
#include <vector>
using namespace std;
int hurdlerace(int k, vector<int> vec){
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = i; j < vec.size(); j++)
        {
            if (vec[i] < vec[j])
            {
                int x = vec[i];
                vec[i] = vec[j];
                vec[j] = x;
            }
            
        }
    }
if (vec[0]>k)
{
    return (vec[0] - k);
}
else{
    return 0;
}

}
int main()
{
    vector<int> vec;
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }

    cout<<hurdlerace(k,vec);

    
    return 0;
}