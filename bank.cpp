# include<iostream>
using namespace std;

class bank{
private:
public:
    bank(int a, int b, float c);
    bank(int a, int b, int c);
};
bank :: bank(int a, int b, float c){
    cout<<"\n\n\n\nThe capital invested is "<<a<<"\n";
    cout<<"Years of investment "<<b<<"\n";
    cout<<"The rate of investment on capital is "<<c<<"\n";
    for (int i = 0; i < b; i++)
    {
        a = (a * (1 + c));
    }
    
    cout<<"Total payback "<<a;
}
bank :: bank(int a, int b, int c){
    cout<<"\n\n\n\nThe capital invested is "<<a<<"\n";
    cout<<"Years of investment "<<b<<"\n";
    cout<<"The rate of investment on capital is "<<c<<"\n";
    float d = (c*0.01);
    for (int i = 0; i < b; i++)
    {
        a = (a * (1 + d));
    }
    
    cout<<"Total payback "<<a;
}

int main(){
    int d , y;
    float r;
    cout<<"Capital to be deposited: ";
    cin>>d;
    cout<<"How many years to be deposited: ";
    cin>>y;
    cout<<"Rate on the deposited capital: ";
    cin>>r;
   if (0 <= r)
   {
    int c = r;
    bank(d, y, c);
   }
   else{
    bank(d,y,r);
   }
   
    return 0;
}