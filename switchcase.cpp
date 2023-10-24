# include<iostream>
using namespace std;
int a;
void calc(){
    cout<<"use the specific number as to the specific operation"<<endl;
    cout<<"[1]add\n[2]sub\n[3]multiply\n[4]divide\n";
    cout<<endl;
    cin>>a;    
    if((a<5) && (a>0)){
        switch (a)
        {
        case 1:
            cout<<"-----------ADDITION-----------"<<endl;
            int b,c;
            cout<<"Whats the 1st number"<<endl;
            cin>>b;
            cout<<"Whats the 2nd number"<<endl;
            cin>>c;
            cout<<"The answer is : "<<b + c;            
            break;
        case 2:
            cout<<"-----------SUBTRACTION-----------"<<endl;
            int d,e;
            cout<<"Whats the 1st number"<<endl;
            cin>>d;
            cout<<"Whats the 2nd number"<<endl;
            cin>>e;
            cout<<"The answer is : "<<d - e;
            break;
        case 3:
            cout<<"-----------MULTIPLICATION-----------"<<endl;        
        int f,g;
            cout<<"Whats the 1st number"<<endl;
            cin>>f;
            cout<<"Whats the 2nd number"<<endl;
            cin>>g;
            cout<<"The answer is : "<<f * g;
            break;
        case 4:
            cout<<"-----------DIVISION-----------"<<endl;
            int h,i;
            cout<<"Whats the 1st number"<<endl;
            cin>>h;
            cout<<"Whats the 2nd number"<<endl;
            cin>>i;
            cout<<"The answer is : "<<h / i;
            break;
        }
    }
    else{
        cout<<"you have chosen the wrong number please choose the correct number for the operation"<<endl;
        calc();
    }}
int main(){
    cout<<"This is a calculator based on a switch case method in cpp"<<endl;
    calc();    
        return 0;
}