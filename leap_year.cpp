/*check if the year is leap years*/
# include<iostream>
using namespace std;

int main(){
    int a ;
    cin>>a;
    if (a % 4 == 0){
        cout<<"The year "<<a<<" is a leap year\n";
    }
    else{
        cout<<"The year "<<a<<" is not a leap year\n";
    }
    return 0;
}