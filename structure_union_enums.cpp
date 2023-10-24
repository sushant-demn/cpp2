# include<iostream>
using namespace std;
 /* structures are used as a template for multiple data types to allot data to variables wihtout defining its type*/
struct student
{
    int Rollno;
    string Name;
    char Grade;

};
/*unions are same as the structure but you can use only one variable at a time cause they share  memory*/
union money{
    int rs;
    float $;
 }; // the data in the union will overwrite and give any garbage value

 

int main(){
    struct student sus;
    sus.Rollno = 40;
    sus.Name = "Sushant";
    sus.Grade = 'c'; 
    cout<<sus.Rollno<<endl;
    cout<<sus.Name<<endl;
    cout<<sus.Grade<<endl;
   
   union money india;
   india.rs = 1;
   cout<<india.rs<<endl<<"garbage value "<<india.$<<endl;
    india.$ = 80;
    cout<<india.$<<endl<<"garbage value "<<india.rs<<endl;
    //enums only give nunmbering to the given data
    enum khana{breakfast, lunch, dinner};
    cout<<breakfast<<endl;
    return 0;
}