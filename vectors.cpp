#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i]
            << "\n";
    }
}
int main()
{
    int a, b = 0;
    vector<int> vec1;


    cout << "input\n";
    for (int i = 0; i < 4; i++)
    {
        cin >> a;
        vec1.push_back(a);
    };
    cout << "out put\n";
    display(vec1);
  cout<<"The size of the vector is "<<vec1.size()<<endl;  
    int x = vec1.size();
    for (int i = 0; i < x; i++)
    { cout<<"The size of the vector is "<<vec1.size()<<endl;  
      vector<int> :: iterator iter = vec1.begin();
        vec1.erase(iter);
    }
    
    
    cout<<"output 2 \n";
    display(vec1);
    return 0;
}

/*
notes
1. has variable size(dynamic)
 syntax: vector<type> name;

*/