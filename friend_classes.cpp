#include <iostream>
using namespace std;
class calculator;   /*forward declaration for upcoming class*/
class subcalculator /*class to be made as a friend class*/
{
private:
public:
    int add(calculator); /*function accessing data from other class*/
};
class calculator
{
private:
    int a, b;
    /*declared whole class as a friend*/
    friend class subcalculator;

public:
    void take(void)
    {
        cin >> a >> b;
    };
};
int subcalculator ::add(calculator o1) /*friend function accessing data of calculator class and being from class subcalculator*/
{
    cout << (o1.a + o1.b) << "\n";
    return 0;
};

int main()
{
    calculator zero;
    zero.take();
    subcalculator calc;
    calc.add(zero);
    return 0;
}
/*
This code demostrates the function of the friend classes
friend class concept is similar to the friend function but as here whole class is the friend of the class therefore
it can access for any function
*/