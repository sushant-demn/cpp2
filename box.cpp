#include <iostream>
using namespace std;
class box
{
    int l, b, h;

public:
    box();
    void getlength();
    void getbreadth();
    void getheight();
};
box ::box()
{
    cin >> l >> b >> h;
}

void box :: getlength(){
    cout<<l<<" ";
}
int main()
{
    box n;
    n.getlength();
    return 0;
}