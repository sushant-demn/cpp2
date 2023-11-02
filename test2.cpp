#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
      int a;
    cin >> a;
    string usrnm[1000];
    for (int i = 0; i < a; i++)
    {
        cin >> usrnm[i];
    };
    for (int i = 0; i < a; i++)
    {   int b = usrnm[i].length();
        if (b < 5)
        {
            cout<<"Too short: "<<usrnm[i].length()<<"\n";
        }
        else{
            if(i % 2 = 0){
                cout<<"valid\n";
            }
            else{

            }
        }
    }   
    return 0;
}
