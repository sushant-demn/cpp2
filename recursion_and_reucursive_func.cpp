# include<iostream>
using namespace std;
int factorial (int a ){
    if(a<=1){
        return 1;
    }
    int c = a * factorial(a -1 );
    return c ;
}
int main(){
    int v ;
    cin>>v;

    cout<<factorial(v);
    return 0;
}