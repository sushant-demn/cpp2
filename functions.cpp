# include<iostream>
using namespace std;
/*The functions are the part of the code which has set of operations and can be used multiple times with 
different values*/
int sum(int a, int b){ //this the fuction for sum of 2 numbers
    int c = a+b;
    return c;
}

int main(){
    int num1, num2;
    cout<<"enter first number: "; cin>>num1; cout<<endl;
    cout<<"enter second number: "; cin>>num2;
    cout<<"This is the sum: "<<sum(num1,num2); //calling out fuction
    
    return 0;
}


/*function prototyping is used when you write the fuction after the main function the compiler will give you
an error if didnt mention the function before hand of the main function
therefore the function prototype is used to declare fucntions type*/

/*# include<iostream>
using namespace std;
int sum(int, int);
int main(){
    int num1, num2;
    cout<<"enter first number: "; cin>>num1; cout<<endl;
    cout<<"enter second number: "; cin>>num2;
    cout<<"This is the sum: "<<sum(num1,num2); 
    
    return 0;
}
int sum(int a, int b){ 
    int c = a+b;
    return c;
}*/