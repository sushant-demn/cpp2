# include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout<<"Enter the value the num1\n"; 
    // this command refers to character output and "<<" is insertion operator
    cin>>num1;
    // this command refers to character input and ">>" is extraction operator
    cout<<"Enter the value the num2\n";
    cin>>num2;
    cout<<"and their sum is " << num1+num2;
    cout<<"press enter to exit" <<endl;
    std::cin.get(); system("pause");
    return 0;

}