#include <iostream>
using namespace std;
class box
{
private:
    int l = 0; /*length*/
    int b = 0; /*breadth*/
    int h = 0; /*height*/

public:
    void getlength(void)
    {
        cin >> l;
    }
    void getbreadth(void)
    {
        cin >> b;
    }
    void getheight(void)
    {
        cin >> h;
    }
    int volume(void)
    {
        int a = ((l * b) * h);
        return a;
    }
};
int main()
{
    box nigga;
    nigga.getlength();
    nigga.getbreadth();
    nigga.getheight();
    nigga.volume();
    return 0;
}