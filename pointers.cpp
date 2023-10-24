# include<iostream>
using namespace std;

int main(){
    int a = 3;
    /*
    pointers are the variable data types which stores the address of the other variable in R A M 
    */
   int *b;
// the * is the derefrence variable which shows the value of the variable whos address is given 
   b = &a;
// the &a is the address of the variable "a"    
   cout<<"This is the address of the variable a "<<&a<<endl;
   cout<<"this is the value at the address "<<&a<<" "<<*b<<endl;
   cout<<*&a;
   // pointer to pointer is concept in which the another variable which gives the address of the pointer
   int **c = &b;
   cout<<"This is the address of the variable b "<<&b<<endl<<"This is the value at b "<<*c<<endl<<"And the value at a "<<**c;
    return 0;
}