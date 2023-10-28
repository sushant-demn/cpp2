#include <iostream>
using namespace std;
class shop
{
private:
    int a, b;
    string c;

public:
    void setname(void)
    {
        cout << "set a name for the product"
             << "\n";
        cin >> c;
    };
    void setid(void) /*sets id for the product*/
    {
        cout << "set a id for a product"
             << "\n";
        cin >> a;
    };
    void setprice(void)/*sets price for the product*/
    {
        cout << "set price for the product"
             << "\n";
        cin >> b;
    }
    void sum(int a, int b)/*sums up price of 2 products*/
    {
        cout << a + b;
    }
    friend shop sumcheckout(shop o1, shop o2); /*declares sumcheckout as a friend fucntion which can access objects o1 and o2 from class shop*/
};
shop sumcheckout(shop o1, shop o2) /*sums out the prices of the 2 products by accessing 2 objects o1 and o2 from class shop*/
{ shop o3;
    cout<<"The sum for both the products is ";
    o3.sum(o1.b , o2.b);
    return o3;
    
}; 
int main()
{
    shop apple , banana; /*apple and banana are objects of the class shop*/
    apple.setname();
    apple.setid();
    apple.setprice();
    banana.setname();
    banana.setid();
    banana.setprice();
    sumcheckout(apple , banana);
    cout<<"\n";
    
    return 0;
}

/* Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.
*/