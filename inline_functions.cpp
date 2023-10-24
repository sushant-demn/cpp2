/*inline functions are used to improve execution times of the small function which are called mutiple times*/
# include<iostream>
using namespace std;

inline int sum (int a, int b){
    return a+b;
}

int sum2 (int a, int b){
    static int c=0; // static variable is used by function once and they and when the function is recalled then its updated as per the further operations so the code remembers the variable irrespectable of the function
    c = c+ 1;
    return (a+b) + c;
}
int main(){int a ,b;
    cin>>a>>b;
    cout<<"The sum is "<<sum(a,b)<<endl;
    cout<<"The sum is "<<sum(a,b)<<endl;
    cout<<"The sum is "<<sum(a,b)<<endl;
    cout<<"The sum is "<<sum(a,b)<<endl;
    cout<<"The sum is "<<sum(a,b)<<endl;
    cout<<"The sum is "<<sum(a,b)<<endl;
    cout<<"The sum is "<<sum(a,b)<<endl;
    cout<<"The sum is "<<sum(a,b)<<endl;
    cout<<"The sum is "<<sum(a,b)<<endl;
    cout<<"The sum is "<<sum(a,b)<<endl;
    cout<<"The sum is "<<sum2(a,b)<<endl;
    cout<<"The sum is "<<sum2(a,b)<<endl;
    cout<<"The sum is "<<sum2(a,b)<<endl;
    cout<<"The sum is "<<sum2(a,b)<<endl;
    cout<<"The sum is "<<sum2(a,b)<<endl;
    cout<<"The sum is "<<sum2(a,b)<<endl;
    cout<<"The sum is "<<sum2(a,b)<<endl;
    cout<<"The sum is "<<sum2(a,b)<<endl;
    cout<<"The sum is "<<sum2(a,b)<<endl;
    cout<<"The sum is "<<sum2(a,b)<<endl;
    return 0;
}