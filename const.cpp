# include<iostream>
# include<iomanip>
using namespace std;

int main(){
    const int a = 12, b = 123, c = 1234;
    
    // constants are used to give a variable a data which further cannot be changed in the code 
     // here the value of the variable a cannot be changed further on 
    // int a = 40; like this changing data of variable leads to error
    cout<<a<<endl;
    // Manipulators: are used to make output looks as you want to for example \n to start a new line a string
    // <<endl; used to end a line 
    // <<setw(); from header <iomanip> used to set the width of specific out put
    cout<<"this is a string\nand this is its new line"<<endl;
    cout<<"this is a output and"<<endl;
    cout<<"new line"<<endl;
    cout<<"This is numbers with width of 4 "<<setw(4)<<a<<endl;
    cout<<"This is numbers with width of 4 "<<setw(4)<<b<<endl;
    cout<<"This is numbers with width of 4 "<<setw(4)<<c<<endl;
    return 0;
}