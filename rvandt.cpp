# include<iostream>
    using namespace std;
    int main(){
        // typecasting used to change the data type from one to another for one specific time
        int a = 144;
        float b = 1.44;
        int c = int(b);  //here the int c is given the value of the b as an integer
        cout<<float(a)<<endl; 
        cout<<(float)a<<endl; //the int is converted to the float
        cout<<int(b)<<endl;
        cout<<(int)b<<endl; //The float is converted to the int
        
        
        //refrence varialbe: use to give multiple names to a single variable
        int x = 20;
        int & y = x; //here the a and b have same value/variable data 
        cout<<x<<endl;
        cout<<y<<endl; 
        return 0;
    } 