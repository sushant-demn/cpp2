# include<iostream>
using namespace std;
int main()
{
    // arithmatic operators
    int a = 5, b = 4, j =  6, h = 2; 
    cout<<"this is output of a++ " << a++ <<endl;
    cout<<"this is output of b-- " << b-- <<endl;
    cout<<"this is output of ++j " << ++j <<endl;
    cout<<"this is output of --h " << --h <<endl;
    cout<<endl;
    cout<<endl;
    // comparison/relation operators
    cout<<"The value of a < b "<<(a < b)<<endl;
    cout<<"The value of a > b "<<(a > b)<<endl;
    cout<<"The value of a <= b "<<(a <= b)<<endl;
    cout<<"The value of a >= b "<<(a >= b)<<endl;
    cout<<"The value of a != b "<<(a != b)<<endl;
    cout<<endl;
    cout<<endl;
    // logical operators(basic logic gate) prints the truth values of the statements 
    int l = 1, m = 0;
        cout<<"The value of a < b and The value of a > b  "<<(l < m && l > m)<<endl;
        cout<<"The value of a < b or The value of a > b  "<<(l < m || l > m)<<endl;
        cout<<!(l < m )<<endl; //gives the opp truth valul
        return 0; 
}


    
