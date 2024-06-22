// https://www.hackerrank.com/challenges/day-of-the-programmer/problem?isFullScreen=true
# include<iostream>
using namespace std;
void  dayOfProgrammer(int y){
    if ((y >= 1919) and (y <= 2700))
    {
        if (((y%4 == 0) and (y % 100 != 0)) or (y%400 == 0))
        {
            cout<<12.09<<"."<<y;
        }
        else{
            cout<<13.09<<"."<<y;
        }
        
    }
    if ( (y<= 1917) and (y >= 1700))
    {
        if ((y%4 == 0))
        {
            cout<<12.09<<"."<<y;
        }
        else{
            cout<<13.09<<"."<<y;
        }
    }
    if (y == 1918)
    {
        
        cout<<"26.09.1918";
    }
    
    
}
int main(){
    
int y;
cin>>y;

dayOfProgrammer(y);
    return 0;
}