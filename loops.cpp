# include<iostream>
using namespace std;
int main(){
    int i = 1; 
    /* For loop this loop runs until the condition doesnt become false
    syntax
    for(initialization; condtion; updation)
    {
        loop code
    }
    
    */
    for (i=1 ; i < 10; i++)
    {
        cout<<i<<endl;
        
    }
    cout<<endl;
    cout<<endl;
    /*
    while loop
    syntax 
    while(condition){
        code with updation
    }
    */
    i = 0;
   while(i<100){
   cout<<i<<endl;
   i++;
   }
   /*do while is the same as the while loop but diff syntax
   syntax
   do
    {
        loop code
    }
    while(condition)
   
      */
     do{
   cout<<i<<endl;
   i++;
   }while(i<100);

    return 0;
}