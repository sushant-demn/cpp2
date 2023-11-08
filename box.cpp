#include <iostream>
using namespace std;
class box
{
private:
    int l/*length*/= 0;
    int b/*breadth*/= 0;
    int h/*height*/ = 0;

public:
void func(void){
    cout<<l<<"\n"<<b<<"\n"<<h<<"\n";
}
};
int main()
{
box nigga;
nigga.func();
    return 0;
}