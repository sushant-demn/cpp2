# include<iostream>
using namespace std;
/*This is call by value method in which the value of the actual parameter is copied to functions so it doesnt
affect on the actual parameters */
void swap(int a , int b){
    int x = a;
    a= b;
    b= x;
}
/*This is the call by refrence method in which the address of the actual arguement is passed to the function
on which the operations are to be done hence modifying values at that address*/
void swap2 (int *z , int *y){ 
    int x = *z;
    *z= *y;
    *y= x;
}
int main(){
   
    int p = 5, q = 6;
    swap(p , q);
    cout<<"swap function by call by value "<< p <<" "<< q<<endl;
    swap2 (&p, &q);
    cout<<"swap function by call by refrence "<< p <<" "<< q<<endl;

    return 0;
}