#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int ns, nt;
        string s , t;
        cin>>ns>>nt>>s>>t;
        if(ns != nt){
            std::cout << "No" << std::endl;
        }
        else{
            int x = 0,y = 0;
            for(int i = 0 ; i < ns; i++){
                if(s[i] == 'a'){
                    x++;
                }
                if(t[i] == 'a'){
                    y++;
                }
            }
            if(x==y){
                cout<<"Yes\n";
            }
            else{
                cout<<"No\n";
                cout<<x<<" "<<y;
            }
        }
    }
}