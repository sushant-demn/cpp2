#include <iostream>

using namespace std;

class Box
{
public:
    int l, b, h;
    Box()
    {
        l = 0;
        b = 0;
        h = 0;
    }
    Box(int len, int bre, int hei)
    {
        l = len;
        b = bre;
        h = hei;
    }
    Box(Box const &B)
    {
        l = B.l;
        b = B.b;
        h = B.h;
    }
    int getLength()
    {
        return l;
    }
    int getBreadth()
    {
        return b;
    }
    int getHeight()
    {
        return h;
    }
    long long CalculateVolume()
    {
        long long res = l * b * h;
        return res;
    }
    bool operator<(Box const &obj)
    {
        if (l < obj.l)
        {
            return true;
        }
        else if (l == obj.l && b < obj.b)
        {
            return true;
        }
        else if (l == obj.l && b == obj.b && h < obj.h)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    friend ostream &operator<<(ostream &os, const Box &box)
    {
        os << box.l << " " << box.b << " " << box.h;
        return os;
    }
};

int main()
{
    Box b1;               // Should set b1.l = b1.b = b1.h = 0;
    Box b2(2, 3, 4);      // Should set b1.l = 2, b1.b = 3, b1.h = 4;
    b2.getLength();       // Should return 2
    b2.getBreadth();      // Should return 3
    b2.getHeight();       // Should return 4
    b2.CalculateVolume(); // Should return 24
    bool x = (b1 < b2);   // Should return true based on the conditions given
    cout << b2;           // Should print 2 3 4 in order.
    return 0;
}