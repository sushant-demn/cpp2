#include <iostream>
using namespace std;
string y ;
 void func(void){
    for (int i = 0; i < 10; i++)
    {   y = y + "*";
        cout<<y<<"\n";
    }}
    
int main(){
   
func();
    return 0;
}